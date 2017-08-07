
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_local_routing.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace openconfig_local_routing {

Local_Defined_Next_Hop::Local_Defined_Next_Hop()
     : Identity("http://openconfig.net/yang/local-routing", "openconfig-local-routing", "openconfig-local-routing:LOCAL_DEFINED_NEXT_HOP")
{
}

Local_Defined_Next_Hop::~Local_Defined_Next_Hop()
{
}

LocalRoutes::LocalRoutes()
    :
    config(std::make_shared<LocalRoutes::Config>())
	,local_aggregates(std::make_shared<LocalRoutes::LocalAggregates>())
	,state(std::make_shared<LocalRoutes::State>())
	,static_routes(std::make_shared<LocalRoutes::StaticRoutes>())
{
    config->parent = this;

    local_aggregates->parent = this;

    state->parent = this;

    static_routes->parent = this;

    yang_name = "local-routes"; yang_parent_name = "openconfig-local-routing";
}

LocalRoutes::~LocalRoutes()
{
}

bool LocalRoutes::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (local_aggregates !=  nullptr && local_aggregates->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data());
}

bool LocalRoutes::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (local_aggregates !=  nullptr && local_aggregates->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation());
}

std::string LocalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-local-routing:local-routes";

    return path_buffer.str();

}

const EntityPath LocalRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<LocalRoutes::Config>();
        }
        return config;
    }

    if(child_yang_name == "local-aggregates")
    {
        if(local_aggregates == nullptr)
        {
            local_aggregates = std::make_shared<LocalRoutes::LocalAggregates>();
        }
        return local_aggregates;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<LocalRoutes::State>();
        }
        return state;
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes == nullptr)
        {
            static_routes = std::make_shared<LocalRoutes::StaticRoutes>();
        }
        return static_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(local_aggregates != nullptr)
    {
        children["local-aggregates"] = local_aggregates;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(static_routes != nullptr)
    {
        children["static-routes"] = static_routes;
    }

    return children;
}

void LocalRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LocalRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> LocalRoutes::clone_ptr() const
{
    return std::make_shared<LocalRoutes>();
}

std::string LocalRoutes::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string LocalRoutes::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function LocalRoutes::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LocalRoutes::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool LocalRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "local-aggregates" || name == "state" || name == "static-routes")
        return true;
    return false;
}

LocalRoutes::Config::Config()
{
    yang_name = "config"; yang_parent_name = "local-routes";
}

LocalRoutes::Config::~Config()
{
}

bool LocalRoutes::Config::has_data() const
{
    return false;
}

bool LocalRoutes::Config::has_operation() const
{
    return is_set(yfilter);
}

std::string LocalRoutes::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath LocalRoutes::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-local-routing:local-routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LocalRoutes::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LocalRoutes::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LocalRoutes::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

LocalRoutes::State::State()
{
    yang_name = "state"; yang_parent_name = "local-routes";
}

LocalRoutes::State::~State()
{
}

bool LocalRoutes::State::has_data() const
{
    return false;
}

bool LocalRoutes::State::has_operation() const
{
    return is_set(yfilter);
}

std::string LocalRoutes::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath LocalRoutes::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-local-routing:local-routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LocalRoutes::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LocalRoutes::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LocalRoutes::State::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

LocalRoutes::StaticRoutes::StaticRoutes()
{
    yang_name = "static-routes"; yang_parent_name = "local-routes";
}

LocalRoutes::StaticRoutes::~StaticRoutes()
{
}

bool LocalRoutes::StaticRoutes::has_data() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_data())
            return true;
    }
    return false;
}

bool LocalRoutes::StaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<static_.size(); index++)
    {
        if(static_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LocalRoutes::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";

    return path_buffer.str();

}

const EntityPath LocalRoutes::StaticRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-local-routing:local-routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        for(auto const & c : static_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LocalRoutes::StaticRoutes::Static_>();
        c->parent = this;
        static_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::StaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LocalRoutes::StaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LocalRoutes::StaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LocalRoutes::StaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

LocalRoutes::StaticRoutes::Static_::Static_()
    :
    prefix{YType::str, "prefix"}
    	,
    config(std::make_shared<LocalRoutes::StaticRoutes::Static_::Config>())
	,next_hops(std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops>())
	,state(std::make_shared<LocalRoutes::StaticRoutes::Static_::State>())
{
    config->parent = this;

    next_hops->parent = this;

    state->parent = this;

    yang_name = "static"; yang_parent_name = "static-routes";
}

LocalRoutes::StaticRoutes::Static_::~Static_()
{
}

bool LocalRoutes::StaticRoutes::Static_::has_data() const
{
    return prefix.is_set
	|| (config !=  nullptr && config->has_data())
	|| (next_hops !=  nullptr && next_hops->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool LocalRoutes::StaticRoutes::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (next_hops !=  nullptr && next_hops->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string LocalRoutes::StaticRoutes::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath LocalRoutes::StaticRoutes::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-local-routing:local-routes/static-routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::StaticRoutes::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<LocalRoutes::StaticRoutes::Static_::Config>();
        }
        return config;
    }

    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops>();
        }
        return next_hops;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<LocalRoutes::StaticRoutes::Static_::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::StaticRoutes::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(next_hops != nullptr)
    {
        children["next-hops"] = next_hops;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void LocalRoutes::StaticRoutes::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void LocalRoutes::StaticRoutes::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool LocalRoutes::StaticRoutes::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "next-hops" || name == "state" || name == "prefix")
        return true;
    return false;
}

LocalRoutes::StaticRoutes::Static_::Config::Config()
    :
    prefix{YType::str, "prefix"},
    set_tag{YType::str, "set-tag"}
{
    yang_name = "config"; yang_parent_name = "static";
}

LocalRoutes::StaticRoutes::Static_::Config::~Config()
{
}

bool LocalRoutes::StaticRoutes::Static_::Config::has_data() const
{
    return prefix.is_set
	|| set_tag.is_set;
}

bool LocalRoutes::StaticRoutes::Static_::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string LocalRoutes::StaticRoutes::Static_::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath LocalRoutes::StaticRoutes::Static_::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_local_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::StaticRoutes::Static_::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::StaticRoutes::Static_::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LocalRoutes::StaticRoutes::Static_::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void LocalRoutes::StaticRoutes::Static_::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool LocalRoutes::StaticRoutes::Static_::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "set-tag")
        return true;
    return false;
}

LocalRoutes::StaticRoutes::Static_::State::State()
    :
    prefix{YType::str, "prefix"},
    set_tag{YType::str, "set-tag"}
{
    yang_name = "state"; yang_parent_name = "static";
}

LocalRoutes::StaticRoutes::Static_::State::~State()
{
}

bool LocalRoutes::StaticRoutes::Static_::State::has_data() const
{
    return prefix.is_set
	|| set_tag.is_set;
}

bool LocalRoutes::StaticRoutes::Static_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string LocalRoutes::StaticRoutes::Static_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath LocalRoutes::StaticRoutes::Static_::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_local_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::StaticRoutes::Static_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::StaticRoutes::Static_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LocalRoutes::StaticRoutes::Static_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void LocalRoutes::StaticRoutes::Static_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool LocalRoutes::StaticRoutes::Static_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "set-tag")
        return true;
    return false;
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHops()
{
    yang_name = "next-hops"; yang_parent_name = "static";
}

LocalRoutes::StaticRoutes::Static_::NextHops::~NextHops()
{
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::has_data() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LocalRoutes::StaticRoutes::Static_::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";

    return path_buffer.str();

}

const EntityPath LocalRoutes::StaticRoutes::Static_::NextHops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHops' in openconfig_local_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::StaticRoutes::Static_::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        for(auto const & c : next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops::NextHop>();
        c->parent = this;
        next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::StaticRoutes::Static_::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LocalRoutes::StaticRoutes::Static_::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LocalRoutes::StaticRoutes::Static_::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::NextHop()
    :
    index_{YType::str, "index"}
    	,
    config(std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config>())
	,interface_ref(std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef>())
	,state(std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State>())
{
    config->parent = this;

    interface_ref->parent = this;

    state->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops";
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::~NextHop()
{
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::has_data() const
{
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in openconfig_local_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config>();
        }
        return config;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "interface-ref" || name == "state" || name == "index")
        return true;
    return false;
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::Config()
    :
    index_{YType::str, "index"},
    metric{YType::uint32, "metric"},
    next_hop{YType::str, "next-hop"},
    recurse{YType::boolean, "recurse"}
{
    yang_name = "config"; yang_parent_name = "next-hop";
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::~Config()
{
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::has_data() const
{
    return index_.is_set
	|| metric.is_set
	|| next_hop.is_set
	|| recurse.is_set;
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(recurse.yfilter);
}

std::string LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_local_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (recurse.is_set || is_set(recurse.yfilter)) leaf_name_data.push_back(recurse.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurse")
    {
        recurse = value;
        recurse.value_namespace = name_space;
        recurse.value_namespace_prefix = name_space_prefix;
    }
}

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "recurse")
    {
        recurse.yfilter = yfilter;
    }
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "metric" || name == "next-hop" || name == "recurse")
        return true;
    return false;
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State::State()
    :
    index_{YType::str, "index"},
    metric{YType::uint32, "metric"},
    next_hop{YType::str, "next-hop"},
    recurse{YType::boolean, "recurse"}
{
    yang_name = "state"; yang_parent_name = "next-hop";
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State::~State()
{
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State::has_data() const
{
    return index_.is_set
	|| metric.is_set
	|| next_hop.is_set
	|| recurse.is_set;
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(recurse.yfilter);
}

std::string LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_local_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (recurse.is_set || is_set(recurse.yfilter)) leaf_name_data.push_back(recurse.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurse")
    {
        recurse = value;
        recurse.value_namespace = name_space;
        recurse.value_namespace_prefix = name_space_prefix;
    }
}

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "recurse")
    {
        recurse.yfilter = yfilter;
    }
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "metric" || name == "next-hop" || name == "recurse")
        return true;
    return false;
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config>())
	,state(std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop";
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";

    return path_buffer.str();

}

const EntityPath LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceRef' in openconfig_local_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::get_children() const
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

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "config"; yang_parent_name = "interface-ref";
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config::~Config()
{
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_local_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{
    yang_name = "state"; yang_parent_name = "interface-ref";
}

LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    return interface.is_set
	|| subinterface.is_set;
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_local_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subinterface")
    {
        subinterface = value;
        subinterface.value_namespace = name_space;
        subinterface.value_namespace_prefix = name_space_prefix;
    }
}

void LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "subinterface")
    {
        subinterface.yfilter = yfilter;
    }
}

bool LocalRoutes::StaticRoutes::Static_::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

LocalRoutes::LocalAggregates::LocalAggregates()
{
    yang_name = "local-aggregates"; yang_parent_name = "local-routes";
}

LocalRoutes::LocalAggregates::~LocalAggregates()
{
}

bool LocalRoutes::LocalAggregates::has_data() const
{
    for (std::size_t index=0; index<aggregate.size(); index++)
    {
        if(aggregate[index]->has_data())
            return true;
    }
    return false;
}

bool LocalRoutes::LocalAggregates::has_operation() const
{
    for (std::size_t index=0; index<aggregate.size(); index++)
    {
        if(aggregate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LocalRoutes::LocalAggregates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-aggregates";

    return path_buffer.str();

}

const EntityPath LocalRoutes::LocalAggregates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-local-routing:local-routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::LocalAggregates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        for(auto const & c : aggregate)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LocalRoutes::LocalAggregates::Aggregate>();
        c->parent = this;
        aggregate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::LocalAggregates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : aggregate)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LocalRoutes::LocalAggregates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LocalRoutes::LocalAggregates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LocalRoutes::LocalAggregates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate")
        return true;
    return false;
}

LocalRoutes::LocalAggregates::Aggregate::Aggregate()
    :
    prefix{YType::str, "prefix"}
    	,
    config(std::make_shared<LocalRoutes::LocalAggregates::Aggregate::Config>())
	,state(std::make_shared<LocalRoutes::LocalAggregates::Aggregate::State>())
{
    config->parent = this;

    state->parent = this;

    yang_name = "aggregate"; yang_parent_name = "local-aggregates";
}

LocalRoutes::LocalAggregates::Aggregate::~Aggregate()
{
}

bool LocalRoutes::LocalAggregates::Aggregate::has_data() const
{
    return prefix.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool LocalRoutes::LocalAggregates::Aggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string LocalRoutes::LocalAggregates::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath LocalRoutes::LocalAggregates::Aggregate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-local-routing:local-routes/local-aggregates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::LocalAggregates::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<LocalRoutes::LocalAggregates::Aggregate::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<LocalRoutes::LocalAggregates::Aggregate::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::LocalAggregates::Aggregate::get_children() const
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

void LocalRoutes::LocalAggregates::Aggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void LocalRoutes::LocalAggregates::Aggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool LocalRoutes::LocalAggregates::Aggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "prefix")
        return true;
    return false;
}

LocalRoutes::LocalAggregates::Aggregate::Config::Config()
    :
    discard{YType::boolean, "discard"},
    prefix{YType::str, "prefix"},
    set_tag{YType::str, "set-tag"}
{
    yang_name = "config"; yang_parent_name = "aggregate";
}

LocalRoutes::LocalAggregates::Aggregate::Config::~Config()
{
}

bool LocalRoutes::LocalAggregates::Aggregate::Config::has_data() const
{
    return discard.is_set
	|| prefix.is_set
	|| set_tag.is_set;
}

bool LocalRoutes::LocalAggregates::Aggregate::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discard.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string LocalRoutes::LocalAggregates::Aggregate::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath LocalRoutes::LocalAggregates::Aggregate::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_local_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard.is_set || is_set(discard.yfilter)) leaf_name_data.push_back(discard.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::LocalAggregates::Aggregate::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::LocalAggregates::Aggregate::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LocalRoutes::LocalAggregates::Aggregate::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discard")
    {
        discard = value;
        discard.value_namespace = name_space;
        discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void LocalRoutes::LocalAggregates::Aggregate::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discard")
    {
        discard.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool LocalRoutes::LocalAggregates::Aggregate::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "prefix" || name == "set-tag")
        return true;
    return false;
}

LocalRoutes::LocalAggregates::Aggregate::State::State()
    :
    discard{YType::boolean, "discard"},
    prefix{YType::str, "prefix"},
    set_tag{YType::str, "set-tag"}
{
    yang_name = "state"; yang_parent_name = "aggregate";
}

LocalRoutes::LocalAggregates::Aggregate::State::~State()
{
}

bool LocalRoutes::LocalAggregates::Aggregate::State::has_data() const
{
    return discard.is_set
	|| prefix.is_set
	|| set_tag.is_set;
}

bool LocalRoutes::LocalAggregates::Aggregate::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discard.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string LocalRoutes::LocalAggregates::Aggregate::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

const EntityPath LocalRoutes::LocalAggregates::Aggregate::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_local_routing cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discard.is_set || is_set(discard.yfilter)) leaf_name_data.push_back(discard.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LocalRoutes::LocalAggregates::Aggregate::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LocalRoutes::LocalAggregates::Aggregate::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LocalRoutes::LocalAggregates::Aggregate::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discard")
    {
        discard = value;
        discard.value_namespace = name_space;
        discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void LocalRoutes::LocalAggregates::Aggregate::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discard")
    {
        discard.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool LocalRoutes::LocalAggregates::Aggregate::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "prefix" || name == "set-tag")
        return true;
    return false;
}

Local_Link::Local_Link()
     : Identity("http://openconfig.net/yang/local-routing", "openconfig-local-routing", "openconfig-local-routing:LOCAL_LINK")
{
}

Local_Link::~Local_Link()
{
}

Drop::Drop()
     : Identity("http://openconfig.net/yang/local-routing", "openconfig-local-routing", "openconfig-local-routing:DROP")
{
}

Drop::~Drop()
{
}


}
}

