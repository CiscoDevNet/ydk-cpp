
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_bgp_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace openconfig_bgp {

Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    helper_only{YType::boolean, "helper-only"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"}
{
    yang_name = "config"; yang_parent_name = "graceful-restart";
}

Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::has_data() const
{
    return enabled.is_set
	|| helper_only.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set;
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(helper_only.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::get_entity_path(Entity* ancestor) const
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

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "helper-only" || name == "restart-time" || name == "stale-routes-time")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"},
    helper_only{YType::boolean, "helper-only"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"}
{
    yang_name = "state"; yang_parent_name = "graceful-restart";
}

Bgp::PeerGroups::PeerGroup::GracefulRestart::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::State::has_data() const
{
    return enabled.is_set
	|| helper_only.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set;
}

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(helper_only.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Bgp::PeerGroups::PeerGroup::GracefulRestart::State::get_entity_path(Entity* ancestor) const
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

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::PeerGroups::PeerGroup::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::PeerGroups::PeerGroup::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "helper-only" || name == "restart-time" || name == "stale-routes-time")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::RouteReflector::RouteReflector()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::RouteReflector::Config>())
	,state(std::make_shared<Bgp::PeerGroups::PeerGroup::RouteReflector::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "route-reflector"; yang_parent_name = "peer-group";
}

Bgp::PeerGroups::PeerGroup::RouteReflector::~RouteReflector()
{
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::RouteReflector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-reflector";

    return path_buffer.str();

}

const EntityPath Bgp::PeerGroups::PeerGroup::RouteReflector::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::RouteReflector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::RouteReflector::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::RouteReflector::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::RouteReflector::get_children() const
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

void Bgp::PeerGroups::PeerGroup::RouteReflector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::RouteReflector::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::RouteReflector::Config::Config()
    :
    route_reflector_client{YType::boolean, "route-reflector-client"},
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"}
{
    yang_name = "config"; yang_parent_name = "route-reflector";
}

Bgp::PeerGroups::PeerGroup::RouteReflector::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::Config::has_data() const
{
    return route_reflector_client.is_set
	|| route_reflector_cluster_id.is_set;
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(route_reflector_cluster_id.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::RouteReflector::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Bgp::PeerGroups::PeerGroup::RouteReflector::Config::get_entity_path(Entity* ancestor) const
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

    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.yfilter)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::RouteReflector::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::RouteReflector::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::RouteReflector::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
        route_reflector_cluster_id.value_namespace = name_space;
        route_reflector_cluster_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::RouteReflector::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-reflector-client" || name == "route-reflector-cluster-id")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::RouteReflector::State::State()
    :
    route_reflector_client{YType::boolean, "route-reflector-client"},
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"}
{
    yang_name = "state"; yang_parent_name = "route-reflector";
}

Bgp::PeerGroups::PeerGroup::RouteReflector::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::State::has_data() const
{
    return route_reflector_client.is_set
	|| route_reflector_cluster_id.is_set;
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(route_reflector_cluster_id.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::RouteReflector::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Bgp::PeerGroups::PeerGroup::RouteReflector::State::get_entity_path(Entity* ancestor) const
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

    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.yfilter)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::RouteReflector::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::RouteReflector::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::RouteReflector::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
        route_reflector_cluster_id.value_namespace = name_space;
        route_reflector_cluster_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::RouteReflector::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::RouteReflector::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-reflector-client" || name == "route-reflector-cluster-id")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::AsPathOptions()
    :
    config(std::make_shared<Bgp::PeerGroups::PeerGroup::AsPathOptions::Config>())
	,state(std::make_shared<Bgp::PeerGroups::PeerGroup::AsPathOptions::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "as-path-options"; yang_parent_name = "peer-group";
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::~AsPathOptions()
{
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::PeerGroups::PeerGroup::AsPathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-options";

    return path_buffer.str();

}

const EntityPath Bgp::PeerGroups::PeerGroup::AsPathOptions::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::AsPathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::PeerGroups::PeerGroup::AsPathOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::PeerGroups::PeerGroup::AsPathOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::AsPathOptions::get_children() const
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

void Bgp::PeerGroups::PeerGroup::AsPathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::PeerGroups::PeerGroup::AsPathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::Config()
    :
    allow_own_as{YType::uint8, "allow-own-as"},
    replace_peer_as{YType::boolean, "replace-peer-as"}
{
    yang_name = "config"; yang_parent_name = "as-path-options";
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::~Config()
{
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::has_data() const
{
    return allow_own_as.is_set
	|| replace_peer_as.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_own_as.yfilter)
	|| ydk::is_set(replace_peer_as.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::get_entity_path(Entity* ancestor) const
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

    if (allow_own_as.is_set || is_set(allow_own_as.yfilter)) leaf_name_data.push_back(allow_own_as.get_name_leafdata());
    if (replace_peer_as.is_set || is_set(replace_peer_as.yfilter)) leaf_name_data.push_back(replace_peer_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as = value;
        allow_own_as.value_namespace = name_space;
        allow_own_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as = value;
        replace_peer_as.value_namespace = name_space;
        replace_peer_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as.yfilter = yfilter;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-own-as" || name == "replace-peer-as")
        return true;
    return false;
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::State::State()
    :
    allow_own_as{YType::uint8, "allow-own-as"},
    replace_peer_as{YType::boolean, "replace-peer-as"}
{
    yang_name = "state"; yang_parent_name = "as-path-options";
}

Bgp::PeerGroups::PeerGroup::AsPathOptions::State::~State()
{
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::State::has_data() const
{
    return allow_own_as.is_set
	|| replace_peer_as.is_set;
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_own_as.yfilter)
	|| ydk::is_set(replace_peer_as.yfilter);
}

std::string Bgp::PeerGroups::PeerGroup::AsPathOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath Bgp::PeerGroups::PeerGroup::AsPathOptions::State::get_entity_path(Entity* ancestor) const
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

    if (allow_own_as.is_set || is_set(allow_own_as.yfilter)) leaf_name_data.push_back(allow_own_as.get_name_leafdata());
    if (replace_peer_as.is_set || is_set(replace_peer_as.yfilter)) leaf_name_data.push_back(replace_peer_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::PeerGroups::PeerGroup::AsPathOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::PeerGroups::PeerGroup::AsPathOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::PeerGroups::PeerGroup::AsPathOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as = value;
        allow_own_as.value_namespace = name_space;
        allow_own_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as = value;
        replace_peer_as.value_namespace = name_space;
        replace_peer_as.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::PeerGroups::PeerGroup::AsPathOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-own-as")
    {
        allow_own_as.yfilter = yfilter;
    }
    if(value_path == "replace-peer-as")
    {
        replace_peer_as.yfilter = yfilter;
    }
}

bool Bgp::PeerGroups::PeerGroup::AsPathOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-own-as" || name == "replace-peer-as")
        return true;
    return false;
}


}
}

