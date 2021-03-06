
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rip_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rip_oper {

Rip::Rip()
    :
    vrfs(std::make_shared<Rip::Vrfs>())
    , protocol(std::make_shared<Rip::Protocol>())
    , default_vrf(std::make_shared<Rip::DefaultVrf>())
{
    vrfs->parent = this;
    protocol->parent = this;
    default_vrf->parent = this;

    yang_name = "rip"; yang_parent_name = "Cisco-IOS-XR-ip-rip-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Rip::~Rip()
{
}

bool Rip::has_data() const
{
    if (is_presence_container) return true;
    return (vrfs !=  nullptr && vrfs->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (default_vrf !=  nullptr && default_vrf->has_data());
}

bool Rip::has_operation() const
{
    return is_set(yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (default_vrf !=  nullptr && default_vrf->has_operation());
}

std::string Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Rip::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Rip::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Rip::DefaultVrf>();
        }
        return default_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(protocol != nullptr)
    {
        _children["protocol"] = protocol;
    }

    if(default_vrf != nullptr)
    {
        _children["default-vrf"] = default_vrf;
    }

    return _children;
}

void Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Rip::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> Rip::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs" || name == "protocol" || name == "default-vrf")
        return true;
    return false;
}

Rip::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Vrfs::~Vrfs()
{
}

bool Rip::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Rip::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    routes(std::make_shared<Rip::Vrfs::Vrf::Routes>())
    , configuration(std::make_shared<Rip::Vrfs::Vrf::Configuration>())
    , statistics(std::make_shared<Rip::Vrfs::Vrf::Statistics>())
    , interfaces(std::make_shared<Rip::Vrfs::Vrf::Interfaces>())
    , global(std::make_shared<Rip::Vrfs::Vrf::Global>())
{
    routes->parent = this;
    configuration->parent = this;
    statistics->parent = this;
    interfaces->parent = this;
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Vrfs::Vrf::~Vrf()
{
}

bool Rip::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (routes !=  nullptr && routes->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool Rip::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string Rip::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<Rip::Vrfs::Vrf::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Rip::Vrfs::Vrf::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Rip::Vrfs::Vrf::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rip::Vrfs::Vrf::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Rip::Vrfs::Vrf::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Rip::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "configuration" || name == "statistics" || name == "interfaces" || name == "global" || name == "vrf-name")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Routes::~Routes()
{
}

bool Rip::Vrfs::Vrf::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Vrfs::Vrf::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<Rip::Vrfs::Vrf::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Vrfs::Vrf::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::Vrf::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::Vrf::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Routes::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    destination_address{YType::str, "destination-address"},
    prefix_length_xr{YType::uint32, "prefix-length-xr"},
    distance{YType::uint16, "distance"},
    bgp_count{YType::uint16, "bgp-count"},
    route_type{YType::uint16, "route-type"},
    route_summary{YType::boolean, "route-summary"},
    route_tag{YType::uint16, "route-tag"},
    version{YType::uint8, "version"},
    attributes{YType::uint32, "attributes"},
    active{YType::boolean, "active"},
    path_origin{YType::enumeration, "path-origin"},
    hold_down{YType::boolean, "hold-down"}
        ,
    paths(this, {})
{

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Routes::Route::~Route()
{
}

bool Rip::Vrfs::Vrf::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| destination_address.is_set
	|| prefix_length_xr.is_set
	|| distance.is_set
	|| bgp_count.is_set
	|| route_type.is_set
	|| route_summary.is_set
	|| route_tag.is_set
	|| version.is_set
	|| attributes.is_set
	|| active.is_set
	|| path_origin.is_set
	|| hold_down.is_set;
}

bool Rip::Vrfs::Vrf::Routes::Route::has_operation() const
{
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(bgp_count.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_summary.yfilter)
	|| ydk::is_set(route_tag.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(path_origin.yfilter)
	|| ydk::is_set(hold_down.yfilter);
}

std::string Rip::Vrfs::Vrf::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (bgp_count.is_set || is_set(bgp_count.yfilter)) leaf_name_data.push_back(bgp_count.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_summary.is_set || is_set(route_summary.yfilter)) leaf_name_data.push_back(route_summary.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (path_origin.is_set || is_set(path_origin.yfilter)) leaf_name_data.push_back(path_origin.get_name_leafdata());
    if (hold_down.is_set || is_set(hold_down.yfilter)) leaf_name_data.push_back(hold_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        auto ent_ = std::make_shared<Rip::Vrfs::Vrf::Routes::Route::Paths>();
        ent_->parent = this;
        paths.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : paths.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Vrfs::Vrf::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-count")
    {
        bgp_count = value;
        bgp_count.value_namespace = name_space;
        bgp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-summary")
    {
        route_summary = value;
        route_summary.value_namespace = name_space;
        route_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-origin")
    {
        path_origin = value;
        path_origin.value_namespace = name_space;
        path_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down")
    {
        hold_down = value;
        hold_down.value_namespace = name_space;
        hold_down.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "bgp-count")
    {
        bgp_count.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-summary")
    {
        route_summary.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "path-origin")
    {
        path_origin.yfilter = yfilter;
    }
    if(value_path == "hold-down")
    {
        hold_down.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "prefix" || name == "prefix-length" || name == "destination-address" || name == "prefix-length-xr" || name == "distance" || name == "bgp-count" || name == "route-type" || name == "route-summary" || name == "route-tag" || name == "version" || name == "attributes" || name == "active" || name == "path-origin" || name == "hold-down")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Routes::Route::Paths::Paths()
    :
    source_address{YType::str, "source-address"},
    next_hop_address{YType::str, "next-hop-address"},
    metric{YType::uint16, "metric"},
    tag{YType::uint16, "tag"},
    interface{YType::str, "interface"},
    uptime{YType::uint32, "uptime"},
    is_permanent{YType::boolean, "is-permanent"}
{

    yang_name = "paths"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Routes::Route::Paths::~Paths()
{
}

bool Rip::Vrfs::Vrf::Routes::Route::Paths::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| next_hop_address.is_set
	|| metric.is_set
	|| tag.is_set
	|| interface.is_set
	|| uptime.is_set
	|| is_permanent.is_set;
}

bool Rip::Vrfs::Vrf::Routes::Route::Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(is_permanent.yfilter);
}

std::string Rip::Vrfs::Vrf::Routes::Route::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Routes::Route::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (is_permanent.is_set || is_set(is_permanent.yfilter)) leaf_name_data.push_back(is_permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Routes::Route::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Routes::Route::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Vrfs::Vrf::Routes::Route::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-permanent")
    {
        is_permanent = value;
        is_permanent.value_namespace = name_space;
        is_permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Routes::Route::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "is-permanent")
    {
        is_permanent.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Routes::Route::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "next-hop-address" || name == "metric" || name == "tag" || name == "interface" || name == "uptime" || name == "is-permanent")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Configuration::Configuration()
    :
    active{YType::boolean, "active"},
    vr_fised_socket{YType::boolean, "vr-fised-socket"},
    rip_version{YType::int32, "rip-version"},
    default_metric{YType::uint8, "default-metric"},
    maximum_paths{YType::uint8, "maximum-paths"},
    auto_summarize{YType::boolean, "auto-summarize"},
    multicast_address{YType::boolean, "multicast-address"},
    flash_threshold{YType::uint8, "flash-threshold"},
    input_q_length{YType::uint16, "input-q-length"},
    triggered_rip{YType::boolean, "triggered-rip"},
    validation_indicator{YType::boolean, "validation-indicator"},
    update_timer{YType::uint32, "update-timer"},
    next_update_time{YType::uint32, "next-update-time"},
    invalid_timer{YType::uint32, "invalid-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    flush_timer{YType::uint32, "flush-timer"},
    oom_flags{YType::uint32, "oom-flags"},
    nsf_status{YType::boolean, "nsf-status"},
    nsf_life_time{YType::uint32, "nsf-life-time"}
{

    yang_name = "configuration"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Configuration::~Configuration()
{
}

bool Rip::Vrfs::Vrf::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return active.is_set
	|| vr_fised_socket.is_set
	|| rip_version.is_set
	|| default_metric.is_set
	|| maximum_paths.is_set
	|| auto_summarize.is_set
	|| multicast_address.is_set
	|| flash_threshold.is_set
	|| input_q_length.is_set
	|| triggered_rip.is_set
	|| validation_indicator.is_set
	|| update_timer.is_set
	|| next_update_time.is_set
	|| invalid_timer.is_set
	|| hold_down_timer.is_set
	|| flush_timer.is_set
	|| oom_flags.is_set
	|| nsf_status.is_set
	|| nsf_life_time.is_set;
}

bool Rip::Vrfs::Vrf::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(vr_fised_socket.yfilter)
	|| ydk::is_set(rip_version.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(auto_summarize.yfilter)
	|| ydk::is_set(multicast_address.yfilter)
	|| ydk::is_set(flash_threshold.yfilter)
	|| ydk::is_set(input_q_length.yfilter)
	|| ydk::is_set(triggered_rip.yfilter)
	|| ydk::is_set(validation_indicator.yfilter)
	|| ydk::is_set(update_timer.yfilter)
	|| ydk::is_set(next_update_time.yfilter)
	|| ydk::is_set(invalid_timer.yfilter)
	|| ydk::is_set(hold_down_timer.yfilter)
	|| ydk::is_set(flush_timer.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(nsf_status.yfilter)
	|| ydk::is_set(nsf_life_time.yfilter);
}

std::string Rip::Vrfs::Vrf::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (vr_fised_socket.is_set || is_set(vr_fised_socket.yfilter)) leaf_name_data.push_back(vr_fised_socket.get_name_leafdata());
    if (rip_version.is_set || is_set(rip_version.yfilter)) leaf_name_data.push_back(rip_version.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (auto_summarize.is_set || is_set(auto_summarize.yfilter)) leaf_name_data.push_back(auto_summarize.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.yfilter)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (flash_threshold.is_set || is_set(flash_threshold.yfilter)) leaf_name_data.push_back(flash_threshold.get_name_leafdata());
    if (input_q_length.is_set || is_set(input_q_length.yfilter)) leaf_name_data.push_back(input_q_length.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.yfilter)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());
    if (validation_indicator.is_set || is_set(validation_indicator.yfilter)) leaf_name_data.push_back(validation_indicator.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.yfilter)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.yfilter)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.yfilter)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.yfilter)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.yfilter)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (nsf_status.is_set || is_set(nsf_status.yfilter)) leaf_name_data.push_back(nsf_status.get_name_leafdata());
    if (nsf_life_time.is_set || is_set(nsf_life_time.yfilter)) leaf_name_data.push_back(nsf_life_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Vrfs::Vrf::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vr-fised-socket")
    {
        vr_fised_socket = value;
        vr_fised_socket.value_namespace = name_space;
        vr_fised_socket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rip-version")
    {
        rip_version = value;
        rip_version.value_namespace = name_space;
        rip_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summarize")
    {
        auto_summarize = value;
        auto_summarize.value_namespace = name_space;
        auto_summarize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
        multicast_address.value_namespace = name_space;
        multicast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-threshold")
    {
        flash_threshold = value;
        flash_threshold.value_namespace = name_space;
        flash_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-q-length")
    {
        input_q_length = value;
        input_q_length.value_namespace = name_space;
        input_q_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
        triggered_rip.value_namespace = name_space;
        triggered_rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validation-indicator")
    {
        validation_indicator = value;
        validation_indicator.value_namespace = name_space;
        validation_indicator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
        update_timer.value_namespace = name_space;
        update_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
        next_update_time.value_namespace = name_space;
        next_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
        invalid_timer.value_namespace = name_space;
        invalid_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
        hold_down_timer.value_namespace = name_space;
        hold_down_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
        flush_timer.value_namespace = name_space;
        flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-status")
    {
        nsf_status = value;
        nsf_status.value_namespace = name_space;
        nsf_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-life-time")
    {
        nsf_life_time = value;
        nsf_life_time.value_namespace = name_space;
        nsf_life_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "vr-fised-socket")
    {
        vr_fised_socket.yfilter = yfilter;
    }
    if(value_path == "rip-version")
    {
        rip_version.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "auto-summarize")
    {
        auto_summarize.yfilter = yfilter;
    }
    if(value_path == "multicast-address")
    {
        multicast_address.yfilter = yfilter;
    }
    if(value_path == "flash-threshold")
    {
        flash_threshold.yfilter = yfilter;
    }
    if(value_path == "input-q-length")
    {
        input_q_length.yfilter = yfilter;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip.yfilter = yfilter;
    }
    if(value_path == "validation-indicator")
    {
        validation_indicator.yfilter = yfilter;
    }
    if(value_path == "update-timer")
    {
        update_timer.yfilter = yfilter;
    }
    if(value_path == "next-update-time")
    {
        next_update_time.yfilter = yfilter;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer.yfilter = yfilter;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer.yfilter = yfilter;
    }
    if(value_path == "flush-timer")
    {
        flush_timer.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "nsf-status")
    {
        nsf_status.yfilter = yfilter;
    }
    if(value_path == "nsf-life-time")
    {
        nsf_life_time.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "vr-fised-socket" || name == "rip-version" || name == "default-metric" || name == "maximum-paths" || name == "auto-summarize" || name == "multicast-address" || name == "flash-threshold" || name == "input-q-length" || name == "triggered-rip" || name == "validation-indicator" || name == "update-timer" || name == "next-update-time" || name == "invalid-timer" || name == "hold-down-timer" || name == "flush-timer" || name == "oom-flags" || name == "nsf-status" || name == "nsf-life-time")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Statistics::Statistics()
    :
    received_packets{YType::uint32, "received-packets"},
    discarded_packets{YType::uint32, "discarded-packets"},
    discarded_routes{YType::uint32, "discarded-routes"},
    standby_packets_received{YType::uint32, "standby-packets-received"},
    sent_messages{YType::uint32, "sent-messages"},
    sent_message_failures{YType::uint32, "sent-message-failures"},
    query_responses{YType::uint32, "query-responses"},
    periodic_updates{YType::uint32, "periodic-updates"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    route_malloc_failures{YType::uint32, "route-malloc-failures"},
    path_malloc_failures{YType::uint32, "path-malloc-failures"},
    rib_updates{YType::uint32, "rib-updates"}
{

    yang_name = "statistics"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool Rip::Vrfs::Vrf::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return received_packets.is_set
	|| discarded_packets.is_set
	|| discarded_routes.is_set
	|| standby_packets_received.is_set
	|| sent_messages.is_set
	|| sent_message_failures.is_set
	|| query_responses.is_set
	|| periodic_updates.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| route_malloc_failures.is_set
	|| path_malloc_failures.is_set
	|| rib_updates.is_set;
}

bool Rip::Vrfs::Vrf::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(discarded_packets.yfilter)
	|| ydk::is_set(discarded_routes.yfilter)
	|| ydk::is_set(standby_packets_received.yfilter)
	|| ydk::is_set(sent_messages.yfilter)
	|| ydk::is_set(sent_message_failures.yfilter)
	|| ydk::is_set(query_responses.yfilter)
	|| ydk::is_set(periodic_updates.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(route_malloc_failures.yfilter)
	|| ydk::is_set(path_malloc_failures.yfilter)
	|| ydk::is_set(rib_updates.yfilter);
}

std::string Rip::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (discarded_packets.is_set || is_set(discarded_packets.yfilter)) leaf_name_data.push_back(discarded_packets.get_name_leafdata());
    if (discarded_routes.is_set || is_set(discarded_routes.yfilter)) leaf_name_data.push_back(discarded_routes.get_name_leafdata());
    if (standby_packets_received.is_set || is_set(standby_packets_received.yfilter)) leaf_name_data.push_back(standby_packets_received.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.yfilter)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (sent_message_failures.is_set || is_set(sent_message_failures.yfilter)) leaf_name_data.push_back(sent_message_failures.get_name_leafdata());
    if (query_responses.is_set || is_set(query_responses.yfilter)) leaf_name_data.push_back(query_responses.get_name_leafdata());
    if (periodic_updates.is_set || is_set(periodic_updates.yfilter)) leaf_name_data.push_back(periodic_updates.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (route_malloc_failures.is_set || is_set(route_malloc_failures.yfilter)) leaf_name_data.push_back(route_malloc_failures.get_name_leafdata());
    if (path_malloc_failures.is_set || is_set(path_malloc_failures.yfilter)) leaf_name_data.push_back(path_malloc_failures.get_name_leafdata());
    if (rib_updates.is_set || is_set(rib_updates.yfilter)) leaf_name_data.push_back(rib_updates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-packets")
    {
        discarded_packets = value;
        discarded_packets.value_namespace = name_space;
        discarded_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-routes")
    {
        discarded_routes = value;
        discarded_routes.value_namespace = name_space;
        discarded_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-packets-received")
    {
        standby_packets_received = value;
        standby_packets_received.value_namespace = name_space;
        standby_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
        sent_messages.value_namespace = name_space;
        sent_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-message-failures")
    {
        sent_message_failures = value;
        sent_message_failures.value_namespace = name_space;
        sent_message_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-responses")
    {
        query_responses = value;
        query_responses.value_namespace = name_space;
        query_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-updates")
    {
        periodic_updates = value;
        periodic_updates.value_namespace = name_space;
        periodic_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-malloc-failures")
    {
        route_malloc_failures = value;
        route_malloc_failures.value_namespace = name_space;
        route_malloc_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-malloc-failures")
    {
        path_malloc_failures = value;
        path_malloc_failures.value_namespace = name_space;
        path_malloc_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-updates")
    {
        rib_updates = value;
        rib_updates.value_namespace = name_space;
        rib_updates.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "discarded-packets")
    {
        discarded_packets.yfilter = yfilter;
    }
    if(value_path == "discarded-routes")
    {
        discarded_routes.yfilter = yfilter;
    }
    if(value_path == "standby-packets-received")
    {
        standby_packets_received.yfilter = yfilter;
    }
    if(value_path == "sent-messages")
    {
        sent_messages.yfilter = yfilter;
    }
    if(value_path == "sent-message-failures")
    {
        sent_message_failures.yfilter = yfilter;
    }
    if(value_path == "query-responses")
    {
        query_responses.yfilter = yfilter;
    }
    if(value_path == "periodic-updates")
    {
        periodic_updates.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "route-malloc-failures")
    {
        route_malloc_failures.yfilter = yfilter;
    }
    if(value_path == "path-malloc-failures")
    {
        path_malloc_failures.yfilter = yfilter;
    }
    if(value_path == "rib-updates")
    {
        rib_updates.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-packets" || name == "discarded-packets" || name == "discarded-routes" || name == "standby-packets-received" || name == "sent-messages" || name == "sent-message-failures" || name == "query-responses" || name == "periodic-updates" || name == "route-count" || name == "path-count" || name == "route-malloc-failures" || name == "path-malloc-failures" || name == "rib-updates")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Rip::Vrfs::Vrf::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::Vrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::Vrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    if_handle{YType::str, "if-handle"},
    rip_enabled{YType::boolean, "rip-enabled"},
    is_passive_interface{YType::boolean, "is-passive-interface"},
    multicast_address{YType::boolean, "multicast-address"},
    accept_metric{YType::boolean, "accept-metric"},
    send_version{YType::uint32, "send-version"},
    receive_version{YType::uint32, "receive-version"},
    state{YType::enumeration, "state"},
    destination_address{YType::str, "destination-address"},
    prefix_length{YType::uint32, "prefix-length"},
    metric_cost{YType::uint32, "metric-cost"},
    split_horizon{YType::boolean, "split-horizon"},
    poison_horizon{YType::boolean, "poison-horizon"},
    triggered_rip{YType::boolean, "triggered-rip"},
    neighbor_address{YType::str, "neighbor-address"},
    oom_flags{YType::uint32, "oom-flags"},
    join_status{YType::boolean, "join-status"},
    lpts_state{YType::boolean, "lpts-state"},
    auth_mode{YType::uint32, "auth-mode"},
    auth_keychain{YType::str, "auth-keychain"},
    send_auth_key_exists{YType::boolean, "send-auth-key-exists"},
    auth_key_md5{YType::boolean, "auth-key-md5"},
    auth_key_send_id{YType::uint64, "auth-key-send-id"},
    total_pkt_recvd{YType::uint32, "total-pkt-recvd"},
    pkt_drop_wrong_kc{YType::uint32, "pkt-drop-wrong-kc"},
    pkt_drop_no_auth{YType::uint32, "pkt-drop-no-auth"},
    pkt_drop_invalid_auth{YType::uint32, "pkt-drop-invalid-auth"},
    pkt_accepted_valid_auth{YType::uint32, "pkt-accepted-valid-auth"}
        ,
    rip_summary(this, {})
    , rip_peer(this, {})
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rip_summary.len(); index++)
    {
        if(rip_summary[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip_peer.len(); index++)
    {
        if(rip_peer[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| if_handle.is_set
	|| rip_enabled.is_set
	|| is_passive_interface.is_set
	|| multicast_address.is_set
	|| accept_metric.is_set
	|| send_version.is_set
	|| receive_version.is_set
	|| state.is_set
	|| destination_address.is_set
	|| prefix_length.is_set
	|| metric_cost.is_set
	|| split_horizon.is_set
	|| poison_horizon.is_set
	|| triggered_rip.is_set
	|| neighbor_address.is_set
	|| oom_flags.is_set
	|| join_status.is_set
	|| lpts_state.is_set
	|| auth_mode.is_set
	|| auth_keychain.is_set
	|| send_auth_key_exists.is_set
	|| auth_key_md5.is_set
	|| auth_key_send_id.is_set
	|| total_pkt_recvd.is_set
	|| pkt_drop_wrong_kc.is_set
	|| pkt_drop_no_auth.is_set
	|| pkt_drop_invalid_auth.is_set
	|| pkt_accepted_valid_auth.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<rip_summary.len(); index++)
    {
        if(rip_summary[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip_peer.len(); index++)
    {
        if(rip_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(rip_enabled.yfilter)
	|| ydk::is_set(is_passive_interface.yfilter)
	|| ydk::is_set(multicast_address.yfilter)
	|| ydk::is_set(accept_metric.yfilter)
	|| ydk::is_set(send_version.yfilter)
	|| ydk::is_set(receive_version.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(metric_cost.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| ydk::is_set(poison_horizon.yfilter)
	|| ydk::is_set(triggered_rip.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(join_status.yfilter)
	|| ydk::is_set(lpts_state.yfilter)
	|| ydk::is_set(auth_mode.yfilter)
	|| ydk::is_set(auth_keychain.yfilter)
	|| ydk::is_set(send_auth_key_exists.yfilter)
	|| ydk::is_set(auth_key_md5.yfilter)
	|| ydk::is_set(auth_key_send_id.yfilter)
	|| ydk::is_set(total_pkt_recvd.yfilter)
	|| ydk::is_set(pkt_drop_wrong_kc.yfilter)
	|| ydk::is_set(pkt_drop_no_auth.yfilter)
	|| ydk::is_set(pkt_drop_invalid_auth.yfilter)
	|| ydk::is_set(pkt_accepted_valid_auth.yfilter);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (rip_enabled.is_set || is_set(rip_enabled.yfilter)) leaf_name_data.push_back(rip_enabled.get_name_leafdata());
    if (is_passive_interface.is_set || is_set(is_passive_interface.yfilter)) leaf_name_data.push_back(is_passive_interface.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.yfilter)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (accept_metric.is_set || is_set(accept_metric.yfilter)) leaf_name_data.push_back(accept_metric.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.yfilter)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.yfilter)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (metric_cost.is_set || is_set(metric_cost.yfilter)) leaf_name_data.push_back(metric_cost.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());
    if (poison_horizon.is_set || is_set(poison_horizon.yfilter)) leaf_name_data.push_back(poison_horizon.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.yfilter)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (join_status.is_set || is_set(join_status.yfilter)) leaf_name_data.push_back(join_status.get_name_leafdata());
    if (lpts_state.is_set || is_set(lpts_state.yfilter)) leaf_name_data.push_back(lpts_state.get_name_leafdata());
    if (auth_mode.is_set || is_set(auth_mode.yfilter)) leaf_name_data.push_back(auth_mode.get_name_leafdata());
    if (auth_keychain.is_set || is_set(auth_keychain.yfilter)) leaf_name_data.push_back(auth_keychain.get_name_leafdata());
    if (send_auth_key_exists.is_set || is_set(send_auth_key_exists.yfilter)) leaf_name_data.push_back(send_auth_key_exists.get_name_leafdata());
    if (auth_key_md5.is_set || is_set(auth_key_md5.yfilter)) leaf_name_data.push_back(auth_key_md5.get_name_leafdata());
    if (auth_key_send_id.is_set || is_set(auth_key_send_id.yfilter)) leaf_name_data.push_back(auth_key_send_id.get_name_leafdata());
    if (total_pkt_recvd.is_set || is_set(total_pkt_recvd.yfilter)) leaf_name_data.push_back(total_pkt_recvd.get_name_leafdata());
    if (pkt_drop_wrong_kc.is_set || is_set(pkt_drop_wrong_kc.yfilter)) leaf_name_data.push_back(pkt_drop_wrong_kc.get_name_leafdata());
    if (pkt_drop_no_auth.is_set || is_set(pkt_drop_no_auth.yfilter)) leaf_name_data.push_back(pkt_drop_no_auth.get_name_leafdata());
    if (pkt_drop_invalid_auth.is_set || is_set(pkt_drop_invalid_auth.yfilter)) leaf_name_data.push_back(pkt_drop_invalid_auth.get_name_leafdata());
    if (pkt_accepted_valid_auth.is_set || is_set(pkt_accepted_valid_auth.yfilter)) leaf_name_data.push_back(pkt_accepted_valid_auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-summary")
    {
        auto ent_ = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary>();
        ent_->parent = this;
        rip_summary.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rip-peer")
    {
        auto ent_ = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer>();
        ent_->parent = this;
        rip_peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rip_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rip_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rip-enabled")
    {
        rip_enabled = value;
        rip_enabled.value_namespace = name_space;
        rip_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive-interface")
    {
        is_passive_interface = value;
        is_passive_interface.value_namespace = name_space;
        is_passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
        multicast_address.value_namespace = name_space;
        multicast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-metric")
    {
        accept_metric = value;
        accept_metric.value_namespace = name_space;
        accept_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-version")
    {
        send_version = value;
        send_version.value_namespace = name_space;
        send_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
        receive_version.value_namespace = name_space;
        receive_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-cost")
    {
        metric_cost = value;
        metric_cost.value_namespace = name_space;
        metric_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poison-horizon")
    {
        poison_horizon = value;
        poison_horizon.value_namespace = name_space;
        poison_horizon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
        triggered_rip.value_namespace = name_space;
        triggered_rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-status")
    {
        join_status = value;
        join_status.value_namespace = name_space;
        join_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpts-state")
    {
        lpts_state = value;
        lpts_state.value_namespace = name_space;
        lpts_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-mode")
    {
        auth_mode = value;
        auth_mode.value_namespace = name_space;
        auth_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-keychain")
    {
        auth_keychain = value;
        auth_keychain.value_namespace = name_space;
        auth_keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-auth-key-exists")
    {
        send_auth_key_exists = value;
        send_auth_key_exists.value_namespace = name_space;
        send_auth_key_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key-md5")
    {
        auth_key_md5 = value;
        auth_key_md5.value_namespace = name_space;
        auth_key_md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key-send-id")
    {
        auth_key_send_id = value;
        auth_key_send_id.value_namespace = name_space;
        auth_key_send_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pkt-recvd")
    {
        total_pkt_recvd = value;
        total_pkt_recvd.value_namespace = name_space;
        total_pkt_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-wrong-kc")
    {
        pkt_drop_wrong_kc = value;
        pkt_drop_wrong_kc.value_namespace = name_space;
        pkt_drop_wrong_kc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-no-auth")
    {
        pkt_drop_no_auth = value;
        pkt_drop_no_auth.value_namespace = name_space;
        pkt_drop_no_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-invalid-auth")
    {
        pkt_drop_invalid_auth = value;
        pkt_drop_invalid_auth.value_namespace = name_space;
        pkt_drop_invalid_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-accepted-valid-auth")
    {
        pkt_accepted_valid_auth = value;
        pkt_accepted_valid_auth.value_namespace = name_space;
        pkt_accepted_valid_auth.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "rip-enabled")
    {
        rip_enabled.yfilter = yfilter;
    }
    if(value_path == "is-passive-interface")
    {
        is_passive_interface.yfilter = yfilter;
    }
    if(value_path == "multicast-address")
    {
        multicast_address.yfilter = yfilter;
    }
    if(value_path == "accept-metric")
    {
        accept_metric.yfilter = yfilter;
    }
    if(value_path == "send-version")
    {
        send_version.yfilter = yfilter;
    }
    if(value_path == "receive-version")
    {
        receive_version.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "metric-cost")
    {
        metric_cost.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
    if(value_path == "poison-horizon")
    {
        poison_horizon.yfilter = yfilter;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "join-status")
    {
        join_status.yfilter = yfilter;
    }
    if(value_path == "lpts-state")
    {
        lpts_state.yfilter = yfilter;
    }
    if(value_path == "auth-mode")
    {
        auth_mode.yfilter = yfilter;
    }
    if(value_path == "auth-keychain")
    {
        auth_keychain.yfilter = yfilter;
    }
    if(value_path == "send-auth-key-exists")
    {
        send_auth_key_exists.yfilter = yfilter;
    }
    if(value_path == "auth-key-md5")
    {
        auth_key_md5.yfilter = yfilter;
    }
    if(value_path == "auth-key-send-id")
    {
        auth_key_send_id.yfilter = yfilter;
    }
    if(value_path == "total-pkt-recvd")
    {
        total_pkt_recvd.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-wrong-kc")
    {
        pkt_drop_wrong_kc.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-no-auth")
    {
        pkt_drop_no_auth.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-invalid-auth")
    {
        pkt_drop_invalid_auth.yfilter = yfilter;
    }
    if(value_path == "pkt-accepted-valid-auth")
    {
        pkt_accepted_valid_auth.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-summary" || name == "rip-peer" || name == "interface-name" || name == "interface" || name == "if-handle" || name == "rip-enabled" || name == "is-passive-interface" || name == "multicast-address" || name == "accept-metric" || name == "send-version" || name == "receive-version" || name == "state" || name == "destination-address" || name == "prefix-length" || name == "metric-cost" || name == "split-horizon" || name == "poison-horizon" || name == "triggered-rip" || name == "neighbor-address" || name == "oom-flags" || name == "join-status" || name == "lpts-state" || name == "auth-mode" || name == "auth-keychain" || name == "send-auth-key-exists" || name == "auth-key-md5" || name == "auth-key-send-id" || name == "total-pkt-recvd" || name == "pkt-drop-wrong-kc" || name == "pkt-drop-no-auth" || name == "pkt-drop-invalid-auth" || name == "pkt-accepted-valid-auth")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::RipSummary()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    next_hop_address{YType::str, "next-hop-address"},
    metric{YType::int32, "metric"}
{

    yang_name = "rip-summary"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::~RipSummary()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| next_hop_address.is_set
	|| metric.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::RipSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "next-hop-address" || name == "metric")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::RipPeer()
    :
    peer_uptime{YType::uint32, "peer-uptime"},
    peer_address{YType::str, "peer-address"},
    peer_version{YType::uint8, "peer-version"},
    discarded_peer_packets{YType::uint32, "discarded-peer-packets"},
    discarded_peer_routes{YType::uint32, "discarded-peer-routes"}
{

    yang_name = "rip-peer"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::~RipPeer()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::has_data() const
{
    if (is_presence_container) return true;
    return peer_uptime.is_set
	|| peer_address.is_set
	|| peer_version.is_set
	|| discarded_peer_packets.is_set
	|| discarded_peer_routes.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_uptime.yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(peer_version.yfilter)
	|| ydk::is_set(discarded_peer_packets.yfilter)
	|| ydk::is_set(discarded_peer_routes.yfilter);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_uptime.is_set || is_set(peer_uptime.yfilter)) leaf_name_data.push_back(peer_uptime.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_version.is_set || is_set(peer_version.yfilter)) leaf_name_data.push_back(peer_version.get_name_leafdata());
    if (discarded_peer_packets.is_set || is_set(discarded_peer_packets.yfilter)) leaf_name_data.push_back(discarded_peer_packets.get_name_leafdata());
    if (discarded_peer_routes.is_set || is_set(discarded_peer_routes.yfilter)) leaf_name_data.push_back(discarded_peer_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-uptime")
    {
        peer_uptime = value;
        peer_uptime.value_namespace = name_space;
        peer_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-version")
    {
        peer_version = value;
        peer_version.value_namespace = name_space;
        peer_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-peer-packets")
    {
        discarded_peer_packets = value;
        discarded_peer_packets.value_namespace = name_space;
        discarded_peer_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-peer-routes")
    {
        discarded_peer_routes = value;
        discarded_peer_routes.value_namespace = name_space;
        discarded_peer_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-uptime")
    {
        peer_uptime.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "peer-version")
    {
        peer_version.yfilter = yfilter;
    }
    if(value_path == "discarded-peer-packets")
    {
        discarded_peer_packets.yfilter = yfilter;
    }
    if(value_path == "discarded-peer-routes")
    {
        discarded_peer_routes.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::RipPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-uptime" || name == "peer-address" || name == "peer-version" || name == "discarded-peer-packets" || name == "discarded-peer-routes")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Global::Global()
    :
    vrf_summary(std::make_shared<Rip::Vrfs::Vrf::Global::VrfSummary>())
    , interface_summary(this, {})
{
    vrf_summary->parent = this;

    yang_name = "global"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Global::~Global()
{
}

bool Rip::Vrfs::Vrf::Global::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_summary.len(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return (vrf_summary !=  nullptr && vrf_summary->has_data());
}

bool Rip::Vrfs::Vrf::Global::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.len(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (vrf_summary !=  nullptr && vrf_summary->has_operation());
}

std::string Rip::Vrfs::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-summary")
    {
        if(vrf_summary == nullptr)
        {
            vrf_summary = std::make_shared<Rip::Vrfs::Vrf::Global::VrfSummary>();
        }
        return vrf_summary;
    }

    if(child_yang_name == "interface-summary")
    {
        auto ent_ = std::make_shared<Rip::Vrfs::Vrf::Global::InterfaceSummary>();
        ent_->parent = this;
        interface_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_summary != nullptr)
    {
        _children["vrf-summary"] = vrf_summary;
    }

    count_ = 0;
    for (auto ent_ : interface_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Vrfs::Vrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Vrfs::Vrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Vrfs::Vrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-summary" || name == "interface-summary")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Global::VrfSummary::VrfSummary()
    :
    vrf_name{YType::str, "vrf-name"},
    active{YType::boolean, "active"},
    oom_flags{YType::uint32, "oom-flags"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    update_timer{YType::uint32, "update-timer"},
    next_update_time{YType::uint32, "next-update-time"},
    invalid_timer{YType::uint32, "invalid-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    flush_timer{YType::uint32, "flush-timer"},
    interface_configured_count{YType::uint32, "interface-configured-count"},
    active_interface_count{YType::uint32, "active-interface-count"}
{

    yang_name = "vrf-summary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Global::VrfSummary::~VrfSummary()
{
}

bool Rip::Vrfs::Vrf::Global::VrfSummary::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| active.is_set
	|| oom_flags.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| update_timer.is_set
	|| next_update_time.is_set
	|| invalid_timer.is_set
	|| hold_down_timer.is_set
	|| flush_timer.is_set
	|| interface_configured_count.is_set
	|| active_interface_count.is_set;
}

bool Rip::Vrfs::Vrf::Global::VrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(update_timer.yfilter)
	|| ydk::is_set(next_update_time.yfilter)
	|| ydk::is_set(invalid_timer.yfilter)
	|| ydk::is_set(hold_down_timer.yfilter)
	|| ydk::is_set(flush_timer.yfilter)
	|| ydk::is_set(interface_configured_count.yfilter)
	|| ydk::is_set(active_interface_count.yfilter);
}

std::string Rip::Vrfs::Vrf::Global::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Global::VrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.yfilter)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.yfilter)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.yfilter)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.yfilter)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.yfilter)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (interface_configured_count.is_set || is_set(interface_configured_count.yfilter)) leaf_name_data.push_back(interface_configured_count.get_name_leafdata());
    if (active_interface_count.is_set || is_set(active_interface_count.yfilter)) leaf_name_data.push_back(active_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Global::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Global::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Vrfs::Vrf::Global::VrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
        update_timer.value_namespace = name_space;
        update_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
        next_update_time.value_namespace = name_space;
        next_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
        invalid_timer.value_namespace = name_space;
        invalid_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
        hold_down_timer.value_namespace = name_space;
        hold_down_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
        flush_timer.value_namespace = name_space;
        flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count = value;
        interface_configured_count.value_namespace = name_space;
        interface_configured_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count = value;
        active_interface_count.value_namespace = name_space;
        active_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Global::VrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "update-timer")
    {
        update_timer.yfilter = yfilter;
    }
    if(value_path == "next-update-time")
    {
        next_update_time.yfilter = yfilter;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer.yfilter = yfilter;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer.yfilter = yfilter;
    }
    if(value_path == "flush-timer")
    {
        flush_timer.yfilter = yfilter;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count.yfilter = yfilter;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Global::VrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "active" || name == "oom-flags" || name == "route-count" || name == "path-count" || name == "update-timer" || name == "next-update-time" || name == "invalid-timer" || name == "hold-down-timer" || name == "flush-timer" || name == "interface-configured-count" || name == "active-interface-count")
        return true;
    return false;
}

Rip::Vrfs::Vrf::Global::InterfaceSummary::InterfaceSummary()
    :
    interface_name{YType::str, "interface-name"},
    enabled{YType::boolean, "enabled"},
    state{YType::enumeration, "state"},
    destination_address{YType::str, "destination-address"},
    prefix_length{YType::uint32, "prefix-length"},
    oom_flags{YType::uint32, "oom-flags"},
    send_version{YType::uint32, "send-version"},
    receive_version{YType::uint32, "receive-version"},
    neighbor_count{YType::uint32, "neighbor-count"}
{

    yang_name = "interface-summary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Vrfs::Vrf::Global::InterfaceSummary::~InterfaceSummary()
{
}

bool Rip::Vrfs::Vrf::Global::InterfaceSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| enabled.is_set
	|| state.is_set
	|| destination_address.is_set
	|| prefix_length.is_set
	|| oom_flags.is_set
	|| send_version.is_set
	|| receive_version.is_set
	|| neighbor_count.is_set;
}

bool Rip::Vrfs::Vrf::Global::InterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(send_version.yfilter)
	|| ydk::is_set(receive_version.yfilter)
	|| ydk::is_set(neighbor_count.yfilter);
}

std::string Rip::Vrfs::Vrf::Global::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Vrfs::Vrf::Global::InterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.yfilter)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.yfilter)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Vrfs::Vrf::Global::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Vrfs::Vrf::Global::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Vrfs::Vrf::Global::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-version")
    {
        send_version = value;
        send_version.value_namespace = name_space;
        send_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
        receive_version.value_namespace = name_space;
        receive_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Vrfs::Vrf::Global::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "send-version")
    {
        send_version.yfilter = yfilter;
    }
    if(value_path == "receive-version")
    {
        receive_version.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
}

bool Rip::Vrfs::Vrf::Global::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "enabled" || name == "state" || name == "destination-address" || name == "prefix-length" || name == "oom-flags" || name == "send-version" || name == "receive-version" || name == "neighbor-count")
        return true;
    return false;
}

Rip::Protocol::Protocol()
    :
    process(std::make_shared<Rip::Protocol::Process>())
    , default_vrf(std::make_shared<Rip::Protocol::DefaultVrf>())
{
    process->parent = this;
    default_vrf->parent = this;

    yang_name = "protocol"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::~Protocol()
{
}

bool Rip::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return (process !=  nullptr && process->has_data())
	|| (default_vrf !=  nullptr && default_vrf->has_data());
}

bool Rip::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (process !=  nullptr && process->has_operation())
	|| (default_vrf !=  nullptr && default_vrf->has_operation());
}

std::string Rip::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Rip::Protocol::Process>();
        }
        return process;
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Rip::Protocol::DefaultVrf>();
        }
        return default_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(process != nullptr)
    {
        _children["process"] = process;
    }

    if(default_vrf != nullptr)
    {
        _children["default-vrf"] = default_vrf;
    }

    return _children;
}

void Rip::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process" || name == "default-vrf")
        return true;
    return false;
}

Rip::Protocol::Process::Process()
    :
    vrf_config_count{YType::uint32, "vrf-config-count"},
    vrf_active_count{YType::uint32, "vrf-active-count"},
    socket_descriptor{YType::int32, "socket-descriptor"},
    current_oom_state{YType::int32, "current-oom-state"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"}
        ,
    vrf_summary(this, {})
{

    yang_name = "process"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::Process::~Process()
{
}

bool Rip::Protocol::Process::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_summary.len(); index++)
    {
        if(vrf_summary[index]->has_data())
            return true;
    }
    return vrf_config_count.is_set
	|| vrf_active_count.is_set
	|| socket_descriptor.is_set
	|| current_oom_state.is_set
	|| route_count.is_set
	|| path_count.is_set;
}

bool Rip::Protocol::Process::has_operation() const
{
    for (std::size_t index=0; index<vrf_summary.len(); index++)
    {
        if(vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_config_count.yfilter)
	|| ydk::is_set(vrf_active_count.yfilter)
	|| ydk::is_set(socket_descriptor.yfilter)
	|| ydk::is_set(current_oom_state.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter);
}

std::string Rip::Protocol::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_config_count.is_set || is_set(vrf_config_count.yfilter)) leaf_name_data.push_back(vrf_config_count.get_name_leafdata());
    if (vrf_active_count.is_set || is_set(vrf_active_count.yfilter)) leaf_name_data.push_back(vrf_active_count.get_name_leafdata());
    if (socket_descriptor.is_set || is_set(socket_descriptor.yfilter)) leaf_name_data.push_back(socket_descriptor.get_name_leafdata());
    if (current_oom_state.is_set || is_set(current_oom_state.yfilter)) leaf_name_data.push_back(current_oom_state.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-summary")
    {
        auto ent_ = std::make_shared<Rip::Protocol::Process::VrfSummary>();
        ent_->parent = this;
        vrf_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Protocol::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-config-count")
    {
        vrf_config_count = value;
        vrf_config_count.value_namespace = name_space;
        vrf_config_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-active-count")
    {
        vrf_active_count = value;
        vrf_active_count.value_namespace = name_space;
        vrf_active_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-descriptor")
    {
        socket_descriptor = value;
        socket_descriptor.value_namespace = name_space;
        socket_descriptor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-oom-state")
    {
        current_oom_state = value;
        current_oom_state.value_namespace = name_space;
        current_oom_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Protocol::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-config-count")
    {
        vrf_config_count.yfilter = yfilter;
    }
    if(value_path == "vrf-active-count")
    {
        vrf_active_count.yfilter = yfilter;
    }
    if(value_path == "socket-descriptor")
    {
        socket_descriptor.yfilter = yfilter;
    }
    if(value_path == "current-oom-state")
    {
        current_oom_state.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
}

bool Rip::Protocol::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-summary" || name == "vrf-config-count" || name == "vrf-active-count" || name == "socket-descriptor" || name == "current-oom-state" || name == "route-count" || name == "path-count")
        return true;
    return false;
}

Rip::Protocol::Process::VrfSummary::VrfSummary()
    :
    vrf_name{YType::str, "vrf-name"},
    active{YType::boolean, "active"},
    oom_flags{YType::uint32, "oom-flags"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    update_timer{YType::uint32, "update-timer"},
    next_update_time{YType::uint32, "next-update-time"},
    invalid_timer{YType::uint32, "invalid-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    flush_timer{YType::uint32, "flush-timer"},
    interface_configured_count{YType::uint32, "interface-configured-count"},
    active_interface_count{YType::uint32, "active-interface-count"}
{

    yang_name = "vrf-summary"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::Process::VrfSummary::~VrfSummary()
{
}

bool Rip::Protocol::Process::VrfSummary::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| active.is_set
	|| oom_flags.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| update_timer.is_set
	|| next_update_time.is_set
	|| invalid_timer.is_set
	|| hold_down_timer.is_set
	|| flush_timer.is_set
	|| interface_configured_count.is_set
	|| active_interface_count.is_set;
}

bool Rip::Protocol::Process::VrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(update_timer.yfilter)
	|| ydk::is_set(next_update_time.yfilter)
	|| ydk::is_set(invalid_timer.yfilter)
	|| ydk::is_set(hold_down_timer.yfilter)
	|| ydk::is_set(flush_timer.yfilter)
	|| ydk::is_set(interface_configured_count.yfilter)
	|| ydk::is_set(active_interface_count.yfilter);
}

std::string Rip::Protocol::Process::VrfSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::Process::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::Process::VrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.yfilter)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.yfilter)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.yfilter)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.yfilter)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.yfilter)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (interface_configured_count.is_set || is_set(interface_configured_count.yfilter)) leaf_name_data.push_back(interface_configured_count.get_name_leafdata());
    if (active_interface_count.is_set || is_set(active_interface_count.yfilter)) leaf_name_data.push_back(active_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::Process::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::Process::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Protocol::Process::VrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
        update_timer.value_namespace = name_space;
        update_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
        next_update_time.value_namespace = name_space;
        next_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
        invalid_timer.value_namespace = name_space;
        invalid_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
        hold_down_timer.value_namespace = name_space;
        hold_down_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
        flush_timer.value_namespace = name_space;
        flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count = value;
        interface_configured_count.value_namespace = name_space;
        interface_configured_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count = value;
        active_interface_count.value_namespace = name_space;
        active_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Protocol::Process::VrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "update-timer")
    {
        update_timer.yfilter = yfilter;
    }
    if(value_path == "next-update-time")
    {
        next_update_time.yfilter = yfilter;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer.yfilter = yfilter;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer.yfilter = yfilter;
    }
    if(value_path == "flush-timer")
    {
        flush_timer.yfilter = yfilter;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count.yfilter = yfilter;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count.yfilter = yfilter;
    }
}

bool Rip::Protocol::Process::VrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "active" || name == "oom-flags" || name == "route-count" || name == "path-count" || name == "update-timer" || name == "next-update-time" || name == "invalid-timer" || name == "hold-down-timer" || name == "flush-timer" || name == "interface-configured-count" || name == "active-interface-count")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::DefaultVrf()
    :
    routes(std::make_shared<Rip::Protocol::DefaultVrf::Routes>())
    , configuration(std::make_shared<Rip::Protocol::DefaultVrf::Configuration>())
    , statistics(std::make_shared<Rip::Protocol::DefaultVrf::Statistics>())
    , interfaces(std::make_shared<Rip::Protocol::DefaultVrf::Interfaces>())
    , global(std::make_shared<Rip::Protocol::DefaultVrf::Global>())
{
    routes->parent = this;
    configuration->parent = this;
    statistics->parent = this;
    interfaces->parent = this;
    global->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::DefaultVrf::~DefaultVrf()
{
}

bool Rip::Protocol::DefaultVrf::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool Rip::Protocol::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string Rip::Protocol::DefaultVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<Rip::Protocol::DefaultVrf::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Rip::Protocol::DefaultVrf::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Rip::Protocol::DefaultVrf::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rip::Protocol::DefaultVrf::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Rip::Protocol::DefaultVrf::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Rip::Protocol::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Protocol::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Protocol::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "configuration" || name == "statistics" || name == "interfaces" || name == "global")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::DefaultVrf::Routes::~Routes()
{
}

bool Rip::Protocol::DefaultVrf::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Protocol::DefaultVrf::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Protocol::DefaultVrf::Routes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::DefaultVrf::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<Rip::Protocol::DefaultVrf::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Protocol::DefaultVrf::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Protocol::DefaultVrf::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Protocol::DefaultVrf::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Routes::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    destination_address{YType::str, "destination-address"},
    prefix_length_xr{YType::uint32, "prefix-length-xr"},
    distance{YType::uint16, "distance"},
    bgp_count{YType::uint16, "bgp-count"},
    route_type{YType::uint16, "route-type"},
    route_summary{YType::boolean, "route-summary"},
    route_tag{YType::uint16, "route-tag"},
    version{YType::uint8, "version"},
    attributes{YType::uint32, "attributes"},
    active{YType::boolean, "active"},
    path_origin{YType::enumeration, "path-origin"},
    hold_down{YType::boolean, "hold-down"}
        ,
    paths(this, {})
{

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::DefaultVrf::Routes::Route::~Route()
{
}

bool Rip::Protocol::DefaultVrf::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| destination_address.is_set
	|| prefix_length_xr.is_set
	|| distance.is_set
	|| bgp_count.is_set
	|| route_type.is_set
	|| route_summary.is_set
	|| route_tag.is_set
	|| version.is_set
	|| attributes.is_set
	|| active.is_set
	|| path_origin.is_set
	|| hold_down.is_set;
}

bool Rip::Protocol::DefaultVrf::Routes::Route::has_operation() const
{
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(bgp_count.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_summary.yfilter)
	|| ydk::is_set(route_tag.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(path_origin.yfilter)
	|| ydk::is_set(hold_down.yfilter);
}

std::string Rip::Protocol::DefaultVrf::Routes::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/routes/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::DefaultVrf::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (bgp_count.is_set || is_set(bgp_count.yfilter)) leaf_name_data.push_back(bgp_count.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_summary.is_set || is_set(route_summary.yfilter)) leaf_name_data.push_back(route_summary.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (path_origin.is_set || is_set(path_origin.yfilter)) leaf_name_data.push_back(path_origin.get_name_leafdata());
    if (hold_down.is_set || is_set(hold_down.yfilter)) leaf_name_data.push_back(hold_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        auto ent_ = std::make_shared<Rip::Protocol::DefaultVrf::Routes::Route::Paths>();
        ent_->parent = this;
        paths.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : paths.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Protocol::DefaultVrf::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-count")
    {
        bgp_count = value;
        bgp_count.value_namespace = name_space;
        bgp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-summary")
    {
        route_summary = value;
        route_summary.value_namespace = name_space;
        route_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-origin")
    {
        path_origin = value;
        path_origin.value_namespace = name_space;
        path_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down")
    {
        hold_down = value;
        hold_down.value_namespace = name_space;
        hold_down.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Protocol::DefaultVrf::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "bgp-count")
    {
        bgp_count.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-summary")
    {
        route_summary.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "path-origin")
    {
        path_origin.yfilter = yfilter;
    }
    if(value_path == "hold-down")
    {
        hold_down.yfilter = yfilter;
    }
}

bool Rip::Protocol::DefaultVrf::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "prefix" || name == "prefix-length" || name == "destination-address" || name == "prefix-length-xr" || name == "distance" || name == "bgp-count" || name == "route-type" || name == "route-summary" || name == "route-tag" || name == "version" || name == "attributes" || name == "active" || name == "path-origin" || name == "hold-down")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Routes::Route::Paths::Paths()
    :
    source_address{YType::str, "source-address"},
    next_hop_address{YType::str, "next-hop-address"},
    metric{YType::uint16, "metric"},
    tag{YType::uint16, "tag"},
    interface{YType::str, "interface"},
    uptime{YType::uint32, "uptime"},
    is_permanent{YType::boolean, "is-permanent"}
{

    yang_name = "paths"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::DefaultVrf::Routes::Route::Paths::~Paths()
{
}

bool Rip::Protocol::DefaultVrf::Routes::Route::Paths::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| next_hop_address.is_set
	|| metric.is_set
	|| tag.is_set
	|| interface.is_set
	|| uptime.is_set
	|| is_permanent.is_set;
}

bool Rip::Protocol::DefaultVrf::Routes::Route::Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(is_permanent.yfilter);
}

std::string Rip::Protocol::DefaultVrf::Routes::Route::Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::DefaultVrf::Routes::Route::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Routes::Route::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (is_permanent.is_set || is_set(is_permanent.yfilter)) leaf_name_data.push_back(is_permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Routes::Route::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Routes::Route::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Protocol::DefaultVrf::Routes::Route::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-permanent")
    {
        is_permanent = value;
        is_permanent.value_namespace = name_space;
        is_permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Protocol::DefaultVrf::Routes::Route::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "is-permanent")
    {
        is_permanent.yfilter = yfilter;
    }
}

bool Rip::Protocol::DefaultVrf::Routes::Route::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "next-hop-address" || name == "metric" || name == "tag" || name == "interface" || name == "uptime" || name == "is-permanent")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Configuration::Configuration()
    :
    active{YType::boolean, "active"},
    vr_fised_socket{YType::boolean, "vr-fised-socket"},
    rip_version{YType::int32, "rip-version"},
    default_metric{YType::uint8, "default-metric"},
    maximum_paths{YType::uint8, "maximum-paths"},
    auto_summarize{YType::boolean, "auto-summarize"},
    multicast_address{YType::boolean, "multicast-address"},
    flash_threshold{YType::uint8, "flash-threshold"},
    input_q_length{YType::uint16, "input-q-length"},
    triggered_rip{YType::boolean, "triggered-rip"},
    validation_indicator{YType::boolean, "validation-indicator"},
    update_timer{YType::uint32, "update-timer"},
    next_update_time{YType::uint32, "next-update-time"},
    invalid_timer{YType::uint32, "invalid-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    flush_timer{YType::uint32, "flush-timer"},
    oom_flags{YType::uint32, "oom-flags"},
    nsf_status{YType::boolean, "nsf-status"},
    nsf_life_time{YType::uint32, "nsf-life-time"}
{

    yang_name = "configuration"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::DefaultVrf::Configuration::~Configuration()
{
}

bool Rip::Protocol::DefaultVrf::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return active.is_set
	|| vr_fised_socket.is_set
	|| rip_version.is_set
	|| default_metric.is_set
	|| maximum_paths.is_set
	|| auto_summarize.is_set
	|| multicast_address.is_set
	|| flash_threshold.is_set
	|| input_q_length.is_set
	|| triggered_rip.is_set
	|| validation_indicator.is_set
	|| update_timer.is_set
	|| next_update_time.is_set
	|| invalid_timer.is_set
	|| hold_down_timer.is_set
	|| flush_timer.is_set
	|| oom_flags.is_set
	|| nsf_status.is_set
	|| nsf_life_time.is_set;
}

bool Rip::Protocol::DefaultVrf::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(vr_fised_socket.yfilter)
	|| ydk::is_set(rip_version.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(auto_summarize.yfilter)
	|| ydk::is_set(multicast_address.yfilter)
	|| ydk::is_set(flash_threshold.yfilter)
	|| ydk::is_set(input_q_length.yfilter)
	|| ydk::is_set(triggered_rip.yfilter)
	|| ydk::is_set(validation_indicator.yfilter)
	|| ydk::is_set(update_timer.yfilter)
	|| ydk::is_set(next_update_time.yfilter)
	|| ydk::is_set(invalid_timer.yfilter)
	|| ydk::is_set(hold_down_timer.yfilter)
	|| ydk::is_set(flush_timer.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(nsf_status.yfilter)
	|| ydk::is_set(nsf_life_time.yfilter);
}

std::string Rip::Protocol::DefaultVrf::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::DefaultVrf::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (vr_fised_socket.is_set || is_set(vr_fised_socket.yfilter)) leaf_name_data.push_back(vr_fised_socket.get_name_leafdata());
    if (rip_version.is_set || is_set(rip_version.yfilter)) leaf_name_data.push_back(rip_version.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (auto_summarize.is_set || is_set(auto_summarize.yfilter)) leaf_name_data.push_back(auto_summarize.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.yfilter)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (flash_threshold.is_set || is_set(flash_threshold.yfilter)) leaf_name_data.push_back(flash_threshold.get_name_leafdata());
    if (input_q_length.is_set || is_set(input_q_length.yfilter)) leaf_name_data.push_back(input_q_length.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.yfilter)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());
    if (validation_indicator.is_set || is_set(validation_indicator.yfilter)) leaf_name_data.push_back(validation_indicator.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.yfilter)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.yfilter)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.yfilter)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.yfilter)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.yfilter)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (nsf_status.is_set || is_set(nsf_status.yfilter)) leaf_name_data.push_back(nsf_status.get_name_leafdata());
    if (nsf_life_time.is_set || is_set(nsf_life_time.yfilter)) leaf_name_data.push_back(nsf_life_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Protocol::DefaultVrf::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vr-fised-socket")
    {
        vr_fised_socket = value;
        vr_fised_socket.value_namespace = name_space;
        vr_fised_socket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rip-version")
    {
        rip_version = value;
        rip_version.value_namespace = name_space;
        rip_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summarize")
    {
        auto_summarize = value;
        auto_summarize.value_namespace = name_space;
        auto_summarize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
        multicast_address.value_namespace = name_space;
        multicast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-threshold")
    {
        flash_threshold = value;
        flash_threshold.value_namespace = name_space;
        flash_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-q-length")
    {
        input_q_length = value;
        input_q_length.value_namespace = name_space;
        input_q_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
        triggered_rip.value_namespace = name_space;
        triggered_rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validation-indicator")
    {
        validation_indicator = value;
        validation_indicator.value_namespace = name_space;
        validation_indicator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
        update_timer.value_namespace = name_space;
        update_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
        next_update_time.value_namespace = name_space;
        next_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
        invalid_timer.value_namespace = name_space;
        invalid_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
        hold_down_timer.value_namespace = name_space;
        hold_down_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
        flush_timer.value_namespace = name_space;
        flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-status")
    {
        nsf_status = value;
        nsf_status.value_namespace = name_space;
        nsf_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-life-time")
    {
        nsf_life_time = value;
        nsf_life_time.value_namespace = name_space;
        nsf_life_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Protocol::DefaultVrf::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "vr-fised-socket")
    {
        vr_fised_socket.yfilter = yfilter;
    }
    if(value_path == "rip-version")
    {
        rip_version.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "auto-summarize")
    {
        auto_summarize.yfilter = yfilter;
    }
    if(value_path == "multicast-address")
    {
        multicast_address.yfilter = yfilter;
    }
    if(value_path == "flash-threshold")
    {
        flash_threshold.yfilter = yfilter;
    }
    if(value_path == "input-q-length")
    {
        input_q_length.yfilter = yfilter;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip.yfilter = yfilter;
    }
    if(value_path == "validation-indicator")
    {
        validation_indicator.yfilter = yfilter;
    }
    if(value_path == "update-timer")
    {
        update_timer.yfilter = yfilter;
    }
    if(value_path == "next-update-time")
    {
        next_update_time.yfilter = yfilter;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer.yfilter = yfilter;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer.yfilter = yfilter;
    }
    if(value_path == "flush-timer")
    {
        flush_timer.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "nsf-status")
    {
        nsf_status.yfilter = yfilter;
    }
    if(value_path == "nsf-life-time")
    {
        nsf_life_time.yfilter = yfilter;
    }
}

bool Rip::Protocol::DefaultVrf::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "vr-fised-socket" || name == "rip-version" || name == "default-metric" || name == "maximum-paths" || name == "auto-summarize" || name == "multicast-address" || name == "flash-threshold" || name == "input-q-length" || name == "triggered-rip" || name == "validation-indicator" || name == "update-timer" || name == "next-update-time" || name == "invalid-timer" || name == "hold-down-timer" || name == "flush-timer" || name == "oom-flags" || name == "nsf-status" || name == "nsf-life-time")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Statistics::Statistics()
    :
    received_packets{YType::uint32, "received-packets"},
    discarded_packets{YType::uint32, "discarded-packets"},
    discarded_routes{YType::uint32, "discarded-routes"},
    standby_packets_received{YType::uint32, "standby-packets-received"},
    sent_messages{YType::uint32, "sent-messages"},
    sent_message_failures{YType::uint32, "sent-message-failures"},
    query_responses{YType::uint32, "query-responses"},
    periodic_updates{YType::uint32, "periodic-updates"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    route_malloc_failures{YType::uint32, "route-malloc-failures"},
    path_malloc_failures{YType::uint32, "path-malloc-failures"},
    rib_updates{YType::uint32, "rib-updates"}
{

    yang_name = "statistics"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::DefaultVrf::Statistics::~Statistics()
{
}

bool Rip::Protocol::DefaultVrf::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return received_packets.is_set
	|| discarded_packets.is_set
	|| discarded_routes.is_set
	|| standby_packets_received.is_set
	|| sent_messages.is_set
	|| sent_message_failures.is_set
	|| query_responses.is_set
	|| periodic_updates.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| route_malloc_failures.is_set
	|| path_malloc_failures.is_set
	|| rib_updates.is_set;
}

bool Rip::Protocol::DefaultVrf::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(discarded_packets.yfilter)
	|| ydk::is_set(discarded_routes.yfilter)
	|| ydk::is_set(standby_packets_received.yfilter)
	|| ydk::is_set(sent_messages.yfilter)
	|| ydk::is_set(sent_message_failures.yfilter)
	|| ydk::is_set(query_responses.yfilter)
	|| ydk::is_set(periodic_updates.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(route_malloc_failures.yfilter)
	|| ydk::is_set(path_malloc_failures.yfilter)
	|| ydk::is_set(rib_updates.yfilter);
}

std::string Rip::Protocol::DefaultVrf::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::DefaultVrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (discarded_packets.is_set || is_set(discarded_packets.yfilter)) leaf_name_data.push_back(discarded_packets.get_name_leafdata());
    if (discarded_routes.is_set || is_set(discarded_routes.yfilter)) leaf_name_data.push_back(discarded_routes.get_name_leafdata());
    if (standby_packets_received.is_set || is_set(standby_packets_received.yfilter)) leaf_name_data.push_back(standby_packets_received.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.yfilter)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (sent_message_failures.is_set || is_set(sent_message_failures.yfilter)) leaf_name_data.push_back(sent_message_failures.get_name_leafdata());
    if (query_responses.is_set || is_set(query_responses.yfilter)) leaf_name_data.push_back(query_responses.get_name_leafdata());
    if (periodic_updates.is_set || is_set(periodic_updates.yfilter)) leaf_name_data.push_back(periodic_updates.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (route_malloc_failures.is_set || is_set(route_malloc_failures.yfilter)) leaf_name_data.push_back(route_malloc_failures.get_name_leafdata());
    if (path_malloc_failures.is_set || is_set(path_malloc_failures.yfilter)) leaf_name_data.push_back(path_malloc_failures.get_name_leafdata());
    if (rib_updates.is_set || is_set(rib_updates.yfilter)) leaf_name_data.push_back(rib_updates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Protocol::DefaultVrf::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-packets")
    {
        discarded_packets = value;
        discarded_packets.value_namespace = name_space;
        discarded_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-routes")
    {
        discarded_routes = value;
        discarded_routes.value_namespace = name_space;
        discarded_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-packets-received")
    {
        standby_packets_received = value;
        standby_packets_received.value_namespace = name_space;
        standby_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
        sent_messages.value_namespace = name_space;
        sent_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-message-failures")
    {
        sent_message_failures = value;
        sent_message_failures.value_namespace = name_space;
        sent_message_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-responses")
    {
        query_responses = value;
        query_responses.value_namespace = name_space;
        query_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-updates")
    {
        periodic_updates = value;
        periodic_updates.value_namespace = name_space;
        periodic_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-malloc-failures")
    {
        route_malloc_failures = value;
        route_malloc_failures.value_namespace = name_space;
        route_malloc_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-malloc-failures")
    {
        path_malloc_failures = value;
        path_malloc_failures.value_namespace = name_space;
        path_malloc_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-updates")
    {
        rib_updates = value;
        rib_updates.value_namespace = name_space;
        rib_updates.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Protocol::DefaultVrf::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "discarded-packets")
    {
        discarded_packets.yfilter = yfilter;
    }
    if(value_path == "discarded-routes")
    {
        discarded_routes.yfilter = yfilter;
    }
    if(value_path == "standby-packets-received")
    {
        standby_packets_received.yfilter = yfilter;
    }
    if(value_path == "sent-messages")
    {
        sent_messages.yfilter = yfilter;
    }
    if(value_path == "sent-message-failures")
    {
        sent_message_failures.yfilter = yfilter;
    }
    if(value_path == "query-responses")
    {
        query_responses.yfilter = yfilter;
    }
    if(value_path == "periodic-updates")
    {
        periodic_updates.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "route-malloc-failures")
    {
        route_malloc_failures.yfilter = yfilter;
    }
    if(value_path == "path-malloc-failures")
    {
        path_malloc_failures.yfilter = yfilter;
    }
    if(value_path == "rib-updates")
    {
        rib_updates.yfilter = yfilter;
    }
}

bool Rip::Protocol::DefaultVrf::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-packets" || name == "discarded-packets" || name == "discarded-routes" || name == "standby-packets-received" || name == "sent-messages" || name == "sent-message-failures" || name == "query-responses" || name == "periodic-updates" || name == "route-count" || name == "path-count" || name == "route-malloc-failures" || name == "path-malloc-failures" || name == "rib-updates")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::DefaultVrf::Interfaces::~Interfaces()
{
}

bool Rip::Protocol::DefaultVrf::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Protocol::DefaultVrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::Protocol::DefaultVrf::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::DefaultVrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Rip::Protocol::DefaultVrf::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Protocol::DefaultVrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Protocol::DefaultVrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Protocol::DefaultVrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    if_handle{YType::str, "if-handle"},
    rip_enabled{YType::boolean, "rip-enabled"},
    is_passive_interface{YType::boolean, "is-passive-interface"},
    multicast_address{YType::boolean, "multicast-address"},
    accept_metric{YType::boolean, "accept-metric"},
    send_version{YType::uint32, "send-version"},
    receive_version{YType::uint32, "receive-version"},
    state{YType::enumeration, "state"},
    destination_address{YType::str, "destination-address"},
    prefix_length{YType::uint32, "prefix-length"},
    metric_cost{YType::uint32, "metric-cost"},
    split_horizon{YType::boolean, "split-horizon"},
    poison_horizon{YType::boolean, "poison-horizon"},
    triggered_rip{YType::boolean, "triggered-rip"},
    neighbor_address{YType::str, "neighbor-address"},
    oom_flags{YType::uint32, "oom-flags"},
    join_status{YType::boolean, "join-status"},
    lpts_state{YType::boolean, "lpts-state"},
    auth_mode{YType::uint32, "auth-mode"},
    auth_keychain{YType::str, "auth-keychain"},
    send_auth_key_exists{YType::boolean, "send-auth-key-exists"},
    auth_key_md5{YType::boolean, "auth-key-md5"},
    auth_key_send_id{YType::uint64, "auth-key-send-id"},
    total_pkt_recvd{YType::uint32, "total-pkt-recvd"},
    pkt_drop_wrong_kc{YType::uint32, "pkt-drop-wrong-kc"},
    pkt_drop_no_auth{YType::uint32, "pkt-drop-no-auth"},
    pkt_drop_invalid_auth{YType::uint32, "pkt-drop-invalid-auth"},
    pkt_accepted_valid_auth{YType::uint32, "pkt-accepted-valid-auth"}
        ,
    rip_summary(this, {})
    , rip_peer(this, {})
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::~Interface()
{
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rip_summary.len(); index++)
    {
        if(rip_summary[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip_peer.len(); index++)
    {
        if(rip_peer[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| if_handle.is_set
	|| rip_enabled.is_set
	|| is_passive_interface.is_set
	|| multicast_address.is_set
	|| accept_metric.is_set
	|| send_version.is_set
	|| receive_version.is_set
	|| state.is_set
	|| destination_address.is_set
	|| prefix_length.is_set
	|| metric_cost.is_set
	|| split_horizon.is_set
	|| poison_horizon.is_set
	|| triggered_rip.is_set
	|| neighbor_address.is_set
	|| oom_flags.is_set
	|| join_status.is_set
	|| lpts_state.is_set
	|| auth_mode.is_set
	|| auth_keychain.is_set
	|| send_auth_key_exists.is_set
	|| auth_key_md5.is_set
	|| auth_key_send_id.is_set
	|| total_pkt_recvd.is_set
	|| pkt_drop_wrong_kc.is_set
	|| pkt_drop_no_auth.is_set
	|| pkt_drop_invalid_auth.is_set
	|| pkt_accepted_valid_auth.is_set;
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<rip_summary.len(); index++)
    {
        if(rip_summary[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip_peer.len(); index++)
    {
        if(rip_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(rip_enabled.yfilter)
	|| ydk::is_set(is_passive_interface.yfilter)
	|| ydk::is_set(multicast_address.yfilter)
	|| ydk::is_set(accept_metric.yfilter)
	|| ydk::is_set(send_version.yfilter)
	|| ydk::is_set(receive_version.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(metric_cost.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| ydk::is_set(poison_horizon.yfilter)
	|| ydk::is_set(triggered_rip.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(join_status.yfilter)
	|| ydk::is_set(lpts_state.yfilter)
	|| ydk::is_set(auth_mode.yfilter)
	|| ydk::is_set(auth_keychain.yfilter)
	|| ydk::is_set(send_auth_key_exists.yfilter)
	|| ydk::is_set(auth_key_md5.yfilter)
	|| ydk::is_set(auth_key_send_id.yfilter)
	|| ydk::is_set(total_pkt_recvd.yfilter)
	|| ydk::is_set(pkt_drop_wrong_kc.yfilter)
	|| ydk::is_set(pkt_drop_no_auth.yfilter)
	|| ydk::is_set(pkt_drop_invalid_auth.yfilter)
	|| ydk::is_set(pkt_accepted_valid_auth.yfilter);
}

std::string Rip::Protocol::DefaultVrf::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::DefaultVrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (rip_enabled.is_set || is_set(rip_enabled.yfilter)) leaf_name_data.push_back(rip_enabled.get_name_leafdata());
    if (is_passive_interface.is_set || is_set(is_passive_interface.yfilter)) leaf_name_data.push_back(is_passive_interface.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.yfilter)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (accept_metric.is_set || is_set(accept_metric.yfilter)) leaf_name_data.push_back(accept_metric.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.yfilter)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.yfilter)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (metric_cost.is_set || is_set(metric_cost.yfilter)) leaf_name_data.push_back(metric_cost.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());
    if (poison_horizon.is_set || is_set(poison_horizon.yfilter)) leaf_name_data.push_back(poison_horizon.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.yfilter)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (join_status.is_set || is_set(join_status.yfilter)) leaf_name_data.push_back(join_status.get_name_leafdata());
    if (lpts_state.is_set || is_set(lpts_state.yfilter)) leaf_name_data.push_back(lpts_state.get_name_leafdata());
    if (auth_mode.is_set || is_set(auth_mode.yfilter)) leaf_name_data.push_back(auth_mode.get_name_leafdata());
    if (auth_keychain.is_set || is_set(auth_keychain.yfilter)) leaf_name_data.push_back(auth_keychain.get_name_leafdata());
    if (send_auth_key_exists.is_set || is_set(send_auth_key_exists.yfilter)) leaf_name_data.push_back(send_auth_key_exists.get_name_leafdata());
    if (auth_key_md5.is_set || is_set(auth_key_md5.yfilter)) leaf_name_data.push_back(auth_key_md5.get_name_leafdata());
    if (auth_key_send_id.is_set || is_set(auth_key_send_id.yfilter)) leaf_name_data.push_back(auth_key_send_id.get_name_leafdata());
    if (total_pkt_recvd.is_set || is_set(total_pkt_recvd.yfilter)) leaf_name_data.push_back(total_pkt_recvd.get_name_leafdata());
    if (pkt_drop_wrong_kc.is_set || is_set(pkt_drop_wrong_kc.yfilter)) leaf_name_data.push_back(pkt_drop_wrong_kc.get_name_leafdata());
    if (pkt_drop_no_auth.is_set || is_set(pkt_drop_no_auth.yfilter)) leaf_name_data.push_back(pkt_drop_no_auth.get_name_leafdata());
    if (pkt_drop_invalid_auth.is_set || is_set(pkt_drop_invalid_auth.yfilter)) leaf_name_data.push_back(pkt_drop_invalid_auth.get_name_leafdata());
    if (pkt_accepted_valid_auth.is_set || is_set(pkt_accepted_valid_auth.yfilter)) leaf_name_data.push_back(pkt_accepted_valid_auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-summary")
    {
        auto ent_ = std::make_shared<Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary>();
        ent_->parent = this;
        rip_summary.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rip-peer")
    {
        auto ent_ = std::make_shared<Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer>();
        ent_->parent = this;
        rip_peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rip_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rip_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Protocol::DefaultVrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rip-enabled")
    {
        rip_enabled = value;
        rip_enabled.value_namespace = name_space;
        rip_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive-interface")
    {
        is_passive_interface = value;
        is_passive_interface.value_namespace = name_space;
        is_passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
        multicast_address.value_namespace = name_space;
        multicast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-metric")
    {
        accept_metric = value;
        accept_metric.value_namespace = name_space;
        accept_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-version")
    {
        send_version = value;
        send_version.value_namespace = name_space;
        send_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
        receive_version.value_namespace = name_space;
        receive_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-cost")
    {
        metric_cost = value;
        metric_cost.value_namespace = name_space;
        metric_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poison-horizon")
    {
        poison_horizon = value;
        poison_horizon.value_namespace = name_space;
        poison_horizon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
        triggered_rip.value_namespace = name_space;
        triggered_rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-status")
    {
        join_status = value;
        join_status.value_namespace = name_space;
        join_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpts-state")
    {
        lpts_state = value;
        lpts_state.value_namespace = name_space;
        lpts_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-mode")
    {
        auth_mode = value;
        auth_mode.value_namespace = name_space;
        auth_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-keychain")
    {
        auth_keychain = value;
        auth_keychain.value_namespace = name_space;
        auth_keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-auth-key-exists")
    {
        send_auth_key_exists = value;
        send_auth_key_exists.value_namespace = name_space;
        send_auth_key_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key-md5")
    {
        auth_key_md5 = value;
        auth_key_md5.value_namespace = name_space;
        auth_key_md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key-send-id")
    {
        auth_key_send_id = value;
        auth_key_send_id.value_namespace = name_space;
        auth_key_send_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pkt-recvd")
    {
        total_pkt_recvd = value;
        total_pkt_recvd.value_namespace = name_space;
        total_pkt_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-wrong-kc")
    {
        pkt_drop_wrong_kc = value;
        pkt_drop_wrong_kc.value_namespace = name_space;
        pkt_drop_wrong_kc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-no-auth")
    {
        pkt_drop_no_auth = value;
        pkt_drop_no_auth.value_namespace = name_space;
        pkt_drop_no_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-invalid-auth")
    {
        pkt_drop_invalid_auth = value;
        pkt_drop_invalid_auth.value_namespace = name_space;
        pkt_drop_invalid_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-accepted-valid-auth")
    {
        pkt_accepted_valid_auth = value;
        pkt_accepted_valid_auth.value_namespace = name_space;
        pkt_accepted_valid_auth.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Protocol::DefaultVrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "rip-enabled")
    {
        rip_enabled.yfilter = yfilter;
    }
    if(value_path == "is-passive-interface")
    {
        is_passive_interface.yfilter = yfilter;
    }
    if(value_path == "multicast-address")
    {
        multicast_address.yfilter = yfilter;
    }
    if(value_path == "accept-metric")
    {
        accept_metric.yfilter = yfilter;
    }
    if(value_path == "send-version")
    {
        send_version.yfilter = yfilter;
    }
    if(value_path == "receive-version")
    {
        receive_version.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "metric-cost")
    {
        metric_cost.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
    if(value_path == "poison-horizon")
    {
        poison_horizon.yfilter = yfilter;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "join-status")
    {
        join_status.yfilter = yfilter;
    }
    if(value_path == "lpts-state")
    {
        lpts_state.yfilter = yfilter;
    }
    if(value_path == "auth-mode")
    {
        auth_mode.yfilter = yfilter;
    }
    if(value_path == "auth-keychain")
    {
        auth_keychain.yfilter = yfilter;
    }
    if(value_path == "send-auth-key-exists")
    {
        send_auth_key_exists.yfilter = yfilter;
    }
    if(value_path == "auth-key-md5")
    {
        auth_key_md5.yfilter = yfilter;
    }
    if(value_path == "auth-key-send-id")
    {
        auth_key_send_id.yfilter = yfilter;
    }
    if(value_path == "total-pkt-recvd")
    {
        total_pkt_recvd.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-wrong-kc")
    {
        pkt_drop_wrong_kc.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-no-auth")
    {
        pkt_drop_no_auth.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-invalid-auth")
    {
        pkt_drop_invalid_auth.yfilter = yfilter;
    }
    if(value_path == "pkt-accepted-valid-auth")
    {
        pkt_accepted_valid_auth.yfilter = yfilter;
    }
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-summary" || name == "rip-peer" || name == "interface-name" || name == "interface" || name == "if-handle" || name == "rip-enabled" || name == "is-passive-interface" || name == "multicast-address" || name == "accept-metric" || name == "send-version" || name == "receive-version" || name == "state" || name == "destination-address" || name == "prefix-length" || name == "metric-cost" || name == "split-horizon" || name == "poison-horizon" || name == "triggered-rip" || name == "neighbor-address" || name == "oom-flags" || name == "join-status" || name == "lpts-state" || name == "auth-mode" || name == "auth-keychain" || name == "send-auth-key-exists" || name == "auth-key-md5" || name == "auth-key-send-id" || name == "total-pkt-recvd" || name == "pkt-drop-wrong-kc" || name == "pkt-drop-no-auth" || name == "pkt-drop-invalid-auth" || name == "pkt-accepted-valid-auth")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::RipSummary()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    next_hop_address{YType::str, "next-hop-address"},
    metric{YType::int32, "metric"}
{

    yang_name = "rip-summary"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::~RipSummary()
{
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| next_hop_address.is_set
	|| metric.is_set;
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::RipSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "next-hop-address" || name == "metric")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::RipPeer()
    :
    peer_uptime{YType::uint32, "peer-uptime"},
    peer_address{YType::str, "peer-address"},
    peer_version{YType::uint8, "peer-version"},
    discarded_peer_packets{YType::uint32, "discarded-peer-packets"},
    discarded_peer_routes{YType::uint32, "discarded-peer-routes"}
{

    yang_name = "rip-peer"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::~RipPeer()
{
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::has_data() const
{
    if (is_presence_container) return true;
    return peer_uptime.is_set
	|| peer_address.is_set
	|| peer_version.is_set
	|| discarded_peer_packets.is_set
	|| discarded_peer_routes.is_set;
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_uptime.yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(peer_version.yfilter)
	|| ydk::is_set(discarded_peer_packets.yfilter)
	|| ydk::is_set(discarded_peer_routes.yfilter);
}

std::string Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_uptime.is_set || is_set(peer_uptime.yfilter)) leaf_name_data.push_back(peer_uptime.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_version.is_set || is_set(peer_version.yfilter)) leaf_name_data.push_back(peer_version.get_name_leafdata());
    if (discarded_peer_packets.is_set || is_set(discarded_peer_packets.yfilter)) leaf_name_data.push_back(discarded_peer_packets.get_name_leafdata());
    if (discarded_peer_routes.is_set || is_set(discarded_peer_routes.yfilter)) leaf_name_data.push_back(discarded_peer_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-uptime")
    {
        peer_uptime = value;
        peer_uptime.value_namespace = name_space;
        peer_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-version")
    {
        peer_version = value;
        peer_version.value_namespace = name_space;
        peer_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-peer-packets")
    {
        discarded_peer_packets = value;
        discarded_peer_packets.value_namespace = name_space;
        discarded_peer_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-peer-routes")
    {
        discarded_peer_routes = value;
        discarded_peer_routes.value_namespace = name_space;
        discarded_peer_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-uptime")
    {
        peer_uptime.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "peer-version")
    {
        peer_version.yfilter = yfilter;
    }
    if(value_path == "discarded-peer-packets")
    {
        discarded_peer_packets.yfilter = yfilter;
    }
    if(value_path == "discarded-peer-routes")
    {
        discarded_peer_routes.yfilter = yfilter;
    }
}

bool Rip::Protocol::DefaultVrf::Interfaces::Interface::RipPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-uptime" || name == "peer-address" || name == "peer-version" || name == "discarded-peer-packets" || name == "discarded-peer-routes")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Global::Global()
    :
    vrf_summary(std::make_shared<Rip::Protocol::DefaultVrf::Global::VrfSummary>())
    , interface_summary(this, {})
{
    vrf_summary->parent = this;

    yang_name = "global"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::DefaultVrf::Global::~Global()
{
}

bool Rip::Protocol::DefaultVrf::Global::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_summary.len(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return (vrf_summary !=  nullptr && vrf_summary->has_data());
}

bool Rip::Protocol::DefaultVrf::Global::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.len(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (vrf_summary !=  nullptr && vrf_summary->has_operation());
}

std::string Rip::Protocol::DefaultVrf::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::DefaultVrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-summary")
    {
        if(vrf_summary == nullptr)
        {
            vrf_summary = std::make_shared<Rip::Protocol::DefaultVrf::Global::VrfSummary>();
        }
        return vrf_summary;
    }

    if(child_yang_name == "interface-summary")
    {
        auto ent_ = std::make_shared<Rip::Protocol::DefaultVrf::Global::InterfaceSummary>();
        ent_->parent = this;
        interface_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_summary != nullptr)
    {
        _children["vrf-summary"] = vrf_summary;
    }

    count_ = 0;
    for (auto ent_ : interface_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::Protocol::DefaultVrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::Protocol::DefaultVrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::Protocol::DefaultVrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-summary" || name == "interface-summary")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Global::VrfSummary::VrfSummary()
    :
    vrf_name{YType::str, "vrf-name"},
    active{YType::boolean, "active"},
    oom_flags{YType::uint32, "oom-flags"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    update_timer{YType::uint32, "update-timer"},
    next_update_time{YType::uint32, "next-update-time"},
    invalid_timer{YType::uint32, "invalid-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    flush_timer{YType::uint32, "flush-timer"},
    interface_configured_count{YType::uint32, "interface-configured-count"},
    active_interface_count{YType::uint32, "active-interface-count"}
{

    yang_name = "vrf-summary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::DefaultVrf::Global::VrfSummary::~VrfSummary()
{
}

bool Rip::Protocol::DefaultVrf::Global::VrfSummary::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| active.is_set
	|| oom_flags.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| update_timer.is_set
	|| next_update_time.is_set
	|| invalid_timer.is_set
	|| hold_down_timer.is_set
	|| flush_timer.is_set
	|| interface_configured_count.is_set
	|| active_interface_count.is_set;
}

bool Rip::Protocol::DefaultVrf::Global::VrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(update_timer.yfilter)
	|| ydk::is_set(next_update_time.yfilter)
	|| ydk::is_set(invalid_timer.yfilter)
	|| ydk::is_set(hold_down_timer.yfilter)
	|| ydk::is_set(flush_timer.yfilter)
	|| ydk::is_set(interface_configured_count.yfilter)
	|| ydk::is_set(active_interface_count.yfilter);
}

std::string Rip::Protocol::DefaultVrf::Global::VrfSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::DefaultVrf::Global::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Global::VrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.yfilter)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.yfilter)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.yfilter)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.yfilter)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.yfilter)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (interface_configured_count.is_set || is_set(interface_configured_count.yfilter)) leaf_name_data.push_back(interface_configured_count.get_name_leafdata());
    if (active_interface_count.is_set || is_set(active_interface_count.yfilter)) leaf_name_data.push_back(active_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Global::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Global::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Protocol::DefaultVrf::Global::VrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
        update_timer.value_namespace = name_space;
        update_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
        next_update_time.value_namespace = name_space;
        next_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
        invalid_timer.value_namespace = name_space;
        invalid_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
        hold_down_timer.value_namespace = name_space;
        hold_down_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
        flush_timer.value_namespace = name_space;
        flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count = value;
        interface_configured_count.value_namespace = name_space;
        interface_configured_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count = value;
        active_interface_count.value_namespace = name_space;
        active_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Protocol::DefaultVrf::Global::VrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "update-timer")
    {
        update_timer.yfilter = yfilter;
    }
    if(value_path == "next-update-time")
    {
        next_update_time.yfilter = yfilter;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer.yfilter = yfilter;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer.yfilter = yfilter;
    }
    if(value_path == "flush-timer")
    {
        flush_timer.yfilter = yfilter;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count.yfilter = yfilter;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count.yfilter = yfilter;
    }
}

bool Rip::Protocol::DefaultVrf::Global::VrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "active" || name == "oom-flags" || name == "route-count" || name == "path-count" || name == "update-timer" || name == "next-update-time" || name == "invalid-timer" || name == "hold-down-timer" || name == "flush-timer" || name == "interface-configured-count" || name == "active-interface-count")
        return true;
    return false;
}

Rip::Protocol::DefaultVrf::Global::InterfaceSummary::InterfaceSummary()
    :
    interface_name{YType::str, "interface-name"},
    enabled{YType::boolean, "enabled"},
    state{YType::enumeration, "state"},
    destination_address{YType::str, "destination-address"},
    prefix_length{YType::uint32, "prefix-length"},
    oom_flags{YType::uint32, "oom-flags"},
    send_version{YType::uint32, "send-version"},
    receive_version{YType::uint32, "receive-version"},
    neighbor_count{YType::uint32, "neighbor-count"}
{

    yang_name = "interface-summary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::Protocol::DefaultVrf::Global::InterfaceSummary::~InterfaceSummary()
{
}

bool Rip::Protocol::DefaultVrf::Global::InterfaceSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| enabled.is_set
	|| state.is_set
	|| destination_address.is_set
	|| prefix_length.is_set
	|| oom_flags.is_set
	|| send_version.is_set
	|| receive_version.is_set
	|| neighbor_count.is_set;
}

bool Rip::Protocol::DefaultVrf::Global::InterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(send_version.yfilter)
	|| ydk::is_set(receive_version.yfilter)
	|| ydk::is_set(neighbor_count.yfilter);
}

std::string Rip::Protocol::DefaultVrf::Global::InterfaceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/protocol/default-vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::Protocol::DefaultVrf::Global::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::Protocol::DefaultVrf::Global::InterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.yfilter)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.yfilter)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::Protocol::DefaultVrf::Global::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::Protocol::DefaultVrf::Global::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::Protocol::DefaultVrf::Global::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-version")
    {
        send_version = value;
        send_version.value_namespace = name_space;
        send_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
        receive_version.value_namespace = name_space;
        receive_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::Protocol::DefaultVrf::Global::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "send-version")
    {
        send_version.yfilter = yfilter;
    }
    if(value_path == "receive-version")
    {
        receive_version.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
}

bool Rip::Protocol::DefaultVrf::Global::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "enabled" || name == "state" || name == "destination-address" || name == "prefix-length" || name == "oom-flags" || name == "send-version" || name == "receive-version" || name == "neighbor-count")
        return true;
    return false;
}

Rip::DefaultVrf::DefaultVrf()
    :
    routes(std::make_shared<Rip::DefaultVrf::Routes>())
    , configuration(std::make_shared<Rip::DefaultVrf::Configuration>())
    , statistics(std::make_shared<Rip::DefaultVrf::Statistics>())
    , interfaces(std::make_shared<Rip::DefaultVrf::Interfaces>())
    , global(std::make_shared<Rip::DefaultVrf::Global>())
{
    routes->parent = this;
    configuration->parent = this;
    statistics->parent = this;
    interfaces->parent = this;
    global->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::DefaultVrf::~DefaultVrf()
{
}

bool Rip::DefaultVrf::has_data() const
{
    if (is_presence_container) return true;
    return (routes !=  nullptr && routes->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool Rip::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (routes !=  nullptr && routes->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string Rip::DefaultVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routes")
    {
        if(routes == nullptr)
        {
            routes = std::make_shared<Rip::DefaultVrf::Routes>();
        }
        return routes;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Rip::DefaultVrf::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Rip::DefaultVrf::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rip::DefaultVrf::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Rip::DefaultVrf::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(routes != nullptr)
    {
        _children["routes"] = routes;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(global != nullptr)
    {
        _children["global"] = global;
    }

    return _children;
}

void Rip::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "configuration" || name == "statistics" || name == "interfaces" || name == "global")
        return true;
    return false;
}

Rip::DefaultVrf::Routes::Routes()
    :
    route(this, {})
{

    yang_name = "routes"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::DefaultVrf::Routes::~Routes()
{
}

bool Rip::DefaultVrf::Routes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.len(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::DefaultVrf::Routes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto ent_ = std::make_shared<Rip::DefaultVrf::Routes::Route>();
        ent_->parent = this;
        route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::DefaultVrf::Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Rip::DefaultVrf::Routes::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    destination_address{YType::str, "destination-address"},
    prefix_length_xr{YType::uint32, "prefix-length-xr"},
    distance{YType::uint16, "distance"},
    bgp_count{YType::uint16, "bgp-count"},
    route_type{YType::uint16, "route-type"},
    route_summary{YType::boolean, "route-summary"},
    route_tag{YType::uint16, "route-tag"},
    version{YType::uint8, "version"},
    attributes{YType::uint32, "attributes"},
    active{YType::boolean, "active"},
    path_origin{YType::enumeration, "path-origin"},
    hold_down{YType::boolean, "hold-down"}
        ,
    paths(this, {})
{

    yang_name = "route"; yang_parent_name = "routes"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::DefaultVrf::Routes::Route::~Route()
{
}

bool Rip::DefaultVrf::Routes::Route::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| destination_address.is_set
	|| prefix_length_xr.is_set
	|| distance.is_set
	|| bgp_count.is_set
	|| route_type.is_set
	|| route_summary.is_set
	|| route_tag.is_set
	|| version.is_set
	|| attributes.is_set
	|| active.is_set
	|| path_origin.is_set
	|| hold_down.is_set;
}

bool Rip::DefaultVrf::Routes::Route::has_operation() const
{
    for (std::size_t index=0; index<paths.len(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(bgp_count.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_summary.yfilter)
	|| ydk::is_set(route_tag.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(path_origin.yfilter)
	|| ydk::is_set(hold_down.yfilter);
}

std::string Rip::DefaultVrf::Routes::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/routes/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Routes::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (bgp_count.is_set || is_set(bgp_count.yfilter)) leaf_name_data.push_back(bgp_count.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_summary.is_set || is_set(route_summary.yfilter)) leaf_name_data.push_back(route_summary.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (path_origin.is_set || is_set(path_origin.yfilter)) leaf_name_data.push_back(path_origin.get_name_leafdata());
    if (hold_down.is_set || is_set(hold_down.yfilter)) leaf_name_data.push_back(hold_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "paths")
    {
        auto ent_ = std::make_shared<Rip::DefaultVrf::Routes::Route::Paths>();
        ent_->parent = this;
        paths.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Routes::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : paths.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::DefaultVrf::Routes::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-count")
    {
        bgp_count = value;
        bgp_count.value_namespace = name_space;
        bgp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-summary")
    {
        route_summary = value;
        route_summary.value_namespace = name_space;
        route_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-origin")
    {
        path_origin = value;
        path_origin.value_namespace = name_space;
        path_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down")
    {
        hold_down = value;
        hold_down.value_namespace = name_space;
        hold_down.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Routes::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "bgp-count")
    {
        bgp_count.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-summary")
    {
        route_summary.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "path-origin")
    {
        path_origin.yfilter = yfilter;
    }
    if(value_path == "hold-down")
    {
        hold_down.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Routes::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "paths" || name == "prefix" || name == "prefix-length" || name == "destination-address" || name == "prefix-length-xr" || name == "distance" || name == "bgp-count" || name == "route-type" || name == "route-summary" || name == "route-tag" || name == "version" || name == "attributes" || name == "active" || name == "path-origin" || name == "hold-down")
        return true;
    return false;
}

Rip::DefaultVrf::Routes::Route::Paths::Paths()
    :
    source_address{YType::str, "source-address"},
    next_hop_address{YType::str, "next-hop-address"},
    metric{YType::uint16, "metric"},
    tag{YType::uint16, "tag"},
    interface{YType::str, "interface"},
    uptime{YType::uint32, "uptime"},
    is_permanent{YType::boolean, "is-permanent"}
{

    yang_name = "paths"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::DefaultVrf::Routes::Route::Paths::~Paths()
{
}

bool Rip::DefaultVrf::Routes::Route::Paths::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| next_hop_address.is_set
	|| metric.is_set
	|| tag.is_set
	|| interface.is_set
	|| uptime.is_set
	|| is_permanent.is_set;
}

bool Rip::DefaultVrf::Routes::Route::Paths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(is_permanent.yfilter);
}

std::string Rip::DefaultVrf::Routes::Route::Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/routes/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Routes::Route::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Routes::Route::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (is_permanent.is_set || is_set(is_permanent.yfilter)) leaf_name_data.push_back(is_permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Routes::Route::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Routes::Route::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::DefaultVrf::Routes::Route::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-permanent")
    {
        is_permanent = value;
        is_permanent.value_namespace = name_space;
        is_permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Routes::Route::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "is-permanent")
    {
        is_permanent.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Routes::Route::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "next-hop-address" || name == "metric" || name == "tag" || name == "interface" || name == "uptime" || name == "is-permanent")
        return true;
    return false;
}

Rip::DefaultVrf::Configuration::Configuration()
    :
    active{YType::boolean, "active"},
    vr_fised_socket{YType::boolean, "vr-fised-socket"},
    rip_version{YType::int32, "rip-version"},
    default_metric{YType::uint8, "default-metric"},
    maximum_paths{YType::uint8, "maximum-paths"},
    auto_summarize{YType::boolean, "auto-summarize"},
    multicast_address{YType::boolean, "multicast-address"},
    flash_threshold{YType::uint8, "flash-threshold"},
    input_q_length{YType::uint16, "input-q-length"},
    triggered_rip{YType::boolean, "triggered-rip"},
    validation_indicator{YType::boolean, "validation-indicator"},
    update_timer{YType::uint32, "update-timer"},
    next_update_time{YType::uint32, "next-update-time"},
    invalid_timer{YType::uint32, "invalid-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    flush_timer{YType::uint32, "flush-timer"},
    oom_flags{YType::uint32, "oom-flags"},
    nsf_status{YType::boolean, "nsf-status"},
    nsf_life_time{YType::uint32, "nsf-life-time"}
{

    yang_name = "configuration"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::DefaultVrf::Configuration::~Configuration()
{
}

bool Rip::DefaultVrf::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return active.is_set
	|| vr_fised_socket.is_set
	|| rip_version.is_set
	|| default_metric.is_set
	|| maximum_paths.is_set
	|| auto_summarize.is_set
	|| multicast_address.is_set
	|| flash_threshold.is_set
	|| input_q_length.is_set
	|| triggered_rip.is_set
	|| validation_indicator.is_set
	|| update_timer.is_set
	|| next_update_time.is_set
	|| invalid_timer.is_set
	|| hold_down_timer.is_set
	|| flush_timer.is_set
	|| oom_flags.is_set
	|| nsf_status.is_set
	|| nsf_life_time.is_set;
}

bool Rip::DefaultVrf::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(vr_fised_socket.yfilter)
	|| ydk::is_set(rip_version.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(auto_summarize.yfilter)
	|| ydk::is_set(multicast_address.yfilter)
	|| ydk::is_set(flash_threshold.yfilter)
	|| ydk::is_set(input_q_length.yfilter)
	|| ydk::is_set(triggered_rip.yfilter)
	|| ydk::is_set(validation_indicator.yfilter)
	|| ydk::is_set(update_timer.yfilter)
	|| ydk::is_set(next_update_time.yfilter)
	|| ydk::is_set(invalid_timer.yfilter)
	|| ydk::is_set(hold_down_timer.yfilter)
	|| ydk::is_set(flush_timer.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(nsf_status.yfilter)
	|| ydk::is_set(nsf_life_time.yfilter);
}

std::string Rip::DefaultVrf::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (vr_fised_socket.is_set || is_set(vr_fised_socket.yfilter)) leaf_name_data.push_back(vr_fised_socket.get_name_leafdata());
    if (rip_version.is_set || is_set(rip_version.yfilter)) leaf_name_data.push_back(rip_version.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (auto_summarize.is_set || is_set(auto_summarize.yfilter)) leaf_name_data.push_back(auto_summarize.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.yfilter)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (flash_threshold.is_set || is_set(flash_threshold.yfilter)) leaf_name_data.push_back(flash_threshold.get_name_leafdata());
    if (input_q_length.is_set || is_set(input_q_length.yfilter)) leaf_name_data.push_back(input_q_length.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.yfilter)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());
    if (validation_indicator.is_set || is_set(validation_indicator.yfilter)) leaf_name_data.push_back(validation_indicator.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.yfilter)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.yfilter)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.yfilter)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.yfilter)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.yfilter)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (nsf_status.is_set || is_set(nsf_status.yfilter)) leaf_name_data.push_back(nsf_status.get_name_leafdata());
    if (nsf_life_time.is_set || is_set(nsf_life_time.yfilter)) leaf_name_data.push_back(nsf_life_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::DefaultVrf::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vr-fised-socket")
    {
        vr_fised_socket = value;
        vr_fised_socket.value_namespace = name_space;
        vr_fised_socket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rip-version")
    {
        rip_version = value;
        rip_version.value_namespace = name_space;
        rip_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summarize")
    {
        auto_summarize = value;
        auto_summarize.value_namespace = name_space;
        auto_summarize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
        multicast_address.value_namespace = name_space;
        multicast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-threshold")
    {
        flash_threshold = value;
        flash_threshold.value_namespace = name_space;
        flash_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-q-length")
    {
        input_q_length = value;
        input_q_length.value_namespace = name_space;
        input_q_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
        triggered_rip.value_namespace = name_space;
        triggered_rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validation-indicator")
    {
        validation_indicator = value;
        validation_indicator.value_namespace = name_space;
        validation_indicator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
        update_timer.value_namespace = name_space;
        update_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
        next_update_time.value_namespace = name_space;
        next_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
        invalid_timer.value_namespace = name_space;
        invalid_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
        hold_down_timer.value_namespace = name_space;
        hold_down_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
        flush_timer.value_namespace = name_space;
        flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-status")
    {
        nsf_status = value;
        nsf_status.value_namespace = name_space;
        nsf_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-life-time")
    {
        nsf_life_time = value;
        nsf_life_time.value_namespace = name_space;
        nsf_life_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "vr-fised-socket")
    {
        vr_fised_socket.yfilter = yfilter;
    }
    if(value_path == "rip-version")
    {
        rip_version.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "auto-summarize")
    {
        auto_summarize.yfilter = yfilter;
    }
    if(value_path == "multicast-address")
    {
        multicast_address.yfilter = yfilter;
    }
    if(value_path == "flash-threshold")
    {
        flash_threshold.yfilter = yfilter;
    }
    if(value_path == "input-q-length")
    {
        input_q_length.yfilter = yfilter;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip.yfilter = yfilter;
    }
    if(value_path == "validation-indicator")
    {
        validation_indicator.yfilter = yfilter;
    }
    if(value_path == "update-timer")
    {
        update_timer.yfilter = yfilter;
    }
    if(value_path == "next-update-time")
    {
        next_update_time.yfilter = yfilter;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer.yfilter = yfilter;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer.yfilter = yfilter;
    }
    if(value_path == "flush-timer")
    {
        flush_timer.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "nsf-status")
    {
        nsf_status.yfilter = yfilter;
    }
    if(value_path == "nsf-life-time")
    {
        nsf_life_time.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "vr-fised-socket" || name == "rip-version" || name == "default-metric" || name == "maximum-paths" || name == "auto-summarize" || name == "multicast-address" || name == "flash-threshold" || name == "input-q-length" || name == "triggered-rip" || name == "validation-indicator" || name == "update-timer" || name == "next-update-time" || name == "invalid-timer" || name == "hold-down-timer" || name == "flush-timer" || name == "oom-flags" || name == "nsf-status" || name == "nsf-life-time")
        return true;
    return false;
}

Rip::DefaultVrf::Statistics::Statistics()
    :
    received_packets{YType::uint32, "received-packets"},
    discarded_packets{YType::uint32, "discarded-packets"},
    discarded_routes{YType::uint32, "discarded-routes"},
    standby_packets_received{YType::uint32, "standby-packets-received"},
    sent_messages{YType::uint32, "sent-messages"},
    sent_message_failures{YType::uint32, "sent-message-failures"},
    query_responses{YType::uint32, "query-responses"},
    periodic_updates{YType::uint32, "periodic-updates"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    route_malloc_failures{YType::uint32, "route-malloc-failures"},
    path_malloc_failures{YType::uint32, "path-malloc-failures"},
    rib_updates{YType::uint32, "rib-updates"}
{

    yang_name = "statistics"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::DefaultVrf::Statistics::~Statistics()
{
}

bool Rip::DefaultVrf::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return received_packets.is_set
	|| discarded_packets.is_set
	|| discarded_routes.is_set
	|| standby_packets_received.is_set
	|| sent_messages.is_set
	|| sent_message_failures.is_set
	|| query_responses.is_set
	|| periodic_updates.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| route_malloc_failures.is_set
	|| path_malloc_failures.is_set
	|| rib_updates.is_set;
}

bool Rip::DefaultVrf::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(discarded_packets.yfilter)
	|| ydk::is_set(discarded_routes.yfilter)
	|| ydk::is_set(standby_packets_received.yfilter)
	|| ydk::is_set(sent_messages.yfilter)
	|| ydk::is_set(sent_message_failures.yfilter)
	|| ydk::is_set(query_responses.yfilter)
	|| ydk::is_set(periodic_updates.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(route_malloc_failures.yfilter)
	|| ydk::is_set(path_malloc_failures.yfilter)
	|| ydk::is_set(rib_updates.yfilter);
}

std::string Rip::DefaultVrf::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (discarded_packets.is_set || is_set(discarded_packets.yfilter)) leaf_name_data.push_back(discarded_packets.get_name_leafdata());
    if (discarded_routes.is_set || is_set(discarded_routes.yfilter)) leaf_name_data.push_back(discarded_routes.get_name_leafdata());
    if (standby_packets_received.is_set || is_set(standby_packets_received.yfilter)) leaf_name_data.push_back(standby_packets_received.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.yfilter)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (sent_message_failures.is_set || is_set(sent_message_failures.yfilter)) leaf_name_data.push_back(sent_message_failures.get_name_leafdata());
    if (query_responses.is_set || is_set(query_responses.yfilter)) leaf_name_data.push_back(query_responses.get_name_leafdata());
    if (periodic_updates.is_set || is_set(periodic_updates.yfilter)) leaf_name_data.push_back(periodic_updates.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (route_malloc_failures.is_set || is_set(route_malloc_failures.yfilter)) leaf_name_data.push_back(route_malloc_failures.get_name_leafdata());
    if (path_malloc_failures.is_set || is_set(path_malloc_failures.yfilter)) leaf_name_data.push_back(path_malloc_failures.get_name_leafdata());
    if (rib_updates.is_set || is_set(rib_updates.yfilter)) leaf_name_data.push_back(rib_updates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::DefaultVrf::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-packets")
    {
        discarded_packets = value;
        discarded_packets.value_namespace = name_space;
        discarded_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-routes")
    {
        discarded_routes = value;
        discarded_routes.value_namespace = name_space;
        discarded_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-packets-received")
    {
        standby_packets_received = value;
        standby_packets_received.value_namespace = name_space;
        standby_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
        sent_messages.value_namespace = name_space;
        sent_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-message-failures")
    {
        sent_message_failures = value;
        sent_message_failures.value_namespace = name_space;
        sent_message_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-responses")
    {
        query_responses = value;
        query_responses.value_namespace = name_space;
        query_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-updates")
    {
        periodic_updates = value;
        periodic_updates.value_namespace = name_space;
        periodic_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-malloc-failures")
    {
        route_malloc_failures = value;
        route_malloc_failures.value_namespace = name_space;
        route_malloc_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-malloc-failures")
    {
        path_malloc_failures = value;
        path_malloc_failures.value_namespace = name_space;
        path_malloc_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-updates")
    {
        rib_updates = value;
        rib_updates.value_namespace = name_space;
        rib_updates.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "discarded-packets")
    {
        discarded_packets.yfilter = yfilter;
    }
    if(value_path == "discarded-routes")
    {
        discarded_routes.yfilter = yfilter;
    }
    if(value_path == "standby-packets-received")
    {
        standby_packets_received.yfilter = yfilter;
    }
    if(value_path == "sent-messages")
    {
        sent_messages.yfilter = yfilter;
    }
    if(value_path == "sent-message-failures")
    {
        sent_message_failures.yfilter = yfilter;
    }
    if(value_path == "query-responses")
    {
        query_responses.yfilter = yfilter;
    }
    if(value_path == "periodic-updates")
    {
        periodic_updates.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "route-malloc-failures")
    {
        route_malloc_failures.yfilter = yfilter;
    }
    if(value_path == "path-malloc-failures")
    {
        path_malloc_failures.yfilter = yfilter;
    }
    if(value_path == "rib-updates")
    {
        rib_updates.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-packets" || name == "discarded-packets" || name == "discarded-routes" || name == "standby-packets-received" || name == "sent-messages" || name == "sent-message-failures" || name == "query-responses" || name == "periodic-updates" || name == "route-count" || name == "path-count" || name == "route-malloc-failures" || name == "path-malloc-failures" || name == "rib-updates")
        return true;
    return false;
}

Rip::DefaultVrf::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::DefaultVrf::Interfaces::~Interfaces()
{
}

bool Rip::DefaultVrf::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rip::DefaultVrf::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Rip::DefaultVrf::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::DefaultVrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Rip::DefaultVrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    if_handle{YType::str, "if-handle"},
    rip_enabled{YType::boolean, "rip-enabled"},
    is_passive_interface{YType::boolean, "is-passive-interface"},
    multicast_address{YType::boolean, "multicast-address"},
    accept_metric{YType::boolean, "accept-metric"},
    send_version{YType::uint32, "send-version"},
    receive_version{YType::uint32, "receive-version"},
    state{YType::enumeration, "state"},
    destination_address{YType::str, "destination-address"},
    prefix_length{YType::uint32, "prefix-length"},
    metric_cost{YType::uint32, "metric-cost"},
    split_horizon{YType::boolean, "split-horizon"},
    poison_horizon{YType::boolean, "poison-horizon"},
    triggered_rip{YType::boolean, "triggered-rip"},
    neighbor_address{YType::str, "neighbor-address"},
    oom_flags{YType::uint32, "oom-flags"},
    join_status{YType::boolean, "join-status"},
    lpts_state{YType::boolean, "lpts-state"},
    auth_mode{YType::uint32, "auth-mode"},
    auth_keychain{YType::str, "auth-keychain"},
    send_auth_key_exists{YType::boolean, "send-auth-key-exists"},
    auth_key_md5{YType::boolean, "auth-key-md5"},
    auth_key_send_id{YType::uint64, "auth-key-send-id"},
    total_pkt_recvd{YType::uint32, "total-pkt-recvd"},
    pkt_drop_wrong_kc{YType::uint32, "pkt-drop-wrong-kc"},
    pkt_drop_no_auth{YType::uint32, "pkt-drop-no-auth"},
    pkt_drop_invalid_auth{YType::uint32, "pkt-drop-invalid-auth"},
    pkt_accepted_valid_auth{YType::uint32, "pkt-accepted-valid-auth"}
        ,
    rip_summary(this, {})
    , rip_peer(this, {})
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::DefaultVrf::Interfaces::Interface::~Interface()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rip_summary.len(); index++)
    {
        if(rip_summary[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip_peer.len(); index++)
    {
        if(rip_peer[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| if_handle.is_set
	|| rip_enabled.is_set
	|| is_passive_interface.is_set
	|| multicast_address.is_set
	|| accept_metric.is_set
	|| send_version.is_set
	|| receive_version.is_set
	|| state.is_set
	|| destination_address.is_set
	|| prefix_length.is_set
	|| metric_cost.is_set
	|| split_horizon.is_set
	|| poison_horizon.is_set
	|| triggered_rip.is_set
	|| neighbor_address.is_set
	|| oom_flags.is_set
	|| join_status.is_set
	|| lpts_state.is_set
	|| auth_mode.is_set
	|| auth_keychain.is_set
	|| send_auth_key_exists.is_set
	|| auth_key_md5.is_set
	|| auth_key_send_id.is_set
	|| total_pkt_recvd.is_set
	|| pkt_drop_wrong_kc.is_set
	|| pkt_drop_no_auth.is_set
	|| pkt_drop_invalid_auth.is_set
	|| pkt_accepted_valid_auth.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<rip_summary.len(); index++)
    {
        if(rip_summary[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip_peer.len(); index++)
    {
        if(rip_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(rip_enabled.yfilter)
	|| ydk::is_set(is_passive_interface.yfilter)
	|| ydk::is_set(multicast_address.yfilter)
	|| ydk::is_set(accept_metric.yfilter)
	|| ydk::is_set(send_version.yfilter)
	|| ydk::is_set(receive_version.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(metric_cost.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| ydk::is_set(poison_horizon.yfilter)
	|| ydk::is_set(triggered_rip.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(join_status.yfilter)
	|| ydk::is_set(lpts_state.yfilter)
	|| ydk::is_set(auth_mode.yfilter)
	|| ydk::is_set(auth_keychain.yfilter)
	|| ydk::is_set(send_auth_key_exists.yfilter)
	|| ydk::is_set(auth_key_md5.yfilter)
	|| ydk::is_set(auth_key_send_id.yfilter)
	|| ydk::is_set(total_pkt_recvd.yfilter)
	|| ydk::is_set(pkt_drop_wrong_kc.yfilter)
	|| ydk::is_set(pkt_drop_no_auth.yfilter)
	|| ydk::is_set(pkt_drop_invalid_auth.yfilter)
	|| ydk::is_set(pkt_accepted_valid_auth.yfilter);
}

std::string Rip::DefaultVrf::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (rip_enabled.is_set || is_set(rip_enabled.yfilter)) leaf_name_data.push_back(rip_enabled.get_name_leafdata());
    if (is_passive_interface.is_set || is_set(is_passive_interface.yfilter)) leaf_name_data.push_back(is_passive_interface.get_name_leafdata());
    if (multicast_address.is_set || is_set(multicast_address.yfilter)) leaf_name_data.push_back(multicast_address.get_name_leafdata());
    if (accept_metric.is_set || is_set(accept_metric.yfilter)) leaf_name_data.push_back(accept_metric.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.yfilter)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.yfilter)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (metric_cost.is_set || is_set(metric_cost.yfilter)) leaf_name_data.push_back(metric_cost.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());
    if (poison_horizon.is_set || is_set(poison_horizon.yfilter)) leaf_name_data.push_back(poison_horizon.get_name_leafdata());
    if (triggered_rip.is_set || is_set(triggered_rip.yfilter)) leaf_name_data.push_back(triggered_rip.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (join_status.is_set || is_set(join_status.yfilter)) leaf_name_data.push_back(join_status.get_name_leafdata());
    if (lpts_state.is_set || is_set(lpts_state.yfilter)) leaf_name_data.push_back(lpts_state.get_name_leafdata());
    if (auth_mode.is_set || is_set(auth_mode.yfilter)) leaf_name_data.push_back(auth_mode.get_name_leafdata());
    if (auth_keychain.is_set || is_set(auth_keychain.yfilter)) leaf_name_data.push_back(auth_keychain.get_name_leafdata());
    if (send_auth_key_exists.is_set || is_set(send_auth_key_exists.yfilter)) leaf_name_data.push_back(send_auth_key_exists.get_name_leafdata());
    if (auth_key_md5.is_set || is_set(auth_key_md5.yfilter)) leaf_name_data.push_back(auth_key_md5.get_name_leafdata());
    if (auth_key_send_id.is_set || is_set(auth_key_send_id.yfilter)) leaf_name_data.push_back(auth_key_send_id.get_name_leafdata());
    if (total_pkt_recvd.is_set || is_set(total_pkt_recvd.yfilter)) leaf_name_data.push_back(total_pkt_recvd.get_name_leafdata());
    if (pkt_drop_wrong_kc.is_set || is_set(pkt_drop_wrong_kc.yfilter)) leaf_name_data.push_back(pkt_drop_wrong_kc.get_name_leafdata());
    if (pkt_drop_no_auth.is_set || is_set(pkt_drop_no_auth.yfilter)) leaf_name_data.push_back(pkt_drop_no_auth.get_name_leafdata());
    if (pkt_drop_invalid_auth.is_set || is_set(pkt_drop_invalid_auth.yfilter)) leaf_name_data.push_back(pkt_drop_invalid_auth.get_name_leafdata());
    if (pkt_accepted_valid_auth.is_set || is_set(pkt_accepted_valid_auth.yfilter)) leaf_name_data.push_back(pkt_accepted_valid_auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-summary")
    {
        auto ent_ = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::RipSummary>();
        ent_->parent = this;
        rip_summary.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rip-peer")
    {
        auto ent_ = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::RipPeer>();
        ent_->parent = this;
        rip_peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rip_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rip_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::DefaultVrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rip-enabled")
    {
        rip_enabled = value;
        rip_enabled.value_namespace = name_space;
        rip_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive-interface")
    {
        is_passive_interface = value;
        is_passive_interface.value_namespace = name_space;
        is_passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-address")
    {
        multicast_address = value;
        multicast_address.value_namespace = name_space;
        multicast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-metric")
    {
        accept_metric = value;
        accept_metric.value_namespace = name_space;
        accept_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-version")
    {
        send_version = value;
        send_version.value_namespace = name_space;
        send_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
        receive_version.value_namespace = name_space;
        receive_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-cost")
    {
        metric_cost = value;
        metric_cost.value_namespace = name_space;
        metric_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poison-horizon")
    {
        poison_horizon = value;
        poison_horizon.value_namespace = name_space;
        poison_horizon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip = value;
        triggered_rip.value_namespace = name_space;
        triggered_rip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-status")
    {
        join_status = value;
        join_status.value_namespace = name_space;
        join_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpts-state")
    {
        lpts_state = value;
        lpts_state.value_namespace = name_space;
        lpts_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-mode")
    {
        auth_mode = value;
        auth_mode.value_namespace = name_space;
        auth_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-keychain")
    {
        auth_keychain = value;
        auth_keychain.value_namespace = name_space;
        auth_keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-auth-key-exists")
    {
        send_auth_key_exists = value;
        send_auth_key_exists.value_namespace = name_space;
        send_auth_key_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key-md5")
    {
        auth_key_md5 = value;
        auth_key_md5.value_namespace = name_space;
        auth_key_md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key-send-id")
    {
        auth_key_send_id = value;
        auth_key_send_id.value_namespace = name_space;
        auth_key_send_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pkt-recvd")
    {
        total_pkt_recvd = value;
        total_pkt_recvd.value_namespace = name_space;
        total_pkt_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-wrong-kc")
    {
        pkt_drop_wrong_kc = value;
        pkt_drop_wrong_kc.value_namespace = name_space;
        pkt_drop_wrong_kc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-no-auth")
    {
        pkt_drop_no_auth = value;
        pkt_drop_no_auth.value_namespace = name_space;
        pkt_drop_no_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-drop-invalid-auth")
    {
        pkt_drop_invalid_auth = value;
        pkt_drop_invalid_auth.value_namespace = name_space;
        pkt_drop_invalid_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-accepted-valid-auth")
    {
        pkt_accepted_valid_auth = value;
        pkt_accepted_valid_auth.value_namespace = name_space;
        pkt_accepted_valid_auth.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "rip-enabled")
    {
        rip_enabled.yfilter = yfilter;
    }
    if(value_path == "is-passive-interface")
    {
        is_passive_interface.yfilter = yfilter;
    }
    if(value_path == "multicast-address")
    {
        multicast_address.yfilter = yfilter;
    }
    if(value_path == "accept-metric")
    {
        accept_metric.yfilter = yfilter;
    }
    if(value_path == "send-version")
    {
        send_version.yfilter = yfilter;
    }
    if(value_path == "receive-version")
    {
        receive_version.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "metric-cost")
    {
        metric_cost.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
    if(value_path == "poison-horizon")
    {
        poison_horizon.yfilter = yfilter;
    }
    if(value_path == "triggered-rip")
    {
        triggered_rip.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "join-status")
    {
        join_status.yfilter = yfilter;
    }
    if(value_path == "lpts-state")
    {
        lpts_state.yfilter = yfilter;
    }
    if(value_path == "auth-mode")
    {
        auth_mode.yfilter = yfilter;
    }
    if(value_path == "auth-keychain")
    {
        auth_keychain.yfilter = yfilter;
    }
    if(value_path == "send-auth-key-exists")
    {
        send_auth_key_exists.yfilter = yfilter;
    }
    if(value_path == "auth-key-md5")
    {
        auth_key_md5.yfilter = yfilter;
    }
    if(value_path == "auth-key-send-id")
    {
        auth_key_send_id.yfilter = yfilter;
    }
    if(value_path == "total-pkt-recvd")
    {
        total_pkt_recvd.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-wrong-kc")
    {
        pkt_drop_wrong_kc.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-no-auth")
    {
        pkt_drop_no_auth.yfilter = yfilter;
    }
    if(value_path == "pkt-drop-invalid-auth")
    {
        pkt_drop_invalid_auth.yfilter = yfilter;
    }
    if(value_path == "pkt-accepted-valid-auth")
    {
        pkt_accepted_valid_auth.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-summary" || name == "rip-peer" || name == "interface-name" || name == "interface" || name == "if-handle" || name == "rip-enabled" || name == "is-passive-interface" || name == "multicast-address" || name == "accept-metric" || name == "send-version" || name == "receive-version" || name == "state" || name == "destination-address" || name == "prefix-length" || name == "metric-cost" || name == "split-horizon" || name == "poison-horizon" || name == "triggered-rip" || name == "neighbor-address" || name == "oom-flags" || name == "join-status" || name == "lpts-state" || name == "auth-mode" || name == "auth-keychain" || name == "send-auth-key-exists" || name == "auth-key-md5" || name == "auth-key-send-id" || name == "total-pkt-recvd" || name == "pkt-drop-wrong-kc" || name == "pkt-drop-no-auth" || name == "pkt-drop-invalid-auth" || name == "pkt-accepted-valid-auth")
        return true;
    return false;
}

Rip::DefaultVrf::Interfaces::Interface::RipSummary::RipSummary()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    next_hop_address{YType::str, "next-hop-address"},
    metric{YType::int32, "metric"}
{

    yang_name = "rip-summary"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::DefaultVrf::Interfaces::Interface::RipSummary::~RipSummary()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::RipSummary::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| next_hop_address.is_set
	|| metric.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::RipSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Rip::DefaultVrf::Interfaces::Interface::RipSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Interfaces::Interface::RipSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Interfaces::Interface::RipSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Interfaces::Interface::RipSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::DefaultVrf::Interfaces::Interface::RipSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Interfaces::Interface::RipSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Interfaces::Interface::RipSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "next-hop-address" || name == "metric")
        return true;
    return false;
}

Rip::DefaultVrf::Interfaces::Interface::RipPeer::RipPeer()
    :
    peer_uptime{YType::uint32, "peer-uptime"},
    peer_address{YType::str, "peer-address"},
    peer_version{YType::uint8, "peer-version"},
    discarded_peer_packets{YType::uint32, "discarded-peer-packets"},
    discarded_peer_routes{YType::uint32, "discarded-peer-routes"}
{

    yang_name = "rip-peer"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rip::DefaultVrf::Interfaces::Interface::RipPeer::~RipPeer()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::RipPeer::has_data() const
{
    if (is_presence_container) return true;
    return peer_uptime.is_set
	|| peer_address.is_set
	|| peer_version.is_set
	|| discarded_peer_packets.is_set
	|| discarded_peer_routes.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::RipPeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_uptime.yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(peer_version.yfilter)
	|| ydk::is_set(discarded_peer_packets.yfilter)
	|| ydk::is_set(discarded_peer_routes.yfilter);
}

std::string Rip::DefaultVrf::Interfaces::Interface::RipPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Interfaces::Interface::RipPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_uptime.is_set || is_set(peer_uptime.yfilter)) leaf_name_data.push_back(peer_uptime.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_version.is_set || is_set(peer_version.yfilter)) leaf_name_data.push_back(peer_version.get_name_leafdata());
    if (discarded_peer_packets.is_set || is_set(discarded_peer_packets.yfilter)) leaf_name_data.push_back(discarded_peer_packets.get_name_leafdata());
    if (discarded_peer_routes.is_set || is_set(discarded_peer_routes.yfilter)) leaf_name_data.push_back(discarded_peer_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Interfaces::Interface::RipPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Interfaces::Interface::RipPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::DefaultVrf::Interfaces::Interface::RipPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-uptime")
    {
        peer_uptime = value;
        peer_uptime.value_namespace = name_space;
        peer_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-version")
    {
        peer_version = value;
        peer_version.value_namespace = name_space;
        peer_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-peer-packets")
    {
        discarded_peer_packets = value;
        discarded_peer_packets.value_namespace = name_space;
        discarded_peer_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discarded-peer-routes")
    {
        discarded_peer_routes = value;
        discarded_peer_routes.value_namespace = name_space;
        discarded_peer_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Interfaces::Interface::RipPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-uptime")
    {
        peer_uptime.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "peer-version")
    {
        peer_version.yfilter = yfilter;
    }
    if(value_path == "discarded-peer-packets")
    {
        discarded_peer_packets.yfilter = yfilter;
    }
    if(value_path == "discarded-peer-routes")
    {
        discarded_peer_routes.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Interfaces::Interface::RipPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-uptime" || name == "peer-address" || name == "peer-version" || name == "discarded-peer-packets" || name == "discarded-peer-routes")
        return true;
    return false;
}

Rip::DefaultVrf::Global::Global()
    :
    vrf_summary(std::make_shared<Rip::DefaultVrf::Global::VrfSummary>())
    , interface_summary(this, {})
{
    vrf_summary->parent = this;

    yang_name = "global"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::DefaultVrf::Global::~Global()
{
}

bool Rip::DefaultVrf::Global::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_summary.len(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return (vrf_summary !=  nullptr && vrf_summary->has_data());
}

bool Rip::DefaultVrf::Global::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.len(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (vrf_summary !=  nullptr && vrf_summary->has_operation());
}

std::string Rip::DefaultVrf::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-summary")
    {
        if(vrf_summary == nullptr)
        {
            vrf_summary = std::make_shared<Rip::DefaultVrf::Global::VrfSummary>();
        }
        return vrf_summary;
    }

    if(child_yang_name == "interface-summary")
    {
        auto ent_ = std::make_shared<Rip::DefaultVrf::Global::InterfaceSummary>();
        ent_->parent = this;
        interface_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_summary != nullptr)
    {
        _children["vrf-summary"] = vrf_summary;
    }

    count_ = 0;
    for (auto ent_ : interface_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rip::DefaultVrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rip::DefaultVrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rip::DefaultVrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-summary" || name == "interface-summary")
        return true;
    return false;
}

Rip::DefaultVrf::Global::VrfSummary::VrfSummary()
    :
    vrf_name{YType::str, "vrf-name"},
    active{YType::boolean, "active"},
    oom_flags{YType::uint32, "oom-flags"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    update_timer{YType::uint32, "update-timer"},
    next_update_time{YType::uint32, "next-update-time"},
    invalid_timer{YType::uint32, "invalid-timer"},
    hold_down_timer{YType::uint32, "hold-down-timer"},
    flush_timer{YType::uint32, "flush-timer"},
    interface_configured_count{YType::uint32, "interface-configured-count"},
    active_interface_count{YType::uint32, "active-interface-count"}
{

    yang_name = "vrf-summary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::DefaultVrf::Global::VrfSummary::~VrfSummary()
{
}

bool Rip::DefaultVrf::Global::VrfSummary::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| active.is_set
	|| oom_flags.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| update_timer.is_set
	|| next_update_time.is_set
	|| invalid_timer.is_set
	|| hold_down_timer.is_set
	|| flush_timer.is_set
	|| interface_configured_count.is_set
	|| active_interface_count.is_set;
}

bool Rip::DefaultVrf::Global::VrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(update_timer.yfilter)
	|| ydk::is_set(next_update_time.yfilter)
	|| ydk::is_set(invalid_timer.yfilter)
	|| ydk::is_set(hold_down_timer.yfilter)
	|| ydk::is_set(flush_timer.yfilter)
	|| ydk::is_set(interface_configured_count.yfilter)
	|| ydk::is_set(active_interface_count.yfilter);
}

std::string Rip::DefaultVrf::Global::VrfSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Global::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Global::VrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.yfilter)) leaf_name_data.push_back(update_timer.get_name_leafdata());
    if (next_update_time.is_set || is_set(next_update_time.yfilter)) leaf_name_data.push_back(next_update_time.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.yfilter)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (hold_down_timer.is_set || is_set(hold_down_timer.yfilter)) leaf_name_data.push_back(hold_down_timer.get_name_leafdata());
    if (flush_timer.is_set || is_set(flush_timer.yfilter)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (interface_configured_count.is_set || is_set(interface_configured_count.yfilter)) leaf_name_data.push_back(interface_configured_count.get_name_leafdata());
    if (active_interface_count.is_set || is_set(active_interface_count.yfilter)) leaf_name_data.push_back(active_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Global::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Global::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::DefaultVrf::Global::VrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
        update_timer.value_namespace = name_space;
        update_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-update-time")
    {
        next_update_time = value;
        next_update_time.value_namespace = name_space;
        next_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
        invalid_timer.value_namespace = name_space;
        invalid_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer = value;
        hold_down_timer.value_namespace = name_space;
        hold_down_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-timer")
    {
        flush_timer = value;
        flush_timer.value_namespace = name_space;
        flush_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count = value;
        interface_configured_count.value_namespace = name_space;
        interface_configured_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count = value;
        active_interface_count.value_namespace = name_space;
        active_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Global::VrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "update-timer")
    {
        update_timer.yfilter = yfilter;
    }
    if(value_path == "next-update-time")
    {
        next_update_time.yfilter = yfilter;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer.yfilter = yfilter;
    }
    if(value_path == "hold-down-timer")
    {
        hold_down_timer.yfilter = yfilter;
    }
    if(value_path == "flush-timer")
    {
        flush_timer.yfilter = yfilter;
    }
    if(value_path == "interface-configured-count")
    {
        interface_configured_count.yfilter = yfilter;
    }
    if(value_path == "active-interface-count")
    {
        active_interface_count.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Global::VrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "active" || name == "oom-flags" || name == "route-count" || name == "path-count" || name == "update-timer" || name == "next-update-time" || name == "invalid-timer" || name == "hold-down-timer" || name == "flush-timer" || name == "interface-configured-count" || name == "active-interface-count")
        return true;
    return false;
}

Rip::DefaultVrf::Global::InterfaceSummary::InterfaceSummary()
    :
    interface_name{YType::str, "interface-name"},
    enabled{YType::boolean, "enabled"},
    state{YType::enumeration, "state"},
    destination_address{YType::str, "destination-address"},
    prefix_length{YType::uint32, "prefix-length"},
    oom_flags{YType::uint32, "oom-flags"},
    send_version{YType::uint32, "send-version"},
    receive_version{YType::uint32, "receive-version"},
    neighbor_count{YType::uint32, "neighbor-count"}
{

    yang_name = "interface-summary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

Rip::DefaultVrf::Global::InterfaceSummary::~InterfaceSummary()
{
}

bool Rip::DefaultVrf::Global::InterfaceSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| enabled.is_set
	|| state.is_set
	|| destination_address.is_set
	|| prefix_length.is_set
	|| oom_flags.is_set
	|| send_version.is_set
	|| receive_version.is_set
	|| neighbor_count.is_set;
}

bool Rip::DefaultVrf::Global::InterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(oom_flags.yfilter)
	|| ydk::is_set(send_version.yfilter)
	|| ydk::is_set(receive_version.yfilter)
	|| ydk::is_set(neighbor_count.yfilter);
}

std::string Rip::DefaultVrf::Global::InterfaceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-oper:rip/default-vrf/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Rip::DefaultVrf::Global::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rip::DefaultVrf::Global::InterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (oom_flags.is_set || is_set(oom_flags.yfilter)) leaf_name_data.push_back(oom_flags.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.yfilter)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (receive_version.is_set || is_set(receive_version.yfilter)) leaf_name_data.push_back(receive_version.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rip::DefaultVrf::Global::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rip::DefaultVrf::Global::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rip::DefaultVrf::Global::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oom-flags")
    {
        oom_flags = value;
        oom_flags.value_namespace = name_space;
        oom_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-version")
    {
        send_version = value;
        send_version.value_namespace = name_space;
        send_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-version")
    {
        receive_version = value;
        receive_version.value_namespace = name_space;
        receive_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rip::DefaultVrf::Global::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "oom-flags")
    {
        oom_flags.yfilter = yfilter;
    }
    if(value_path == "send-version")
    {
        send_version.yfilter = yfilter;
    }
    if(value_path == "receive-version")
    {
        receive_version.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
}

bool Rip::DefaultVrf::Global::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "enabled" || name == "state" || name == "destination-address" || name == "prefix-length" || name == "oom-flags" || name == "send-version" || name == "receive-version" || name == "neighbor-count")
        return true;
    return false;
}

const Enum::YLeaf RipRouteOrigin::rip_rt_org_runover {0, "rip-rt-org-runover"};
const Enum::YLeaf RipRouteOrigin::rip_rt_org_redist {1, "rip-rt-org-redist"};
const Enum::YLeaf RipRouteOrigin::rip_rt_org_auto_summary {2, "rip-rt-org-auto-summary"};
const Enum::YLeaf RipRouteOrigin::rip_rt_org_rip {3, "rip-rt-org-rip"};
const Enum::YLeaf RipRouteOrigin::rip_rt_org_intsummary {4, "rip-rt-org-intsummary"};
const Enum::YLeaf RipRouteOrigin::rip_rt_org_unused {5, "rip-rt-org-unused"};

const Enum::YLeaf InterfaceState::interface_none {0, "interface-none"};
const Enum::YLeaf InterfaceState::interface_down {1, "interface-down"};
const Enum::YLeaf InterfaceState::interface_up {2, "interface-up"};
const Enum::YLeaf InterfaceState::interface_unknown {3, "interface-unknown"};


}
}

