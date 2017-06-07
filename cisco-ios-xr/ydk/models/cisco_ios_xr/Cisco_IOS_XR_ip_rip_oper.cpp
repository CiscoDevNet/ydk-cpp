
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rip_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rip_oper {

Rip::Rip()
    :
    default_vrf(std::make_shared<Rip::DefaultVrf>())
	,protocol(std::make_shared<Rip::Protocol>())
	,vrfs(std::make_shared<Rip::Vrfs>())
{
    default_vrf->parent = this;

    protocol->parent = this;

    vrfs->parent = this;

    yang_name = "rip"; yang_parent_name = "Cisco-IOS-XR-ip-rip-oper";
}

Rip::~Rip()
{
}

bool Rip::has_data() const
{
    return (default_vrf !=  nullptr && default_vrf->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Rip::has_operation() const
{
    return is_set(operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip";

    return path_buffer.str();

}

const EntityPath Rip::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Rip::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Rip::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Rip::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Rip::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Rip::clone_ptr() const
{
    return std::make_shared<Rip>();
}

std::string Rip::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Rip::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Rip::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Rip::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "rip";
}

Rip::Vrfs::~Vrfs()
{
}

bool Rip::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    configuration(std::make_shared<Rip::Vrfs::Vrf::Configuration>())
	,global(std::make_shared<Rip::Vrfs::Vrf::Global>())
	,interfaces(std::make_shared<Rip::Vrfs::Vrf::Interfaces>())
	,routes(std::make_shared<Rip::Vrfs::Vrf::Routes>())
	,statistics(std::make_shared<Rip::Vrfs::Vrf::Statistics>())
{
    configuration->parent = this;

    global->parent = this;

    interfaces->parent = this;

    routes->parent = this;

    statistics->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Rip::Vrfs::Vrf::~Vrf()
{
}

bool Rip::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (configuration !=  nullptr && configuration->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (routes !=  nullptr && routes->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Rip::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (routes !=  nullptr && routes->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Rip::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Rip::Vrfs::Vrf::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Rip::Vrfs::Vrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rip::Vrfs::Vrf::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<Rip::Vrfs::Vrf::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Rip::Vrfs::Vrf::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Rip::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Rip::Vrfs::Vrf::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "vrf";
}

Rip::Vrfs::Vrf::Routes::~Routes()
{
}

bool Rip::Vrfs::Vrf::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Vrfs::Vrf::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::Vrf::Routes::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Routes::Route::Route()
    :
    active{YType::boolean, "active"},
    attributes{YType::uint32, "attributes"},
    bgp_count{YType::uint16, "bgp-count"},
    destination_address{YType::str, "destination-address"},
    distance{YType::uint16, "distance"},
    hold_down{YType::boolean, "hold-down"},
    path_origin{YType::enumeration, "path-origin"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    prefix_length_xr{YType::uint32, "prefix-length-xr"},
    route_summary{YType::boolean, "route-summary"},
    route_tag{YType::uint16, "route-tag"},
    route_type{YType::uint16, "route-type"},
    version{YType::uint8, "version"}
{
    yang_name = "route"; yang_parent_name = "routes";
}

Rip::Vrfs::Vrf::Routes::Route::~Route()
{
}

bool Rip::Vrfs::Vrf::Routes::Route::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return active.is_set
	|| attributes.is_set
	|| bgp_count.is_set
	|| destination_address.is_set
	|| distance.is_set
	|| hold_down.is_set
	|| path_origin.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| route_summary.is_set
	|| route_tag.is_set
	|| route_type.is_set
	|| version.is_set;
}

bool Rip::Vrfs::Vrf::Routes::Route::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(attributes.operation)
	|| is_set(bgp_count.operation)
	|| is_set(destination_address.operation)
	|| is_set(distance.operation)
	|| is_set(hold_down.operation)
	|| is_set(path_origin.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(route_summary.operation)
	|| is_set(route_tag.operation)
	|| is_set(route_type.operation)
	|| is_set(version.operation);
}

std::string Rip::Vrfs::Vrf::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.operation)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (bgp_count.is_set || is_set(bgp_count.operation)) leaf_name_data.push_back(bgp_count.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (hold_down.is_set || is_set(hold_down.operation)) leaf_name_data.push_back(hold_down.get_name_leafdata());
    if (path_origin.is_set || is_set(path_origin.operation)) leaf_name_data.push_back(path_origin.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_summary.is_set || is_set(route_summary.operation)) leaf_name_data.push_back(route_summary.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Routes::Route::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::Vrf::Routes::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "attributes")
    {
        attributes = value;
    }
    if(value_path == "bgp-count")
    {
        bgp_count = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "hold-down")
    {
        hold_down = value;
    }
    if(value_path == "path-origin")
    {
        path_origin = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "route-summary")
    {
        route_summary = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Rip::Vrfs::Vrf::Routes::Route::Paths::Paths()
    :
    interface{YType::str, "interface"},
    is_permanent{YType::boolean, "is-permanent"},
    metric{YType::uint16, "metric"},
    next_hop_address{YType::str, "next-hop-address"},
    source_address{YType::str, "source-address"},
    tag{YType::uint16, "tag"},
    uptime{YType::uint32, "uptime"}
{
    yang_name = "paths"; yang_parent_name = "route";
}

Rip::Vrfs::Vrf::Routes::Route::Paths::~Paths()
{
}

bool Rip::Vrfs::Vrf::Routes::Route::Paths::has_data() const
{
    return interface.is_set
	|| is_permanent.is_set
	|| metric.is_set
	|| next_hop_address.is_set
	|| source_address.is_set
	|| tag.is_set
	|| uptime.is_set;
}

bool Rip::Vrfs::Vrf::Routes::Route::Paths::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(is_permanent.operation)
	|| is_set(metric.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(source_address.operation)
	|| is_set(tag.operation)
	|| is_set(uptime.operation);
}

std::string Rip::Vrfs::Vrf::Routes::Route::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Routes::Route::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (is_permanent.is_set || is_set(is_permanent.operation)) leaf_name_data.push_back(is_permanent.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Routes::Route::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Routes::Route::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Routes::Route::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "is-permanent")
    {
        is_permanent = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Rip::Vrfs::Vrf::Configuration::Configuration()
    :
    active{YType::boolean, "active"},
    auto_summarize{YType::boolean, "auto-summarize"},
    default_metric{YType::uint8, "default-metric"},
    flash_threshold{YType::uint8, "flash-threshold"},
    flush_timer{YType::uint32, "flush-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    input_q_length{YType::uint16, "input-q-length"},
    invalid_timer{YType::uint32, "invalid-timer"},
    maximum_paths{YType::uint8, "maximum-paths"},
    multicast_address{YType::boolean, "multicast-address"},
    next_update_time{YType::uint32, "next-update-time"},
    nsf_life_time{YType::uint32, "nsf-life-time"},
    nsf_status{YType::boolean, "nsf-status"},
    oom_flags{YType::uint32, "oom-flags"},
    rip_version{YType::int32, "rip-version"},
    triggered_rip{YType::boolean, "triggered-rip"},
    update_timer{YType::uint32, "update-timer"},
    validation_indicator{YType::boolean, "validation-indicator"},
    vr_fised_socket{YType::boolean, "vr-fised-socket"}
{
    yang_name = "configuration"; yang_parent_name = "vrf";
}

Rip::Vrfs::Vrf::Configuration::~Configuration()
{
}

bool Rip::Vrfs::Vrf::Configuration::has_data() const
{
    return active.is_set
	|| auto_summarize.is_set
	|| default_metric.is_set
	|| flash_threshold.is_set
	|| flush_timer.is_set
	|| hold_down_timer.is_set
	|| input_q_length.is_set
	|| invalid_timer.is_set
	|| maximum_paths.is_set
	|| multicast_address.is_set
	|| next_update_time.is_set
	|| nsf_life_time.is_set
	|| nsf_status.is_set
	|| oom_flags.is_set
	|| rip_version.is_set
	|| triggered_rip.is_set
	|| update_timer.is_set
	|| validation_indicator.is_set
	|| vr_fised_socket.is_set;
}

bool Rip::Vrfs::Vrf::Configuration::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(auto_summarize.operation)
	|| is_set(default_metric.operation)
	|| is_set(flash_threshold.operation)
	|| is_set(flush_timer.operation)
	|| is_set(hold_down_timer.operation)
	|| is_set(input_q_length.operation)
	|| is_set(invalid_timer.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(multicast_address.operation)
	|| is_set(next_update_time.operation)
	|| is_set(nsf_life_time.operation)
	|| is_set(nsf_status.operation)
	|| is_set(oom_flags.operation)
	|| is_set(rip_version.operation)
	|| is_set(triggered_rip.operation)
	|| is_set(update_timer.operation)
	|| is_set(validation_indicator.operation)
	|| is_set(vr_fised_socket.operation);
}

std::string Rip::Vrfs::Vrf::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Configuration' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (auto_summarize.is_set || is_set(auto_summarize.operation)) leaf_name_data.push_back(auto_summarize.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (flash_threshold.is_set || is_set(flash_threshold.operation)) leaf_name_data.push_back(flash_threshold.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.operation)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.operation)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (input_q_length.is_set || is_set(input_q_length.operation)) leaf_name_data.push_back(input_q_length.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.operation)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.operation)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.operation)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (nsf_life_time.is_set || is_set(nsf_life_time.operation)) leaf_name_data.push_back(nsf_life_time.get_name_leafdata());
    if (nsf_status.is_set || is_set(nsf_status.operation)) leaf_name_data.push_back(nsf_status.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (rip_version.is_set || is_set(rip_version.operation)) leaf_name_data.push_back(rip_version.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.operation)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.operation)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (validation_indicator.is_set || is_set(validation_indicator.operation)) leaf_name_data.push_back(validation_indicator.get_name_leafdata());
    if (vr_fised_socket.is_set || is_set(vr_fised_socket.operation)) leaf_name_data.push_back(vr_fised_socket.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Configuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "auto-summarize")
    {
        auto_summarize = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "flash-threshold")
    {
        flash_threshold = value;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
    }
    if(value_path == "input-q-length")
    {
        input_q_length = value;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
    }
    if(value_path == "nsf-life-time")
    {
        nsf_life_time = value;
    }
    if(value_path == "nsf-status")
    {
        nsf_status = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "rip-version")
    {
        rip_version = value;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
    }
    if(value_path == "validation-indicator")
    {
        validation_indicator = value;
    }
    if(value_path == "vr-fised-socket")
    {
        vr_fised_socket = value;
    }
}

Rip::Vrfs::Vrf::Statistics::Statistics()
    :
    discarded_packets{YType::uint32, "discarded-packets"},
    discarded_routes{YType::uint32, "discarded-routes"},
    path_count{YType::uint32, "path-count"},
    path_malloc_failures{YType::uint32, "path-malloc-failures"},
    periodic_updates{YType::uint32, "periodic-updates"},
    query_responses{YType::uint32, "query-responses"},
    received_packets{YType::uint32, "received-packets"},
    rib_updates{YType::uint32, "rib-updates"},
    route_count{YType::uint32, "route-count"},
    route_malloc_failures{YType::uint32, "route-malloc-failures"},
    sent_message_failures{YType::uint32, "sent-message-failures"},
    sent_messages{YType::uint32, "sent-messages"},
    standby_packets_received{YType::uint32, "standby-packets-received"}
{
    yang_name = "statistics"; yang_parent_name = "vrf";
}

Rip::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool Rip::Vrfs::Vrf::Statistics::has_data() const
{
    return discarded_packets.is_set
	|| discarded_routes.is_set
	|| path_count.is_set
	|| path_malloc_failures.is_set
	|| periodic_updates.is_set
	|| query_responses.is_set
	|| received_packets.is_set
	|| rib_updates.is_set
	|| route_count.is_set
	|| route_malloc_failures.is_set
	|| sent_message_failures.is_set
	|| sent_messages.is_set
	|| standby_packets_received.is_set;
}

bool Rip::Vrfs::Vrf::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(discarded_packets.operation)
	|| is_set(discarded_routes.operation)
	|| is_set(path_count.operation)
	|| is_set(path_malloc_failures.operation)
	|| is_set(periodic_updates.operation)
	|| is_set(query_responses.operation)
	|| is_set(received_packets.operation)
	|| is_set(rib_updates.operation)
	|| is_set(route_count.operation)
	|| is_set(route_malloc_failures.operation)
	|| is_set(sent_message_failures.operation)
	|| is_set(sent_messages.operation)
	|| is_set(standby_packets_received.operation);
}

std::string Rip::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discarded_packets.is_set || is_set(discarded_packets.operation)) leaf_name_data.push_back(discarded_packets.get_name_leafdata());
    if (discarded_routes.is_set || is_set(discarded_routes.operation)) leaf_name_data.push_back(discarded_routes.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.operation)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (path_malloc_failures.is_set || is_set(path_malloc_failures.operation)) leaf_name_data.push_back(path_malloc_failures.get_name_leafdata());
    if (periodic_updates.is_set || is_set(periodic_updates.operation)) leaf_name_data.push_back(periodic_updates.get_name_leafdata());
    if (query_responses.is_set || is_set(query_responses.operation)) leaf_name_data.push_back(query_responses.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (rib_updates.is_set || is_set(rib_updates.operation)) leaf_name_data.push_back(rib_updates.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_malloc_failures.is_set || is_set(route_malloc_failures.operation)) leaf_name_data.push_back(route_malloc_failures.get_name_leafdata());
    if (sent_message_failures.is_set || is_set(sent_message_failures.operation)) leaf_name_data.push_back(sent_message_failures.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.operation)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (standby_packets_received.is_set || is_set(standby_packets_received.operation)) leaf_name_data.push_back(standby_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discarded-packets")
    {
        discarded_packets = value;
    }
    if(value_path == "discarded-routes")
    {
        discarded_routes = value;
    }
    if(value_path == "path-count")
    {
        path_count = value;
    }
    if(value_path == "path-malloc-failures")
    {
        path_malloc_failures = value;
    }
    if(value_path == "periodic-updates")
    {
        periodic_updates = value;
    }
    if(value_path == "query-responses")
    {
        query_responses = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "rib-updates")
    {
        rib_updates = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "route-malloc-failures")
    {
        route_malloc_failures = value;
    }
    if(value_path == "sent-message-failures")
    {
        sent_message_failures = value;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
    }
    if(value_path == "standby-packets-received")
    {
        standby_packets_received = value;
    }
}

Rip::Vrfs::Vrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "vrf";
}

Rip::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Rip::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    accept_metric{YType::boolean, "accept-metric"},
    auth_key_md5{YType::boolean, "auth-key-md5"},
    auth_key_send_id{YType::uint64, "auth-key-send-id"},
    auth_keychain{YType::str, "auth-keychain"},
    auth_mode{YType::uint32, "auth-mode"},
    destination_address{YType::str, "destination-address"},
    if_handle{YType::str, "if-handle"},
    interface{YType::str, "interface"},
    is_passive_interface{YType::boolean, "is-passive-interface"},
    join_status{YType::boolean, "join-status"},
    lpts_state{YType::boolean, "lpts-state"},
    metric_cost{YType::uint32, "metric-cost"},
    multicast_address{YType::boolean, "multicast-address"},
    neighbor_address{YType::str, "neighbor-address"},
    oom_flags{YType::uint32, "oom-flags"},
    pkt_accepted_valid_auth{YType::uint32, "pkt-accepted-valid-auth"},
    pkt_drop_invalid_auth{YType::uint32, "pkt-drop-invalid-auth"},
    pkt_drop_no_auth{YType::uint32, "pkt-drop-no-auth"},
    pkt_drop_wrong_kc{YType::uint32, "pkt-drop-wrong-kc"},
    poison_horizon{YType::boolean, "poison-horizon"},
    prefix_length{YType::uint32, "prefix-length"},
    receive_version{YType::uint32, "receive-version"},
    rip_enabled{YType::boolean, "rip-enabled"},
    send_auth_key_exists{YType::boolean, "send-auth-key-exists"},
    send_version{YType::uint32, "send-version"},
    split_horizon{YType::boolean, "split-horizon"},
    state{YType::enumeration, "state"},
    total_pkt_recvd{YType::uint32, "total-pkt-recvd"},
    triggered_rip{YType::boolean, "triggered-rip"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Rip::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<rip_peer.size(); index++)
    {
        if(rip_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip_summary.size(); index++)
    {
        if(rip_summary[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| accept_metric.is_set
	|| auth_key_md5.is_set
	|| auth_key_send_id.is_set
	|| auth_keychain.is_set
	|| auth_mode.is_set
	|| destination_address.is_set
	|| if_handle.is_set
	|| interface.is_set
	|| is_passive_interface.is_set
	|| join_status.is_set
	|| lpts_state.is_set
	|| metric_cost.is_set
	|| multicast_address.is_set
	|| neighbor_address.is_set
	|| oom_flags.is_set
	|| pkt_accepted_valid_auth.is_set
	|| pkt_drop_invalid_auth.is_set
	|| pkt_drop_no_auth.is_set
	|| pkt_drop_wrong_kc.is_set
	|| poison_horizon.is_set
	|| prefix_length.is_set
	|| receive_version.is_set
	|| rip_enabled.is_set
	|| send_auth_key_exists.is_set
	|| send_version.is_set
	|| split_horizon.is_set
	|| state.is_set
	|| total_pkt_recvd.is_set
	|| triggered_rip.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<rip_peer.size(); index++)
    {
        if(rip_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip_summary.size(); index++)
    {
        if(rip_summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(accept_metric.operation)
	|| is_set(auth_key_md5.operation)
	|| is_set(auth_key_send_id.operation)
	|| is_set(auth_keychain.operation)
	|| is_set(auth_mode.operation)
	|| is_set(destination_address.operation)
	|| is_set(if_handle.operation)
	|| is_set(interface.operation)
	|| is_set(is_passive_interface.operation)
	|| is_set(join_status.operation)
	|| is_set(lpts_state.operation)
	|| is_set(metric_cost.operation)
	|| is_set(multicast_address.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(oom_flags.operation)
	|| is_set(pkt_accepted_valid_auth.operation)
	|| is_set(pkt_drop_invalid_auth.operation)
	|| is_set(pkt_drop_no_auth.operation)
	|| is_set(pkt_drop_wrong_kc.operation)
	|| is_set(poison_horizon.operation)
	|| is_set(prefix_length.operation)
	|| is_set(receive_version.operation)
	|| is_set(rip_enabled.operation)
	|| is_set(send_auth_key_exists.operation)
	|| is_set(send_version.operation)
	|| is_set(split_horizon.operation)
	|| is_set(state.operation)
	|| is_set(total_pkt_recvd.operation)
	|| is_set(triggered_rip.operation);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (accept_metric.is_set || is_set(accept_metric.operation)) leaf_name_data.push_back(accept_metric.get_name_leafdata());
    if (auth_key_md5.is_set || is_set(auth_key_md5.operation)) leaf_name_data.push_back(auth_key_md5.get_name_leafdata());
    if (auth_key_send_id.is_set || is_set(auth_key_send_id.operation)) leaf_name_data.push_back(auth_key_send_id.get_name_leafdata());
    if (auth_keychain.is_set || is_set(auth_keychain.operation)) leaf_name_data.push_back(auth_keychain.get_name_leafdata());
    if (auth_mode.is_set || is_set(auth_mode.operation)) leaf_name_data.push_back(auth_mode.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.operation)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (is_passive_interface.is_set || is_set(is_passive_interface.operation)) leaf_name_data.push_back(is_passive_interface.get_name_leafdata());
    if (join_status.is_set || is_set(join_status.operation)) leaf_name_data.push_back(join_status.get_name_leafdata());
    if (lpts_state.is_set || is_set(lpts_state.operation)) leaf_name_data.push_back(lpts_state.get_name_leafdata());
    if (metric_cost.is_set || is_set(metric_cost.operation)) leaf_name_data.push_back(metric_cost.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.operation)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (pkt_accepted_valid_auth.is_set || is_set(pkt_accepted_valid_auth.operation)) leaf_name_data.push_back(pkt_accepted_valid_auth.get_name_leafdata());
    if (pkt_drop_invalid_auth.is_set || is_set(pkt_drop_invalid_auth.operation)) leaf_name_data.push_back(pkt_drop_invalid_auth.get_name_leafdata());
    if (pkt_drop_no_auth.is_set || is_set(pkt_drop_no_auth.operation)) leaf_name_data.push_back(pkt_drop_no_auth.get_name_leafdata());
    if (pkt_drop_wrong_kc.is_set || is_set(pkt_drop_wrong_kc.operation)) leaf_name_data.push_back(pkt_drop_wrong_kc.get_name_leafdata());
    if (poison_horizon.is_set || is_set(poison_horizon.operation)) leaf_name_data.push_back(poison_horizon.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.operation)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (rip_enabled.is_set || is_set(rip_enabled.operation)) leaf_name_data.push_back(rip_enabled.get_name_leafdata());
    if (send_auth_key_exists.is_set || is_set(send_auth_key_exists.operation)) leaf_name_data.push_back(send_auth_key_exists.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.operation)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.operation)) leaf_name_data.push_back(split_horizon.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (total_pkt_recvd.is_set || is_set(total_pkt_recvd.operation)) leaf_name_data.push_back(total_pkt_recvd.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.operation)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-peer")
    {
        for(auto const & c : rip_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer>();
        c->parent = this;
        rip_peer.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-summary")
    {
        for(auto const & c : rip_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary>();
        c->parent = this;
        rip_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rip_peer)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "accept-metric")
    {
        accept_metric = value;
    }
    if(value_path == "auth-key-md5")
    {
        auth_key_md5 = value;
    }
    if(value_path == "auth-key-send-id")
    {
        auth_key_send_id = value;
    }
    if(value_path == "auth-keychain")
    {
        auth_keychain = value;
    }
    if(value_path == "auth-mode")
    {
        auth_mode = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "is-passive-interface")
    {
        is_passive_interface = value;
    }
    if(value_path == "join-status")
    {
        join_status = value;
    }
    if(value_path == "lpts-state")
    {
        lpts_state = value;
    }
    if(value_path == "metric-cost")
    {
        metric_cost = value;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "pkt-accepted-valid-auth")
    {
        pkt_accepted_valid_auth = value;
    }
    if(value_path == "pkt-drop-invalid-auth")
    {
        pkt_drop_invalid_auth = value;
    }
    if(value_path == "pkt-drop-no-auth")
    {
        pkt_drop_no_auth = value;
    }
    if(value_path == "pkt-drop-wrong-kc")
    {
        pkt_drop_wrong_kc = value;
    }
    if(value_path == "poison-horizon")
    {
        poison_horizon = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
    }
    if(value_path == "rip-enabled")
    {
        rip_enabled = value;
    }
    if(value_path == "send-auth-key-exists")
    {
        send_auth_key_exists = value;
    }
    if(value_path == "send-version")
    {
        send_version = value;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "total-pkt-recvd")
    {
        total_pkt_recvd = value;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
    }
}

Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::RipSummary()
    :
    metric{YType::int32, "metric"},
    next_hop_address{YType::str, "next-hop-address"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
{
    yang_name = "rip-summary"; yang_parent_name = "interface";
}

Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::~RipSummary()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::has_data() const
{
    return metric.is_set
	|| next_hop_address.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-summary";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipSummary' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::RipPeer()
    :
    discarded_peer_packets{YType::uint32, "discarded-peer-packets"},
    discarded_peer_routes{YType::uint32, "discarded-peer-routes"},
    peer_address{YType::str, "peer-address"},
    peer_uptime{YType::uint32, "peer-uptime"},
    peer_version{YType::uint8, "peer-version"}
{
    yang_name = "rip-peer"; yang_parent_name = "interface";
}

Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::~RipPeer()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::has_data() const
{
    return discarded_peer_packets.is_set
	|| discarded_peer_routes.is_set
	|| peer_address.is_set
	|| peer_uptime.is_set
	|| peer_version.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(discarded_peer_packets.operation)
	|| is_set(discarded_peer_routes.operation)
	|| is_set(peer_address.operation)
	|| is_set(peer_uptime.operation)
	|| is_set(peer_version.operation);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-peer";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipPeer' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discarded_peer_packets.is_set || is_set(discarded_peer_packets.operation)) leaf_name_data.push_back(discarded_peer_packets.get_name_leafdata());
    if (discarded_peer_routes.is_set || is_set(discarded_peer_routes.operation)) leaf_name_data.push_back(discarded_peer_routes.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_uptime.is_set || is_set(peer_uptime.operation)) leaf_name_data.push_back(peer_uptime.get_name_leafdata());
    if (peer_version.is_set || is_set(peer_version.operation)) leaf_name_data.push_back(peer_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discarded-peer-packets")
    {
        discarded_peer_packets = value;
    }
    if(value_path == "discarded-peer-routes")
    {
        discarded_peer_routes = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "peer-uptime")
    {
        peer_uptime = value;
    }
    if(value_path == "peer-version")
    {
        peer_version = value;
    }
}

Rip::Vrfs::Vrf::Global::Global()
    :
    vrf_summary(std::make_shared<Rip::Vrfs::Vrf::Global::VrfSummary>())
{
    vrf_summary->parent = this;

    yang_name = "global"; yang_parent_name = "vrf";
}

Rip::Vrfs::Vrf::Global::~Global()
{
}

bool Rip::Vrfs::Vrf::Global::has_data() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return (vrf_summary !=  nullptr && vrf_summary->has_data());
}

bool Rip::Vrfs::Vrf::Global::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (vrf_summary !=  nullptr && vrf_summary->has_operation());
}

std::string Rip::Vrfs::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        for(auto const & c : interface_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Global::InterfaceSummary>();
        c->parent = this;
        interface_summary.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-summary")
    {
        if(vrf_summary == nullptr)
        {
            vrf_summary = std::make_shared<Rip::Vrfs::Vrf::Global::VrfSummary>();
        }
        return vrf_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_summary)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf_summary != nullptr)
    {
        children["vrf-summary"] = vrf_summary;
    }

    return children;
}

void Rip::Vrfs::Vrf::Global::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Global::VrfSummary::VrfSummary()
    :
    active{YType::boolean, "active"},
    active_interface_count{YType::uint32, "active-interface-count"},
    flush_timer{YType::uint32, "flush-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    interface_configured_count{YType::uint32, "interface-configured-count"},
    invalid_timer{YType::uint32, "invalid-timer"},
    next_update_time{YType::uint32, "next-update-time"},
    oom_flags{YType::uint32, "oom-flags"},
    path_count{YType::uint32, "path-count"},
    route_count{YType::uint32, "route-count"},
    update_timer{YType::uint32, "update-timer"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "vrf-summary"; yang_parent_name = "global";
}

Rip::Vrfs::Vrf::Global::VrfSummary::~VrfSummary()
{
}

bool Rip::Vrfs::Vrf::Global::VrfSummary::has_data() const
{
    return active.is_set
	|| active_interface_count.is_set
	|| flush_timer.is_set
	|| hold_down_timer.is_set
	|| interface_configured_count.is_set
	|| invalid_timer.is_set
	|| next_update_time.is_set
	|| oom_flags.is_set
	|| path_count.is_set
	|| route_count.is_set
	|| update_timer.is_set
	|| vrf_name.is_set;
}

bool Rip::Vrfs::Vrf::Global::VrfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(active_interface_count.operation)
	|| is_set(flush_timer.operation)
	|| is_set(hold_down_timer.operation)
	|| is_set(interface_configured_count.operation)
	|| is_set(invalid_timer.operation)
	|| is_set(next_update_time.operation)
	|| is_set(oom_flags.operation)
	|| is_set(path_count.operation)
	|| is_set(route_count.operation)
	|| is_set(update_timer.operation)
	|| is_set(vrf_name.operation);
}

std::string Rip::Vrfs::Vrf::Global::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Global::VrfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfSummary' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (active_interface_count.is_set || is_set(active_interface_count.operation)) leaf_name_data.push_back(active_interface_count.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.operation)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.operation)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (interface_configured_count.is_set || is_set(interface_configured_count.operation)) leaf_name_data.push_back(interface_configured_count.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.operation)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.operation)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.operation)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.operation)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Global::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Global::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Global::VrfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count = value;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count = value;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "path-count")
    {
        path_count = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Rip::Vrfs::Vrf::Global::InterfaceSummary::InterfaceSummary()
    :
    destination_address{YType::str, "destination-address"},
    enabled{YType::boolean, "enabled"},
    interface_name{YType::str, "interface-name"},
    neighbor_count{YType::uint32, "neighbor-count"},
    oom_flags{YType::uint32, "oom-flags"},
    prefix_length{YType::uint32, "prefix-length"},
    receive_version{YType::uint32, "receive-version"},
    send_version{YType::uint32, "send-version"},
    state{YType::enumeration, "state"}
{
    yang_name = "interface-summary"; yang_parent_name = "global";
}

Rip::Vrfs::Vrf::Global::InterfaceSummary::~InterfaceSummary()
{
}

bool Rip::Vrfs::Vrf::Global::InterfaceSummary::has_data() const
{
    return destination_address.is_set
	|| enabled.is_set
	|| interface_name.is_set
	|| neighbor_count.is_set
	|| oom_flags.is_set
	|| prefix_length.is_set
	|| receive_version.is_set
	|| send_version.is_set
	|| state.is_set;
}

bool Rip::Vrfs::Vrf::Global::InterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(enabled.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(oom_flags.operation)
	|| is_set(prefix_length.operation)
	|| is_set(receive_version.operation)
	|| is_set(send_version.operation)
	|| is_set(state.operation);
}

std::string Rip::Vrfs::Vrf::Global::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";

    return path_buffer.str();

}

const EntityPath Rip::Vrfs::Vrf::Global::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSummary' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.operation)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.operation)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Global::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Vrfs::Vrf::Global::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Vrfs::Vrf::Global::InterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
    }
    if(value_path == "send-version")
    {
        send_version = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Rip::Protocol::Protocol()
    :
    default_vrf(std::make_shared<Rip::Protocol::DefaultVrf>())
	,process(std::make_shared<Rip::Protocol::Process>())
{
    default_vrf->parent = this;

    process->parent = this;

    yang_name = "protocol"; yang_parent_name = "rip";
}

Rip::Protocol::~Protocol()
{
}

bool Rip::Protocol::has_data() const
{
    return (default_vrf !=  nullptr && default_vrf->has_data())
	|| (process !=  nullptr && process->has_data());
}

bool Rip::Protocol::has_operation() const
{
    return is_set(operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (process !=  nullptr && process->has_operation());
}

std::string Rip::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Rip::Protocol::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Rip::Protocol::Process>();
        }
        return process;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    return children;
}

void Rip::Protocol::set_value(const std::string & value_path, std::string value)
{
}

Rip::Protocol::Process::Process()
    :
    current_oom_state{YType::int32, "current-oom-state"},
    path_count{YType::uint32, "path-count"},
    route_count{YType::uint32, "route-count"},
    socket_descriptor{YType::int32, "socket-descriptor"},
    vrf_active_count{YType::uint32, "vrf-active-count"},
    vrf_config_count{YType::uint32, "vrf-config-count"}
{
    yang_name = "process"; yang_parent_name = "protocol";
}

Rip::Protocol::Process::~Process()
{
}

bool Rip::Protocol::Process::has_data() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_data())
            return true;
    }
    return current_oom_state.is_set
	|| path_count.is_set
	|| route_count.is_set
	|| socket_descriptor.is_set
	|| vrf_active_count.is_set
	|| vrf_config_count.is_set;
}

bool Rip::Protocol::Process::has_operation() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(current_oom_state.operation)
	|| is_set(path_count.operation)
	|| is_set(route_count.operation)
	|| is_set(socket_descriptor.operation)
	|| is_set(vrf_active_count.operation)
	|| is_set(vrf_config_count.operation);
}

std::string Rip::Protocol::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_oom_state.is_set || is_set(current_oom_state.operation)) leaf_name_data.push_back(current_oom_state.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.operation)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (socket_descriptor.is_set || is_set(socket_descriptor.operation)) leaf_name_data.push_back(socket_descriptor.get_name_leafdata());
    if (vrf_active_count.is_set || is_set(vrf_active_count.operation)) leaf_name_data.push_back(vrf_active_count.get_name_leafdata());
    if (vrf_config_count.is_set || is_set(vrf_config_count.operation)) leaf_name_data.push_back(vrf_config_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-summary")
    {
        for(auto const & c : vrf_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Protocol::Process::VrfSummary>();
        c->parent = this;
        vrf_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Protocol::Process::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-oom-state")
    {
        current_oom_state = value;
    }
    if(value_path == "path-count")
    {
        path_count = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "socket-descriptor")
    {
        socket_descriptor = value;
    }
    if(value_path == "vrf-active-count")
    {
        vrf_active_count = value;
    }
    if(value_path == "vrf-config-count")
    {
        vrf_config_count = value;
    }
}

Rip::Protocol::Process::VrfSummary::VrfSummary()
    :
    active{YType::boolean, "active"},
    active_interface_count{YType::uint32, "active-interface-count"},
    flush_timer{YType::uint32, "flush-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    interface_configured_count{YType::uint32, "interface-configured-count"},
    invalid_timer{YType::uint32, "invalid-timer"},
    next_update_time{YType::uint32, "next-update-time"},
    oom_flags{YType::uint32, "oom-flags"},
    path_count{YType::uint32, "path-count"},
    route_count{YType::uint32, "route-count"},
    update_timer{YType::uint32, "update-timer"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "vrf-summary"; yang_parent_name = "process";
}

Rip::Protocol::Process::VrfSummary::~VrfSummary()
{
}

bool Rip::Protocol::Process::VrfSummary::has_data() const
{
    return active.is_set
	|| active_interface_count.is_set
	|| flush_timer.is_set
	|| hold_down_timer.is_set
	|| interface_configured_count.is_set
	|| invalid_timer.is_set
	|| next_update_time.is_set
	|| oom_flags.is_set
	|| path_count.is_set
	|| route_count.is_set
	|| update_timer.is_set
	|| vrf_name.is_set;
}

bool Rip::Protocol::Process::VrfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(active_interface_count.operation)
	|| is_set(flush_timer.operation)
	|| is_set(hold_down_timer.operation)
	|| is_set(interface_configured_count.operation)
	|| is_set(invalid_timer.operation)
	|| is_set(next_update_time.operation)
	|| is_set(oom_flags.operation)
	|| is_set(path_count.operation)
	|| is_set(route_count.operation)
	|| is_set(update_timer.operation)
	|| is_set(vrf_name.operation);
}

std::string Rip::Protocol::Process::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::Process::VrfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (active_interface_count.is_set || is_set(active_interface_count.operation)) leaf_name_data.push_back(active_interface_count.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.operation)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.operation)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (interface_configured_count.is_set || is_set(interface_configured_count.operation)) leaf_name_data.push_back(interface_configured_count.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.operation)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.operation)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.operation)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.operation)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::Process::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::Process::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Protocol::Process::VrfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count = value;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count = value;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "path-count")
    {
        path_count = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Rip::Protocol::DefaultVrf::DefaultVrf()
    :
    configuration(std::make_shared<Rip::Protocol::DefaultVrf::Configuration>())
	,global(std::make_shared<Rip::Protocol::DefaultVrf::Global>())
	,interfaces(std::make_shared<Rip::Protocol::DefaultVrf::Interfaces>())
	,routes(std::make_shared<Rip::Protocol::DefaultVrf::Routes>())
	,statistics(std::make_shared<Rip::Protocol::DefaultVrf::Statistics>())
{
    configuration->parent = this;

    global->parent = this;

    interfaces->parent = this;

    routes->parent = this;

    statistics->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "protocol";
}

Rip::Protocol::DefaultVrf::~DefaultVrf()
{
}

bool Rip::Protocol::DefaultVrf::has_data() const
{
    return (configuration !=  nullptr && configuration->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (routes !=  nullptr && routes->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Rip::Protocol::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (routes !=  nullptr && routes->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Rip::Protocol::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Rip::Protocol::DefaultVrf::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Rip::Protocol::DefaultVrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rip::Protocol::DefaultVrf::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<Rip::Protocol::DefaultVrf::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Rip::Protocol::DefaultVrf::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Rip::Protocol::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
}

Rip::Protocol::DefaultVrf::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "default-vrf";
}

Rip::Protocol::DefaultVrf::Routes::~Routes()
{
}

bool Rip::Protocol::DefaultVrf::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Protocol::DefaultVrf::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Protocol::DefaultVrf::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Protocol::DefaultVrf::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Protocol::DefaultVrf::Routes::set_value(const std::string & value_path, std::string value)
{
}

Rip::Protocol::DefaultVrf::Routes::Route::Route()
    :
    active{YType::boolean, "active"},
    attributes{YType::uint32, "attributes"},
    bgp_count{YType::uint16, "bgp-count"},
    destination_address{YType::str, "destination-address"},
    distance{YType::uint16, "distance"},
    hold_down{YType::boolean, "hold-down"},
    path_origin{YType::enumeration, "path-origin"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    prefix_length_xr{YType::uint32, "prefix-length-xr"},
    route_summary{YType::boolean, "route-summary"},
    route_tag{YType::uint16, "route-tag"},
    route_type{YType::uint16, "route-type"},
    version{YType::uint8, "version"}
{
    yang_name = "route"; yang_parent_name = "routes";
}

Rip::Protocol::DefaultVrf::Routes::Route::~Route()
{
}

bool Rip::Protocol::DefaultVrf::Routes::Route::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return active.is_set
	|| attributes.is_set
	|| bgp_count.is_set
	|| destination_address.is_set
	|| distance.is_set
	|| hold_down.is_set
	|| path_origin.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| route_summary.is_set
	|| route_tag.is_set
	|| route_type.is_set
	|| version.is_set;
}

bool Rip::Protocol::DefaultVrf::Routes::Route::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(attributes.operation)
	|| is_set(bgp_count.operation)
	|| is_set(destination_address.operation)
	|| is_set(distance.operation)
	|| is_set(hold_down.operation)
	|| is_set(path_origin.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(route_summary.operation)
	|| is_set(route_tag.operation)
	|| is_set(route_type.operation)
	|| is_set(version.operation);
}

std::string Rip::Protocol::DefaultVrf::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.operation)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (bgp_count.is_set || is_set(bgp_count.operation)) leaf_name_data.push_back(bgp_count.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (hold_down.is_set || is_set(hold_down.operation)) leaf_name_data.push_back(hold_down.get_name_leafdata());
    if (path_origin.is_set || is_set(path_origin.operation)) leaf_name_data.push_back(path_origin.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_summary.is_set || is_set(route_summary.operation)) leaf_name_data.push_back(route_summary.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Protocol::DefaultVrf::Routes::Route::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Protocol::DefaultVrf::Routes::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "attributes")
    {
        attributes = value;
    }
    if(value_path == "bgp-count")
    {
        bgp_count = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "hold-down")
    {
        hold_down = value;
    }
    if(value_path == "path-origin")
    {
        path_origin = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "route-summary")
    {
        route_summary = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Rip::Protocol::DefaultVrf::Routes::Route::Paths::Paths()
    :
    interface{YType::str, "interface"},
    is_permanent{YType::boolean, "is-permanent"},
    metric{YType::uint16, "metric"},
    next_hop_address{YType::str, "next-hop-address"},
    source_address{YType::str, "source-address"},
    tag{YType::uint16, "tag"},
    uptime{YType::uint32, "uptime"}
{
    yang_name = "paths"; yang_parent_name = "route";
}

Rip::Protocol::DefaultVrf::Routes::Route::Paths::~Paths()
{
}

bool Rip::Protocol::DefaultVrf::Routes::Route::Paths::has_data() const
{
    return interface.is_set
	|| is_permanent.is_set
	|| metric.is_set
	|| next_hop_address.is_set
	|| source_address.is_set
	|| tag.is_set
	|| uptime.is_set;
}

bool Rip::Protocol::DefaultVrf::Routes::Route::Paths::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(is_permanent.operation)
	|| is_set(metric.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(source_address.operation)
	|| is_set(tag.operation)
	|| is_set(uptime.operation);
}

std::string Rip::Protocol::DefaultVrf::Routes::Route::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Routes::Route::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/routes/route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (is_permanent.is_set || is_set(is_permanent.operation)) leaf_name_data.push_back(is_permanent.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Routes::Route::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Routes::Route::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Protocol::DefaultVrf::Routes::Route::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "is-permanent")
    {
        is_permanent = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Rip::Protocol::DefaultVrf::Configuration::Configuration()
    :
    active{YType::boolean, "active"},
    auto_summarize{YType::boolean, "auto-summarize"},
    default_metric{YType::uint8, "default-metric"},
    flash_threshold{YType::uint8, "flash-threshold"},
    flush_timer{YType::uint32, "flush-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    input_q_length{YType::uint16, "input-q-length"},
    invalid_timer{YType::uint32, "invalid-timer"},
    maximum_paths{YType::uint8, "maximum-paths"},
    multicast_address{YType::boolean, "multicast-address"},
    next_update_time{YType::uint32, "next-update-time"},
    nsf_life_time{YType::uint32, "nsf-life-time"},
    nsf_status{YType::boolean, "nsf-status"},
    oom_flags{YType::uint32, "oom-flags"},
    rip_version{YType::int32, "rip-version"},
    triggered_rip{YType::boolean, "triggered-rip"},
    update_timer{YType::uint32, "update-timer"},
    validation_indicator{YType::boolean, "validation-indicator"},
    vr_fised_socket{YType::boolean, "vr-fised-socket"}
{
    yang_name = "configuration"; yang_parent_name = "default-vrf";
}

Rip::Protocol::DefaultVrf::Configuration::~Configuration()
{
}

bool Rip::Protocol::DefaultVrf::Configuration::has_data() const
{
    return active.is_set
	|| auto_summarize.is_set
	|| default_metric.is_set
	|| flash_threshold.is_set
	|| flush_timer.is_set
	|| hold_down_timer.is_set
	|| input_q_length.is_set
	|| invalid_timer.is_set
	|| maximum_paths.is_set
	|| multicast_address.is_set
	|| next_update_time.is_set
	|| nsf_life_time.is_set
	|| nsf_status.is_set
	|| oom_flags.is_set
	|| rip_version.is_set
	|| triggered_rip.is_set
	|| update_timer.is_set
	|| validation_indicator.is_set
	|| vr_fised_socket.is_set;
}

bool Rip::Protocol::DefaultVrf::Configuration::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(auto_summarize.operation)
	|| is_set(default_metric.operation)
	|| is_set(flash_threshold.operation)
	|| is_set(flush_timer.operation)
	|| is_set(hold_down_timer.operation)
	|| is_set(input_q_length.operation)
	|| is_set(invalid_timer.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(multicast_address.operation)
	|| is_set(next_update_time.operation)
	|| is_set(nsf_life_time.operation)
	|| is_set(nsf_status.operation)
	|| is_set(oom_flags.operation)
	|| is_set(rip_version.operation)
	|| is_set(triggered_rip.operation)
	|| is_set(update_timer.operation)
	|| is_set(validation_indicator.operation)
	|| is_set(vr_fised_socket.operation);
}

std::string Rip::Protocol::DefaultVrf::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (auto_summarize.is_set || is_set(auto_summarize.operation)) leaf_name_data.push_back(auto_summarize.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (flash_threshold.is_set || is_set(flash_threshold.operation)) leaf_name_data.push_back(flash_threshold.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.operation)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.operation)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (input_q_length.is_set || is_set(input_q_length.operation)) leaf_name_data.push_back(input_q_length.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.operation)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.operation)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.operation)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (nsf_life_time.is_set || is_set(nsf_life_time.operation)) leaf_name_data.push_back(nsf_life_time.get_name_leafdata());
    if (nsf_status.is_set || is_set(nsf_status.operation)) leaf_name_data.push_back(nsf_status.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (rip_version.is_set || is_set(rip_version.operation)) leaf_name_data.push_back(rip_version.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.operation)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.operation)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (validation_indicator.is_set || is_set(validation_indicator.operation)) leaf_name_data.push_back(validation_indicator.get_name_leafdata());
    if (vr_fised_socket.is_set || is_set(vr_fised_socket.operation)) leaf_name_data.push_back(vr_fised_socket.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Protocol::DefaultVrf::Configuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "auto-summarize")
    {
        auto_summarize = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "flash-threshold")
    {
        flash_threshold = value;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
    }
    if(value_path == "input-q-length")
    {
        input_q_length = value;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
    }
    if(value_path == "nsf-life-time")
    {
        nsf_life_time = value;
    }
    if(value_path == "nsf-status")
    {
        nsf_status = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "rip-version")
    {
        rip_version = value;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
    }
    if(value_path == "validation-indicator")
    {
        validation_indicator = value;
    }
    if(value_path == "vr-fised-socket")
    {
        vr_fised_socket = value;
    }
}

Rip::Protocol::DefaultVrf::Statistics::Statistics()
    :
    discarded_packets{YType::uint32, "discarded-packets"},
    discarded_routes{YType::uint32, "discarded-routes"},
    path_count{YType::uint32, "path-count"},
    path_malloc_failures{YType::uint32, "path-malloc-failures"},
    periodic_updates{YType::uint32, "periodic-updates"},
    query_responses{YType::uint32, "query-responses"},
    received_packets{YType::uint32, "received-packets"},
    rib_updates{YType::uint32, "rib-updates"},
    route_count{YType::uint32, "route-count"},
    route_malloc_failures{YType::uint32, "route-malloc-failures"},
    sent_message_failures{YType::uint32, "sent-message-failures"},
    sent_messages{YType::uint32, "sent-messages"},
    standby_packets_received{YType::uint32, "standby-packets-received"}
{
    yang_name = "statistics"; yang_parent_name = "default-vrf";
}

Rip::Protocol::DefaultVrf::Statistics::~Statistics()
{
}

bool Rip::Protocol::DefaultVrf::Statistics::has_data() const
{
    return discarded_packets.is_set
	|| discarded_routes.is_set
	|| path_count.is_set
	|| path_malloc_failures.is_set
	|| periodic_updates.is_set
	|| query_responses.is_set
	|| received_packets.is_set
	|| rib_updates.is_set
	|| route_count.is_set
	|| route_malloc_failures.is_set
	|| sent_message_failures.is_set
	|| sent_messages.is_set
	|| standby_packets_received.is_set;
}

bool Rip::Protocol::DefaultVrf::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(discarded_packets.operation)
	|| is_set(discarded_routes.operation)
	|| is_set(path_count.operation)
	|| is_set(path_malloc_failures.operation)
	|| is_set(periodic_updates.operation)
	|| is_set(query_responses.operation)
	|| is_set(received_packets.operation)
	|| is_set(rib_updates.operation)
	|| is_set(route_count.operation)
	|| is_set(route_malloc_failures.operation)
	|| is_set(sent_message_failures.operation)
	|| is_set(sent_messages.operation)
	|| is_set(standby_packets_received.operation);
}

std::string Rip::Protocol::DefaultVrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discarded_packets.is_set || is_set(discarded_packets.operation)) leaf_name_data.push_back(discarded_packets.get_name_leafdata());
    if (discarded_routes.is_set || is_set(discarded_routes.operation)) leaf_name_data.push_back(discarded_routes.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.operation)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (path_malloc_failures.is_set || is_set(path_malloc_failures.operation)) leaf_name_data.push_back(path_malloc_failures.get_name_leafdata());
    if (periodic_updates.is_set || is_set(periodic_updates.operation)) leaf_name_data.push_back(periodic_updates.get_name_leafdata());
    if (query_responses.is_set || is_set(query_responses.operation)) leaf_name_data.push_back(query_responses.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (rib_updates.is_set || is_set(rib_updates.operation)) leaf_name_data.push_back(rib_updates.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_malloc_failures.is_set || is_set(route_malloc_failures.operation)) leaf_name_data.push_back(route_malloc_failures.get_name_leafdata());
    if (sent_message_failures.is_set || is_set(sent_message_failures.operation)) leaf_name_data.push_back(sent_message_failures.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.operation)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (standby_packets_received.is_set || is_set(standby_packets_received.operation)) leaf_name_data.push_back(standby_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Protocol::DefaultVrf::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discarded-packets")
    {
        discarded_packets = value;
    }
    if(value_path == "discarded-routes")
    {
        discarded_routes = value;
    }
    if(value_path == "path-count")
    {
        path_count = value;
    }
    if(value_path == "path-malloc-failures")
    {
        path_malloc_failures = value;
    }
    if(value_path == "periodic-updates")
    {
        periodic_updates = value;
    }
    if(value_path == "query-responses")
    {
        query_responses = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "rib-updates")
    {
        rib_updates = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "route-malloc-failures")
    {
        route_malloc_failures = value;
    }
    if(value_path == "sent-message-failures")
    {
        sent_message_failures = value;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
    }
    if(value_path == "standby-packets-received")
    {
        standby_packets_received = value;
    }
}

Rip::Protocol::DefaultVrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "default-vrf";
}

Rip::Protocol::DefaultVrf::Interfaces::~Interfaces()
{
}

bool Rip::Protocol::DefaultVrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Protocol::DefaultVrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Protocol::DefaultVrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rip::Protocol::DefaultVrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Protocol::DefaultVrf::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    accept_metric{YType::boolean, "accept-metric"},
    auth_key_md5{YType::boolean, "auth-key-md5"},
    auth_key_send_id{YType::uint64, "auth-key-send-id"},
    auth_keychain{YType::str, "auth-keychain"},
    auth_mode{YType::uint32, "auth-mode"},
    destination_address{YType::str, "destination-address"},
    if_handle{YType::str, "if-handle"},
    interface{YType::str, "interface"},
    is_passive_interface{YType::boolean, "is-passive-interface"},
    join_status{YType::boolean, "join-status"},
    lpts_state{YType::boolean, "lpts-state"},
    metric_cost{YType::uint32, "metric-cost"},
    multicast_address{YType::boolean, "multicast-address"},
    neighbor_address{YType::str, "neighbor-address"},
    oom_flags{YType::uint32, "oom-flags"},
    pkt_accepted_valid_auth{YType::uint32, "pkt-accepted-valid-auth"},
    pkt_drop_invalid_auth{YType::uint32, "pkt-drop-invalid-auth"},
    pkt_drop_no_auth{YType::uint32, "pkt-drop-no-auth"},
    pkt_drop_wrong_kc{YType::uint32, "pkt-drop-wrong-kc"},
    poison_horizon{YType::boolean, "poison-horizon"},
    prefix_length{YType::uint32, "prefix-length"},
    receive_version{YType::uint32, "receive-version"},
    rip_enabled{YType::boolean, "rip-enabled"},
    send_auth_key_exists{YType::boolean, "send-auth-key-exists"},
    send_version{YType::uint32, "send-version"},
    split_horizon{YType::boolean, "split-horizon"},
    state{YType::enumeration, "state"},
    total_pkt_recvd{YType::uint32, "total-pkt-recvd"},
    triggered_rip{YType::boolean, "triggered-rip"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::~Interface()
{
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<rip_peer.size(); index++)
    {
        if(rip_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip_summary.size(); index++)
    {
        if(rip_summary[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| accept_metric.is_set
	|| auth_key_md5.is_set
	|| auth_key_send_id.is_set
	|| auth_keychain.is_set
	|| auth_mode.is_set
	|| destination_address.is_set
	|| if_handle.is_set
	|| interface.is_set
	|| is_passive_interface.is_set
	|| join_status.is_set
	|| lpts_state.is_set
	|| metric_cost.is_set
	|| multicast_address.is_set
	|| neighbor_address.is_set
	|| oom_flags.is_set
	|| pkt_accepted_valid_auth.is_set
	|| pkt_drop_invalid_auth.is_set
	|| pkt_drop_no_auth.is_set
	|| pkt_drop_wrong_kc.is_set
	|| poison_horizon.is_set
	|| prefix_length.is_set
	|| receive_version.is_set
	|| rip_enabled.is_set
	|| send_auth_key_exists.is_set
	|| send_version.is_set
	|| split_horizon.is_set
	|| state.is_set
	|| total_pkt_recvd.is_set
	|| triggered_rip.is_set;
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<rip_peer.size(); index++)
    {
        if(rip_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip_summary.size(); index++)
    {
        if(rip_summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(accept_metric.operation)
	|| is_set(auth_key_md5.operation)
	|| is_set(auth_key_send_id.operation)
	|| is_set(auth_keychain.operation)
	|| is_set(auth_mode.operation)
	|| is_set(destination_address.operation)
	|| is_set(if_handle.operation)
	|| is_set(interface.operation)
	|| is_set(is_passive_interface.operation)
	|| is_set(join_status.operation)
	|| is_set(lpts_state.operation)
	|| is_set(metric_cost.operation)
	|| is_set(multicast_address.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(oom_flags.operation)
	|| is_set(pkt_accepted_valid_auth.operation)
	|| is_set(pkt_drop_invalid_auth.operation)
	|| is_set(pkt_drop_no_auth.operation)
	|| is_set(pkt_drop_wrong_kc.operation)
	|| is_set(poison_horizon.operation)
	|| is_set(prefix_length.operation)
	|| is_set(receive_version.operation)
	|| is_set(rip_enabled.operation)
	|| is_set(send_auth_key_exists.operation)
	|| is_set(send_version.operation)
	|| is_set(split_horizon.operation)
	|| is_set(state.operation)
	|| is_set(total_pkt_recvd.operation)
	|| is_set(triggered_rip.operation);
}

std::string Rip::Protocol::DefaultVrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (accept_metric.is_set || is_set(accept_metric.operation)) leaf_name_data.push_back(accept_metric.get_name_leafdata());
    if (auth_key_md5.is_set || is_set(auth_key_md5.operation)) leaf_name_data.push_back(auth_key_md5.get_name_leafdata());
    if (auth_key_send_id.is_set || is_set(auth_key_send_id.operation)) leaf_name_data.push_back(auth_key_send_id.get_name_leafdata());
    if (auth_keychain.is_set || is_set(auth_keychain.operation)) leaf_name_data.push_back(auth_keychain.get_name_leafdata());
    if (auth_mode.is_set || is_set(auth_mode.operation)) leaf_name_data.push_back(auth_mode.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.operation)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (is_passive_interface.is_set || is_set(is_passive_interface.operation)) leaf_name_data.push_back(is_passive_interface.get_name_leafdata());
    if (join_status.is_set || is_set(join_status.operation)) leaf_name_data.push_back(join_status.get_name_leafdata());
    if (lpts_state.is_set || is_set(lpts_state.operation)) leaf_name_data.push_back(lpts_state.get_name_leafdata());
    if (metric_cost.is_set || is_set(metric_cost.operation)) leaf_name_data.push_back(metric_cost.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.operation)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (pkt_accepted_valid_auth.is_set || is_set(pkt_accepted_valid_auth.operation)) leaf_name_data.push_back(pkt_accepted_valid_auth.get_name_leafdata());
    if (pkt_drop_invalid_auth.is_set || is_set(pkt_drop_invalid_auth.operation)) leaf_name_data.push_back(pkt_drop_invalid_auth.get_name_leafdata());
    if (pkt_drop_no_auth.is_set || is_set(pkt_drop_no_auth.operation)) leaf_name_data.push_back(pkt_drop_no_auth.get_name_leafdata());
    if (pkt_drop_wrong_kc.is_set || is_set(pkt_drop_wrong_kc.operation)) leaf_name_data.push_back(pkt_drop_wrong_kc.get_name_leafdata());
    if (poison_horizon.is_set || is_set(poison_horizon.operation)) leaf_name_data.push_back(poison_horizon.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.operation)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (rip_enabled.is_set || is_set(rip_enabled.operation)) leaf_name_data.push_back(rip_enabled.get_name_leafdata());
    if (send_auth_key_exists.is_set || is_set(send_auth_key_exists.operation)) leaf_name_data.push_back(send_auth_key_exists.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.operation)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.operation)) leaf_name_data.push_back(split_horizon.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (total_pkt_recvd.is_set || is_set(total_pkt_recvd.operation)) leaf_name_data.push_back(total_pkt_recvd.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.operation)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-peer")
    {
        for(auto const & c : rip_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer>();
        c->parent = this;
        rip_peer.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-summary")
    {
        for(auto const & c : rip_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary>();
        c->parent = this;
        rip_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rip_peer)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::Protocol::DefaultVrf::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "accept-metric")
    {
        accept_metric = value;
    }
    if(value_path == "auth-key-md5")
    {
        auth_key_md5 = value;
    }
    if(value_path == "auth-key-send-id")
    {
        auth_key_send_id = value;
    }
    if(value_path == "auth-keychain")
    {
        auth_keychain = value;
    }
    if(value_path == "auth-mode")
    {
        auth_mode = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "is-passive-interface")
    {
        is_passive_interface = value;
    }
    if(value_path == "join-status")
    {
        join_status = value;
    }
    if(value_path == "lpts-state")
    {
        lpts_state = value;
    }
    if(value_path == "metric-cost")
    {
        metric_cost = value;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "pkt-accepted-valid-auth")
    {
        pkt_accepted_valid_auth = value;
    }
    if(value_path == "pkt-drop-invalid-auth")
    {
        pkt_drop_invalid_auth = value;
    }
    if(value_path == "pkt-drop-no-auth")
    {
        pkt_drop_no_auth = value;
    }
    if(value_path == "pkt-drop-wrong-kc")
    {
        pkt_drop_wrong_kc = value;
    }
    if(value_path == "poison-horizon")
    {
        poison_horizon = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
    }
    if(value_path == "rip-enabled")
    {
        rip_enabled = value;
    }
    if(value_path == "send-auth-key-exists")
    {
        send_auth_key_exists = value;
    }
    if(value_path == "send-version")
    {
        send_version = value;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "total-pkt-recvd")
    {
        total_pkt_recvd = value;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
    }
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::RipSummary()
    :
    metric{YType::int32, "metric"},
    next_hop_address{YType::str, "next-hop-address"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
{
    yang_name = "rip-summary"; yang_parent_name = "interface";
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::~RipSummary()
{
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::has_data() const
{
    return metric.is_set
	|| next_hop_address.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-summary";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipSummary' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::RipPeer()
    :
    discarded_peer_packets{YType::uint32, "discarded-peer-packets"},
    discarded_peer_routes{YType::uint32, "discarded-peer-routes"},
    peer_address{YType::str, "peer-address"},
    peer_uptime{YType::uint32, "peer-uptime"},
    peer_version{YType::uint8, "peer-version"}
{
    yang_name = "rip-peer"; yang_parent_name = "interface";
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::~RipPeer()
{
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::has_data() const
{
    return discarded_peer_packets.is_set
	|| discarded_peer_routes.is_set
	|| peer_address.is_set
	|| peer_uptime.is_set
	|| peer_version.is_set;
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(discarded_peer_packets.operation)
	|| is_set(discarded_peer_routes.operation)
	|| is_set(peer_address.operation)
	|| is_set(peer_uptime.operation)
	|| is_set(peer_version.operation);
}

std::string Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-peer";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipPeer' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discarded_peer_packets.is_set || is_set(discarded_peer_packets.operation)) leaf_name_data.push_back(discarded_peer_packets.get_name_leafdata());
    if (discarded_peer_routes.is_set || is_set(discarded_peer_routes.operation)) leaf_name_data.push_back(discarded_peer_routes.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_uptime.is_set || is_set(peer_uptime.operation)) leaf_name_data.push_back(peer_uptime.get_name_leafdata());
    if (peer_version.is_set || is_set(peer_version.operation)) leaf_name_data.push_back(peer_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discarded-peer-packets")
    {
        discarded_peer_packets = value;
    }
    if(value_path == "discarded-peer-routes")
    {
        discarded_peer_routes = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "peer-uptime")
    {
        peer_uptime = value;
    }
    if(value_path == "peer-version")
    {
        peer_version = value;
    }
}

Rip::Protocol::DefaultVrf::Global::Global()
    :
    vrf_summary(std::make_shared<Rip::Protocol::DefaultVrf::Global::VrfSummary>())
{
    vrf_summary->parent = this;

    yang_name = "global"; yang_parent_name = "default-vrf";
}

Rip::Protocol::DefaultVrf::Global::~Global()
{
}

bool Rip::Protocol::DefaultVrf::Global::has_data() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return (vrf_summary !=  nullptr && vrf_summary->has_data());
}

bool Rip::Protocol::DefaultVrf::Global::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (vrf_summary !=  nullptr && vrf_summary->has_operation());
}

std::string Rip::Protocol::DefaultVrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        for(auto const & c : interface_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::Protocol::DefaultVrf::Global::InterfaceSummary>();
        c->parent = this;
        interface_summary.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-summary")
    {
        if(vrf_summary == nullptr)
        {
            vrf_summary = std::make_shared<Rip::Protocol::DefaultVrf::Global::VrfSummary>();
        }
        return vrf_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_summary)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf_summary != nullptr)
    {
        children["vrf-summary"] = vrf_summary;
    }

    return children;
}

void Rip::Protocol::DefaultVrf::Global::set_value(const std::string & value_path, std::string value)
{
}

Rip::Protocol::DefaultVrf::Global::VrfSummary::VrfSummary()
    :
    active{YType::boolean, "active"},
    active_interface_count{YType::uint32, "active-interface-count"},
    flush_timer{YType::uint32, "flush-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    interface_configured_count{YType::uint32, "interface-configured-count"},
    invalid_timer{YType::uint32, "invalid-timer"},
    next_update_time{YType::uint32, "next-update-time"},
    oom_flags{YType::uint32, "oom-flags"},
    path_count{YType::uint32, "path-count"},
    route_count{YType::uint32, "route-count"},
    update_timer{YType::uint32, "update-timer"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "vrf-summary"; yang_parent_name = "global";
}

Rip::Protocol::DefaultVrf::Global::VrfSummary::~VrfSummary()
{
}

bool Rip::Protocol::DefaultVrf::Global::VrfSummary::has_data() const
{
    return active.is_set
	|| active_interface_count.is_set
	|| flush_timer.is_set
	|| hold_down_timer.is_set
	|| interface_configured_count.is_set
	|| invalid_timer.is_set
	|| next_update_time.is_set
	|| oom_flags.is_set
	|| path_count.is_set
	|| route_count.is_set
	|| update_timer.is_set
	|| vrf_name.is_set;
}

bool Rip::Protocol::DefaultVrf::Global::VrfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(active_interface_count.operation)
	|| is_set(flush_timer.operation)
	|| is_set(hold_down_timer.operation)
	|| is_set(interface_configured_count.operation)
	|| is_set(invalid_timer.operation)
	|| is_set(next_update_time.operation)
	|| is_set(oom_flags.operation)
	|| is_set(path_count.operation)
	|| is_set(route_count.operation)
	|| is_set(update_timer.operation)
	|| is_set(vrf_name.operation);
}

std::string Rip::Protocol::DefaultVrf::Global::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Global::VrfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (active_interface_count.is_set || is_set(active_interface_count.operation)) leaf_name_data.push_back(active_interface_count.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.operation)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.operation)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (interface_configured_count.is_set || is_set(interface_configured_count.operation)) leaf_name_data.push_back(interface_configured_count.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.operation)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.operation)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.operation)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.operation)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Global::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Global::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Protocol::DefaultVrf::Global::VrfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count = value;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count = value;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "path-count")
    {
        path_count = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Rip::Protocol::DefaultVrf::Global::InterfaceSummary::InterfaceSummary()
    :
    destination_address{YType::str, "destination-address"},
    enabled{YType::boolean, "enabled"},
    interface_name{YType::str, "interface-name"},
    neighbor_count{YType::uint32, "neighbor-count"},
    oom_flags{YType::uint32, "oom-flags"},
    prefix_length{YType::uint32, "prefix-length"},
    receive_version{YType::uint32, "receive-version"},
    send_version{YType::uint32, "send-version"},
    state{YType::enumeration, "state"}
{
    yang_name = "interface-summary"; yang_parent_name = "global";
}

Rip::Protocol::DefaultVrf::Global::InterfaceSummary::~InterfaceSummary()
{
}

bool Rip::Protocol::DefaultVrf::Global::InterfaceSummary::has_data() const
{
    return destination_address.is_set
	|| enabled.is_set
	|| interface_name.is_set
	|| neighbor_count.is_set
	|| oom_flags.is_set
	|| prefix_length.is_set
	|| receive_version.is_set
	|| send_version.is_set
	|| state.is_set;
}

bool Rip::Protocol::DefaultVrf::Global::InterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(enabled.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(oom_flags.operation)
	|| is_set(prefix_length.operation)
	|| is_set(receive_version.operation)
	|| is_set(send_version.operation)
	|| is_set(state.operation);
}

std::string Rip::Protocol::DefaultVrf::Global::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";

    return path_buffer.str();

}

const EntityPath Rip::Protocol::DefaultVrf::Global::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.operation)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.operation)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Protocol::DefaultVrf::Global::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::Protocol::DefaultVrf::Global::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::Protocol::DefaultVrf::Global::InterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
    }
    if(value_path == "send-version")
    {
        send_version = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Rip::DefaultVrf::DefaultVrf()
    :
    configuration(std::make_shared<Rip::DefaultVrf::Configuration>())
	,global(std::make_shared<Rip::DefaultVrf::Global>())
	,interfaces(std::make_shared<Rip::DefaultVrf::Interfaces>())
	,routes(std::make_shared<Rip::DefaultVrf::Routes>())
	,statistics(std::make_shared<Rip::DefaultVrf::Statistics>())
{
    configuration->parent = this;

    global->parent = this;

    interfaces->parent = this;

    routes->parent = this;

    statistics->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "rip";
}

Rip::DefaultVrf::~DefaultVrf()
{
}

bool Rip::DefaultVrf::has_data() const
{
    return (configuration !=  nullptr && configuration->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (routes !=  nullptr && routes->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Rip::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (routes !=  nullptr && routes->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Rip::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Rip::DefaultVrf::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Rip::DefaultVrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rip::DefaultVrf::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<Rip::DefaultVrf::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Rip::DefaultVrf::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(routes != nullptr)
    {
        children["routes"] = routes;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Rip::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "default-vrf";
}

Rip::DefaultVrf::Routes::~Routes()
{
}

bool Rip::DefaultVrf::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::DefaultVrf::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Routes::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::DefaultVrf::Routes::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::Routes::Route::Route()
    :
    active{YType::boolean, "active"},
    attributes{YType::uint32, "attributes"},
    bgp_count{YType::uint16, "bgp-count"},
    destination_address{YType::str, "destination-address"},
    distance{YType::uint16, "distance"},
    hold_down{YType::boolean, "hold-down"},
    path_origin{YType::enumeration, "path-origin"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    prefix_length_xr{YType::uint32, "prefix-length-xr"},
    route_summary{YType::boolean, "route-summary"},
    route_tag{YType::uint16, "route-tag"},
    route_type{YType::uint16, "route-type"},
    version{YType::uint8, "version"}
{
    yang_name = "route"; yang_parent_name = "routes";
}

Rip::DefaultVrf::Routes::Route::~Route()
{
}

bool Rip::DefaultVrf::Routes::Route::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return active.is_set
	|| attributes.is_set
	|| bgp_count.is_set
	|| destination_address.is_set
	|| distance.is_set
	|| hold_down.is_set
	|| path_origin.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| route_summary.is_set
	|| route_tag.is_set
	|| route_type.is_set
	|| version.is_set;
}

bool Rip::DefaultVrf::Routes::Route::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(attributes.operation)
	|| is_set(bgp_count.operation)
	|| is_set(destination_address.operation)
	|| is_set(distance.operation)
	|| is_set(hold_down.operation)
	|| is_set(path_origin.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(route_summary.operation)
	|| is_set(route_tag.operation)
	|| is_set(route_type.operation)
	|| is_set(version.operation);
}

std::string Rip::DefaultVrf::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.operation)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (bgp_count.is_set || is_set(bgp_count.operation)) leaf_name_data.push_back(bgp_count.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (hold_down.is_set || is_set(hold_down.operation)) leaf_name_data.push_back(hold_down.get_name_leafdata());
    if (path_origin.is_set || is_set(path_origin.operation)) leaf_name_data.push_back(path_origin.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (route_summary.is_set || is_set(route_summary.operation)) leaf_name_data.push_back(route_summary.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Routes::Route::Paths>();
        c->parent = this;
        paths.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : paths)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::DefaultVrf::Routes::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "attributes")
    {
        attributes = value;
    }
    if(value_path == "bgp-count")
    {
        bgp_count = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "hold-down")
    {
        hold_down = value;
    }
    if(value_path == "path-origin")
    {
        path_origin = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "route-summary")
    {
        route_summary = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Rip::DefaultVrf::Routes::Route::Paths::Paths()
    :
    interface{YType::str, "interface"},
    is_permanent{YType::boolean, "is-permanent"},
    metric{YType::uint16, "metric"},
    next_hop_address{YType::str, "next-hop-address"},
    source_address{YType::str, "source-address"},
    tag{YType::uint16, "tag"},
    uptime{YType::uint32, "uptime"}
{
    yang_name = "paths"; yang_parent_name = "route";
}

Rip::DefaultVrf::Routes::Route::Paths::~Paths()
{
}

bool Rip::DefaultVrf::Routes::Route::Paths::has_data() const
{
    return interface.is_set
	|| is_permanent.is_set
	|| metric.is_set
	|| next_hop_address.is_set
	|| source_address.is_set
	|| tag.is_set
	|| uptime.is_set;
}

bool Rip::DefaultVrf::Routes::Route::Paths::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(is_permanent.operation)
	|| is_set(metric.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(source_address.operation)
	|| is_set(tag.operation)
	|| is_set(uptime.operation);
}

std::string Rip::DefaultVrf::Routes::Route::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Routes::Route::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/routes/route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (is_permanent.is_set || is_set(is_permanent.operation)) leaf_name_data.push_back(is_permanent.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Routes::Route::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Routes::Route::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Routes::Route::Paths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "is-permanent")
    {
        is_permanent = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Rip::DefaultVrf::Configuration::Configuration()
    :
    active{YType::boolean, "active"},
    auto_summarize{YType::boolean, "auto-summarize"},
    default_metric{YType::uint8, "default-metric"},
    flash_threshold{YType::uint8, "flash-threshold"},
    flush_timer{YType::uint32, "flush-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    input_q_length{YType::uint16, "input-q-length"},
    invalid_timer{YType::uint32, "invalid-timer"},
    maximum_paths{YType::uint8, "maximum-paths"},
    multicast_address{YType::boolean, "multicast-address"},
    next_update_time{YType::uint32, "next-update-time"},
    nsf_life_time{YType::uint32, "nsf-life-time"},
    nsf_status{YType::boolean, "nsf-status"},
    oom_flags{YType::uint32, "oom-flags"},
    rip_version{YType::int32, "rip-version"},
    triggered_rip{YType::boolean, "triggered-rip"},
    update_timer{YType::uint32, "update-timer"},
    validation_indicator{YType::boolean, "validation-indicator"},
    vr_fised_socket{YType::boolean, "vr-fised-socket"}
{
    yang_name = "configuration"; yang_parent_name = "default-vrf";
}

Rip::DefaultVrf::Configuration::~Configuration()
{
}

bool Rip::DefaultVrf::Configuration::has_data() const
{
    return active.is_set
	|| auto_summarize.is_set
	|| default_metric.is_set
	|| flash_threshold.is_set
	|| flush_timer.is_set
	|| hold_down_timer.is_set
	|| input_q_length.is_set
	|| invalid_timer.is_set
	|| maximum_paths.is_set
	|| multicast_address.is_set
	|| next_update_time.is_set
	|| nsf_life_time.is_set
	|| nsf_status.is_set
	|| oom_flags.is_set
	|| rip_version.is_set
	|| triggered_rip.is_set
	|| update_timer.is_set
	|| validation_indicator.is_set
	|| vr_fised_socket.is_set;
}

bool Rip::DefaultVrf::Configuration::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(auto_summarize.operation)
	|| is_set(default_metric.operation)
	|| is_set(flash_threshold.operation)
	|| is_set(flush_timer.operation)
	|| is_set(hold_down_timer.operation)
	|| is_set(input_q_length.operation)
	|| is_set(invalid_timer.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(multicast_address.operation)
	|| is_set(next_update_time.operation)
	|| is_set(nsf_life_time.operation)
	|| is_set(nsf_status.operation)
	|| is_set(oom_flags.operation)
	|| is_set(rip_version.operation)
	|| is_set(triggered_rip.operation)
	|| is_set(update_timer.operation)
	|| is_set(validation_indicator.operation)
	|| is_set(vr_fised_socket.operation);
}

std::string Rip::DefaultVrf::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (auto_summarize.is_set || is_set(auto_summarize.operation)) leaf_name_data.push_back(auto_summarize.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (flash_threshold.is_set || is_set(flash_threshold.operation)) leaf_name_data.push_back(flash_threshold.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.operation)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.operation)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (input_q_length.is_set || is_set(input_q_length.operation)) leaf_name_data.push_back(input_q_length.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.operation)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.operation)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.operation)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (nsf_life_time.is_set || is_set(nsf_life_time.operation)) leaf_name_data.push_back(nsf_life_time.get_name_leafdata());
    if (nsf_status.is_set || is_set(nsf_status.operation)) leaf_name_data.push_back(nsf_status.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (rip_version.is_set || is_set(rip_version.operation)) leaf_name_data.push_back(rip_version.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.operation)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.operation)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (validation_indicator.is_set || is_set(validation_indicator.operation)) leaf_name_data.push_back(validation_indicator.get_name_leafdata());
    if (vr_fised_socket.is_set || is_set(vr_fised_socket.operation)) leaf_name_data.push_back(vr_fised_socket.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Configuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "auto-summarize")
    {
        auto_summarize = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "flash-threshold")
    {
        flash_threshold = value;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
    }
    if(value_path == "input-q-length")
    {
        input_q_length = value;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
    }
    if(value_path == "nsf-life-time")
    {
        nsf_life_time = value;
    }
    if(value_path == "nsf-status")
    {
        nsf_status = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "rip-version")
    {
        rip_version = value;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
    }
    if(value_path == "validation-indicator")
    {
        validation_indicator = value;
    }
    if(value_path == "vr-fised-socket")
    {
        vr_fised_socket = value;
    }
}

Rip::DefaultVrf::Statistics::Statistics()
    :
    discarded_packets{YType::uint32, "discarded-packets"},
    discarded_routes{YType::uint32, "discarded-routes"},
    path_count{YType::uint32, "path-count"},
    path_malloc_failures{YType::uint32, "path-malloc-failures"},
    periodic_updates{YType::uint32, "periodic-updates"},
    query_responses{YType::uint32, "query-responses"},
    received_packets{YType::uint32, "received-packets"},
    rib_updates{YType::uint32, "rib-updates"},
    route_count{YType::uint32, "route-count"},
    route_malloc_failures{YType::uint32, "route-malloc-failures"},
    sent_message_failures{YType::uint32, "sent-message-failures"},
    sent_messages{YType::uint32, "sent-messages"},
    standby_packets_received{YType::uint32, "standby-packets-received"}
{
    yang_name = "statistics"; yang_parent_name = "default-vrf";
}

Rip::DefaultVrf::Statistics::~Statistics()
{
}

bool Rip::DefaultVrf::Statistics::has_data() const
{
    return discarded_packets.is_set
	|| discarded_routes.is_set
	|| path_count.is_set
	|| path_malloc_failures.is_set
	|| periodic_updates.is_set
	|| query_responses.is_set
	|| received_packets.is_set
	|| rib_updates.is_set
	|| route_count.is_set
	|| route_malloc_failures.is_set
	|| sent_message_failures.is_set
	|| sent_messages.is_set
	|| standby_packets_received.is_set;
}

bool Rip::DefaultVrf::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(discarded_packets.operation)
	|| is_set(discarded_routes.operation)
	|| is_set(path_count.operation)
	|| is_set(path_malloc_failures.operation)
	|| is_set(periodic_updates.operation)
	|| is_set(query_responses.operation)
	|| is_set(received_packets.operation)
	|| is_set(rib_updates.operation)
	|| is_set(route_count.operation)
	|| is_set(route_malloc_failures.operation)
	|| is_set(sent_message_failures.operation)
	|| is_set(sent_messages.operation)
	|| is_set(standby_packets_received.operation);
}

std::string Rip::DefaultVrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discarded_packets.is_set || is_set(discarded_packets.operation)) leaf_name_data.push_back(discarded_packets.get_name_leafdata());
    if (discarded_routes.is_set || is_set(discarded_routes.operation)) leaf_name_data.push_back(discarded_routes.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.operation)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (path_malloc_failures.is_set || is_set(path_malloc_failures.operation)) leaf_name_data.push_back(path_malloc_failures.get_name_leafdata());
    if (periodic_updates.is_set || is_set(periodic_updates.operation)) leaf_name_data.push_back(periodic_updates.get_name_leafdata());
    if (query_responses.is_set || is_set(query_responses.operation)) leaf_name_data.push_back(query_responses.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (rib_updates.is_set || is_set(rib_updates.operation)) leaf_name_data.push_back(rib_updates.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_malloc_failures.is_set || is_set(route_malloc_failures.operation)) leaf_name_data.push_back(route_malloc_failures.get_name_leafdata());
    if (sent_message_failures.is_set || is_set(sent_message_failures.operation)) leaf_name_data.push_back(sent_message_failures.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.operation)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (standby_packets_received.is_set || is_set(standby_packets_received.operation)) leaf_name_data.push_back(standby_packets_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discarded-packets")
    {
        discarded_packets = value;
    }
    if(value_path == "discarded-routes")
    {
        discarded_routes = value;
    }
    if(value_path == "path-count")
    {
        path_count = value;
    }
    if(value_path == "path-malloc-failures")
    {
        path_malloc_failures = value;
    }
    if(value_path == "periodic-updates")
    {
        periodic_updates = value;
    }
    if(value_path == "query-responses")
    {
        query_responses = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "rib-updates")
    {
        rib_updates = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "route-malloc-failures")
    {
        route_malloc_failures = value;
    }
    if(value_path == "sent-message-failures")
    {
        sent_message_failures = value;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
    }
    if(value_path == "standby-packets-received")
    {
        standby_packets_received = value;
    }
}

Rip::DefaultVrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "default-vrf";
}

Rip::DefaultVrf::Interfaces::~Interfaces()
{
}

bool Rip::DefaultVrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::DefaultVrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rip::DefaultVrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::DefaultVrf::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    accept_metric{YType::boolean, "accept-metric"},
    auth_key_md5{YType::boolean, "auth-key-md5"},
    auth_key_send_id{YType::uint64, "auth-key-send-id"},
    auth_keychain{YType::str, "auth-keychain"},
    auth_mode{YType::uint32, "auth-mode"},
    destination_address{YType::str, "destination-address"},
    if_handle{YType::str, "if-handle"},
    interface{YType::str, "interface"},
    is_passive_interface{YType::boolean, "is-passive-interface"},
    join_status{YType::boolean, "join-status"},
    lpts_state{YType::boolean, "lpts-state"},
    metric_cost{YType::uint32, "metric-cost"},
    multicast_address{YType::boolean, "multicast-address"},
    neighbor_address{YType::str, "neighbor-address"},
    oom_flags{YType::uint32, "oom-flags"},
    pkt_accepted_valid_auth{YType::uint32, "pkt-accepted-valid-auth"},
    pkt_drop_invalid_auth{YType::uint32, "pkt-drop-invalid-auth"},
    pkt_drop_no_auth{YType::uint32, "pkt-drop-no-auth"},
    pkt_drop_wrong_kc{YType::uint32, "pkt-drop-wrong-kc"},
    poison_horizon{YType::boolean, "poison-horizon"},
    prefix_length{YType::uint32, "prefix-length"},
    receive_version{YType::uint32, "receive-version"},
    rip_enabled{YType::boolean, "rip-enabled"},
    send_auth_key_exists{YType::boolean, "send-auth-key-exists"},
    send_version{YType::uint32, "send-version"},
    split_horizon{YType::boolean, "split-horizon"},
    state{YType::enumeration, "state"},
    total_pkt_recvd{YType::uint32, "total-pkt-recvd"},
    triggered_rip{YType::boolean, "triggered-rip"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Rip::DefaultVrf::Interfaces::Interface::~Interface()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<rip_peer.size(); index++)
    {
        if(rip_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip_summary.size(); index++)
    {
        if(rip_summary[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| accept_metric.is_set
	|| auth_key_md5.is_set
	|| auth_key_send_id.is_set
	|| auth_keychain.is_set
	|| auth_mode.is_set
	|| destination_address.is_set
	|| if_handle.is_set
	|| interface.is_set
	|| is_passive_interface.is_set
	|| join_status.is_set
	|| lpts_state.is_set
	|| metric_cost.is_set
	|| multicast_address.is_set
	|| neighbor_address.is_set
	|| oom_flags.is_set
	|| pkt_accepted_valid_auth.is_set
	|| pkt_drop_invalid_auth.is_set
	|| pkt_drop_no_auth.is_set
	|| pkt_drop_wrong_kc.is_set
	|| poison_horizon.is_set
	|| prefix_length.is_set
	|| receive_version.is_set
	|| rip_enabled.is_set
	|| send_auth_key_exists.is_set
	|| send_version.is_set
	|| split_horizon.is_set
	|| state.is_set
	|| total_pkt_recvd.is_set
	|| triggered_rip.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<rip_peer.size(); index++)
    {
        if(rip_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip_summary.size(); index++)
    {
        if(rip_summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(accept_metric.operation)
	|| is_set(auth_key_md5.operation)
	|| is_set(auth_key_send_id.operation)
	|| is_set(auth_keychain.operation)
	|| is_set(auth_mode.operation)
	|| is_set(destination_address.operation)
	|| is_set(if_handle.operation)
	|| is_set(interface.operation)
	|| is_set(is_passive_interface.operation)
	|| is_set(join_status.operation)
	|| is_set(lpts_state.operation)
	|| is_set(metric_cost.operation)
	|| is_set(multicast_address.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(oom_flags.operation)
	|| is_set(pkt_accepted_valid_auth.operation)
	|| is_set(pkt_drop_invalid_auth.operation)
	|| is_set(pkt_drop_no_auth.operation)
	|| is_set(pkt_drop_wrong_kc.operation)
	|| is_set(poison_horizon.operation)
	|| is_set(prefix_length.operation)
	|| is_set(receive_version.operation)
	|| is_set(rip_enabled.operation)
	|| is_set(send_auth_key_exists.operation)
	|| is_set(send_version.operation)
	|| is_set(split_horizon.operation)
	|| is_set(state.operation)
	|| is_set(total_pkt_recvd.operation)
	|| is_set(triggered_rip.operation);
}

std::string Rip::DefaultVrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (accept_metric.is_set || is_set(accept_metric.operation)) leaf_name_data.push_back(accept_metric.get_name_leafdata());
    if (auth_key_md5.is_set || is_set(auth_key_md5.operation)) leaf_name_data.push_back(auth_key_md5.get_name_leafdata());
    if (auth_key_send_id.is_set || is_set(auth_key_send_id.operation)) leaf_name_data.push_back(auth_key_send_id.get_name_leafdata());
    if (auth_keychain.is_set || is_set(auth_keychain.operation)) leaf_name_data.push_back(auth_keychain.get_name_leafdata());
    if (auth_mode.is_set || is_set(auth_mode.operation)) leaf_name_data.push_back(auth_mode.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.operation)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (is_passive_interface.is_set || is_set(is_passive_interface.operation)) leaf_name_data.push_back(is_passive_interface.get_name_leafdata());
    if (join_status.is_set || is_set(join_status.operation)) leaf_name_data.push_back(join_status.get_name_leafdata());
    if (lpts_state.is_set || is_set(lpts_state.operation)) leaf_name_data.push_back(lpts_state.get_name_leafdata());
    if (metric_cost.is_set || is_set(metric_cost.operation)) leaf_name_data.push_back(metric_cost.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.operation)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (pkt_accepted_valid_auth.is_set || is_set(pkt_accepted_valid_auth.operation)) leaf_name_data.push_back(pkt_accepted_valid_auth.get_name_leafdata());
    if (pkt_drop_invalid_auth.is_set || is_set(pkt_drop_invalid_auth.operation)) leaf_name_data.push_back(pkt_drop_invalid_auth.get_name_leafdata());
    if (pkt_drop_no_auth.is_set || is_set(pkt_drop_no_auth.operation)) leaf_name_data.push_back(pkt_drop_no_auth.get_name_leafdata());
    if (pkt_drop_wrong_kc.is_set || is_set(pkt_drop_wrong_kc.operation)) leaf_name_data.push_back(pkt_drop_wrong_kc.get_name_leafdata());
    if (poison_horizon.is_set || is_set(poison_horizon.operation)) leaf_name_data.push_back(poison_horizon.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.operation)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (rip_enabled.is_set || is_set(rip_enabled.operation)) leaf_name_data.push_back(rip_enabled.get_name_leafdata());
    if (send_auth_key_exists.is_set || is_set(send_auth_key_exists.operation)) leaf_name_data.push_back(send_auth_key_exists.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.operation)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.operation)) leaf_name_data.push_back(split_horizon.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (total_pkt_recvd.is_set || is_set(total_pkt_recvd.operation)) leaf_name_data.push_back(total_pkt_recvd.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.operation)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-peer")
    {
        for(auto const & c : rip_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::RipPeer>();
        c->parent = this;
        rip_peer.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-summary")
    {
        for(auto const & c : rip_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::RipSummary>();
        c->parent = this;
        rip_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rip_peer)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "accept-metric")
    {
        accept_metric = value;
    }
    if(value_path == "auth-key-md5")
    {
        auth_key_md5 = value;
    }
    if(value_path == "auth-key-send-id")
    {
        auth_key_send_id = value;
    }
    if(value_path == "auth-keychain")
    {
        auth_keychain = value;
    }
    if(value_path == "auth-mode")
    {
        auth_mode = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "is-passive-interface")
    {
        is_passive_interface = value;
    }
    if(value_path == "join-status")
    {
        join_status = value;
    }
    if(value_path == "lpts-state")
    {
        lpts_state = value;
    }
    if(value_path == "metric-cost")
    {
        metric_cost = value;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "pkt-accepted-valid-auth")
    {
        pkt_accepted_valid_auth = value;
    }
    if(value_path == "pkt-drop-invalid-auth")
    {
        pkt_drop_invalid_auth = value;
    }
    if(value_path == "pkt-drop-no-auth")
    {
        pkt_drop_no_auth = value;
    }
    if(value_path == "pkt-drop-wrong-kc")
    {
        pkt_drop_wrong_kc = value;
    }
    if(value_path == "poison-horizon")
    {
        poison_horizon = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
    }
    if(value_path == "rip-enabled")
    {
        rip_enabled = value;
    }
    if(value_path == "send-auth-key-exists")
    {
        send_auth_key_exists = value;
    }
    if(value_path == "send-version")
    {
        send_version = value;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "total-pkt-recvd")
    {
        total_pkt_recvd = value;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
    }
}

Rip::DefaultVrf::Interfaces::Interface::RipSummary::RipSummary()
    :
    metric{YType::int32, "metric"},
    next_hop_address{YType::str, "next-hop-address"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
{
    yang_name = "rip-summary"; yang_parent_name = "interface";
}

Rip::DefaultVrf::Interfaces::Interface::RipSummary::~RipSummary()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::RipSummary::has_data() const
{
    return metric.is_set
	|| next_hop_address.is_set
	|| prefix.is_set
	|| prefix_length.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::RipSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string Rip::DefaultVrf::Interfaces::Interface::RipSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-summary";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Interfaces::Interface::RipSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipSummary' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::RipSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Interfaces::Interface::RipSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::RipSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Rip::DefaultVrf::Interfaces::Interface::RipPeer::RipPeer()
    :
    discarded_peer_packets{YType::uint32, "discarded-peer-packets"},
    discarded_peer_routes{YType::uint32, "discarded-peer-routes"},
    peer_address{YType::str, "peer-address"},
    peer_uptime{YType::uint32, "peer-uptime"},
    peer_version{YType::uint8, "peer-version"}
{
    yang_name = "rip-peer"; yang_parent_name = "interface";
}

Rip::DefaultVrf::Interfaces::Interface::RipPeer::~RipPeer()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::RipPeer::has_data() const
{
    return discarded_peer_packets.is_set
	|| discarded_peer_routes.is_set
	|| peer_address.is_set
	|| peer_uptime.is_set
	|| peer_version.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::RipPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(discarded_peer_packets.operation)
	|| is_set(discarded_peer_routes.operation)
	|| is_set(peer_address.operation)
	|| is_set(peer_uptime.operation)
	|| is_set(peer_version.operation);
}

std::string Rip::DefaultVrf::Interfaces::Interface::RipPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-peer";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Interfaces::Interface::RipPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RipPeer' in Cisco_IOS_XR_ip_rip_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discarded_peer_packets.is_set || is_set(discarded_peer_packets.operation)) leaf_name_data.push_back(discarded_peer_packets.get_name_leafdata());
    if (discarded_peer_routes.is_set || is_set(discarded_peer_routes.operation)) leaf_name_data.push_back(discarded_peer_routes.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_uptime.is_set || is_set(peer_uptime.operation)) leaf_name_data.push_back(peer_uptime.get_name_leafdata());
    if (peer_version.is_set || is_set(peer_version.operation)) leaf_name_data.push_back(peer_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::RipPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Interfaces::Interface::RipPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::RipPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discarded-peer-packets")
    {
        discarded_peer_packets = value;
    }
    if(value_path == "discarded-peer-routes")
    {
        discarded_peer_routes = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "peer-uptime")
    {
        peer_uptime = value;
    }
    if(value_path == "peer-version")
    {
        peer_version = value;
    }
}

Rip::DefaultVrf::Global::Global()
    :
    vrf_summary(std::make_shared<Rip::DefaultVrf::Global::VrfSummary>())
{
    vrf_summary->parent = this;

    yang_name = "global"; yang_parent_name = "default-vrf";
}

Rip::DefaultVrf::Global::~Global()
{
}

bool Rip::DefaultVrf::Global::has_data() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return (vrf_summary !=  nullptr && vrf_summary->has_data());
}

bool Rip::DefaultVrf::Global::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (vrf_summary !=  nullptr && vrf_summary->has_operation());
}

std::string Rip::DefaultVrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        for(auto const & c : interface_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Global::InterfaceSummary>();
        c->parent = this;
        interface_summary.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf-summary")
    {
        if(vrf_summary == nullptr)
        {
            vrf_summary = std::make_shared<Rip::DefaultVrf::Global::VrfSummary>();
        }
        return vrf_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_summary)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf_summary != nullptr)
    {
        children["vrf-summary"] = vrf_summary;
    }

    return children;
}

void Rip::DefaultVrf::Global::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::Global::VrfSummary::VrfSummary()
    :
    active{YType::boolean, "active"},
    active_interface_count{YType::uint32, "active-interface-count"},
    flush_timer{YType::uint32, "flush-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    interface_configured_count{YType::uint32, "interface-configured-count"},
    invalid_timer{YType::uint32, "invalid-timer"},
    next_update_time{YType::uint32, "next-update-time"},
    oom_flags{YType::uint32, "oom-flags"},
    path_count{YType::uint32, "path-count"},
    route_count{YType::uint32, "route-count"},
    update_timer{YType::uint32, "update-timer"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "vrf-summary"; yang_parent_name = "global";
}

Rip::DefaultVrf::Global::VrfSummary::~VrfSummary()
{
}

bool Rip::DefaultVrf::Global::VrfSummary::has_data() const
{
    return active.is_set
	|| active_interface_count.is_set
	|| flush_timer.is_set
	|| hold_down_timer.is_set
	|| interface_configured_count.is_set
	|| invalid_timer.is_set
	|| next_update_time.is_set
	|| oom_flags.is_set
	|| path_count.is_set
	|| route_count.is_set
	|| update_timer.is_set
	|| vrf_name.is_set;
}

bool Rip::DefaultVrf::Global::VrfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(active_interface_count.operation)
	|| is_set(flush_timer.operation)
	|| is_set(hold_down_timer.operation)
	|| is_set(interface_configured_count.operation)
	|| is_set(invalid_timer.operation)
	|| is_set(next_update_time.operation)
	|| is_set(oom_flags.operation)
	|| is_set(path_count.operation)
	|| is_set(route_count.operation)
	|| is_set(update_timer.operation)
	|| is_set(vrf_name.operation);
}

std::string Rip::DefaultVrf::Global::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Global::VrfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (active_interface_count.is_set || is_set(active_interface_count.operation)) leaf_name_data.push_back(active_interface_count.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.operation)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.operation)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (interface_configured_count.is_set || is_set(interface_configured_count.operation)) leaf_name_data.push_back(interface_configured_count.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.operation)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.operation)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.operation)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.operation)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Global::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Global::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Global::VrfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count = value;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count = value;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "path-count")
    {
        path_count = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Rip::DefaultVrf::Global::InterfaceSummary::InterfaceSummary()
    :
    destination_address{YType::str, "destination-address"},
    enabled{YType::boolean, "enabled"},
    interface_name{YType::str, "interface-name"},
    neighbor_count{YType::uint32, "neighbor-count"},
    oom_flags{YType::uint32, "oom-flags"},
    prefix_length{YType::uint32, "prefix-length"},
    receive_version{YType::uint32, "receive-version"},
    send_version{YType::uint32, "send-version"},
    state{YType::enumeration, "state"}
{
    yang_name = "interface-summary"; yang_parent_name = "global";
}

Rip::DefaultVrf::Global::InterfaceSummary::~InterfaceSummary()
{
}

bool Rip::DefaultVrf::Global::InterfaceSummary::has_data() const
{
    return destination_address.is_set
	|| enabled.is_set
	|| interface_name.is_set
	|| neighbor_count.is_set
	|| oom_flags.is_set
	|| prefix_length.is_set
	|| receive_version.is_set
	|| send_version.is_set
	|| state.is_set;
}

bool Rip::DefaultVrf::Global::InterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(enabled.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(oom_flags.operation)
	|| is_set(prefix_length.operation)
	|| is_set(receive_version.operation)
	|| is_set(send_version.operation)
	|| is_set(state.operation);
}

std::string Rip::DefaultVrf::Global::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";

    return path_buffer.str();

}

const EntityPath Rip::DefaultVrf::Global::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.operation)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.operation)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.operation)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Global::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rip::DefaultVrf::Global::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rip::DefaultVrf::Global::InterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
    }
    if(value_path == "send-version")
    {
        send_version = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

const Enum::YLeaf RipRouteOriginEnum::rip_rt_org_runover {0, "rip-rt-org-runover"};
const Enum::YLeaf RipRouteOriginEnum::rip_rt_org_redist {1, "rip-rt-org-redist"};
const Enum::YLeaf RipRouteOriginEnum::rip_rt_org_auto_summary {2, "rip-rt-org-auto-summary"};
const Enum::YLeaf RipRouteOriginEnum::rip_rt_org_rip {3, "rip-rt-org-rip"};
const Enum::YLeaf RipRouteOriginEnum::rip_rt_org_intsummary {4, "rip-rt-org-intsummary"};
const Enum::YLeaf RipRouteOriginEnum::rip_rt_org_unused {5, "rip-rt-org-unused"};

const Enum::YLeaf InterfaceStateEnum::interface_none {0, "interface-none"};
const Enum::YLeaf InterfaceStateEnum::interface_down {1, "interface-down"};
const Enum::YLeaf InterfaceStateEnum::interface_up {2, "interface-up"};
const Enum::YLeaf InterfaceStateEnum::interface_unknown {3, "interface-unknown"};


}
}

