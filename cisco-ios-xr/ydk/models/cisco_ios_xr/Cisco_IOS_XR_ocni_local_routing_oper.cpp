
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ocni_local_routing_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ocni_local_routing_oper {

Ocni::Ocni()
    :
    vrfipv4(std::make_shared<Ocni::Vrfipv4>())
    , vrfipv6(std::make_shared<Ocni::Vrfipv6>())
{
    vrfipv4->parent = this;
    vrfipv6->parent = this;

    yang_name = "ocni"; yang_parent_name = "Cisco-IOS-XR-ocni-local-routing-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ocni::~Ocni()
{
}

bool Ocni::has_data() const
{
    if (is_presence_container) return true;
    return (vrfipv4 !=  nullptr && vrfipv4->has_data())
	|| (vrfipv6 !=  nullptr && vrfipv6->has_data());
}

bool Ocni::has_operation() const
{
    return is_set(yfilter)
	|| (vrfipv4 !=  nullptr && vrfipv4->has_operation())
	|| (vrfipv6 !=  nullptr && vrfipv6->has_operation());
}

std::string Ocni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-local-routing-oper:ocni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfipv4")
    {
        if(vrfipv4 == nullptr)
        {
            vrfipv4 = std::make_shared<Ocni::Vrfipv4>();
        }
        return vrfipv4;
    }

    if(child_yang_name == "vrfipv6")
    {
        if(vrfipv6 == nullptr)
        {
            vrfipv6 = std::make_shared<Ocni::Vrfipv6>();
        }
        return vrfipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrfipv4 != nullptr)
    {
        children["vrfipv4"] = vrfipv4;
    }

    if(vrfipv6 != nullptr)
    {
        children["vrfipv6"] = vrfipv6;
    }

    return children;
}

void Ocni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ocni::clone_ptr() const
{
    return std::make_shared<Ocni>();
}

std::string Ocni::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ocni::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ocni::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ocni::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ocni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfipv4" || name == "vrfipv6")
        return true;
    return false;
}

Ocni::Vrfipv4::Vrfipv4()
    :
    network_instances(std::make_shared<Ocni::Vrfipv4::NetworkInstances>())
{
    network_instances->parent = this;

    yang_name = "vrfipv4"; yang_parent_name = "ocni"; is_top_level_class = false; has_list_ancestor = false; 
}

Ocni::Vrfipv4::~Vrfipv4()
{
}

bool Ocni::Vrfipv4::has_data() const
{
    if (is_presence_container) return true;
    return (network_instances !=  nullptr && network_instances->has_data());
}

bool Ocni::Vrfipv4::has_operation() const
{
    return is_set(yfilter)
	|| (network_instances !=  nullptr && network_instances->has_operation());
}

std::string Ocni::Vrfipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-local-routing-oper:ocni/" << get_segment_path();
    return path_buffer.str();
}

std::string Ocni::Vrfipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instances")
    {
        if(network_instances == nullptr)
        {
            network_instances = std::make_shared<Ocni::Vrfipv4::NetworkInstances>();
        }
        return network_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network_instances != nullptr)
    {
        children["network-instances"] = network_instances;
    }

    return children;
}

void Ocni::Vrfipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-instances")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstances()
    :
    network_instance(this, {"name"})
{

    yang_name = "network-instances"; yang_parent_name = "vrfipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Ocni::Vrfipv4::NetworkInstances::~NetworkInstances()
{
}

bool Ocni::Vrfipv4::NetworkInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Ocni::Vrfipv4::NetworkInstances::has_operation() const
{
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ocni::Vrfipv4::NetworkInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-local-routing-oper:ocni/vrfipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Ocni::Vrfipv4::NetworkInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instance")
    {
        auto c = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance>();
        c->parent = this;
        network_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : network_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ocni::Vrfipv4::NetworkInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv4::NetworkInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv4::NetworkInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-instance")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::NetworkInstance()
    :
    name{YType::str, "name"}
        ,
    protocols(std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols>())
{
    protocols->parent = this;

    yang_name = "network-instance"; yang_parent_name = "network-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::~NetworkInstance()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (protocols !=  nullptr && protocols->has_data());
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (protocols !=  nullptr && protocols->has_operation());
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-local-routing-oper:ocni/vrfipv4/network-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-instance";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols>();
        }
        return protocols;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocols != nullptr)
    {
        children["protocols"] = protocols;
    }

    return children;
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols" || name == "name")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocols()
    :
    protocol(this, {})
{

    yang_name = "protocols"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::~Protocols()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto c = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol>();
        c->parent = this;
        protocol.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protocol.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::Protocol()
    :
    identifier{YType::str, "identifier"},
    name{YType::str, "name"}
        ,
    state(std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State>())
    , static_routes(std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes>())
{
    state->parent = this;
    static_routes->parent = this;

    yang_name = "protocol"; yang_parent_name = "protocols"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::~Protocol()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set
	|| (state !=  nullptr && state->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data());
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation());
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State>();
        }
        return state;
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes == nullptr)
        {
            static_routes = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes>();
        }
        return static_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "static-routes" || name == "identifier" || name == "name")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State::State()
    :
    identifier{YType::str, "identifier"},
    name{YType::str, "name"},
    enabled{YType::boolean, "enabled"},
    default_metric{YType::uint32, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State::~State()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set
	|| enabled.is_set
	|| default_metric.is_set;
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name" || name == "enabled" || name == "default-metric")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoutes()
    :
    static_route(this, {"prefix"})
{

    yang_name = "static-routes"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::~StaticRoutes()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_route.len(); index++)
    {
        if(static_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<static_route.len(); index++)
    {
        if(static_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-route")
    {
        auto c = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute>();
        c->parent = this;
        static_route.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : static_route.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-route")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoute()
    :
    prefix{YType::str, "prefix"}
        ,
    next_hops(std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops>())
    , static_routes_state(std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState>())
{
    next_hops->parent = this;
    static_routes_state->parent = this;

    yang_name = "static-route"; yang_parent_name = "static-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::~StaticRoute()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (next_hops !=  nullptr && next_hops->has_data())
	|| (static_routes_state !=  nullptr && static_routes_state->has_data());
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (next_hops !=  nullptr && next_hops->has_operation())
	|| (static_routes_state !=  nullptr && static_routes_state->has_operation());
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-route";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops>();
        }
        return next_hops;
    }

    if(child_yang_name == "static-routes-state")
    {
        if(static_routes_state == nullptr)
        {
            static_routes_state = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState>();
        }
        return static_routes_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hops != nullptr)
    {
        children["next-hops"] = next_hops;
    }

    if(static_routes_state != nullptr)
    {
        children["static-routes-state"] = static_routes_state;
    }

    return children;
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hops" || name == "static-routes-state" || name == "prefix")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHops()
    :
    next_hop(this, {"index_"})
{

    yang_name = "next-hops"; yang_parent_name = "static-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::~NextHops()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto c = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop>();
        c->parent = this;
        next_hop.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : next_hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::NextHop()
    :
    index_{YType::str, "index"}
        ,
    state(std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State>())
    , interface_ref(std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef>())
{
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::~NextHop()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    return children;
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "interface-ref" || name == "index")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::State()
    :
    index_{YType::str, "index"},
    next_hop{YType::str, "next-hop"},
    metric{YType::uint32, "metric"}
{

    yang_name = "state"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::~State()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| next_hop.is_set
	|| metric.is_set;
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "next-hop" || name == "metric")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    state(std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State>())
{
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::uint32, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::StaticRoutesState()
    :
    prefix{YType::str, "prefix"},
    set_tag{YType::str, "set-tag"}
{

    yang_name = "static-routes-state"; yang_parent_name = "static-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::~StaticRoutesState()
{
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| set_tag.is_set;
}

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ocni::Vrfipv4::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "set-tag")
        return true;
    return false;
}

Ocni::Vrfipv6::Vrfipv6()
    :
    network_instances(std::make_shared<Ocni::Vrfipv6::NetworkInstances>())
{
    network_instances->parent = this;

    yang_name = "vrfipv6"; yang_parent_name = "ocni"; is_top_level_class = false; has_list_ancestor = false; 
}

Ocni::Vrfipv6::~Vrfipv6()
{
}

bool Ocni::Vrfipv6::has_data() const
{
    if (is_presence_container) return true;
    return (network_instances !=  nullptr && network_instances->has_data());
}

bool Ocni::Vrfipv6::has_operation() const
{
    return is_set(yfilter)
	|| (network_instances !=  nullptr && network_instances->has_operation());
}

std::string Ocni::Vrfipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-local-routing-oper:ocni/" << get_segment_path();
    return path_buffer.str();
}

std::string Ocni::Vrfipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instances")
    {
        if(network_instances == nullptr)
        {
            network_instances = std::make_shared<Ocni::Vrfipv6::NetworkInstances>();
        }
        return network_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network_instances != nullptr)
    {
        children["network-instances"] = network_instances;
    }

    return children;
}

void Ocni::Vrfipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-instances")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstances()
    :
    network_instance(this, {"name"})
{

    yang_name = "network-instances"; yang_parent_name = "vrfipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Ocni::Vrfipv6::NetworkInstances::~NetworkInstances()
{
}

bool Ocni::Vrfipv6::NetworkInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Ocni::Vrfipv6::NetworkInstances::has_operation() const
{
    for (std::size_t index=0; index<network_instance.len(); index++)
    {
        if(network_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ocni::Vrfipv6::NetworkInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-local-routing-oper:ocni/vrfipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Ocni::Vrfipv6::NetworkInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-instance")
    {
        auto c = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance>();
        c->parent = this;
        network_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : network_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ocni::Vrfipv6::NetworkInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv6::NetworkInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv6::NetworkInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-instance")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::NetworkInstance()
    :
    name{YType::str, "name"}
        ,
    protocols(std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols>())
{
    protocols->parent = this;

    yang_name = "network-instance"; yang_parent_name = "network-instances"; is_top_level_class = false; has_list_ancestor = false; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::~NetworkInstance()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (protocols !=  nullptr && protocols->has_data());
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (protocols !=  nullptr && protocols->has_operation());
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ocni-local-routing-oper:ocni/vrfipv6/network-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-instance";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols")
    {
        if(protocols == nullptr)
        {
            protocols = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols>();
        }
        return protocols;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocols != nullptr)
    {
        children["protocols"] = protocols;
    }

    return children;
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols" || name == "name")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocols()
    :
    protocol(this, {})
{

    yang_name = "protocols"; yang_parent_name = "network-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::~Protocols()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto c = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol>();
        c->parent = this;
        protocol.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protocol.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::Protocol()
    :
    identifier{YType::str, "identifier"},
    name{YType::str, "name"}
        ,
    state(std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State>())
    , static_routes(std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes>())
{
    state->parent = this;
    static_routes->parent = this;

    yang_name = "protocol"; yang_parent_name = "protocols"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::~Protocol()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set
	|| (state !=  nullptr && state->has_data())
	|| (static_routes !=  nullptr && static_routes->has_data());
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (static_routes !=  nullptr && static_routes->has_operation());
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State>();
        }
        return state;
    }

    if(child_yang_name == "static-routes")
    {
        if(static_routes == nullptr)
        {
            static_routes = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes>();
        }
        return static_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "static-routes" || name == "identifier" || name == "name")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State::State()
    :
    identifier{YType::str, "identifier"},
    name{YType::str, "name"},
    enabled{YType::boolean, "enabled"},
    default_metric{YType::uint32, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State::~State()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| name.is_set
	|| enabled.is_set
	|| default_metric.is_set;
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name" || name == "enabled" || name == "default-metric")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoutes()
    :
    static_route(this, {"prefix"})
{

    yang_name = "static-routes"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::~StaticRoutes()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_route.len(); index++)
    {
        if(static_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<static_route.len(); index++)
    {
        if(static_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-route")
    {
        auto c = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute>();
        c->parent = this;
        static_route.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : static_route.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-route")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoute()
    :
    prefix{YType::str, "prefix"}
        ,
    next_hops(std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops>())
    , static_routes_state(std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState>())
{
    next_hops->parent = this;
    static_routes_state->parent = this;

    yang_name = "static-route"; yang_parent_name = "static-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::~StaticRoute()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (next_hops !=  nullptr && next_hops->has_data())
	|| (static_routes_state !=  nullptr && static_routes_state->has_data());
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (next_hops !=  nullptr && next_hops->has_operation())
	|| (static_routes_state !=  nullptr && static_routes_state->has_operation());
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-route";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hops")
    {
        if(next_hops == nullptr)
        {
            next_hops = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops>();
        }
        return next_hops;
    }

    if(child_yang_name == "static-routes-state")
    {
        if(static_routes_state == nullptr)
        {
            static_routes_state = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState>();
        }
        return static_routes_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hops != nullptr)
    {
        children["next-hops"] = next_hops;
    }

    if(static_routes_state != nullptr)
    {
        children["static-routes-state"] = static_routes_state;
    }

    return children;
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hops" || name == "static-routes-state" || name == "prefix")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHops()
    :
    next_hop(this, {"index_"})
{

    yang_name = "next-hops"; yang_parent_name = "static-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::~NextHops()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::has_operation() const
{
    for (std::size_t index=0; index<next_hop.len(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        auto c = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop>();
        c->parent = this;
        next_hop.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : next_hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::NextHop()
    :
    index_{YType::str, "index"}
        ,
    state(std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State>())
    , interface_ref(std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef>())
{
    state->parent = this;
    interface_ref->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hops"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::~NextHop()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| (state !=  nullptr && state->has_data())
	|| (interface_ref !=  nullptr && interface_ref->has_data());
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (interface_ref !=  nullptr && interface_ref->has_operation());
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State>();
        }
        return state;
    }

    if(child_yang_name == "interface-ref")
    {
        if(interface_ref == nullptr)
        {
            interface_ref = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef>();
        }
        return interface_ref;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(interface_ref != nullptr)
    {
        children["interface-ref"] = interface_ref;
    }

    return children;
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "interface-ref" || name == "index")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::State()
    :
    index_{YType::str, "index"},
    next_hop{YType::str, "next-hop"},
    metric{YType::uint32, "metric"}
{

    yang_name = "state"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::~State()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| next_hop.is_set
	|| metric.is_set;
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "next-hop" || name == "metric")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::InterfaceRef()
    :
    state(std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State>())
{
    state->parent = this;

    yang_name = "interface-ref"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::~InterfaceRef()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ref";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::State()
    :
    interface{YType::str, "interface"},
    subinterface{YType::uint32, "subinterface"}
{

    yang_name = "state"; yang_parent_name = "interface-ref"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::~State()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| subinterface.is_set;
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(subinterface.yfilter);
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (subinterface.is_set || is_set(subinterface.yfilter)) leaf_name_data.push_back(subinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::NextHops::NextHop::InterfaceRef::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "subinterface")
        return true;
    return false;
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::StaticRoutesState()
    :
    prefix{YType::str, "prefix"},
    set_tag{YType::str, "set-tag"}
{

    yang_name = "static-routes-state"; yang_parent_name = "static-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::~StaticRoutesState()
{
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| set_tag.is_set;
}

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(set_tag.yfilter);
}

std::string Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-routes-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (set_tag.is_set || is_set(set_tag.yfilter)) leaf_name_data.push_back(set_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ocni::Vrfipv6::NetworkInstances::NetworkInstance::Protocols::Protocol::StaticRoutes::StaticRoute::StaticRoutesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "set-tag")
        return true;
    return false;
}


}
}

