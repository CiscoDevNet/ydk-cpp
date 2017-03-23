
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_bgp_0.hpp"
#include "openconfig_bgp_1.hpp"

namespace ydk {
namespace openconfig_bgp {

Bgp::Bgp()
    :
    global(std::make_shared<Bgp::Global>())
	,neighbors(std::make_shared<Bgp::Neighbors>())
	,peer_groups(std::make_shared<Bgp::PeerGroups>())
{
    global->parent = this;
    children["global"] = global;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    peer_groups->parent = this;
    children["peer-groups"] = peer_groups;

    yang_name = "bgp"; yang_parent_name = "openconfig-bgp";
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
    return is_set(operation)
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

EntityPath Bgp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<Bgp::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Bgp::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "peer-groups")
    {
        if(peer_groups != nullptr)
        {
            children["peer-groups"] = peer_groups;
        }
        else
        {
            peer_groups = std::make_shared<Bgp::PeerGroups>();
            peer_groups->parent = this;
            children["peer-groups"] = peer_groups;
        }
        return children.at("peer-groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("peer-groups") == children.end())
    {
        if(peer_groups != nullptr)
        {
            children["peer-groups"] = peer_groups;
        }
    }

    return children;
}

void Bgp::set_value(const std::string & value_path, std::string value)
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
    children["afi-safis"] = afi_safis;

    apply_policy->parent = this;
    children["apply-policy"] = apply_policy;

    confederation->parent = this;
    children["confederation"] = confederation;

    config->parent = this;
    children["config"] = config;

    default_route_distance->parent = this;
    children["default-route-distance"] = default_route_distance;

    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart;

    route_selection_options->parent = this;
    children["route-selection-options"] = route_selection_options;

    state->parent = this;
    children["state"] = state;

    use_multiple_paths->parent = this;
    children["use-multiple-paths"] = use_multiple_paths;

    yang_name = "global"; yang_parent_name = "bgp";
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
    return is_set(operation)
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

std::string Bgp::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath Bgp::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afi-safis")
    {
        if(afi_safis != nullptr)
        {
            children["afi-safis"] = afi_safis;
        }
        else
        {
            afi_safis = std::make_shared<Bgp::Global::AfiSafis>();
            afi_safis->parent = this;
            children["afi-safis"] = afi_safis;
        }
        return children.at("afi-safis");
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy != nullptr)
        {
            children["apply-policy"] = apply_policy;
        }
        else
        {
            apply_policy = std::make_shared<Bgp::Global::ApplyPolicy>();
            apply_policy->parent = this;
            children["apply-policy"] = apply_policy;
        }
        return children.at("apply-policy");
    }

    if(child_yang_name == "confederation")
    {
        if(confederation != nullptr)
        {
            children["confederation"] = confederation;
        }
        else
        {
            confederation = std::make_shared<Bgp::Global::Confederation>();
            confederation->parent = this;
            children["confederation"] = confederation;
        }
        return children.at("confederation");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "default-route-distance")
    {
        if(default_route_distance != nullptr)
        {
            children["default-route-distance"] = default_route_distance;
        }
        else
        {
            default_route_distance = std::make_shared<Bgp::Global::DefaultRouteDistance>();
            default_route_distance->parent = this;
            children["default-route-distance"] = default_route_distance;
        }
        return children.at("default-route-distance");
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
        else
        {
            graceful_restart = std::make_shared<Bgp::Global::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart;
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "route-selection-options")
    {
        if(route_selection_options != nullptr)
        {
            children["route-selection-options"] = route_selection_options;
        }
        else
        {
            route_selection_options = std::make_shared<Bgp::Global::RouteSelectionOptions>();
            route_selection_options->parent = this;
            children["route-selection-options"] = route_selection_options;
        }
        return children.at("route-selection-options");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths != nullptr)
        {
            children["use-multiple-paths"] = use_multiple_paths;
        }
        else
        {
            use_multiple_paths = std::make_shared<Bgp::Global::UseMultiplePaths>();
            use_multiple_paths->parent = this;
            children["use-multiple-paths"] = use_multiple_paths;
        }
        return children.at("use-multiple-paths");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::get_children()
{
    if(children.find("afi-safis") == children.end())
    {
        if(afi_safis != nullptr)
        {
            children["afi-safis"] = afi_safis;
        }
    }

    if(children.find("apply-policy") == children.end())
    {
        if(apply_policy != nullptr)
        {
            children["apply-policy"] = apply_policy;
        }
    }

    if(children.find("confederation") == children.end())
    {
        if(confederation != nullptr)
        {
            children["confederation"] = confederation;
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("default-route-distance") == children.end())
    {
        if(default_route_distance != nullptr)
        {
            children["default-route-distance"] = default_route_distance;
        }
    }

    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
    }

    if(children.find("route-selection-options") == children.end())
    {
        if(route_selection_options != nullptr)
        {
            children["route-selection-options"] = route_selection_options;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("use-multiple-paths") == children.end())
    {
        if(use_multiple_paths != nullptr)
        {
            children["use-multiple-paths"] = use_multiple_paths;
        }
    }

    return children;
}

void Bgp::Global::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::Config::Config()
    :
    as{YType::uint32, "as"},
    router_id{YType::str, "router-id"}
{
    yang_name = "config"; yang_parent_name = "global";
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
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(router_id.operation);
}

std::string Bgp::Global::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::Config::get_children()
{
    return children;
}

void Bgp::Global::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Bgp::Global::State::State()
    :
    as{YType::uint32, "as"},
    router_id{YType::str, "router-id"},
    total_paths{YType::uint32, "total-paths"},
    total_prefixes{YType::uint32, "total-prefixes"}
{
    yang_name = "state"; yang_parent_name = "global";
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
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(router_id.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_prefixes.operation);
}

std::string Bgp::Global::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.operation)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::State::get_children()
{
    return children;
}

void Bgp::Global::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
    }
}

Bgp::Global::RouteSelectionOptions::RouteSelectionOptions()
    :
    config(std::make_shared<Bgp::Global::RouteSelectionOptions::Config>())
	,state(std::make_shared<Bgp::Global::RouteSelectionOptions::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "route-selection-options"; yang_parent_name = "global";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::RouteSelectionOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-selection-options";

    return path_buffer.str();

}

EntityPath Bgp::Global::RouteSelectionOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::RouteSelectionOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::RouteSelectionOptions::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::RouteSelectionOptions::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::RouteSelectionOptions::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::RouteSelectionOptions::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "config"; yang_parent_name = "route-selection-options";
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
    return is_set(operation)
	|| is_set(advertise_inactive_routes.operation)
	|| is_set(always_compare_med.operation)
	|| is_set(enable_aigp.operation)
	|| is_set(external_compare_router_id.operation)
	|| is_set(ignore_as_path_length.operation)
	|| is_set(ignore_next_hop_igp_metric.operation);
}

std::string Bgp::Global::RouteSelectionOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::RouteSelectionOptions::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/route-selection-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.operation)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.operation)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.operation)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.operation)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.operation)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.operation)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::RouteSelectionOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::RouteSelectionOptions::Config::get_children()
{
    return children;
}

void Bgp::Global::RouteSelectionOptions::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
    }
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
    yang_name = "state"; yang_parent_name = "route-selection-options";
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
    return is_set(operation)
	|| is_set(advertise_inactive_routes.operation)
	|| is_set(always_compare_med.operation)
	|| is_set(enable_aigp.operation)
	|| is_set(external_compare_router_id.operation)
	|| is_set(ignore_as_path_length.operation)
	|| is_set(ignore_next_hop_igp_metric.operation);
}

std::string Bgp::Global::RouteSelectionOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::RouteSelectionOptions::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/route-selection-options/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.operation)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.operation)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.operation)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.operation)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.operation)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.operation)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::RouteSelectionOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::RouteSelectionOptions::State::get_children()
{
    return children;
}

void Bgp::Global::RouteSelectionOptions::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
    }
}

Bgp::Global::DefaultRouteDistance::DefaultRouteDistance()
    :
    config(std::make_shared<Bgp::Global::DefaultRouteDistance::Config>())
	,state(std::make_shared<Bgp::Global::DefaultRouteDistance::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "default-route-distance"; yang_parent_name = "global";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::DefaultRouteDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-route-distance";

    return path_buffer.str();

}

EntityPath Bgp::Global::DefaultRouteDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::DefaultRouteDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::DefaultRouteDistance::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::DefaultRouteDistance::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::DefaultRouteDistance::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::DefaultRouteDistance::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::DefaultRouteDistance::Config::Config()
    :
    external_route_distance{YType::uint8, "external-route-distance"},
    internal_route_distance{YType::uint8, "internal-route-distance"}
{
    yang_name = "config"; yang_parent_name = "default-route-distance";
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
    return is_set(operation)
	|| is_set(external_route_distance.operation)
	|| is_set(internal_route_distance.operation);
}

std::string Bgp::Global::DefaultRouteDistance::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::DefaultRouteDistance::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/default-route-distance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_distance.is_set || is_set(external_route_distance.operation)) leaf_name_data.push_back(external_route_distance.get_name_leafdata());
    if (internal_route_distance.is_set || is_set(internal_route_distance.operation)) leaf_name_data.push_back(internal_route_distance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::DefaultRouteDistance::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::DefaultRouteDistance::Config::get_children()
{
    return children;
}

void Bgp::Global::DefaultRouteDistance::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-route-distance")
    {
        external_route_distance = value;
    }
    if(value_path == "internal-route-distance")
    {
        internal_route_distance = value;
    }
}

Bgp::Global::DefaultRouteDistance::State::State()
    :
    external_route_distance{YType::uint8, "external-route-distance"},
    internal_route_distance{YType::uint8, "internal-route-distance"}
{
    yang_name = "state"; yang_parent_name = "default-route-distance";
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
    return is_set(operation)
	|| is_set(external_route_distance.operation)
	|| is_set(internal_route_distance.operation);
}

std::string Bgp::Global::DefaultRouteDistance::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::DefaultRouteDistance::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/default-route-distance/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_distance.is_set || is_set(external_route_distance.operation)) leaf_name_data.push_back(external_route_distance.get_name_leafdata());
    if (internal_route_distance.is_set || is_set(internal_route_distance.operation)) leaf_name_data.push_back(internal_route_distance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::DefaultRouteDistance::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::DefaultRouteDistance::State::get_children()
{
    return children;
}

void Bgp::Global::DefaultRouteDistance::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-route-distance")
    {
        external_route_distance = value;
    }
    if(value_path == "internal-route-distance")
    {
        internal_route_distance = value;
    }
}

Bgp::Global::Confederation::Confederation()
    :
    config(std::make_shared<Bgp::Global::Confederation::Config>())
	,state(std::make_shared<Bgp::Global::Confederation::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "confederation"; yang_parent_name = "global";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::Confederation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation";

    return path_buffer.str();

}

EntityPath Bgp::Global::Confederation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::Confederation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::Confederation::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::Confederation::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::Confederation::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::Confederation::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::Confederation::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    identifier{YType::uint32, "identifier"},
    member_as{YType::uint32, "member-as"}
{
    yang_name = "config"; yang_parent_name = "confederation";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(identifier.operation)
	|| is_set(member_as.operation);
}

std::string Bgp::Global::Confederation::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::Confederation::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/confederation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());

    auto member_as_name_datas = member_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_as_name_datas.begin(), member_as_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::Confederation::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::Confederation::Config::get_children()
{
    return children;
}

void Bgp::Global::Confederation::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "member-as")
    {
        member_as.append(value);
    }
}

Bgp::Global::Confederation::State::State()
    :
    enabled{YType::boolean, "enabled"},
    identifier{YType::uint32, "identifier"},
    member_as{YType::uint32, "member-as"}
{
    yang_name = "state"; yang_parent_name = "confederation";
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
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(identifier.operation)
	|| is_set(member_as.operation);
}

std::string Bgp::Global::Confederation::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::Confederation::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/confederation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());

    auto member_as_name_datas = member_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_as_name_datas.begin(), member_as_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::Confederation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::Confederation::State::get_children()
{
    return children;
}

void Bgp::Global::Confederation::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "member-as")
    {
        member_as.append(value);
    }
}

Bgp::Global::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<Bgp::Global::UseMultiplePaths::Config>())
	,ebgp(std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp>())
	,ibgp(std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp>())
	,state(std::make_shared<Bgp::Global::UseMultiplePaths::State>())
{
    config->parent = this;
    children["config"] = config;

    ebgp->parent = this;
    children["ebgp"] = ebgp;

    ibgp->parent = this;
    children["ibgp"] = ibgp;

    state->parent = this;
    children["state"] = state;

    yang_name = "use-multiple-paths"; yang_parent_name = "global";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";

    return path_buffer.str();

}

EntityPath Bgp::Global::UseMultiplePaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::UseMultiplePaths::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp != nullptr)
        {
            children["ebgp"] = ebgp;
        }
        else
        {
            ebgp = std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp>();
            ebgp->parent = this;
            children["ebgp"] = ebgp;
        }
        return children.at("ebgp");
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp != nullptr)
        {
            children["ibgp"] = ibgp;
        }
        else
        {
            ibgp = std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp>();
            ibgp->parent = this;
            children["ibgp"] = ibgp;
        }
        return children.at("ibgp");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::UseMultiplePaths::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::UseMultiplePaths::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("ebgp") == children.end())
    {
        if(ebgp != nullptr)
        {
            children["ebgp"] = ebgp;
        }
    }

    if(children.find("ibgp") == children.end())
    {
        if(ibgp != nullptr)
        {
            children["ibgp"] = ibgp;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::UseMultiplePaths::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "config"; yang_parent_name = "use-multiple-paths";
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
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Bgp::Global::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::UseMultiplePaths::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::UseMultiplePaths::Config::get_children()
{
    return children;
}

void Bgp::Global::UseMultiplePaths::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::Global::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "state"; yang_parent_name = "use-multiple-paths";
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
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Bgp::Global::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::UseMultiplePaths::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::UseMultiplePaths::State::get_children()
{
    return children;
}

void Bgp::Global::UseMultiplePaths::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::Global::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp::Config>())
	,state(std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";

    return path_buffer.str();

}

EntityPath Bgp::Global::UseMultiplePaths::Ebgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::UseMultiplePaths::Ebgp::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "config"; yang_parent_name = "ebgp";
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
    return is_set(operation)
	|| is_set(allow_multiple_as.operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::Global::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::UseMultiplePaths::Ebgp::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/ebgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.operation)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::UseMultiplePaths::Ebgp::Config::get_children()
{
    return children;
}

void Bgp::Global::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}

Bgp::Global::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "state"; yang_parent_name = "ebgp";
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
    return is_set(operation)
	|| is_set(allow_multiple_as.operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::Global::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::UseMultiplePaths::Ebgp::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/ebgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.operation)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::UseMultiplePaths::Ebgp::State::get_children()
{
    return children;
}

void Bgp::Global::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}

Bgp::Global::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp::Config>())
	,state(std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";

    return path_buffer.str();

}

EntityPath Bgp::Global::UseMultiplePaths::Ibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::UseMultiplePaths::Ibgp::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "config"; yang_parent_name = "ibgp";
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
    return is_set(operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::Global::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::UseMultiplePaths::Ibgp::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/ibgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::UseMultiplePaths::Ibgp::Config::get_children()
{
    return children;
}

void Bgp::Global::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}

Bgp::Global::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "state"; yang_parent_name = "ibgp";
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
    return is_set(operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::Global::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::UseMultiplePaths::Ibgp::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/ibgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::UseMultiplePaths::Ibgp::State::get_children()
{
    return children;
}

void Bgp::Global::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}

Bgp::Global::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<Bgp::Global::GracefulRestart::Config>())
	,state(std::make_shared<Bgp::Global::GracefulRestart::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "graceful-restart"; yang_parent_name = "global";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath Bgp::Global::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::GracefulRestart::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::GracefulRestart::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::GracefulRestart::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    helper_only{YType::boolean, "helper-only"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"}
{
    yang_name = "config"; yang_parent_name = "graceful-restart";
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
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(helper_only.operation)
	|| is_set(restart_time.operation)
	|| is_set(stale_routes_time.operation);
}

std::string Bgp::Global::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::GracefulRestart::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.operation)) leaf_name_data.push_back(helper_only.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.operation)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::GracefulRestart::Config::get_children()
{
    return children;
}

void Bgp::Global::GracefulRestart::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time = value;
    }
}

Bgp::Global::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"},
    helper_only{YType::boolean, "helper-only"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"}
{
    yang_name = "state"; yang_parent_name = "graceful-restart";
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
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(helper_only.operation)
	|| is_set(restart_time.operation)
	|| is_set(stale_routes_time.operation);
}

std::string Bgp::Global::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::GracefulRestart::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.operation)) leaf_name_data.push_back(helper_only.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.operation)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::GracefulRestart::State::get_children()
{
    return children;
}

void Bgp::Global::GracefulRestart::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time = value;
    }
}

Bgp::Global::AfiSafis::AfiSafis()
{
    yang_name = "afi-safis"; yang_parent_name = "global";
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
    return is_set(operation);
}

std::string Bgp::Global::AfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safis";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afi-safi")
    {
        for(auto const & c : afi_safi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Global::AfiSafis::AfiSafi>();
        c->parent = this;
        afi_safi.push_back(std::move(c));
        children[segment_path] = afi_safi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::get_children()
{
    for (auto const & c : afi_safi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::AfiSafi()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"}
    	,
    apply_policy(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy>())
	,config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Config>())
	,graceful_restart(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart>())
	,ipv4_labelled_unicast(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast>())
	,ipv4_unicast(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast>())
	,ipv6_labelled_unicast(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast>())
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
    children["apply-policy"] = apply_policy;

    config->parent = this;
    children["config"] = config;

    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart;

    ipv4_labelled_unicast->parent = this;
    children["ipv4-labelled-unicast"] = ipv4_labelled_unicast;

    ipv4_unicast->parent = this;
    children["ipv4-unicast"] = ipv4_unicast;

    ipv6_labelled_unicast->parent = this;
    children["ipv6-labelled-unicast"] = ipv6_labelled_unicast;

    ipv6_unicast->parent = this;
    children["ipv6-unicast"] = ipv6_unicast;

    l2vpn_evpn->parent = this;
    children["l2vpn-evpn"] = l2vpn_evpn;

    l2vpn_vpls->parent = this;
    children["l2vpn-vpls"] = l2vpn_vpls;

    l3vpn_ipv4_multicast->parent = this;
    children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;

    l3vpn_ipv4_unicast->parent = this;
    children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;

    l3vpn_ipv6_multicast->parent = this;
    children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;

    l3vpn_ipv6_unicast->parent = this;
    children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;

    route_selection_options->parent = this;
    children["route-selection-options"] = route_selection_options;

    state->parent = this;
    children["state"] = state;

    use_multiple_paths->parent = this;
    children["use-multiple-paths"] = use_multiple_paths;

    yang_name = "afi-safi"; yang_parent_name = "afi-safis";
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
	|| (ipv4_labelled_unicast !=  nullptr && ipv4_labelled_unicast->has_data())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_data())
	|| (ipv6_labelled_unicast !=  nullptr && ipv6_labelled_unicast->has_data())
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
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ipv4_labelled_unicast !=  nullptr && ipv4_labelled_unicast->has_operation())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation())
	|| (ipv6_labelled_unicast !=  nullptr && ipv6_labelled_unicast->has_operation())
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

std::string Bgp::Global::AfiSafis::AfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi" <<"[afi-safi-name='" <<afi_safi_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/afi-safis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy != nullptr)
        {
            children["apply-policy"] = apply_policy;
        }
        else
        {
            apply_policy = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy>();
            apply_policy->parent = this;
            children["apply-policy"] = apply_policy;
        }
        return children.at("apply-policy");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
        else
        {
            graceful_restart = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart;
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "ipv4-labelled-unicast")
    {
        if(ipv4_labelled_unicast != nullptr)
        {
            children["ipv4-labelled-unicast"] = ipv4_labelled_unicast;
        }
        else
        {
            ipv4_labelled_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast>();
            ipv4_labelled_unicast->parent = this;
            children["ipv4-labelled-unicast"] = ipv4_labelled_unicast;
        }
        return children.at("ipv4-labelled-unicast");
    }

    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast != nullptr)
        {
            children["ipv4-unicast"] = ipv4_unicast;
        }
        else
        {
            ipv4_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast>();
            ipv4_unicast->parent = this;
            children["ipv4-unicast"] = ipv4_unicast;
        }
        return children.at("ipv4-unicast");
    }

    if(child_yang_name == "ipv6-labelled-unicast")
    {
        if(ipv6_labelled_unicast != nullptr)
        {
            children["ipv6-labelled-unicast"] = ipv6_labelled_unicast;
        }
        else
        {
            ipv6_labelled_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast>();
            ipv6_labelled_unicast->parent = this;
            children["ipv6-labelled-unicast"] = ipv6_labelled_unicast;
        }
        return children.at("ipv6-labelled-unicast");
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast != nullptr)
        {
            children["ipv6-unicast"] = ipv6_unicast;
        }
        else
        {
            ipv6_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast>();
            ipv6_unicast->parent = this;
            children["ipv6-unicast"] = ipv6_unicast;
        }
        return children.at("ipv6-unicast");
    }

    if(child_yang_name == "l2vpn-evpn")
    {
        if(l2vpn_evpn != nullptr)
        {
            children["l2vpn-evpn"] = l2vpn_evpn;
        }
        else
        {
            l2vpn_evpn = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn>();
            l2vpn_evpn->parent = this;
            children["l2vpn-evpn"] = l2vpn_evpn;
        }
        return children.at("l2vpn-evpn");
    }

    if(child_yang_name == "l2vpn-vpls")
    {
        if(l2vpn_vpls != nullptr)
        {
            children["l2vpn-vpls"] = l2vpn_vpls;
        }
        else
        {
            l2vpn_vpls = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls>();
            l2vpn_vpls->parent = this;
            children["l2vpn-vpls"] = l2vpn_vpls;
        }
        return children.at("l2vpn-vpls");
    }

    if(child_yang_name == "l3vpn-ipv4-multicast")
    {
        if(l3vpn_ipv4_multicast != nullptr)
        {
            children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
        }
        else
        {
            l3vpn_ipv4_multicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast>();
            l3vpn_ipv4_multicast->parent = this;
            children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
        }
        return children.at("l3vpn-ipv4-multicast");
    }

    if(child_yang_name == "l3vpn-ipv4-unicast")
    {
        if(l3vpn_ipv4_unicast != nullptr)
        {
            children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
        }
        else
        {
            l3vpn_ipv4_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast>();
            l3vpn_ipv4_unicast->parent = this;
            children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
        }
        return children.at("l3vpn-ipv4-unicast");
    }

    if(child_yang_name == "l3vpn-ipv6-multicast")
    {
        if(l3vpn_ipv6_multicast != nullptr)
        {
            children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
        }
        else
        {
            l3vpn_ipv6_multicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast>();
            l3vpn_ipv6_multicast->parent = this;
            children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
        }
        return children.at("l3vpn-ipv6-multicast");
    }

    if(child_yang_name == "l3vpn-ipv6-unicast")
    {
        if(l3vpn_ipv6_unicast != nullptr)
        {
            children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
        }
        else
        {
            l3vpn_ipv6_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast>();
            l3vpn_ipv6_unicast->parent = this;
            children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
        }
        return children.at("l3vpn-ipv6-unicast");
    }

    if(child_yang_name == "route-selection-options")
    {
        if(route_selection_options != nullptr)
        {
            children["route-selection-options"] = route_selection_options;
        }
        else
        {
            route_selection_options = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions>();
            route_selection_options->parent = this;
            children["route-selection-options"] = route_selection_options;
        }
        return children.at("route-selection-options");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths != nullptr)
        {
            children["use-multiple-paths"] = use_multiple_paths;
        }
        else
        {
            use_multiple_paths = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths>();
            use_multiple_paths->parent = this;
            children["use-multiple-paths"] = use_multiple_paths;
        }
        return children.at("use-multiple-paths");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::get_children()
{
    if(children.find("apply-policy") == children.end())
    {
        if(apply_policy != nullptr)
        {
            children["apply-policy"] = apply_policy;
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
    }

    if(children.find("ipv4-labelled-unicast") == children.end())
    {
        if(ipv4_labelled_unicast != nullptr)
        {
            children["ipv4-labelled-unicast"] = ipv4_labelled_unicast;
        }
    }

    if(children.find("ipv4-unicast") == children.end())
    {
        if(ipv4_unicast != nullptr)
        {
            children["ipv4-unicast"] = ipv4_unicast;
        }
    }

    if(children.find("ipv6-labelled-unicast") == children.end())
    {
        if(ipv6_labelled_unicast != nullptr)
        {
            children["ipv6-labelled-unicast"] = ipv6_labelled_unicast;
        }
    }

    if(children.find("ipv6-unicast") == children.end())
    {
        if(ipv6_unicast != nullptr)
        {
            children["ipv6-unicast"] = ipv6_unicast;
        }
    }

    if(children.find("l2vpn-evpn") == children.end())
    {
        if(l2vpn_evpn != nullptr)
        {
            children["l2vpn-evpn"] = l2vpn_evpn;
        }
    }

    if(children.find("l2vpn-vpls") == children.end())
    {
        if(l2vpn_vpls != nullptr)
        {
            children["l2vpn-vpls"] = l2vpn_vpls;
        }
    }

    if(children.find("l3vpn-ipv4-multicast") == children.end())
    {
        if(l3vpn_ipv4_multicast != nullptr)
        {
            children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
        }
    }

    if(children.find("l3vpn-ipv4-unicast") == children.end())
    {
        if(l3vpn_ipv4_unicast != nullptr)
        {
            children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
        }
    }

    if(children.find("l3vpn-ipv6-multicast") == children.end())
    {
        if(l3vpn_ipv6_multicast != nullptr)
        {
            children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
        }
    }

    if(children.find("l3vpn-ipv6-unicast") == children.end())
    {
        if(l3vpn_ipv6_unicast != nullptr)
        {
            children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
        }
    }

    if(children.find("route-selection-options") == children.end())
    {
        if(route_selection_options != nullptr)
        {
            children["route-selection-options"] = route_selection_options;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("use-multiple-paths") == children.end())
    {
        if(use_multiple_paths != nullptr)
        {
            children["use-multiple-paths"] = use_multiple_paths;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "graceful-restart"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "config"; yang_parent_name = "graceful-restart";
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
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "state"; yang_parent_name = "graceful-restart";
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
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Config::Config()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"}
{
    yang_name = "config"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(enabled.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::State::State()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"},
    total_paths{YType::uint32, "total-paths"},
    total_prefixes{YType::uint32, "total-prefixes"}
{
    yang_name = "state"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(enabled.operation)
	|| is_set(total_paths.operation)
	|| is_set(total_prefixes.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.operation)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "apply-policy"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplyPolicy' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::Config()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{
    yang_name = "config"; yang_parent_name = "apply-policy";
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(default_export_policy.operation)
	|| is_set(default_import_policy.operation)
	|| is_set(export_policy.operation)
	|| is_set(import_policy.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.operation)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.operation)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
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

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::State()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{
    yang_name = "state"; yang_parent_name = "apply-policy";
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(default_export_policy.operation)
	|| is_set(default_import_policy.operation)
	|| is_set(export_policy.operation)
	|| is_set(import_policy.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.operation)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.operation)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
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

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config>())
	,prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State>())
{
    config->parent = this;
    children["config"] = config;

    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    state->parent = this;
    children["state"] = state;

    yang_name = "ipv4-unicast"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
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

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Unicast' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-unicast";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{
    yang_name = "config"; yang_parent_name = "ipv4-unicast";
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
    return is_set(operation)
	|| is_set(send_default_route.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.operation)) leaf_name_data.push_back(send_default_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{
    yang_name = "state"; yang_parent_name = "ipv4-unicast";
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
    return is_set(operation)
	|| is_set(send_default_route.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.operation)) leaf_name_data.push_back(send_default_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config>())
	,prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State>())
{
    config->parent = this;
    children["config"] = config;

    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    state->parent = this;
    children["state"] = state;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
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

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Unicast' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-unicast";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{
    yang_name = "config"; yang_parent_name = "ipv6-unicast";
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
    return is_set(operation)
	|| is_set(send_default_route.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.operation)) leaf_name_data.push_back(send_default_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{
    yang_name = "state"; yang_parent_name = "ipv6-unicast";
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
    return is_set(operation)
	|| is_set(send_default_route.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.operation)) leaf_name_data.push_back(send_default_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::Ipv4LabelledUnicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    yang_name = "ipv4-labelled-unicast"; yang_parent_name = "afi-safi";
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::~Ipv4LabelledUnicast()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::has_operation() const
{
    return is_set(operation)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-labelled-unicast";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4LabelledUnicast' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::get_children()
{
    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-labelled-unicast";
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::Ipv6LabelledUnicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    yang_name = "ipv6-labelled-unicast"; yang_parent_name = "afi-safi";
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::~Ipv6LabelledUnicast()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::has_operation() const
{
    return is_set(operation)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-labelled-unicast";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6LabelledUnicast' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::get_children()
{
    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-labelled-unicast";
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::L3VpnIpv4Unicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    yang_name = "l3vpn-ipv4-unicast"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-unicast";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L3VpnIpv4Unicast' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_children()
{
    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-unicast";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::L3VpnIpv6Unicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    yang_name = "l3vpn-ipv6-unicast"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-unicast";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L3VpnIpv6Unicast' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_children()
{
    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-unicast";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::L3VpnIpv4Multicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    yang_name = "l3vpn-ipv4-multicast"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-multicast";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L3VpnIpv4Multicast' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_children()
{
    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-multicast";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::L3VpnIpv6Multicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    yang_name = "l3vpn-ipv6-multicast"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-multicast";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L3VpnIpv6Multicast' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_children()
{
    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-multicast";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::L2VpnVpls()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>())
{
    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    yang_name = "l2vpn-vpls"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnVpls' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_children()
{
    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-vpls";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::L2VpnEvpn()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>())
{
    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    yang_name = "l2vpn-evpn"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-evpn";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnEvpn' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_children()
{
    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-evpn";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::RouteSelectionOptions()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "route-selection-options"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-selection-options";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteSelectionOptions' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "config"; yang_parent_name = "route-selection-options";
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
    return is_set(operation)
	|| is_set(advertise_inactive_routes.operation)
	|| is_set(always_compare_med.operation)
	|| is_set(enable_aigp.operation)
	|| is_set(external_compare_router_id.operation)
	|| is_set(ignore_as_path_length.operation)
	|| is_set(ignore_next_hop_igp_metric.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.operation)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.operation)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.operation)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.operation)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.operation)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.operation)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
    }
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
    yang_name = "state"; yang_parent_name = "route-selection-options";
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
    return is_set(operation)
	|| is_set(advertise_inactive_routes.operation)
	|| is_set(always_compare_med.operation)
	|| is_set(enable_aigp.operation)
	|| is_set(external_compare_router_id.operation)
	|| is_set(ignore_as_path_length.operation)
	|| is_set(ignore_next_hop_igp_metric.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.operation)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.operation)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.operation)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.operation)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.operation)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.operation)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config>())
	,ebgp(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>())
	,ibgp(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State>())
{
    config->parent = this;
    children["config"] = config;

    ebgp->parent = this;
    children["ebgp"] = ebgp;

    ibgp->parent = this;
    children["ibgp"] = ibgp;

    state->parent = this;
    children["state"] = state;

    yang_name = "use-multiple-paths"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
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

EntityPath Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UseMultiplePaths' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp != nullptr)
        {
            children["ebgp"] = ebgp;
        }
        else
        {
            ebgp = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>();
            ebgp->parent = this;
            children["ebgp"] = ebgp;
        }
        return children.at("ebgp");
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp != nullptr)
        {
            children["ibgp"] = ibgp;
        }
        else
        {
            ibgp = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>();
            ibgp->parent = this;
            children["ibgp"] = ibgp;
        }
        return children.at("ibgp");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("ebgp") == children.end())
    {
        if(ebgp != nullptr)
        {
            children["ebgp"] = ebgp;
        }
    }

    if(children.find("ibgp") == children.end())
    {
        if(ibgp != nullptr)
        {
            children["ibgp"] = ibgp;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "config"; yang_parent_name = "use-multiple-paths";
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
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "state"; yang_parent_name = "use-multiple-paths";
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
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ebgp' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "config"; yang_parent_name = "ebgp";
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
    return is_set(operation)
	|| is_set(allow_multiple_as.operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.operation)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "state"; yang_parent_name = "ebgp";
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
    return is_set(operation)
	|| is_set(allow_multiple_as.operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.operation)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ibgp' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "config"; yang_parent_name = "ibgp";
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
    return is_set(operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{
    yang_name = "state"; yang_parent_name = "ibgp";
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
    return is_set(operation)
	|| is_set(maximum_paths.operation);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_children()
{
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
}

Bgp::Global::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<Bgp::Global::ApplyPolicy::Config>())
	,state(std::make_shared<Bgp::Global::ApplyPolicy::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "apply-policy"; yang_parent_name = "global";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";

    return path_buffer.str();

}

EntityPath Bgp::Global::ApplyPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Global::ApplyPolicy::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Global::ApplyPolicy::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::ApplyPolicy::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Global::ApplyPolicy::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Global::ApplyPolicy::Config::Config()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{
    yang_name = "config"; yang_parent_name = "apply-policy";
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(default_export_policy.operation)
	|| is_set(default_import_policy.operation)
	|| is_set(export_policy.operation)
	|| is_set(import_policy.operation);
}

std::string Bgp::Global::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Global::ApplyPolicy::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/apply-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.operation)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.operation)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::ApplyPolicy::Config::get_children()
{
    return children;
}

void Bgp::Global::ApplyPolicy::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
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

Bgp::Global::ApplyPolicy::State::State()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{
    yang_name = "state"; yang_parent_name = "apply-policy";
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(default_export_policy.operation)
	|| is_set(default_import_policy.operation)
	|| is_set(export_policy.operation)
	|| is_set(import_policy.operation);
}

std::string Bgp::Global::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Global::ApplyPolicy::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/global/apply-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.operation)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.operation)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Global::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Global::ApplyPolicy::State::get_children()
{
    return children;
}

void Bgp::Global::ApplyPolicy::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
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

Bgp::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "bgp";
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
    return is_set(operation);
}

std::string Bgp::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Neighbors::set_value(const std::string & value_path, std::string value)
{
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
    children["add-paths"] = add_paths;

    afi_safis->parent = this;
    children["afi-safis"] = afi_safis;

    apply_policy->parent = this;
    children["apply-policy"] = apply_policy;

    as_path_options->parent = this;
    children["as-path-options"] = as_path_options;

    config->parent = this;
    children["config"] = config;

    ebgp_multihop->parent = this;
    children["ebgp-multihop"] = ebgp_multihop;

    error_handling->parent = this;
    children["error-handling"] = error_handling;

    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart;

    logging_options->parent = this;
    children["logging-options"] = logging_options;

    route_reflector->parent = this;
    children["route-reflector"] = route_reflector;

    state->parent = this;
    children["state"] = state;

    timers->parent = this;
    children["timers"] = timers;

    transport->parent = this;
    children["transport"] = transport;

    use_multiple_paths->parent = this;
    children["use-multiple-paths"] = use_multiple_paths;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
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
    return is_set(operation)
	|| is_set(neighbor_address.operation)
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

std::string Bgp::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-bgp:bgp/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "add-paths")
    {
        if(add_paths != nullptr)
        {
            children["add-paths"] = add_paths;
        }
        else
        {
            add_paths = std::make_shared<Bgp::Neighbors::Neighbor::AddPaths>();
            add_paths->parent = this;
            children["add-paths"] = add_paths;
        }
        return children.at("add-paths");
    }

    if(child_yang_name == "afi-safis")
    {
        if(afi_safis != nullptr)
        {
            children["afi-safis"] = afi_safis;
        }
        else
        {
            afi_safis = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis>();
            afi_safis->parent = this;
            children["afi-safis"] = afi_safis;
        }
        return children.at("afi-safis");
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy != nullptr)
        {
            children["apply-policy"] = apply_policy;
        }
        else
        {
            apply_policy = std::make_shared<Bgp::Neighbors::Neighbor::ApplyPolicy>();
            apply_policy->parent = this;
            children["apply-policy"] = apply_policy;
        }
        return children.at("apply-policy");
    }

    if(child_yang_name == "as-path-options")
    {
        if(as_path_options != nullptr)
        {
            children["as-path-options"] = as_path_options;
        }
        else
        {
            as_path_options = std::make_shared<Bgp::Neighbors::Neighbor::AsPathOptions>();
            as_path_options->parent = this;
            children["as-path-options"] = as_path_options;
        }
        return children.at("as-path-options");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
        else
        {
            ebgp_multihop = std::make_shared<Bgp::Neighbors::Neighbor::EbgpMultihop>();
            ebgp_multihop->parent = this;
            children["ebgp-multihop"] = ebgp_multihop;
        }
        return children.at("ebgp-multihop");
    }

    if(child_yang_name == "error-handling")
    {
        if(error_handling != nullptr)
        {
            children["error-handling"] = error_handling;
        }
        else
        {
            error_handling = std::make_shared<Bgp::Neighbors::Neighbor::ErrorHandling>();
            error_handling->parent = this;
            children["error-handling"] = error_handling;
        }
        return children.at("error-handling");
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
        else
        {
            graceful_restart = std::make_shared<Bgp::Neighbors::Neighbor::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart;
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "logging-options")
    {
        if(logging_options != nullptr)
        {
            children["logging-options"] = logging_options;
        }
        else
        {
            logging_options = std::make_shared<Bgp::Neighbors::Neighbor::LoggingOptions>();
            logging_options->parent = this;
            children["logging-options"] = logging_options;
        }
        return children.at("logging-options");
    }

    if(child_yang_name == "route-reflector")
    {
        if(route_reflector != nullptr)
        {
            children["route-reflector"] = route_reflector;
        }
        else
        {
            route_reflector = std::make_shared<Bgp::Neighbors::Neighbor::RouteReflector>();
            route_reflector->parent = this;
            children["route-reflector"] = route_reflector;
        }
        return children.at("route-reflector");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Bgp::Neighbors::Neighbor::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    if(child_yang_name == "transport")
    {
        if(transport != nullptr)
        {
            children["transport"] = transport;
        }
        else
        {
            transport = std::make_shared<Bgp::Neighbors::Neighbor::Transport>();
            transport->parent = this;
            children["transport"] = transport;
        }
        return children.at("transport");
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths != nullptr)
        {
            children["use-multiple-paths"] = use_multiple_paths;
        }
        else
        {
            use_multiple_paths = std::make_shared<Bgp::Neighbors::Neighbor::UseMultiplePaths>();
            use_multiple_paths->parent = this;
            children["use-multiple-paths"] = use_multiple_paths;
        }
        return children.at("use-multiple-paths");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::get_children()
{
    if(children.find("add-paths") == children.end())
    {
        if(add_paths != nullptr)
        {
            children["add-paths"] = add_paths;
        }
    }

    if(children.find("afi-safis") == children.end())
    {
        if(afi_safis != nullptr)
        {
            children["afi-safis"] = afi_safis;
        }
    }

    if(children.find("apply-policy") == children.end())
    {
        if(apply_policy != nullptr)
        {
            children["apply-policy"] = apply_policy;
        }
    }

    if(children.find("as-path-options") == children.end())
    {
        if(as_path_options != nullptr)
        {
            children["as-path-options"] = as_path_options;
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("ebgp-multihop") == children.end())
    {
        if(ebgp_multihop != nullptr)
        {
            children["ebgp-multihop"] = ebgp_multihop;
        }
    }

    if(children.find("error-handling") == children.end())
    {
        if(error_handling != nullptr)
        {
            children["error-handling"] = error_handling;
        }
    }

    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
    }

    if(children.find("logging-options") == children.end())
    {
        if(logging_options != nullptr)
        {
            children["logging-options"] = logging_options;
        }
    }

    if(children.find("route-reflector") == children.end())
    {
        if(route_reflector != nullptr)
        {
            children["route-reflector"] = route_reflector;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    if(children.find("transport") == children.end())
    {
        if(transport != nullptr)
        {
            children["transport"] = transport;
        }
    }

    if(children.find("use-multiple-paths") == children.end())
    {
        if(use_multiple_paths != nullptr)
        {
            children["use-multiple-paths"] = use_multiple_paths;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

Bgp::Neighbors::Neighbor::Config::Config()
    :
    auth_password{YType::str, "auth-password"},
    description{YType::str, "description"},
    local_as{YType::uint32, "local-as"},
    neighbor_address{YType::str, "neighbor-address"},
    peer_as{YType::uint32, "peer-as"},
    peer_group{YType::str, "peer-group"},
    peer_type{YType::enumeration, "peer-type"},
    remove_private_as{YType::enumeration, "remove-private-as"},
    route_flap_damping{YType::boolean, "route-flap-damping"},
    send_community{YType::enumeration, "send-community"}
{
    yang_name = "config"; yang_parent_name = "neighbor";
}

Bgp::Neighbors::Neighbor::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::Config::has_data() const
{
    return auth_password.is_set
	|| description.is_set
	|| local_as.is_set
	|| neighbor_address.is_set
	|| peer_as.is_set
	|| peer_group.is_set
	|| peer_type.is_set
	|| remove_private_as.is_set
	|| route_flap_damping.is_set
	|| send_community.is_set;
}

bool Bgp::Neighbors::Neighbor::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_password.operation)
	|| is_set(description.operation)
	|| is_set(local_as.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(peer_as.operation)
	|| is_set(peer_group.operation)
	|| is_set(peer_type.operation)
	|| is_set(remove_private_as.operation)
	|| is_set(route_flap_damping.operation)
	|| is_set(send_community.operation);
}

std::string Bgp::Neighbors::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_password.is_set || is_set(auth_password.operation)) leaf_name_data.push_back(auth_password.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (peer_as.is_set || is_set(peer_as.operation)) leaf_name_data.push_back(peer_as.get_name_leafdata());
    if (peer_group.is_set || is_set(peer_group.operation)) leaf_name_data.push_back(peer_group.get_name_leafdata());
    if (peer_type.is_set || is_set(peer_type.operation)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.operation)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_flap_damping.is_set || is_set(route_flap_damping.operation)) leaf_name_data.push_back(route_flap_damping.get_name_leafdata());
    if (send_community.is_set || is_set(send_community.operation)) leaf_name_data.push_back(send_community.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-password")
    {
        auth_password = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "peer-as")
    {
        peer_as = value;
    }
    if(value_path == "peer-group")
    {
        peer_group = value;
    }
    if(value_path == "peer-type")
    {
        peer_type = value;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping = value;
    }
    if(value_path == "send-community")
    {
        send_community = value;
    }
}

Bgp::Neighbors::Neighbor::State::State()
    :
    auth_password{YType::str, "auth-password"},
    description{YType::str, "description"},
    local_as{YType::uint32, "local-as"},
    neighbor_address{YType::str, "neighbor-address"},
    peer_as{YType::uint32, "peer-as"},
    peer_group{YType::str, "peer-group"},
    peer_type{YType::enumeration, "peer-type"},
    remove_private_as{YType::enumeration, "remove-private-as"},
    route_flap_damping{YType::boolean, "route-flap-damping"},
    send_community{YType::enumeration, "send-community"},
    session_state{YType::enumeration, "session-state"},
    supported_capabilities{YType::identityref, "supported-capabilities"}
    	,
    messages(std::make_shared<Bgp::Neighbors::Neighbor::State::Messages>())
	,queues(std::make_shared<Bgp::Neighbors::Neighbor::State::Queues>())
{
    messages->parent = this;
    children["messages"] = messages;

    queues->parent = this;
    children["queues"] = queues;

    yang_name = "state"; yang_parent_name = "neighbor";
}

Bgp::Neighbors::Neighbor::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::State::has_data() const
{
    for (auto const & leaf : supported_capabilities.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return auth_password.is_set
	|| description.is_set
	|| local_as.is_set
	|| neighbor_address.is_set
	|| peer_as.is_set
	|| peer_group.is_set
	|| peer_type.is_set
	|| remove_private_as.is_set
	|| route_flap_damping.is_set
	|| send_community.is_set
	|| session_state.is_set
	|| (messages !=  nullptr && messages->has_data())
	|| (queues !=  nullptr && queues->has_data());
}

bool Bgp::Neighbors::Neighbor::State::has_operation() const
{
    for (auto const & leaf : supported_capabilities.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(auth_password.operation)
	|| is_set(description.operation)
	|| is_set(local_as.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(peer_as.operation)
	|| is_set(peer_group.operation)
	|| is_set(peer_type.operation)
	|| is_set(remove_private_as.operation)
	|| is_set(route_flap_damping.operation)
	|| is_set(send_community.operation)
	|| is_set(session_state.operation)
	|| is_set(supported_capabilities.operation)
	|| (messages !=  nullptr && messages->has_operation())
	|| (queues !=  nullptr && queues->has_operation());
}

std::string Bgp::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_password.is_set || is_set(auth_password.operation)) leaf_name_data.push_back(auth_password.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (peer_as.is_set || is_set(peer_as.operation)) leaf_name_data.push_back(peer_as.get_name_leafdata());
    if (peer_group.is_set || is_set(peer_group.operation)) leaf_name_data.push_back(peer_group.get_name_leafdata());
    if (peer_type.is_set || is_set(peer_type.operation)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.operation)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_flap_damping.is_set || is_set(route_flap_damping.operation)) leaf_name_data.push_back(route_flap_damping.get_name_leafdata());
    if (send_community.is_set || is_set(send_community.operation)) leaf_name_data.push_back(send_community.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.operation)) leaf_name_data.push_back(session_state.get_name_leafdata());

    auto supported_capabilities_name_datas = supported_capabilities.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), supported_capabilities_name_datas.begin(), supported_capabilities_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "messages")
    {
        if(messages != nullptr)
        {
            children["messages"] = messages;
        }
        else
        {
            messages = std::make_shared<Bgp::Neighbors::Neighbor::State::Messages>();
            messages->parent = this;
            children["messages"] = messages;
        }
        return children.at("messages");
    }

    if(child_yang_name == "queues")
    {
        if(queues != nullptr)
        {
            children["queues"] = queues;
        }
        else
        {
            queues = std::make_shared<Bgp::Neighbors::Neighbor::State::Queues>();
            queues->parent = this;
            children["queues"] = queues;
        }
        return children.at("queues");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::State::get_children()
{
    if(children.find("messages") == children.end())
    {
        if(messages != nullptr)
        {
            children["messages"] = messages;
        }
    }

    if(children.find("queues") == children.end())
    {
        if(queues != nullptr)
        {
            children["queues"] = queues;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-password")
    {
        auth_password = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "peer-as")
    {
        peer_as = value;
    }
    if(value_path == "peer-group")
    {
        peer_group = value;
    }
    if(value_path == "peer-type")
    {
        peer_type = value;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping = value;
    }
    if(value_path == "send-community")
    {
        send_community = value;
    }
    if(value_path == "session-state")
    {
        session_state = value;
    }
    if(value_path == "supported-capabilities")
    {
        supported_capabilities.append(value);
    }
}

Bgp::Neighbors::Neighbor::State::Messages::Messages()
    :
    received(std::make_shared<Bgp::Neighbors::Neighbor::State::Messages::Received>())
	,sent(std::make_shared<Bgp::Neighbors::Neighbor::State::Messages::Sent>())
{
    received->parent = this;
    children["received"] = received;

    sent->parent = this;
    children["sent"] = sent;

    yang_name = "messages"; yang_parent_name = "state";
}

Bgp::Neighbors::Neighbor::State::Messages::~Messages()
{
}

bool Bgp::Neighbors::Neighbor::State::Messages::has_data() const
{
    return (received !=  nullptr && received->has_data())
	|| (sent !=  nullptr && sent->has_data());
}

bool Bgp::Neighbors::Neighbor::State::Messages::has_operation() const
{
    return is_set(operation)
	|| (received !=  nullptr && received->has_operation())
	|| (sent !=  nullptr && sent->has_operation());
}

std::string Bgp::Neighbors::Neighbor::State::Messages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "messages";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::State::Messages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Messages' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::State::Messages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received")
    {
        if(received != nullptr)
        {
            children["received"] = received;
        }
        else
        {
            received = std::make_shared<Bgp::Neighbors::Neighbor::State::Messages::Received>();
            received->parent = this;
            children["received"] = received;
        }
        return children.at("received");
    }

    if(child_yang_name == "sent")
    {
        if(sent != nullptr)
        {
            children["sent"] = sent;
        }
        else
        {
            sent = std::make_shared<Bgp::Neighbors::Neighbor::State::Messages::Sent>();
            sent->parent = this;
            children["sent"] = sent;
        }
        return children.at("sent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::State::Messages::get_children()
{
    if(children.find("received") == children.end())
    {
        if(received != nullptr)
        {
            children["received"] = received;
        }
    }

    if(children.find("sent") == children.end())
    {
        if(sent != nullptr)
        {
            children["sent"] = sent;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::State::Messages::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::State::Messages::Sent::Sent()
    :
    notification{YType::uint64, "NOTIFICATION"},
    update{YType::uint64, "UPDATE"}
{
    yang_name = "sent"; yang_parent_name = "messages";
}

Bgp::Neighbors::Neighbor::State::Messages::Sent::~Sent()
{
}

bool Bgp::Neighbors::Neighbor::State::Messages::Sent::has_data() const
{
    return notification.is_set
	|| update.is_set;
}

bool Bgp::Neighbors::Neighbor::State::Messages::Sent::has_operation() const
{
    return is_set(operation)
	|| is_set(notification.operation)
	|| is_set(update.operation);
}

std::string Bgp::Neighbors::Neighbor::State::Messages::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::State::Messages::Sent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sent' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification.is_set || is_set(notification.operation)) leaf_name_data.push_back(notification.get_name_leafdata());
    if (update.is_set || is_set(update.operation)) leaf_name_data.push_back(update.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::State::Messages::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::State::Messages::Sent::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::State::Messages::Sent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "NOTIFICATION")
    {
        notification = value;
    }
    if(value_path == "UPDATE")
    {
        update = value;
    }
}

Bgp::Neighbors::Neighbor::State::Messages::Received::Received()
    :
    notification{YType::uint64, "NOTIFICATION"},
    update{YType::uint64, "UPDATE"}
{
    yang_name = "received"; yang_parent_name = "messages";
}

Bgp::Neighbors::Neighbor::State::Messages::Received::~Received()
{
}

bool Bgp::Neighbors::Neighbor::State::Messages::Received::has_data() const
{
    return notification.is_set
	|| update.is_set;
}

bool Bgp::Neighbors::Neighbor::State::Messages::Received::has_operation() const
{
    return is_set(operation)
	|| is_set(notification.operation)
	|| is_set(update.operation);
}

std::string Bgp::Neighbors::Neighbor::State::Messages::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::State::Messages::Received::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Received' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification.is_set || is_set(notification.operation)) leaf_name_data.push_back(notification.get_name_leafdata());
    if (update.is_set || is_set(update.operation)) leaf_name_data.push_back(update.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::State::Messages::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::State::Messages::Received::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::State::Messages::Received::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "NOTIFICATION")
    {
        notification = value;
    }
    if(value_path == "UPDATE")
    {
        update = value;
    }
}

Bgp::Neighbors::Neighbor::State::Queues::Queues()
    :
    input{YType::uint32, "input"},
    output{YType::uint32, "output"}
{
    yang_name = "queues"; yang_parent_name = "state";
}

Bgp::Neighbors::Neighbor::State::Queues::~Queues()
{
}

bool Bgp::Neighbors::Neighbor::State::Queues::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Bgp::Neighbors::Neighbor::State::Queues::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Bgp::Neighbors::Neighbor::State::Queues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queues";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::State::Queues::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Queues' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::State::Queues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::State::Queues::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::State::Queues::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Bgp::Neighbors::Neighbor::Timers::Timers()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::Timers::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::Timers::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "timers"; yang_parent_name = "neighbor";
}

Bgp::Neighbors::Neighbor::Timers::~Timers()
{
}

bool Bgp::Neighbors::Neighbor::Timers::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::Timers::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::Timers::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::Timers::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::Timers::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::Timers::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::Timers::Config::Config()
    :
    connect_retry{YType::str, "connect-retry"},
    hold_time{YType::str, "hold-time"},
    keepalive_interval{YType::str, "keepalive-interval"},
    minimum_advertisement_interval{YType::str, "minimum-advertisement-interval"}
{
    yang_name = "config"; yang_parent_name = "timers";
}

Bgp::Neighbors::Neighbor::Timers::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::Timers::Config::has_data() const
{
    return connect_retry.is_set
	|| hold_time.is_set
	|| keepalive_interval.is_set
	|| minimum_advertisement_interval.is_set;
}

bool Bgp::Neighbors::Neighbor::Timers::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(connect_retry.operation)
	|| is_set(hold_time.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(minimum_advertisement_interval.operation);
}

std::string Bgp::Neighbors::Neighbor::Timers::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::Timers::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_retry.is_set || is_set(connect_retry.operation)) leaf_name_data.push_back(connect_retry.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (minimum_advertisement_interval.is_set || is_set(minimum_advertisement_interval.operation)) leaf_name_data.push_back(minimum_advertisement_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::Timers::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::Timers::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::Timers::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-retry")
    {
        connect_retry = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval = value;
    }
}

Bgp::Neighbors::Neighbor::Timers::State::State()
    :
    connect_retry{YType::str, "connect-retry"},
    hold_time{YType::str, "hold-time"},
    keepalive_interval{YType::str, "keepalive-interval"},
    minimum_advertisement_interval{YType::str, "minimum-advertisement-interval"},
    negotiated_hold_time{YType::str, "negotiated-hold-time"},
    uptime{YType::uint32, "uptime"}
{
    yang_name = "state"; yang_parent_name = "timers";
}

Bgp::Neighbors::Neighbor::Timers::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::Timers::State::has_data() const
{
    return connect_retry.is_set
	|| hold_time.is_set
	|| keepalive_interval.is_set
	|| minimum_advertisement_interval.is_set
	|| negotiated_hold_time.is_set
	|| uptime.is_set;
}

bool Bgp::Neighbors::Neighbor::Timers::State::has_operation() const
{
    return is_set(operation)
	|| is_set(connect_retry.operation)
	|| is_set(hold_time.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(minimum_advertisement_interval.operation)
	|| is_set(negotiated_hold_time.operation)
	|| is_set(uptime.operation);
}

std::string Bgp::Neighbors::Neighbor::Timers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::Timers::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_retry.is_set || is_set(connect_retry.operation)) leaf_name_data.push_back(connect_retry.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (minimum_advertisement_interval.is_set || is_set(minimum_advertisement_interval.operation)) leaf_name_data.push_back(minimum_advertisement_interval.get_name_leafdata());
    if (negotiated_hold_time.is_set || is_set(negotiated_hold_time.operation)) leaf_name_data.push_back(negotiated_hold_time.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::Timers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::Timers::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::Timers::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-retry")
    {
        connect_retry = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval = value;
    }
    if(value_path == "negotiated-hold-time")
    {
        negotiated_hold_time = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Bgp::Neighbors::Neighbor::Transport::Transport()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::Transport::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::Transport::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "transport"; yang_parent_name = "neighbor";
}

Bgp::Neighbors::Neighbor::Transport::~Transport()
{
}

bool Bgp::Neighbors::Neighbor::Transport::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::Transport::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::Transport::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::Transport::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::Transport::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::Transport::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::Transport::Config::Config()
    :
    local_address{YType::str, "local-address"},
    mtu_discovery{YType::boolean, "mtu-discovery"},
    passive_mode{YType::boolean, "passive-mode"},
    tcp_mss{YType::uint16, "tcp-mss"}
{
    yang_name = "config"; yang_parent_name = "transport";
}

Bgp::Neighbors::Neighbor::Transport::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::Transport::Config::has_data() const
{
    return local_address.is_set
	|| mtu_discovery.is_set
	|| passive_mode.is_set
	|| tcp_mss.is_set;
}

bool Bgp::Neighbors::Neighbor::Transport::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(mtu_discovery.operation)
	|| is_set(passive_mode.operation)
	|| is_set(tcp_mss.operation);
}

std::string Bgp::Neighbors::Neighbor::Transport::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::Transport::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (mtu_discovery.is_set || is_set(mtu_discovery.operation)) leaf_name_data.push_back(mtu_discovery.get_name_leafdata());
    if (passive_mode.is_set || is_set(passive_mode.operation)) leaf_name_data.push_back(passive_mode.get_name_leafdata());
    if (tcp_mss.is_set || is_set(tcp_mss.operation)) leaf_name_data.push_back(tcp_mss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::Transport::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::Transport::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::Transport::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery = value;
    }
    if(value_path == "passive-mode")
    {
        passive_mode = value;
    }
    if(value_path == "tcp-mss")
    {
        tcp_mss = value;
    }
}

Bgp::Neighbors::Neighbor::Transport::State::State()
    :
    local_address{YType::str, "local-address"},
    local_port{YType::uint16, "local-port"},
    mtu_discovery{YType::boolean, "mtu-discovery"},
    passive_mode{YType::boolean, "passive-mode"},
    remote_address{YType::str, "remote-address"},
    remote_port{YType::uint16, "remote-port"},
    tcp_mss{YType::uint16, "tcp-mss"}
{
    yang_name = "state"; yang_parent_name = "transport";
}

Bgp::Neighbors::Neighbor::Transport::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::Transport::State::has_data() const
{
    return local_address.is_set
	|| local_port.is_set
	|| mtu_discovery.is_set
	|| passive_mode.is_set
	|| remote_address.is_set
	|| remote_port.is_set
	|| tcp_mss.is_set;
}

bool Bgp::Neighbors::Neighbor::Transport::State::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(local_port.operation)
	|| is_set(mtu_discovery.operation)
	|| is_set(passive_mode.operation)
	|| is_set(remote_address.operation)
	|| is_set(remote_port.operation)
	|| is_set(tcp_mss.operation);
}

std::string Bgp::Neighbors::Neighbor::Transport::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::Transport::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (mtu_discovery.is_set || is_set(mtu_discovery.operation)) leaf_name_data.push_back(mtu_discovery.get_name_leafdata());
    if (passive_mode.is_set || is_set(passive_mode.operation)) leaf_name_data.push_back(passive_mode.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.operation)) leaf_name_data.push_back(remote_port.get_name_leafdata());
    if (tcp_mss.is_set || is_set(tcp_mss.operation)) leaf_name_data.push_back(tcp_mss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::Transport::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::Transport::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::Transport::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery = value;
    }
    if(value_path == "passive-mode")
    {
        passive_mode = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
    }
    if(value_path == "tcp-mss")
    {
        tcp_mss = value;
    }
}

Bgp::Neighbors::Neighbor::ErrorHandling::ErrorHandling()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::ErrorHandling::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::ErrorHandling::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "error-handling"; yang_parent_name = "neighbor";
}

Bgp::Neighbors::Neighbor::ErrorHandling::~ErrorHandling()
{
}

bool Bgp::Neighbors::Neighbor::ErrorHandling::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::ErrorHandling::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::ErrorHandling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-handling";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::ErrorHandling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErrorHandling' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::ErrorHandling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::ErrorHandling::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::ErrorHandling::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::ErrorHandling::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::ErrorHandling::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::ErrorHandling::Config::Config()
    :
    treat_as_withdraw{YType::boolean, "treat-as-withdraw"}
{
    yang_name = "config"; yang_parent_name = "error-handling";
}

Bgp::Neighbors::Neighbor::ErrorHandling::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::ErrorHandling::Config::has_data() const
{
    return treat_as_withdraw.is_set;
}

bool Bgp::Neighbors::Neighbor::ErrorHandling::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(treat_as_withdraw.operation);
}

std::string Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (treat_as_withdraw.is_set || is_set(treat_as_withdraw.operation)) leaf_name_data.push_back(treat_as_withdraw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::ErrorHandling::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw = value;
    }
}

Bgp::Neighbors::Neighbor::ErrorHandling::State::State()
    :
    erroneous_update_messages{YType::uint32, "erroneous-update-messages"},
    treat_as_withdraw{YType::boolean, "treat-as-withdraw"}
{
    yang_name = "state"; yang_parent_name = "error-handling";
}

Bgp::Neighbors::Neighbor::ErrorHandling::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::ErrorHandling::State::has_data() const
{
    return erroneous_update_messages.is_set
	|| treat_as_withdraw.is_set;
}

bool Bgp::Neighbors::Neighbor::ErrorHandling::State::has_operation() const
{
    return is_set(operation)
	|| is_set(erroneous_update_messages.operation)
	|| is_set(treat_as_withdraw.operation);
}

std::string Bgp::Neighbors::Neighbor::ErrorHandling::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::ErrorHandling::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (erroneous_update_messages.is_set || is_set(erroneous_update_messages.operation)) leaf_name_data.push_back(erroneous_update_messages.get_name_leafdata());
    if (treat_as_withdraw.is_set || is_set(treat_as_withdraw.operation)) leaf_name_data.push_back(treat_as_withdraw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::ErrorHandling::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::ErrorHandling::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::ErrorHandling::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "erroneous-update-messages")
    {
        erroneous_update_messages = value;
    }
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw = value;
    }
}

Bgp::Neighbors::Neighbor::LoggingOptions::LoggingOptions()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::LoggingOptions::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::LoggingOptions::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "logging-options"; yang_parent_name = "neighbor";
}

Bgp::Neighbors::Neighbor::LoggingOptions::~LoggingOptions()
{
}

bool Bgp::Neighbors::Neighbor::LoggingOptions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::LoggingOptions::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::LoggingOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-options";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::LoggingOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoggingOptions' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::LoggingOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::LoggingOptions::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::LoggingOptions::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::LoggingOptions::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::LoggingOptions::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::LoggingOptions::Config::Config()
    :
    log_neighbor_state_changes{YType::boolean, "log-neighbor-state-changes"}
{
    yang_name = "config"; yang_parent_name = "logging-options";
}

Bgp::Neighbors::Neighbor::LoggingOptions::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::LoggingOptions::Config::has_data() const
{
    return log_neighbor_state_changes.is_set;
}

bool Bgp::Neighbors::Neighbor::LoggingOptions::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(log_neighbor_state_changes.operation);
}

std::string Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_neighbor_state_changes.is_set || is_set(log_neighbor_state_changes.operation)) leaf_name_data.push_back(log_neighbor_state_changes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::LoggingOptions::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes = value;
    }
}

Bgp::Neighbors::Neighbor::LoggingOptions::State::State()
    :
    log_neighbor_state_changes{YType::boolean, "log-neighbor-state-changes"}
{
    yang_name = "state"; yang_parent_name = "logging-options";
}

Bgp::Neighbors::Neighbor::LoggingOptions::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::LoggingOptions::State::has_data() const
{
    return log_neighbor_state_changes.is_set;
}

bool Bgp::Neighbors::Neighbor::LoggingOptions::State::has_operation() const
{
    return is_set(operation)
	|| is_set(log_neighbor_state_changes.operation);
}

std::string Bgp::Neighbors::Neighbor::LoggingOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::LoggingOptions::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_neighbor_state_changes.is_set || is_set(log_neighbor_state_changes.operation)) leaf_name_data.push_back(log_neighbor_state_changes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::LoggingOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::LoggingOptions::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::LoggingOptions::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes = value;
    }
}

Bgp::Neighbors::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::EbgpMultihop::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::EbgpMultihop::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor";
}

Bgp::Neighbors::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Bgp::Neighbors::Neighbor::EbgpMultihop::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::EbgpMultihop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EbgpMultihop' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::EbgpMultihop::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::EbgpMultihop::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::EbgpMultihop::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::EbgpMultihop::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::EbgpMultihop::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    multihop_ttl{YType::uint8, "multihop-ttl"}
{
    yang_name = "config"; yang_parent_name = "ebgp-multihop";
}

Bgp::Neighbors::Neighbor::EbgpMultihop::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::EbgpMultihop::Config::has_data() const
{
    return enabled.is_set
	|| multihop_ttl.is_set;
}

bool Bgp::Neighbors::Neighbor::EbgpMultihop::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(multihop_ttl.operation);
}

std::string Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (multihop_ttl.is_set || is_set(multihop_ttl.operation)) leaf_name_data.push_back(multihop_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::EbgpMultihop::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl = value;
    }
}

Bgp::Neighbors::Neighbor::EbgpMultihop::State::State()
    :
    enabled{YType::boolean, "enabled"},
    multihop_ttl{YType::uint8, "multihop-ttl"}
{
    yang_name = "state"; yang_parent_name = "ebgp-multihop";
}

Bgp::Neighbors::Neighbor::EbgpMultihop::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::EbgpMultihop::State::has_data() const
{
    return enabled.is_set
	|| multihop_ttl.is_set;
}

bool Bgp::Neighbors::Neighbor::EbgpMultihop::State::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(multihop_ttl.operation);
}

std::string Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (multihop_ttl.is_set || is_set(multihop_ttl.operation)) leaf_name_data.push_back(multihop_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::EbgpMultihop::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl = value;
    }
}

Bgp::Neighbors::Neighbor::RouteReflector::RouteReflector()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::RouteReflector::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::RouteReflector::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "route-reflector"; yang_parent_name = "neighbor";
}

Bgp::Neighbors::Neighbor::RouteReflector::~RouteReflector()
{
}

bool Bgp::Neighbors::Neighbor::RouteReflector::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::RouteReflector::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::RouteReflector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-reflector";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::RouteReflector::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteReflector' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::RouteReflector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::RouteReflector::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::RouteReflector::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::RouteReflector::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::RouteReflector::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::RouteReflector::Config::Config()
    :
    route_reflector_client{YType::boolean, "route-reflector-client"},
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"}
{
    yang_name = "config"; yang_parent_name = "route-reflector";
}

Bgp::Neighbors::Neighbor::RouteReflector::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::RouteReflector::Config::has_data() const
{
    return route_reflector_client.is_set
	|| route_reflector_cluster_id.is_set;
}

bool Bgp::Neighbors::Neighbor::RouteReflector::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(route_reflector_client.operation)
	|| is_set(route_reflector_cluster_id.operation);
}

std::string Bgp::Neighbors::Neighbor::RouteReflector::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::RouteReflector::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_reflector_client.is_set || is_set(route_reflector_client.operation)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.operation)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::RouteReflector::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::RouteReflector::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::RouteReflector::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
    }
}

Bgp::Neighbors::Neighbor::RouteReflector::State::State()
    :
    route_reflector_client{YType::boolean, "route-reflector-client"},
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"}
{
    yang_name = "state"; yang_parent_name = "route-reflector";
}

Bgp::Neighbors::Neighbor::RouteReflector::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::RouteReflector::State::has_data() const
{
    return route_reflector_client.is_set
	|| route_reflector_cluster_id.is_set;
}

bool Bgp::Neighbors::Neighbor::RouteReflector::State::has_operation() const
{
    return is_set(operation)
	|| is_set(route_reflector_client.operation)
	|| is_set(route_reflector_cluster_id.operation);
}

std::string Bgp::Neighbors::Neighbor::RouteReflector::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::RouteReflector::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_reflector_client.is_set || is_set(route_reflector_client.operation)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.operation)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::RouteReflector::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::RouteReflector::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::RouteReflector::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
    }
}

Bgp::Neighbors::Neighbor::AsPathOptions::AsPathOptions()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AsPathOptions::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AsPathOptions::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "as-path-options"; yang_parent_name = "neighbor";
}

Bgp::Neighbors::Neighbor::AsPathOptions::~AsPathOptions()
{
}

bool Bgp::Neighbors::Neighbor::AsPathOptions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AsPathOptions::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AsPathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-options";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AsPathOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsPathOptions' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AsPathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AsPathOptions::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AsPathOptions::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AsPathOptions::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AsPathOptions::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::AsPathOptions::Config::Config()
    :
    allow_own_as{YType::uint8, "allow-own-as"},
    replace_peer_as{YType::boolean, "replace-peer-as"}
{
    yang_name = "config"; yang_parent_name = "as-path-options";
}

Bgp::Neighbors::Neighbor::AsPathOptions::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AsPathOptions::Config::has_data() const
{
    return allow_own_as.is_set
	|| replace_peer_as.is_set;
}

bool Bgp::Neighbors::Neighbor::AsPathOptions::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_own_as.operation)
	|| is_set(replace_peer_as.operation);
}

std::string Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_own_as.is_set || is_set(allow_own_as.operation)) leaf_name_data.push_back(allow_own_as.get_name_leafdata());
    if (replace_peer_as.is_set || is_set(replace_peer_as.operation)) leaf_name_data.push_back(replace_peer_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AsPathOptions::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as = value;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as = value;
    }
}

Bgp::Neighbors::Neighbor::AsPathOptions::State::State()
    :
    allow_own_as{YType::uint8, "allow-own-as"},
    replace_peer_as{YType::boolean, "replace-peer-as"}
{
    yang_name = "state"; yang_parent_name = "as-path-options";
}

Bgp::Neighbors::Neighbor::AsPathOptions::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AsPathOptions::State::has_data() const
{
    return allow_own_as.is_set
	|| replace_peer_as.is_set;
}

bool Bgp::Neighbors::Neighbor::AsPathOptions::State::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_own_as.operation)
	|| is_set(replace_peer_as.operation);
}

std::string Bgp::Neighbors::Neighbor::AsPathOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AsPathOptions::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_own_as.is_set || is_set(allow_own_as.operation)) leaf_name_data.push_back(allow_own_as.get_name_leafdata());
    if (replace_peer_as.is_set || is_set(replace_peer_as.operation)) leaf_name_data.push_back(replace_peer_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AsPathOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AsPathOptions::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AsPathOptions::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as = value;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as = value;
    }
}

Bgp::Neighbors::Neighbor::AddPaths::AddPaths()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AddPaths::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AddPaths::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "add-paths"; yang_parent_name = "neighbor";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AddPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-paths";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AddPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddPaths' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AddPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AddPaths::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AddPaths::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AddPaths::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AddPaths::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::AddPaths::Config::Config()
    :
    receive{YType::boolean, "receive"},
    send_max{YType::uint8, "send-max"}
{
    yang_name = "config"; yang_parent_name = "add-paths";
}

Bgp::Neighbors::Neighbor::AddPaths::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AddPaths::Config::has_data() const
{
    return receive.is_set
	|| send_max.is_set;
}

bool Bgp::Neighbors::Neighbor::AddPaths::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(send_max.operation);
}

std::string Bgp::Neighbors::Neighbor::AddPaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AddPaths::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send_max.is_set || is_set(send_max.operation)) leaf_name_data.push_back(send_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AddPaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AddPaths::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AddPaths::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "send-max")
    {
        send_max = value;
    }
}

Bgp::Neighbors::Neighbor::AddPaths::State::State()
    :
    receive{YType::boolean, "receive"},
    send_max{YType::uint8, "send-max"}
{
    yang_name = "state"; yang_parent_name = "add-paths";
}

Bgp::Neighbors::Neighbor::AddPaths::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AddPaths::State::has_data() const
{
    return receive.is_set
	|| send_max.is_set;
}

bool Bgp::Neighbors::Neighbor::AddPaths::State::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(send_max.operation);
}

std::string Bgp::Neighbors::Neighbor::AddPaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AddPaths::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send_max.is_set || is_set(send_max.operation)) leaf_name_data.push_back(send_max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AddPaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AddPaths::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AddPaths::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "send-max")
    {
        send_max = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafis()
{
    yang_name = "afi-safis"; yang_parent_name = "neighbor";
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
    return is_set(operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safis";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfiSafis' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afi-safi")
    {
        for(auto const & c : afi_safi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi>();
        c->parent = this;
        afi_safi.push_back(std::move(c));
        children[segment_path] = afi_safi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::get_children()
{
    for (auto const & c : afi_safi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::AfiSafi()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"}
    	,
    apply_policy(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy>())
	,config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config>())
	,graceful_restart(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart>())
	,ipv4_labelled_unicast(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast>())
	,ipv4_unicast(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast>())
	,ipv6_labelled_unicast(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast>())
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
    children["apply-policy"] = apply_policy;

    config->parent = this;
    children["config"] = config;

    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart;

    ipv4_labelled_unicast->parent = this;
    children["ipv4-labelled-unicast"] = ipv4_labelled_unicast;

    ipv4_unicast->parent = this;
    children["ipv4-unicast"] = ipv4_unicast;

    ipv6_labelled_unicast->parent = this;
    children["ipv6-labelled-unicast"] = ipv6_labelled_unicast;

    ipv6_unicast->parent = this;
    children["ipv6-unicast"] = ipv6_unicast;

    l2vpn_evpn->parent = this;
    children["l2vpn-evpn"] = l2vpn_evpn;

    l2vpn_vpls->parent = this;
    children["l2vpn-vpls"] = l2vpn_vpls;

    l3vpn_ipv4_multicast->parent = this;
    children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;

    l3vpn_ipv4_unicast->parent = this;
    children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;

    l3vpn_ipv6_multicast->parent = this;
    children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;

    l3vpn_ipv6_unicast->parent = this;
    children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;

    state->parent = this;
    children["state"] = state;

    use_multiple_paths->parent = this;
    children["use-multiple-paths"] = use_multiple_paths;

    yang_name = "afi-safi"; yang_parent_name = "afi-safis";
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
	|| (ipv4_labelled_unicast !=  nullptr && ipv4_labelled_unicast->has_data())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_data())
	|| (ipv6_labelled_unicast !=  nullptr && ipv6_labelled_unicast->has_data())
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
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ipv4_labelled_unicast !=  nullptr && ipv4_labelled_unicast->has_operation())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation())
	|| (ipv6_labelled_unicast !=  nullptr && ipv6_labelled_unicast->has_operation())
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

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfiSafi' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy != nullptr)
        {
            children["apply-policy"] = apply_policy;
        }
        else
        {
            apply_policy = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy>();
            apply_policy->parent = this;
            children["apply-policy"] = apply_policy;
        }
        return children.at("apply-policy");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
        else
        {
            graceful_restart = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart;
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "ipv4-labelled-unicast")
    {
        if(ipv4_labelled_unicast != nullptr)
        {
            children["ipv4-labelled-unicast"] = ipv4_labelled_unicast;
        }
        else
        {
            ipv4_labelled_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast>();
            ipv4_labelled_unicast->parent = this;
            children["ipv4-labelled-unicast"] = ipv4_labelled_unicast;
        }
        return children.at("ipv4-labelled-unicast");
    }

    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast != nullptr)
        {
            children["ipv4-unicast"] = ipv4_unicast;
        }
        else
        {
            ipv4_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast>();
            ipv4_unicast->parent = this;
            children["ipv4-unicast"] = ipv4_unicast;
        }
        return children.at("ipv4-unicast");
    }

    if(child_yang_name == "ipv6-labelled-unicast")
    {
        if(ipv6_labelled_unicast != nullptr)
        {
            children["ipv6-labelled-unicast"] = ipv6_labelled_unicast;
        }
        else
        {
            ipv6_labelled_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast>();
            ipv6_labelled_unicast->parent = this;
            children["ipv6-labelled-unicast"] = ipv6_labelled_unicast;
        }
        return children.at("ipv6-labelled-unicast");
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast != nullptr)
        {
            children["ipv6-unicast"] = ipv6_unicast;
        }
        else
        {
            ipv6_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast>();
            ipv6_unicast->parent = this;
            children["ipv6-unicast"] = ipv6_unicast;
        }
        return children.at("ipv6-unicast");
    }

    if(child_yang_name == "l2vpn-evpn")
    {
        if(l2vpn_evpn != nullptr)
        {
            children["l2vpn-evpn"] = l2vpn_evpn;
        }
        else
        {
            l2vpn_evpn = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn>();
            l2vpn_evpn->parent = this;
            children["l2vpn-evpn"] = l2vpn_evpn;
        }
        return children.at("l2vpn-evpn");
    }

    if(child_yang_name == "l2vpn-vpls")
    {
        if(l2vpn_vpls != nullptr)
        {
            children["l2vpn-vpls"] = l2vpn_vpls;
        }
        else
        {
            l2vpn_vpls = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls>();
            l2vpn_vpls->parent = this;
            children["l2vpn-vpls"] = l2vpn_vpls;
        }
        return children.at("l2vpn-vpls");
    }

    if(child_yang_name == "l3vpn-ipv4-multicast")
    {
        if(l3vpn_ipv4_multicast != nullptr)
        {
            children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
        }
        else
        {
            l3vpn_ipv4_multicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast>();
            l3vpn_ipv4_multicast->parent = this;
            children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
        }
        return children.at("l3vpn-ipv4-multicast");
    }

    if(child_yang_name == "l3vpn-ipv4-unicast")
    {
        if(l3vpn_ipv4_unicast != nullptr)
        {
            children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
        }
        else
        {
            l3vpn_ipv4_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast>();
            l3vpn_ipv4_unicast->parent = this;
            children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
        }
        return children.at("l3vpn-ipv4-unicast");
    }

    if(child_yang_name == "l3vpn-ipv6-multicast")
    {
        if(l3vpn_ipv6_multicast != nullptr)
        {
            children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
        }
        else
        {
            l3vpn_ipv6_multicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast>();
            l3vpn_ipv6_multicast->parent = this;
            children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
        }
        return children.at("l3vpn-ipv6-multicast");
    }

    if(child_yang_name == "l3vpn-ipv6-unicast")
    {
        if(l3vpn_ipv6_unicast != nullptr)
        {
            children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
        }
        else
        {
            l3vpn_ipv6_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast>();
            l3vpn_ipv6_unicast->parent = this;
            children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
        }
        return children.at("l3vpn-ipv6-unicast");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths != nullptr)
        {
            children["use-multiple-paths"] = use_multiple_paths;
        }
        else
        {
            use_multiple_paths = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths>();
            use_multiple_paths->parent = this;
            children["use-multiple-paths"] = use_multiple_paths;
        }
        return children.at("use-multiple-paths");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::get_children()
{
    if(children.find("apply-policy") == children.end())
    {
        if(apply_policy != nullptr)
        {
            children["apply-policy"] = apply_policy;
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
    }

    if(children.find("ipv4-labelled-unicast") == children.end())
    {
        if(ipv4_labelled_unicast != nullptr)
        {
            children["ipv4-labelled-unicast"] = ipv4_labelled_unicast;
        }
    }

    if(children.find("ipv4-unicast") == children.end())
    {
        if(ipv4_unicast != nullptr)
        {
            children["ipv4-unicast"] = ipv4_unicast;
        }
    }

    if(children.find("ipv6-labelled-unicast") == children.end())
    {
        if(ipv6_labelled_unicast != nullptr)
        {
            children["ipv6-labelled-unicast"] = ipv6_labelled_unicast;
        }
    }

    if(children.find("ipv6-unicast") == children.end())
    {
        if(ipv6_unicast != nullptr)
        {
            children["ipv6-unicast"] = ipv6_unicast;
        }
    }

    if(children.find("l2vpn-evpn") == children.end())
    {
        if(l2vpn_evpn != nullptr)
        {
            children["l2vpn-evpn"] = l2vpn_evpn;
        }
    }

    if(children.find("l2vpn-vpls") == children.end())
    {
        if(l2vpn_vpls != nullptr)
        {
            children["l2vpn-vpls"] = l2vpn_vpls;
        }
    }

    if(children.find("l3vpn-ipv4-multicast") == children.end())
    {
        if(l3vpn_ipv4_multicast != nullptr)
        {
            children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
        }
    }

    if(children.find("l3vpn-ipv4-unicast") == children.end())
    {
        if(l3vpn_ipv4_unicast != nullptr)
        {
            children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
        }
    }

    if(children.find("l3vpn-ipv6-multicast") == children.end())
    {
        if(l3vpn_ipv6_multicast != nullptr)
        {
            children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
        }
    }

    if(children.find("l3vpn-ipv6-unicast") == children.end())
    {
        if(l3vpn_ipv6_unicast != nullptr)
        {
            children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("use-multiple-paths") == children.end())
    {
        if(use_multiple_paths != nullptr)
        {
            children["use-multiple-paths"] = use_multiple_paths;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "graceful-restart"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "config"; yang_parent_name = "graceful-restart";
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
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::State()
    :
    advertised{YType::boolean, "advertised"},
    enabled{YType::boolean, "enabled"},
    received{YType::boolean, "received"}
{
    yang_name = "state"; yang_parent_name = "graceful-restart";
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
    return is_set(operation)
	|| is_set(advertised.operation)
	|| is_set(enabled.operation)
	|| is_set(received.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertised.is_set || is_set(advertised.operation)) leaf_name_data.push_back(advertised.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertised")
    {
        advertised = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::Config()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"}
{
    yang_name = "config"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(enabled.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::State()
    :
    active{YType::boolean, "active"},
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"}
    	,
    prefixes(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes>())
{
    prefixes->parent = this;
    children["prefixes"] = prefixes;

    yang_name = "state"; yang_parent_name = "afi-safi";
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::has_data() const
{
    return active.is_set
	|| afi_safi_name.is_set
	|| enabled.is_set
	|| (prefixes !=  nullptr && prefixes->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(enabled.operation)
	|| (prefixes !=  nullptr && prefixes->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes;
        }
        else
        {
            prefixes = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes>();
            prefixes->parent = this;
            children["prefixes"] = prefixes;
        }
        return children.at("prefixes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::get_children()
{
    if(children.find("prefixes") == children.end())
    {
        if(prefixes != nullptr)
        {
            children["prefixes"] = prefixes;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::Prefixes()
    :
    installed{YType::uint32, "installed"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "prefixes"; yang_parent_name = "state";
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::~Prefixes()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::has_data() const
{
    return installed.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(installed.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefixes' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (installed.is_set || is_set(installed.operation)) leaf_name_data.push_back(installed.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "installed")
    {
        installed = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "apply-policy"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ApplyPolicy' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::Config()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{
    yang_name = "config"; yang_parent_name = "apply-policy";
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(default_export_policy.operation)
	|| is_set(default_import_policy.operation)
	|| is_set(export_policy.operation)
	|| is_set(import_policy.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.operation)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.operation)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
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

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::State()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{
    yang_name = "state"; yang_parent_name = "apply-policy";
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
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(default_export_policy.operation)
	|| is_set(default_import_policy.operation)
	|| is_set(export_policy.operation)
	|| is_set(import_policy.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.operation)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.operation)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
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

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config>())
	,prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State>())
{
    config->parent = this;
    children["config"] = config;

    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    state->parent = this;
    children["state"] = state;

    yang_name = "ipv4-unicast"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
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

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Unicast' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-unicast";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{
    yang_name = "config"; yang_parent_name = "ipv4-unicast";
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
    return is_set(operation)
	|| is_set(send_default_route.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.operation)) leaf_name_data.push_back(send_default_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{
    yang_name = "state"; yang_parent_name = "ipv4-unicast";
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
    return is_set(operation)
	|| is_set(send_default_route.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.operation)) leaf_name_data.push_back(send_default_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config>())
	,prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State>())
{
    config->parent = this;
    children["config"] = config;

    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    state->parent = this;
    children["state"] = state;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi";
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
    return is_set(operation)
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

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Unicast' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-unicast";
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
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixLimit' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "config"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{
    yang_name = "state"; yang_parent_name = "prefix-limit";
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
    return is_set(operation)
	|| is_set(max_prefixes.operation)
	|| is_set(restart_timer.operation)
	|| is_set(shutdown_threshold_pct.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.operation)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.operation)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.operation)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{
    yang_name = "config"; yang_parent_name = "ipv6-unicast";
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
    return is_set(operation)
	|| is_set(send_default_route.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.operation)) leaf_name_data.push_back(send_default_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{
    yang_name = "state"; yang_parent_name = "ipv6-unicast";
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
    return is_set(operation)
	|| is_set(send_default_route.operation);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.operation)) leaf_name_data.push_back(send_default_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_children()
{
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
    }
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::Ipv4LabelledUnicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;
    children["prefix-limit"] = prefix_limit;

    yang_name = "ipv4-labelled-unicast"; yang_parent_name = "afi-safi";
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::~Ipv4LabelledUnicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::has_operation() const
{
    return is_set(operation)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-labelled-unicast";

    return path_buffer.str();

}

EntityPath Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4LabelledUnicast' in openconfig_bgp cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
        else
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit>();
            prefix_limit->parent = this;
            children["prefix-limit"] = prefix_limit;
        }
        return children.at("prefix-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::get_children()
{
    if(children.find("prefix-limit") == children.end())
    {
        if(prefix_limit != nullptr)
        {
            children["prefix-limit"] = prefix_limit;
        }
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Bgp::Neighbors::Neighbor::State::SessionStateEnum::IDLE {0, "IDLE"};
const Enum::YLeaf Bgp::Neighbors::Neighbor::State::SessionStateEnum::CONNECT {1, "CONNECT"};
const Enum::YLeaf Bgp::Neighbors::Neighbor::State::SessionStateEnum::ACTIVE {2, "ACTIVE"};
const Enum::YLeaf Bgp::Neighbors::Neighbor::State::SessionStateEnum::OPENSENT {3, "OPENSENT"};
const Enum::YLeaf Bgp::Neighbors::Neighbor::State::SessionStateEnum::OPENCONFIRM {4, "OPENCONFIRM"};
const Enum::YLeaf Bgp::Neighbors::Neighbor::State::SessionStateEnum::ESTABLISHED {5, "ESTABLISHED"};


}
}

