
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_network_instance_2.hpp"
#include "openconfig_network_instance_4.hpp"
#include "openconfig_network_instance_3.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_network_instance {

NetworkInstances::NetworkInstance::Protocols::Protocols()
    :
    protocol(this, {"identifier", "name"})
{

    yang_name = "protocols"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::~Protocols()
{
}

bool NetworkInstances::NetworkInstance::Protocols::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol>();
        ent_->parent = this;
        protocol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Protocol()
    :
    identifier{YType::identityref, "identifier"},
    name{YType::str, "name"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::State>())
    , static_routes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes>())
    , local_aggregates(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates>())
    , bgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp>())
    , isis(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis>())
{
    config->parent = this;
    state->parent = this;
    static_routes->parent = this;
    local_aggregates->parent = this;
    bgp->parent = this;
    isis->parent = this;

    yang_name = "protocol"; yang_parent_name = "protocols"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::~Protocol()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data())
	|| (local_aggregates !=  nullptr && local_aggregates->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation())
	|| (local_aggregates !=  nullptr && local_aggregates->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    ADD_KEY_TOKEN(identifier, "identifier");
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::State>();
        }
        return state;
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes == nullptr)
        {
            static_routes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes>();
        }
        return static_routes;
    }

    if(child_yang_name == "local-aggregates")
    {
        if(local_aggregates == nullptr)
        {
            local_aggregates = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates>();
        }
        return local_aggregates;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(static_routes != nullptr)
    {
        _children["static-routes"] = static_routes;
    }

    if(local_aggregates != nullptr)
    {
        _children["local-aggregates"] = local_aggregates;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "static-routes" || name == "local-aggregates" || name == "bgp" || name == "isis" || name == "identifier" || name == "name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Config::Config()
    :
    identifier{YType::identityref, "identifier"},
    name{YType::str, "name"},
    enabled{YType::boolean, "enabled"},
    default_metric{YType::uint32, "default-metric"}
{

    yang_name = "config"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Config::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set
	|| enabled.is_set
	|| default_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name" || name == "enabled" || name == "default-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::State::State()
    :
    identifier{YType::identityref, "identifier"},
    name{YType::str, "name"},
    enabled{YType::boolean, "enabled"},
    default_metric{YType::uint32, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set
	|| enabled.is_set
	|| default_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name" || name == "enabled" || name == "default-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoutes()
    :
    static_(this, {"prefix"})
{

    yang_name = "static-routes"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::~StaticRoutes()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_.len(); index++)
    {
        if(static_[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<static_.len(); index++)
    {
        if(static_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static>();
        ent_->parent = this;
        static_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : static_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Static()
    :
    prefix{YType::str, "prefix"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State>())
    , next_hops(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops>())
{
    config->parent = this;
    state->parent = this;
    next_hops->parent = this;

    yang_name = "static"; yang_parent_name = "static-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::~Static()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (next_hops !=  nullptr && next_hops->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (next_hops !=  nullptr && next_hops->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State>();
        }
        return state;
    }

    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops>();
        }
        return next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(next_hops != nullptr)
    {
        _children["next-hops"] = next_hops;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "next-hops" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::Config()
    :
    prefix{YType::str, "prefix"},
    set_tag{YType::str, "set-tag"}
{

    yang_name = "config"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| set_tag.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "set-tag")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::State()
    :
    prefix{YType::str, "prefix"},
    set_tag{YType::str, "set-tag"}
{

    yang_name = "state"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| set_tag.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "set-tag")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHops()
    :
    next_hop(this, {"index_"})
{

    yang_name = "next-hops"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::~NextHops()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop>();
        ent_->parent = this;
        next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::NextHop()
    :
    index_{YType::str, "index"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State>())
    , interface_ref(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef>())
{
    config->parent = this;
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::~NextHop()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        _children["interface-ref"] = interface_ref;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "interface-ref" || name == "index")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::Config()
    :
    index_{YType::str, "index"},
    next_hop{YType::str, "next-hop"},
    metric{YType::uint32, "metric"},
    recurse{YType::boolean, "recurse"}
{

    yang_name = "config"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| next_hop.is_set
	|| metric.is_set
	|| recurse.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(recurse.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (recurse.is_set || is_set(recurse.yfilter)) leaf_name_data.push_back(recurse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurse")
    {
        recurse = value;
        recurse.value_namespace = name_space;
        recurse.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "recurse")
    {
        recurse.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "next-hop" || name == "metric" || name == "recurse")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::State()
    :
    index_{YType::str, "index"},
    next_hop{YType::str, "next-hop"},
    metric{YType::uint32, "metric"},
    recurse{YType::boolean, "recurse"}
{

    yang_name = "state"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| next_hop.is_set
	|| metric.is_set
	|| recurse.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(recurse.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (recurse.is_set || is_set(recurse.yfilter)) leaf_name_data.push_back(recurse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurse")
    {
        recurse = value;
        recurse.value_namespace = name_space;
        recurse.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "recurse")
    {
        recurse.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "next-hop" || name == "metric" || name == "recurse")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::Config()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "config"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::str, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::Static::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::LocalAggregates()
    :
    aggregate(this, {"prefix"})
{

    yang_name = "local-aggregates"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::~LocalAggregates()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aggregate.len(); index++)
    {
        if(aggregate[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::has_operation() const
{
    for (std::size_t index=0; index<aggregate.len(); index++)
    {
        if(aggregate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-aggregates";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate>();
        ent_->parent = this;
        aggregate.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aggregate.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Aggregate()
    :
    prefix{YType::str, "prefix"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "aggregate"; yang_parent_name = "local-aggregates"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::~Aggregate()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::Config()
    :
    prefix{YType::str, "prefix"},
    discard{YType::boolean, "discard"},
    set_tag{YType::str, "set-tag"}
{

    yang_name = "config"; yang_parent_name = "aggregate"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| discard.is_set
	|| set_tag.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(discard.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (discard.is_set || is_set(discard.yfilter)) leaf_name_data.push_back(discard.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard")
    {
        discard = value;
        discard.value_namespace = name_space;
        discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "discard")
    {
        discard.yfilter = yfilter;
    }
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "discard" || name == "set-tag")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::State()
    :
    prefix{YType::str, "prefix"},
    discard{YType::boolean, "discard"},
    set_tag{YType::str, "set-tag"}
{

    yang_name = "state"; yang_parent_name = "aggregate"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| discard.is_set
	|| set_tag.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(discard.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (discard.is_set || is_set(discard.yfilter)) leaf_name_data.push_back(discard.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discard")
    {
        discard = value;
        discard.value_namespace = name_space;
        discard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-tag")
    {
        set_tag = value;
        set_tag.value_namespace = name_space;
        set_tag.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "discard")
    {
        discard.yfilter = yfilter;
    }
    if(value_path == "set-tag")
    {
        set_tag.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::LocalAggregates::Aggregate::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "discard" || name == "set-tag")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Bgp()
    :
    global(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global>())
    , neighbors(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors>())
    , peer_groups(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups>())
{
    global->parent = this;
    neighbors->parent = this;
    peer_groups->parent = this;

    yang_name = "bgp"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::~Bgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (peer_groups !=  nullptr && peer_groups->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (peer_groups !=  nullptr && peer_groups->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global>();
        }
        return global;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "peer-groups")
    {
        if(peer_groups == nullptr)
        {
            peer_groups = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::PeerGroups>();
        }
        return peer_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    if(peer_groups != nullptr)
    {
        _children["peer-groups"] = peer_groups;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "neighbors" || name == "peer-groups")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Global()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State>())
    , default_route_distance(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance>())
    , confederation(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation>())
    , graceful_restart(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart>())
    , use_multiple_paths(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths>())
    , route_selection_options(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions>())
    , afi_safis(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis>())
    , dynamic_neighbor_prefixes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes>())
{
    config->parent = this;
    state->parent = this;
    default_route_distance->parent = this;
    confederation->parent = this;
    graceful_restart->parent = this;
    use_multiple_paths->parent = this;
    route_selection_options->parent = this;
    afi_safis->parent = this;
    dynamic_neighbor_prefixes->parent = this;

    yang_name = "global"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::~Global()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (default_route_distance !=  nullptr && default_route_distance->has_data())
	|| (confederation !=  nullptr && confederation->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data())
	|| (route_selection_options !=  nullptr && route_selection_options->has_data())
	|| (afi_safis !=  nullptr && afi_safis->has_data())
	|| (dynamic_neighbor_prefixes !=  nullptr && dynamic_neighbor_prefixes->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (default_route_distance !=  nullptr && default_route_distance->has_operation())
	|| (confederation !=  nullptr && confederation->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation())
	|| (route_selection_options !=  nullptr && route_selection_options->has_operation())
	|| (afi_safis !=  nullptr && afi_safis->has_operation())
	|| (dynamic_neighbor_prefixes !=  nullptr && dynamic_neighbor_prefixes->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State>();
        }
        return state;
    }

    if(child_yang_name == "default-route-distance")
    {
        if(default_route_distance == nullptr)
        {
            default_route_distance = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance>();
        }
        return default_route_distance;
    }

    if(child_yang_name == "confederation")
    {
        if(confederation == nullptr)
        {
            confederation = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation>();
        }
        return confederation;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    if(child_yang_name == "route-selection-options")
    {
        if(route_selection_options == nullptr)
        {
            route_selection_options = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions>();
        }
        return route_selection_options;
    }

    if(child_yang_name == "afi-safis")
    {
        if(afi_safis == nullptr)
        {
            afi_safis = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis>();
        }
        return afi_safis;
    }

    if(child_yang_name == "dynamic-neighbor-prefixes")
    {
        if(dynamic_neighbor_prefixes == nullptr)
        {
            dynamic_neighbor_prefixes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes>();
        }
        return dynamic_neighbor_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(default_route_distance != nullptr)
    {
        _children["default-route-distance"] = default_route_distance;
    }

    if(confederation != nullptr)
    {
        _children["confederation"] = confederation;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(use_multiple_paths != nullptr)
    {
        _children["use-multiple-paths"] = use_multiple_paths;
    }

    if(route_selection_options != nullptr)
    {
        _children["route-selection-options"] = route_selection_options;
    }

    if(afi_safis != nullptr)
    {
        _children["afi-safis"] = afi_safis;
    }

    if(dynamic_neighbor_prefixes != nullptr)
    {
        _children["dynamic-neighbor-prefixes"] = dynamic_neighbor_prefixes;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "default-route-distance" || name == "confederation" || name == "graceful-restart" || name == "use-multiple-paths" || name == "route-selection-options" || name == "afi-safis" || name == "dynamic-neighbor-prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::Config()
    :
    as{YType::uint32, "as"},
    router_id{YType::str, "router-id"}
{

    yang_name = "config"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| router_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "router-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::State()
    :
    as{YType::uint32, "as"},
    router_id{YType::str, "router-id"},
    total_paths{YType::uint32, "total-paths"},
    total_prefixes{YType::uint32, "total-prefixes"}
{

    yang_name = "state"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| router_id.is_set
	|| total_paths.is_set
	|| total_prefixes.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_prefixes.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.yfilter)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "router-id" || name == "total-paths" || name == "total-prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::DefaultRouteDistance()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "default-route-distance"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::~DefaultRouteDistance()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-route-distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::Config()
    :
    external_route_distance{YType::uint8, "external-route-distance"},
    internal_route_distance{YType::uint8, "internal-route-distance"}
{

    yang_name = "config"; yang_parent_name = "default-route-distance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::has_data() const
{
    if (is_presence_container) return true;
    return external_route_distance.is_set
	|| internal_route_distance.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_route_distance.yfilter)
	|| ydk::is_set(internal_route_distance.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_distance.is_set || is_set(external_route_distance.yfilter)) leaf_name_data.push_back(external_route_distance.get_name_leafdata());
    if (internal_route_distance.is_set || is_set(internal_route_distance.yfilter)) leaf_name_data.push_back(internal_route_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-route-distance" || name == "internal-route-distance")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::State()
    :
    external_route_distance{YType::uint8, "external-route-distance"},
    internal_route_distance{YType::uint8, "internal-route-distance"}
{

    yang_name = "state"; yang_parent_name = "default-route-distance"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::has_data() const
{
    if (is_presence_container) return true;
    return external_route_distance.is_set
	|| internal_route_distance.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_route_distance.yfilter)
	|| ydk::is_set(internal_route_distance.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_distance.is_set || is_set(external_route_distance.yfilter)) leaf_name_data.push_back(external_route_distance.get_name_leafdata());
    if (internal_route_distance.is_set || is_set(internal_route_distance.yfilter)) leaf_name_data.push_back(internal_route_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DefaultRouteDistance::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-route-distance" || name == "internal-route-distance")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Confederation()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "confederation"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::~Confederation()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    identifier{YType::uint32, "identifier"},
    member_as{YType::uint32, "member-as"}
{

    yang_name = "config"; yang_parent_name = "confederation"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : member_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enabled.is_set
	|| identifier.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::has_operation() const
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

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    auto member_as_name_datas = member_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_as_name_datas.begin(), member_as_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "identifier" || name == "member-as")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::State()
    :
    enabled{YType::boolean, "enabled"},
    identifier{YType::uint32, "identifier"},
    member_as{YType::uint32, "member-as"}
{

    yang_name = "state"; yang_parent_name = "confederation"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : member_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enabled.is_set
	|| identifier.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::has_operation() const
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

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    auto member_as_name_datas = member_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_as_name_datas.begin(), member_as_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::Confederation::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "identifier" || name == "member-as")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::~GracefulRestart()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"},
    helper_only{YType::boolean, "helper-only"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set
	|| helper_only.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter)
	|| ydk::is_set(helper_only.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "restart-time" || name == "stale-routes-time" || name == "helper-only")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"},
    helper_only{YType::boolean, "helper-only"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set
	|| helper_only.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter)
	|| ydk::is_set(helper_only.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "restart-time" || name == "stale-routes-time" || name == "helper-only")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State>())
    , ebgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp>())
    , ibgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp>())
{
    config->parent = this;
    state->parent = this;
    ebgp->parent = this;
    ibgp->parent = this;

    yang_name = "use-multiple-paths"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::~UseMultiplePaths()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State>();
        }
        return state;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp>();
        }
        return ibgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(ebgp != nullptr)
    {
        _children["ebgp"] = ebgp;
    }

    if(ibgp != nullptr)
    {
        _children["ibgp"] = ibgp;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ebgp" || name == "ibgp")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::has_data() const
{
    if (is_presence_container) return true;
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::has_data() const
{
    if (is_presence_container) return true;
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ebgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::~Ibgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::has_data() const
{
    if (is_presence_container) return true;
    return maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::has_data() const
{
    if (is_presence_container) return true;
    return maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::UseMultiplePaths::Ibgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::RouteSelectionOptions()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "route-selection-options"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::~RouteSelectionOptions()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-selection-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::Config()
    :
    always_compare_med{YType::boolean, "always-compare-med"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    enable_aigp{YType::boolean, "enable-aigp"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "config"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::has_data() const
{
    if (is_presence_container) return true;
    return always_compare_med.is_set
	|| ignore_as_path_length.is_set
	|| external_compare_router_id.is_set
	|| advertise_inactive_routes.is_set
	|| enable_aigp.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always-compare-med" || name == "ignore-as-path-length" || name == "external-compare-router-id" || name == "advertise-inactive-routes" || name == "enable-aigp" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::State()
    :
    always_compare_med{YType::boolean, "always-compare-med"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    enable_aigp{YType::boolean, "enable-aigp"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "state"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::has_data() const
{
    if (is_presence_container) return true;
    return always_compare_med.is_set
	|| ignore_as_path_length.is_set
	|| external_compare_router_id.is_set
	|| advertise_inactive_routes.is_set
	|| enable_aigp.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::RouteSelectionOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always-compare-med" || name == "ignore-as-path-length" || name == "external-compare-router-id" || name == "advertise-inactive-routes" || name == "enable-aigp" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafis()
    :
    afi_safi(this, {"afi_safi_name"})
{

    yang_name = "afi-safis"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::~AfiSafis()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<afi_safi.len(); index++)
    {
        if(afi_safi[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::has_operation() const
{
    for (std::size_t index=0; index<afi_safi.len(); index++)
    {
        if(afi_safi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safi")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi>();
        ent_->parent = this;
        afi_safi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : afi_safi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::AfiSafi()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State>())
    , graceful_restart(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart>())
    , route_selection_options(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions>())
    , use_multiple_paths(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths>())
    , ipv4_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast>())
    , ipv6_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast>())
    , ipv4_labeled_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast>())
    , ipv6_labeled_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast>())
    , l3vpn_ipv4_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast>())
    , l3vpn_ipv6_unicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast>())
    , l3vpn_ipv4_multicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast>())
    , l3vpn_ipv6_multicast(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast>())
    , l2vpn_vpls(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls>())
    , l2vpn_evpn(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn>())
{
    config->parent = this;
    state->parent = this;
    graceful_restart->parent = this;
    route_selection_options->parent = this;
    use_multiple_paths->parent = this;
    ipv4_unicast->parent = this;
    ipv6_unicast->parent = this;
    ipv4_labeled_unicast->parent = this;
    ipv6_labeled_unicast->parent = this;
    l3vpn_ipv4_unicast->parent = this;
    l3vpn_ipv6_unicast->parent = this;
    l3vpn_ipv4_multicast->parent = this;
    l3vpn_ipv6_multicast->parent = this;
    l2vpn_vpls->parent = this;
    l2vpn_evpn->parent = this;

    yang_name = "afi-safi"; yang_parent_name = "afi-safis"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::~AfiSafi()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (route_selection_options !=  nullptr && route_selection_options->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_data())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_data())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_data())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_data())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_data())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_data())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_data())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_data())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_data())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (route_selection_options !=  nullptr && route_selection_options->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_operation())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_operation())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_operation())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_operation())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_operation())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_operation())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_operation())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi";
    ADD_KEY_TOKEN(afi_safi_name, "afi-safi-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State>();
        }
        return state;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "route-selection-options")
    {
        if(route_selection_options == nullptr)
        {
            route_selection_options = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions>();
        }
        return route_selection_options;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    if(child_yang_name == "ipv4-labeled-unicast")
    {
        if(ipv4_labeled_unicast == nullptr)
        {
            ipv4_labeled_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast>();
        }
        return ipv4_labeled_unicast;
    }

    if(child_yang_name == "ipv6-labeled-unicast")
    {
        if(ipv6_labeled_unicast == nullptr)
        {
            ipv6_labeled_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast>();
        }
        return ipv6_labeled_unicast;
    }

    if(child_yang_name == "l3vpn-ipv4-unicast")
    {
        if(l3vpn_ipv4_unicast == nullptr)
        {
            l3vpn_ipv4_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast>();
        }
        return l3vpn_ipv4_unicast;
    }

    if(child_yang_name == "l3vpn-ipv6-unicast")
    {
        if(l3vpn_ipv6_unicast == nullptr)
        {
            l3vpn_ipv6_unicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast>();
        }
        return l3vpn_ipv6_unicast;
    }

    if(child_yang_name == "l3vpn-ipv4-multicast")
    {
        if(l3vpn_ipv4_multicast == nullptr)
        {
            l3vpn_ipv4_multicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast>();
        }
        return l3vpn_ipv4_multicast;
    }

    if(child_yang_name == "l3vpn-ipv6-multicast")
    {
        if(l3vpn_ipv6_multicast == nullptr)
        {
            l3vpn_ipv6_multicast = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast>();
        }
        return l3vpn_ipv6_multicast;
    }

    if(child_yang_name == "l2vpn-vpls")
    {
        if(l2vpn_vpls == nullptr)
        {
            l2vpn_vpls = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls>();
        }
        return l2vpn_vpls;
    }

    if(child_yang_name == "l2vpn-evpn")
    {
        if(l2vpn_evpn == nullptr)
        {
            l2vpn_evpn = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn>();
        }
        return l2vpn_evpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(route_selection_options != nullptr)
    {
        _children["route-selection-options"] = route_selection_options;
    }

    if(use_multiple_paths != nullptr)
    {
        _children["use-multiple-paths"] = use_multiple_paths;
    }

    if(ipv4_unicast != nullptr)
    {
        _children["ipv4-unicast"] = ipv4_unicast;
    }

    if(ipv6_unicast != nullptr)
    {
        _children["ipv6-unicast"] = ipv6_unicast;
    }

    if(ipv4_labeled_unicast != nullptr)
    {
        _children["ipv4-labeled-unicast"] = ipv4_labeled_unicast;
    }

    if(ipv6_labeled_unicast != nullptr)
    {
        _children["ipv6-labeled-unicast"] = ipv6_labeled_unicast;
    }

    if(l3vpn_ipv4_unicast != nullptr)
    {
        _children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
    }

    if(l3vpn_ipv6_unicast != nullptr)
    {
        _children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
    }

    if(l3vpn_ipv4_multicast != nullptr)
    {
        _children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
    }

    if(l3vpn_ipv6_multicast != nullptr)
    {
        _children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
    }

    if(l2vpn_vpls != nullptr)
    {
        _children["l2vpn-vpls"] = l2vpn_vpls;
    }

    if(l2vpn_evpn != nullptr)
    {
        _children["l2vpn-evpn"] = l2vpn_evpn;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "graceful-restart" || name == "route-selection-options" || name == "use-multiple-paths" || name == "ipv4-unicast" || name == "ipv6-unicast" || name == "ipv4-labeled-unicast" || name == "ipv6-labeled-unicast" || name == "l3vpn-ipv4-unicast" || name == "l3vpn-ipv6-unicast" || name == "l3vpn-ipv4-multicast" || name == "l3vpn-ipv6-multicast" || name == "l2vpn-vpls" || name == "l2vpn-evpn" || name == "afi-safi-name")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::Config()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::State()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"},
    total_paths{YType::uint32, "total-paths"},
    total_prefixes{YType::uint32, "total-prefixes"}
{

    yang_name = "state"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi_name.is_set
	|| enabled.is_set
	|| total_paths.is_set
	|| total_prefixes.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_prefixes.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.yfilter)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "enabled" || name == "total-paths" || name == "total-prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::~GracefulRestart()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::RouteSelectionOptions()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "route-selection-options"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::~RouteSelectionOptions()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-selection-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::Config()
    :
    always_compare_med{YType::boolean, "always-compare-med"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    enable_aigp{YType::boolean, "enable-aigp"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "config"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_data() const
{
    if (is_presence_container) return true;
    return always_compare_med.is_set
	|| ignore_as_path_length.is_set
	|| external_compare_router_id.is_set
	|| advertise_inactive_routes.is_set
	|| enable_aigp.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always-compare-med" || name == "ignore-as-path-length" || name == "external-compare-router-id" || name == "advertise-inactive-routes" || name == "enable-aigp" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::State()
    :
    always_compare_med{YType::boolean, "always-compare-med"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    enable_aigp{YType::boolean, "enable-aigp"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "state"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_data() const
{
    if (is_presence_container) return true;
    return always_compare_med.is_set
	|| ignore_as_path_length.is_set
	|| external_compare_router_id.is_set
	|| advertise_inactive_routes.is_set
	|| enable_aigp.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always-compare-med" || name == "ignore-as-path-length" || name == "external-compare-router-id" || name == "advertise-inactive-routes" || name == "enable-aigp" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State>())
    , ebgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>())
    , ibgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>())
{
    config->parent = this;
    state->parent = this;
    ebgp->parent = this;
    ibgp->parent = this;

    yang_name = "use-multiple-paths"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::~UseMultiplePaths()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State>();
        }
        return state;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>();
        }
        return ibgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(ebgp != nullptr)
    {
        _children["ebgp"] = ebgp;
    }

    if(ibgp != nullptr)
    {
        _children["ibgp"] = ibgp;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ebgp" || name == "ibgp")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_data() const
{
    if (is_presence_container) return true;
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_data() const
{
    if (is_presence_container) return true;
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::~Ibgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_data() const
{
    if (is_presence_container) return true;
    return maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_data() const
{
    if (is_presence_container) return true;
    return maximum_paths.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>())
    , config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State>())
{
    prefix_limit->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::~Ipv4Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>())
    , config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State>())
{
    prefix_limit->parent = this;
    config->parent = this;
    state->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::~Ipv6Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit" || name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::has_data() const
{
    if (is_presence_container) return true;
    return send_default_route.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::Ipv4LabeledUnicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv4-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::~Ipv4LabeledUnicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::Ipv6LabeledUnicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv6-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::~Ipv6LabeledUnicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::L3vpnIpv4Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::~L3vpnIpv4Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::L3vpnIpv6Unicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::~L3vpnIpv6Unicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::L3vpnIpv4Multicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::~L3vpnIpv4Multicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv4Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::L3vpnIpv6Multicast()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::~L3vpnIpv6Multicast()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L3vpnIpv6Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::L2vpnVpls()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-vpls"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::~L2vpnVpls()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnVpls::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::L2vpnEvpn()
    :
    prefix_limit(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-evpn"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::~L2vpnEvpn()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::has_data() const
{
    if (is_presence_container) return true;
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_limit != nullptr)
    {
        _children["prefix-limit"] = prefix_limit;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::~PrefixLimit()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    prevent_teardown{YType::boolean, "prevent-teardown"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"},
    restart_timer{YType::str, "restart-timer"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_data() const
{
    if (is_presence_container) return true;
    return max_prefixes.is_set
	|| prevent_teardown.is_set
	|| shutdown_threshold_pct.is_set
	|| restart_timer.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(prevent_teardown.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter)
	|| ydk::is_set(restart_timer.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (prevent_teardown.is_set || is_set(prevent_teardown.yfilter)) leaf_name_data.push_back(prevent_teardown.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown = value;
        prevent_teardown.value_namespace = name_space;
        prevent_teardown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "prevent-teardown")
    {
        prevent_teardown.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::AfiSafis::AfiSafi::L2vpnEvpn::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "prevent-teardown" || name == "shutdown-threshold-pct" || name == "restart-timer")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefixes()
    :
    dynamic_neighbor_prefix(this, {"prefix"})
{

    yang_name = "dynamic-neighbor-prefixes"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::~DynamicNeighborPrefixes()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamic_neighbor_prefix.len(); index++)
    {
        if(dynamic_neighbor_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::has_operation() const
{
    for (std::size_t index=0; index<dynamic_neighbor_prefix.len(); index++)
    {
        if(dynamic_neighbor_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-neighbor-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-neighbor-prefix")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix>();
        ent_->parent = this;
        dynamic_neighbor_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dynamic_neighbor_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-neighbor-prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::DynamicNeighborPrefix()
    :
    prefix{YType::str, "prefix"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "dynamic-neighbor-prefix"; yang_parent_name = "dynamic-neighbor-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::~DynamicNeighborPrefix()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-neighbor-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::Config()
    :
    prefix{YType::str, "prefix"},
    peer_group{YType::str, "peer-group"}
{

    yang_name = "config"; yang_parent_name = "dynamic-neighbor-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| peer_group.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(peer_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (peer_group.is_set || is_set(peer_group.yfilter)) leaf_name_data.push_back(peer_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-group")
    {
        peer_group = value;
        peer_group.value_namespace = name_space;
        peer_group.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "peer-group")
    {
        peer_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "peer-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State::State()
    :
    prefix{YType::str, "prefix"},
    peer_group{YType::str, "peer-group"}
{

    yang_name = "state"; yang_parent_name = "dynamic-neighbor-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| peer_group.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(peer_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (peer_group.is_set || is_set(peer_group.yfilter)) leaf_name_data.push_back(peer_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-group")
    {
        peer_group = value;
        peer_group.value_namespace = name_space;
        peer_group.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "peer-group")
    {
        peer_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Global::DynamicNeighborPrefixes::DynamicNeighborPrefix::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "peer-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbors()
    :
    neighbor(this, {"neighbor_address"})
{

    yang_name = "neighbors"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::~Neighbors()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"}
        ,
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State>())
    , timers(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers>())
    , transport(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport>())
    , error_handling(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling>())
    , graceful_restart(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart>())
    , logging_options(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions>())
    , ebgp_multihop(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop>())
    , route_reflector(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector>())
    , as_path_options(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions>())
    , add_paths(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths>())
    , use_multiple_paths(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths>())
    , apply_policy(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy>())
    , afi_safis(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis>())
{
    config->parent = this;
    state->parent = this;
    timers->parent = this;
    transport->parent = this;
    error_handling->parent = this;
    graceful_restart->parent = this;
    logging_options->parent = this;
    ebgp_multihop->parent = this;
    route_reflector->parent = this;
    as_path_options->parent = this;
    add_paths->parent = this;
    use_multiple_paths->parent = this;
    apply_policy->parent = this;
    afi_safis->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::~Neighbor()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (error_handling !=  nullptr && error_handling->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (logging_options !=  nullptr && logging_options->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (route_reflector !=  nullptr && route_reflector->has_data())
	|| (as_path_options !=  nullptr && as_path_options->has_data())
	|| (add_paths !=  nullptr && add_paths->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data())
	|| (apply_policy !=  nullptr && apply_policy->has_data())
	|| (afi_safis !=  nullptr && afi_safis->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (error_handling !=  nullptr && error_handling->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (logging_options !=  nullptr && logging_options->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (route_reflector !=  nullptr && route_reflector->has_operation())
	|| (as_path_options !=  nullptr && as_path_options->has_operation())
	|| (add_paths !=  nullptr && add_paths->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation())
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (afi_safis !=  nullptr && afi_safis->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State>();
        }
        return state;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "error-handling")
    {
        if(error_handling == nullptr)
        {
            error_handling = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling>();
        }
        return error_handling;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "logging-options")
    {
        if(logging_options == nullptr)
        {
            logging_options = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions>();
        }
        return logging_options;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "route-reflector")
    {
        if(route_reflector == nullptr)
        {
            route_reflector = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector>();
        }
        return route_reflector;
    }

    if(child_yang_name == "as-path-options")
    {
        if(as_path_options == nullptr)
        {
            as_path_options = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions>();
        }
        return as_path_options;
    }

    if(child_yang_name == "add-paths")
    {
        if(add_paths == nullptr)
        {
            add_paths = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths>();
        }
        return add_paths;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ApplyPolicy>();
        }
        return apply_policy;
    }

    if(child_yang_name == "afi-safis")
    {
        if(afi_safis == nullptr)
        {
            afi_safis = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AfiSafis>();
        }
        return afi_safis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    if(error_handling != nullptr)
    {
        _children["error-handling"] = error_handling;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(logging_options != nullptr)
    {
        _children["logging-options"] = logging_options;
    }

    if(ebgp_multihop != nullptr)
    {
        _children["ebgp-multihop"] = ebgp_multihop;
    }

    if(route_reflector != nullptr)
    {
        _children["route-reflector"] = route_reflector;
    }

    if(as_path_options != nullptr)
    {
        _children["as-path-options"] = as_path_options;
    }

    if(add_paths != nullptr)
    {
        _children["add-paths"] = add_paths;
    }

    if(use_multiple_paths != nullptr)
    {
        _children["use-multiple-paths"] = use_multiple_paths;
    }

    if(apply_policy != nullptr)
    {
        _children["apply-policy"] = apply_policy;
    }

    if(afi_safis != nullptr)
    {
        _children["afi-safis"] = afi_safis;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "timers" || name == "transport" || name == "error-handling" || name == "graceful-restart" || name == "logging-options" || name == "ebgp-multihop" || name == "route-reflector" || name == "as-path-options" || name == "add-paths" || name == "use-multiple-paths" || name == "apply-policy" || name == "afi-safis" || name == "neighbor-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::Config()
    :
    peer_group{YType::str, "peer-group"},
    neighbor_address{YType::str, "neighbor-address"},
    enabled{YType::boolean, "enabled"},
    peer_as{YType::uint32, "peer-as"},
    local_as{YType::uint32, "local-as"},
    peer_type{YType::enumeration, "peer-type"},
    auth_password{YType::str, "auth-password"},
    remove_private_as{YType::identityref, "remove-private-as"},
    route_flap_damping{YType::boolean, "route-flap-damping"},
    send_community{YType::enumeration, "send-community"},
    description{YType::str, "description"}
{

    yang_name = "config"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::has_data() const
{
    if (is_presence_container) return true;
    return peer_group.is_set
	|| neighbor_address.is_set
	|| enabled.is_set
	|| peer_as.is_set
	|| local_as.is_set
	|| peer_type.is_set
	|| auth_password.is_set
	|| remove_private_as.is_set
	|| route_flap_damping.is_set
	|| send_community.is_set
	|| description.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_group.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(peer_as.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(peer_type.yfilter)
	|| ydk::is_set(auth_password.yfilter)
	|| ydk::is_set(remove_private_as.yfilter)
	|| ydk::is_set(route_flap_damping.yfilter)
	|| ydk::is_set(send_community.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group.is_set || is_set(peer_group.yfilter)) leaf_name_data.push_back(peer_group.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (peer_as.is_set || is_set(peer_as.yfilter)) leaf_name_data.push_back(peer_as.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (peer_type.is_set || is_set(peer_type.yfilter)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (auth_password.is_set || is_set(auth_password.yfilter)) leaf_name_data.push_back(auth_password.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.yfilter)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_flap_damping.is_set || is_set(route_flap_damping.yfilter)) leaf_name_data.push_back(route_flap_damping.get_name_leafdata());
    if (send_community.is_set || is_set(send_community.yfilter)) leaf_name_data.push_back(send_community.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group")
    {
        peer_group = value;
        peer_group.value_namespace = name_space;
        peer_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-as")
    {
        peer_as = value;
        peer_as.value_namespace = name_space;
        peer_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-type")
    {
        peer_type = value;
        peer_type.value_namespace = name_space;
        peer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-password")
    {
        auth_password = value;
        auth_password.value_namespace = name_space;
        auth_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
        remove_private_as.value_namespace = name_space;
        remove_private_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping = value;
        route_flap_damping.value_namespace = name_space;
        route_flap_damping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community")
    {
        send_community = value;
        send_community.value_namespace = name_space;
        send_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group")
    {
        peer_group.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "peer-as")
    {
        peer_as.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "peer-type")
    {
        peer_type.yfilter = yfilter;
    }
    if(value_path == "auth-password")
    {
        auth_password.yfilter = yfilter;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as.yfilter = yfilter;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping.yfilter = yfilter;
    }
    if(value_path == "send-community")
    {
        send_community.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group" || name == "neighbor-address" || name == "enabled" || name == "peer-as" || name == "local-as" || name == "peer-type" || name == "auth-password" || name == "remove-private-as" || name == "route-flap-damping" || name == "send-community" || name == "description")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::State()
    :
    peer_group{YType::str, "peer-group"},
    neighbor_address{YType::str, "neighbor-address"},
    enabled{YType::boolean, "enabled"},
    peer_as{YType::uint32, "peer-as"},
    local_as{YType::uint32, "local-as"},
    peer_type{YType::enumeration, "peer-type"},
    auth_password{YType::str, "auth-password"},
    remove_private_as{YType::identityref, "remove-private-as"},
    route_flap_damping{YType::boolean, "route-flap-damping"},
    send_community{YType::enumeration, "send-community"},
    description{YType::str, "description"},
    session_state{YType::enumeration, "session-state"},
    last_established{YType::uint64, "last-established"},
    established_transitions{YType::uint64, "established-transitions"},
    supported_capabilities{YType::identityref, "supported-capabilities"},
    dynamically_configured{YType::boolean, "dynamically-configured"}
        ,
    messages(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages>())
    , queues(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues>())
{
    messages->parent = this;
    queues->parent = this;

    yang_name = "state"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : supported_capabilities.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return peer_group.is_set
	|| neighbor_address.is_set
	|| enabled.is_set
	|| peer_as.is_set
	|| local_as.is_set
	|| peer_type.is_set
	|| auth_password.is_set
	|| remove_private_as.is_set
	|| route_flap_damping.is_set
	|| send_community.is_set
	|| description.is_set
	|| session_state.is_set
	|| last_established.is_set
	|| established_transitions.is_set
	|| dynamically_configured.is_set
	|| (messages !=  nullptr && messages->has_data())
	|| (queues !=  nullptr && queues->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::has_operation() const
{
    for (auto const & leaf : supported_capabilities.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_group.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(peer_as.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(peer_type.yfilter)
	|| ydk::is_set(auth_password.yfilter)
	|| ydk::is_set(remove_private_as.yfilter)
	|| ydk::is_set(route_flap_damping.yfilter)
	|| ydk::is_set(send_community.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(last_established.yfilter)
	|| ydk::is_set(established_transitions.yfilter)
	|| ydk::is_set(supported_capabilities.yfilter)
	|| ydk::is_set(dynamically_configured.yfilter)
	|| (messages !=  nullptr && messages->has_operation())
	|| (queues !=  nullptr && queues->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group.is_set || is_set(peer_group.yfilter)) leaf_name_data.push_back(peer_group.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (peer_as.is_set || is_set(peer_as.yfilter)) leaf_name_data.push_back(peer_as.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (peer_type.is_set || is_set(peer_type.yfilter)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (auth_password.is_set || is_set(auth_password.yfilter)) leaf_name_data.push_back(auth_password.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.yfilter)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_flap_damping.is_set || is_set(route_flap_damping.yfilter)) leaf_name_data.push_back(route_flap_damping.get_name_leafdata());
    if (send_community.is_set || is_set(send_community.yfilter)) leaf_name_data.push_back(send_community.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (last_established.is_set || is_set(last_established.yfilter)) leaf_name_data.push_back(last_established.get_name_leafdata());
    if (established_transitions.is_set || is_set(established_transitions.yfilter)) leaf_name_data.push_back(established_transitions.get_name_leafdata());
    if (dynamically_configured.is_set || is_set(dynamically_configured.yfilter)) leaf_name_data.push_back(dynamically_configured.get_name_leafdata());

    auto supported_capabilities_name_datas = supported_capabilities.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), supported_capabilities_name_datas.begin(), supported_capabilities_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "messages")
    {
        if(messages == nullptr)
        {
            messages = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages>();
        }
        return messages;
    }

    if(child_yang_name == "queues")
    {
        if(queues == nullptr)
        {
            queues = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues>();
        }
        return queues;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(messages != nullptr)
    {
        _children["messages"] = messages;
    }

    if(queues != nullptr)
    {
        _children["queues"] = queues;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group")
    {
        peer_group = value;
        peer_group.value_namespace = name_space;
        peer_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-as")
    {
        peer_as = value;
        peer_as.value_namespace = name_space;
        peer_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-type")
    {
        peer_type = value;
        peer_type.value_namespace = name_space;
        peer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-password")
    {
        auth_password = value;
        auth_password.value_namespace = name_space;
        auth_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
        remove_private_as.value_namespace = name_space;
        remove_private_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping = value;
        route_flap_damping.value_namespace = name_space;
        route_flap_damping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community")
    {
        send_community = value;
        send_community.value_namespace = name_space;
        send_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-established")
    {
        last_established = value;
        last_established.value_namespace = name_space;
        last_established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established-transitions")
    {
        established_transitions = value;
        established_transitions.value_namespace = name_space;
        established_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supported-capabilities")
    {
        Identity identity{name_space, name_space_prefix, value};
        supported_capabilities.append(identity);
    }
    if(value_path == "dynamically-configured")
    {
        dynamically_configured = value;
        dynamically_configured.value_namespace = name_space;
        dynamically_configured.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group")
    {
        peer_group.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "peer-as")
    {
        peer_as.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "peer-type")
    {
        peer_type.yfilter = yfilter;
    }
    if(value_path == "auth-password")
    {
        auth_password.yfilter = yfilter;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as.yfilter = yfilter;
    }
    if(value_path == "route-flap-damping")
    {
        route_flap_damping.yfilter = yfilter;
    }
    if(value_path == "send-community")
    {
        send_community.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "last-established")
    {
        last_established.yfilter = yfilter;
    }
    if(value_path == "established-transitions")
    {
        established_transitions.yfilter = yfilter;
    }
    if(value_path == "supported-capabilities")
    {
        supported_capabilities.yfilter = yfilter;
    }
    if(value_path == "dynamically-configured")
    {
        dynamically_configured.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "messages" || name == "queues" || name == "peer-group" || name == "neighbor-address" || name == "enabled" || name == "peer-as" || name == "local-as" || name == "peer-type" || name == "auth-password" || name == "remove-private-as" || name == "route-flap-damping" || name == "send-community" || name == "description" || name == "session-state" || name == "last-established" || name == "established-transitions" || name == "supported-capabilities" || name == "dynamically-configured")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Messages()
    :
    sent(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent>())
    , received(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received>())
{
    sent->parent = this;
    received->parent = this;

    yang_name = "messages"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::~Messages()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::has_data() const
{
    if (is_presence_container) return true;
    return (sent !=  nullptr && sent->has_data())
	|| (received !=  nullptr && received->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::has_operation() const
{
    return is_set(yfilter)
	|| (sent !=  nullptr && sent->has_operation())
	|| (received !=  nullptr && received->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sent")
    {
        if(sent == nullptr)
        {
            sent = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent>();
        }
        return sent;
    }

    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received>();
        }
        return received;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sent != nullptr)
    {
        _children["sent"] = sent;
    }

    if(received != nullptr)
    {
        _children["received"] = received;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::Sent()
    :
    update{YType::uint64, "UPDATE"},
    notification{YType::uint64, "NOTIFICATION"}
{

    yang_name = "sent"; yang_parent_name = "messages"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::~Sent()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::has_data() const
{
    if (is_presence_container) return true;
    return update.is_set
	|| notification.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update.yfilter)
	|| ydk::is_set(notification.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());
    if (notification.is_set || is_set(notification.yfilter)) leaf_name_data.push_back(notification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "UPDATE")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "NOTIFICATION")
    {
        notification = value;
        notification.value_namespace = name_space;
        notification.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "UPDATE")
    {
        update.yfilter = yfilter;
    }
    if(value_path == "NOTIFICATION")
    {
        notification.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Sent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UPDATE" || name == "NOTIFICATION")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::Received()
    :
    update{YType::uint64, "UPDATE"},
    notification{YType::uint64, "NOTIFICATION"}
{

    yang_name = "received"; yang_parent_name = "messages"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::~Received()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::has_data() const
{
    if (is_presence_container) return true;
    return update.is_set
	|| notification.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update.yfilter)
	|| ydk::is_set(notification.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());
    if (notification.is_set || is_set(notification.yfilter)) leaf_name_data.push_back(notification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "UPDATE")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "NOTIFICATION")
    {
        notification = value;
        notification.value_namespace = name_space;
        notification.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "UPDATE")
    {
        update.yfilter = yfilter;
    }
    if(value_path == "NOTIFICATION")
    {
        notification.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Messages::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UPDATE" || name == "NOTIFICATION")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::Queues()
    :
    input{YType::uint32, "input"},
    output{YType::uint32, "output"}
{

    yang_name = "queues"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::~Queues()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queues";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::Queues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Timers()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "timers"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::~Timers()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::Config()
    :
    connect_retry{YType::str, "connect-retry"},
    hold_time{YType::str, "hold-time"},
    keepalive_interval{YType::str, "keepalive-interval"},
    minimum_advertisement_interval{YType::str, "minimum-advertisement-interval"}
{

    yang_name = "config"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::has_data() const
{
    if (is_presence_container) return true;
    return connect_retry.is_set
	|| hold_time.is_set
	|| keepalive_interval.is_set
	|| minimum_advertisement_interval.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connect_retry.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(minimum_advertisement_interval.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_retry.is_set || is_set(connect_retry.yfilter)) leaf_name_data.push_back(connect_retry.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (minimum_advertisement_interval.is_set || is_set(minimum_advertisement_interval.yfilter)) leaf_name_data.push_back(minimum_advertisement_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-retry")
    {
        connect_retry = value;
        connect_retry.value_namespace = name_space;
        connect_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval = value;
        minimum_advertisement_interval.value_namespace = name_space;
        minimum_advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-retry")
    {
        connect_retry.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connect-retry" || name == "hold-time" || name == "keepalive-interval" || name == "minimum-advertisement-interval")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::State()
    :
    connect_retry{YType::str, "connect-retry"},
    hold_time{YType::str, "hold-time"},
    keepalive_interval{YType::str, "keepalive-interval"},
    minimum_advertisement_interval{YType::str, "minimum-advertisement-interval"},
    negotiated_hold_time{YType::str, "negotiated-hold-time"}
{

    yang_name = "state"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::has_data() const
{
    if (is_presence_container) return true;
    return connect_retry.is_set
	|| hold_time.is_set
	|| keepalive_interval.is_set
	|| minimum_advertisement_interval.is_set
	|| negotiated_hold_time.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connect_retry.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(minimum_advertisement_interval.yfilter)
	|| ydk::is_set(negotiated_hold_time.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_retry.is_set || is_set(connect_retry.yfilter)) leaf_name_data.push_back(connect_retry.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (minimum_advertisement_interval.is_set || is_set(minimum_advertisement_interval.yfilter)) leaf_name_data.push_back(minimum_advertisement_interval.get_name_leafdata());
    if (negotiated_hold_time.is_set || is_set(negotiated_hold_time.yfilter)) leaf_name_data.push_back(negotiated_hold_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-retry")
    {
        connect_retry = value;
        connect_retry.value_namespace = name_space;
        connect_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval = value;
        minimum_advertisement_interval.value_namespace = name_space;
        minimum_advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-hold-time")
    {
        negotiated_hold_time = value;
        negotiated_hold_time.value_namespace = name_space;
        negotiated_hold_time.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-retry")
    {
        connect_retry.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "minimum-advertisement-interval")
    {
        minimum_advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "negotiated-hold-time")
    {
        negotiated_hold_time.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Timers::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connect-retry" || name == "hold-time" || name == "keepalive-interval" || name == "minimum-advertisement-interval" || name == "negotiated-hold-time")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Transport()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "transport"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::~Transport()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::Config()
    :
    tcp_mss{YType::uint16, "tcp-mss"},
    mtu_discovery{YType::boolean, "mtu-discovery"},
    passive_mode{YType::boolean, "passive-mode"},
    local_address{YType::str, "local-address"}
{

    yang_name = "config"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::has_data() const
{
    if (is_presence_container) return true;
    return tcp_mss.is_set
	|| mtu_discovery.is_set
	|| passive_mode.is_set
	|| local_address.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_mss.yfilter)
	|| ydk::is_set(mtu_discovery.yfilter)
	|| ydk::is_set(passive_mode.yfilter)
	|| ydk::is_set(local_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_mss.is_set || is_set(tcp_mss.yfilter)) leaf_name_data.push_back(tcp_mss.get_name_leafdata());
    if (mtu_discovery.is_set || is_set(mtu_discovery.yfilter)) leaf_name_data.push_back(mtu_discovery.get_name_leafdata());
    if (passive_mode.is_set || is_set(passive_mode.yfilter)) leaf_name_data.push_back(passive_mode.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss = value;
        tcp_mss.value_namespace = name_space;
        tcp_mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery = value;
        mtu_discovery.value_namespace = name_space;
        mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-mode")
    {
        passive_mode = value;
        passive_mode.value_namespace = name_space;
        passive_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss.yfilter = yfilter;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery.yfilter = yfilter;
    }
    if(value_path == "passive-mode")
    {
        passive_mode.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-mss" || name == "mtu-discovery" || name == "passive-mode" || name == "local-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::State()
    :
    tcp_mss{YType::uint16, "tcp-mss"},
    mtu_discovery{YType::boolean, "mtu-discovery"},
    passive_mode{YType::boolean, "passive-mode"},
    local_address{YType::str, "local-address"},
    local_port{YType::uint16, "local-port"},
    remote_address{YType::str, "remote-address"},
    remote_port{YType::uint16, "remote-port"}
{

    yang_name = "state"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::has_data() const
{
    if (is_presence_container) return true;
    return tcp_mss.is_set
	|| mtu_discovery.is_set
	|| passive_mode.is_set
	|| local_address.is_set
	|| local_port.is_set
	|| remote_address.is_set
	|| remote_port.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp_mss.yfilter)
	|| ydk::is_set(mtu_discovery.yfilter)
	|| ydk::is_set(passive_mode.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(remote_port.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_mss.is_set || is_set(tcp_mss.yfilter)) leaf_name_data.push_back(tcp_mss.get_name_leafdata());
    if (mtu_discovery.is_set || is_set(mtu_discovery.yfilter)) leaf_name_data.push_back(mtu_discovery.get_name_leafdata());
    if (passive_mode.is_set || is_set(passive_mode.yfilter)) leaf_name_data.push_back(passive_mode.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss = value;
        tcp_mss.value_namespace = name_space;
        tcp_mss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery = value;
        mtu_discovery.value_namespace = name_space;
        mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-mode")
    {
        passive_mode = value;
        passive_mode.value_namespace = name_space;
        passive_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp-mss")
    {
        tcp_mss.yfilter = yfilter;
    }
    if(value_path == "mtu-discovery")
    {
        mtu_discovery.yfilter = yfilter;
    }
    if(value_path == "passive-mode")
    {
        passive_mode.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::Transport::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp-mss" || name == "mtu-discovery" || name == "passive-mode" || name == "local-address" || name == "local-port" || name == "remote-address" || name == "remote-port")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::ErrorHandling()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "error-handling"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::~ErrorHandling()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-handling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::Config()
    :
    treat_as_withdraw{YType::boolean, "treat-as-withdraw"}
{

    yang_name = "config"; yang_parent_name = "error-handling"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::has_data() const
{
    if (is_presence_container) return true;
    return treat_as_withdraw.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(treat_as_withdraw.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (treat_as_withdraw.is_set || is_set(treat_as_withdraw.yfilter)) leaf_name_data.push_back(treat_as_withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw = value;
        treat_as_withdraw.value_namespace = name_space;
        treat_as_withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "treat-as-withdraw")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::State()
    :
    treat_as_withdraw{YType::boolean, "treat-as-withdraw"},
    erroneous_update_messages{YType::uint32, "erroneous-update-messages"}
{

    yang_name = "state"; yang_parent_name = "error-handling"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::has_data() const
{
    if (is_presence_container) return true;
    return treat_as_withdraw.is_set
	|| erroneous_update_messages.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(treat_as_withdraw.yfilter)
	|| ydk::is_set(erroneous_update_messages.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (treat_as_withdraw.is_set || is_set(treat_as_withdraw.yfilter)) leaf_name_data.push_back(treat_as_withdraw.get_name_leafdata());
    if (erroneous_update_messages.is_set || is_set(erroneous_update_messages.yfilter)) leaf_name_data.push_back(erroneous_update_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw = value;
        treat_as_withdraw.value_namespace = name_space;
        treat_as_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "erroneous-update-messages")
    {
        erroneous_update_messages = value;
        erroneous_update_messages.value_namespace = name_space;
        erroneous_update_messages.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "treat-as-withdraw")
    {
        treat_as_withdraw.yfilter = yfilter;
    }
    if(value_path == "erroneous-update-messages")
    {
        erroneous_update_messages.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::ErrorHandling::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "treat-as-withdraw" || name == "erroneous-update-messages")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::~GracefulRestart()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"},
    helper_only{YType::boolean, "helper-only"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set
	|| helper_only.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter)
	|| ydk::is_set(helper_only.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "restart-time" || name == "stale-routes-time" || name == "helper-only")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"},
    helper_only{YType::boolean, "helper-only"},
    peer_restart_time{YType::uint16, "peer-restart-time"},
    peer_restarting{YType::boolean, "peer-restarting"},
    local_restarting{YType::boolean, "local-restarting"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set
	|| helper_only.is_set
	|| peer_restart_time.is_set
	|| peer_restarting.is_set
	|| local_restarting.is_set
	|| mode.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter)
	|| ydk::is_set(helper_only.yfilter)
	|| ydk::is_set(peer_restart_time.yfilter)
	|| ydk::is_set(peer_restarting.yfilter)
	|| ydk::is_set(local_restarting.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());
    if (peer_restart_time.is_set || is_set(peer_restart_time.yfilter)) leaf_name_data.push_back(peer_restart_time.get_name_leafdata());
    if (peer_restarting.is_set || is_set(peer_restarting.yfilter)) leaf_name_data.push_back(peer_restarting.get_name_leafdata());
    if (local_restarting.is_set || is_set(local_restarting.yfilter)) leaf_name_data.push_back(local_restarting.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-restart-time")
    {
        peer_restart_time = value;
        peer_restart_time.value_namespace = name_space;
        peer_restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-restarting")
    {
        peer_restarting = value;
        peer_restarting.value_namespace = name_space;
        peer_restarting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-restarting")
    {
        local_restarting = value;
        local_restarting.value_namespace = name_space;
        local_restarting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
    if(value_path == "peer-restart-time")
    {
        peer_restart_time.yfilter = yfilter;
    }
    if(value_path == "peer-restarting")
    {
        peer_restarting.yfilter = yfilter;
    }
    if(value_path == "local-restarting")
    {
        local_restarting.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "restart-time" || name == "stale-routes-time" || name == "helper-only" || name == "peer-restart-time" || name == "peer-restarting" || name == "local-restarting" || name == "mode")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::LoggingOptions()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "logging-options"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::~LoggingOptions()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::Config()
    :
    log_neighbor_state_changes{YType::boolean, "log-neighbor-state-changes"}
{

    yang_name = "config"; yang_parent_name = "logging-options"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::has_data() const
{
    if (is_presence_container) return true;
    return log_neighbor_state_changes.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_neighbor_state_changes.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_neighbor_state_changes.is_set || is_set(log_neighbor_state_changes.yfilter)) leaf_name_data.push_back(log_neighbor_state_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes = value;
        log_neighbor_state_changes.value_namespace = name_space;
        log_neighbor_state_changes.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-neighbor-state-changes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::State()
    :
    log_neighbor_state_changes{YType::boolean, "log-neighbor-state-changes"}
{

    yang_name = "state"; yang_parent_name = "logging-options"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::has_data() const
{
    if (is_presence_container) return true;
    return log_neighbor_state_changes.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_neighbor_state_changes.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_neighbor_state_changes.is_set || is_set(log_neighbor_state_changes.yfilter)) leaf_name_data.push_back(log_neighbor_state_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes = value;
        log_neighbor_state_changes.value_namespace = name_space;
        log_neighbor_state_changes.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-neighbor-state-changes")
    {
        log_neighbor_state_changes.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::LoggingOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-neighbor-state-changes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    multihop_ttl{YType::uint8, "multihop-ttl"}
{

    yang_name = "config"; yang_parent_name = "ebgp-multihop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| multihop_ttl.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(multihop_ttl.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (multihop_ttl.is_set || is_set(multihop_ttl.yfilter)) leaf_name_data.push_back(multihop_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl = value;
        multihop_ttl.value_namespace = name_space;
        multihop_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "multihop-ttl")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::State()
    :
    enabled{YType::boolean, "enabled"},
    multihop_ttl{YType::uint8, "multihop-ttl"}
{

    yang_name = "state"; yang_parent_name = "ebgp-multihop"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| multihop_ttl.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(multihop_ttl.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (multihop_ttl.is_set || is_set(multihop_ttl.yfilter)) leaf_name_data.push_back(multihop_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl = value;
        multihop_ttl.value_namespace = name_space;
        multihop_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "multihop-ttl")
    {
        multihop_ttl.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::EbgpMultihop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "multihop-ttl")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::RouteReflector()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "route-reflector"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::~RouteReflector()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-reflector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::Config()
    :
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"},
    route_reflector_client{YType::boolean, "route-reflector-client"}
{

    yang_name = "config"; yang_parent_name = "route-reflector"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::has_data() const
{
    if (is_presence_container) return true;
    return route_reflector_cluster_id.is_set
	|| route_reflector_client.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_reflector_cluster_id.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.yfilter)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
        route_reflector_cluster_id.value_namespace = name_space;
        route_reflector_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-reflector-cluster-id" || name == "route-reflector-client")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::State()
    :
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"},
    route_reflector_client{YType::boolean, "route-reflector-client"}
{

    yang_name = "state"; yang_parent_name = "route-reflector"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::has_data() const
{
    if (is_presence_container) return true;
    return route_reflector_cluster_id.is_set
	|| route_reflector_client.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_reflector_cluster_id.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.yfilter)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
        route_reflector_cluster_id.value_namespace = name_space;
        route_reflector_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::RouteReflector::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-reflector-cluster-id" || name == "route-reflector-client")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::AsPathOptions()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "as-path-options"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::~AsPathOptions()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::Config()
    :
    allow_own_as{YType::uint8, "allow-own-as"},
    replace_peer_as{YType::boolean, "replace-peer-as"}
{

    yang_name = "config"; yang_parent_name = "as-path-options"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::has_data() const
{
    if (is_presence_container) return true;
    return allow_own_as.is_set
	|| replace_peer_as.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_own_as.yfilter)
	|| ydk::is_set(replace_peer_as.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_own_as.is_set || is_set(allow_own_as.yfilter)) leaf_name_data.push_back(allow_own_as.get_name_leafdata());
    if (replace_peer_as.is_set || is_set(replace_peer_as.yfilter)) leaf_name_data.push_back(replace_peer_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-own-as" || name == "replace-peer-as")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::State()
    :
    allow_own_as{YType::uint8, "allow-own-as"},
    replace_peer_as{YType::boolean, "replace-peer-as"}
{

    yang_name = "state"; yang_parent_name = "as-path-options"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::has_data() const
{
    if (is_presence_container) return true;
    return allow_own_as.is_set
	|| replace_peer_as.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_own_as.yfilter)
	|| ydk::is_set(replace_peer_as.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_own_as.is_set || is_set(allow_own_as.yfilter)) leaf_name_data.push_back(allow_own_as.get_name_leafdata());
    if (replace_peer_as.is_set || is_set(replace_peer_as.yfilter)) leaf_name_data.push_back(replace_peer_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AsPathOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-own-as" || name == "replace-peer-as")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::AddPaths()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "add-paths"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::~AddPaths()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::Config()
    :
    receive{YType::boolean, "receive"},
    send_max{YType::uint8, "send-max"},
    eligible_prefix_policy{YType::str, "eligible-prefix-policy"}
{

    yang_name = "config"; yang_parent_name = "add-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| send_max.is_set
	|| eligible_prefix_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send_max.yfilter)
	|| ydk::is_set(eligible_prefix_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send_max.is_set || is_set(send_max.yfilter)) leaf_name_data.push_back(send_max.get_name_leafdata());
    if (eligible_prefix_policy.is_set || is_set(eligible_prefix_policy.yfilter)) leaf_name_data.push_back(eligible_prefix_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy = value;
        eligible_prefix_policy.value_namespace = name_space;
        eligible_prefix_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send-max")
    {
        send_max.yfilter = yfilter;
    }
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send-max" || name == "eligible-prefix-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::State()
    :
    receive{YType::boolean, "receive"},
    send_max{YType::uint8, "send-max"},
    eligible_prefix_policy{YType::str, "eligible-prefix-policy"}
{

    yang_name = "state"; yang_parent_name = "add-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| send_max.is_set
	|| eligible_prefix_policy.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send_max.yfilter)
	|| ydk::is_set(eligible_prefix_policy.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send_max.is_set || is_set(send_max.yfilter)) leaf_name_data.push_back(send_max.get_name_leafdata());
    if (eligible_prefix_policy.is_set || is_set(eligible_prefix_policy.yfilter)) leaf_name_data.push_back(eligible_prefix_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy = value;
        eligible_prefix_policy.value_namespace = name_space;
        eligible_prefix_policy.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send-max")
    {
        send_max.yfilter = yfilter;
    }
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::AddPaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send-max" || name == "eligible-prefix-policy")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State>())
    , ebgp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp>())
{
    config->parent = this;
    state->parent = this;
    ebgp->parent = this;

    yang_name = "use-multiple-paths"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::~UseMultiplePaths()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State>();
        }
        return state;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp>();
        }
        return ebgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(ebgp != nullptr)
    {
        _children["ebgp"] = ebgp;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state" || name == "ebgp")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::~Config()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config>())
    , state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::IDLE {0, "IDLE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::CONNECT {1, "CONNECT"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::ACTIVE {2, "ACTIVE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::OPENSENT {3, "OPENSENT"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::OPENCONFIRM {4, "OPENCONFIRM"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::State::SessionState::ESTABLISHED {5, "ESTABLISHED"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::Mode::HELPER_ONLY {0, "HELPER_ONLY"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::Mode::BILATERAL {1, "BILATERAL"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Bgp::Neighbors::Neighbor::GracefulRestart::State::Mode::REMOTE_HELPER {2, "REMOTE_HELPER"};


}
}

