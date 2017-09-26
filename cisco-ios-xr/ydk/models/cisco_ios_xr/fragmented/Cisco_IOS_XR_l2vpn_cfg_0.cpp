
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_0.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_cfg {

Evpn::Evpn()
    :
    enable{YType::empty, "enable"}
    	,
    evpn_tables(std::make_shared<Evpn::EvpnTables>())
{
    evpn_tables->parent = this;

    yang_name = "evpn"; yang_parent_name = "Cisco-IOS-XR-l2vpn-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Evpn::~Evpn()
{
}

bool Evpn::has_data() const
{
    return enable.is_set
	|| (evpn_tables !=  nullptr && evpn_tables->has_data());
}

bool Evpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (evpn_tables !=  nullptr && evpn_tables->has_operation());
}

std::string Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-tables")
    {
        if(evpn_tables == nullptr)
        {
            evpn_tables = std::make_shared<Evpn::EvpnTables>();
        }
        return evpn_tables;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpn_tables != nullptr)
    {
        children["evpn-tables"] = evpn_tables;
    }

    return children;
}

void Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Evpn::clone_ptr() const
{
    return std::make_shared<Evpn>();
}

std::string Evpn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Evpn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Evpn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Evpn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-tables" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnTables()
    :
    evi_cost_out{YType::empty, "evi-cost-out"},
    evpn_cost_in_startup{YType::uint32, "evpn-cost-in-startup"},
    evpn_source_interface{YType::str, "evpn-source-interface"}
    	,
    evpn_bgp_auto_discovery(std::make_shared<Evpn::EvpnTables::EvpnBgpAutoDiscovery>())
	,evpn_ethernet_segment(std::make_shared<Evpn::EvpnTables::EvpnEthernetSegment>())
	,evpn_instances(std::make_shared<Evpn::EvpnTables::EvpnInstances>())
	,evpn_interfaces(std::make_shared<Evpn::EvpnTables::EvpnInterfaces>())
	,evpn_load_balancing(std::make_shared<Evpn::EvpnTables::EvpnLoadBalancing>())
	,evpn_logging(std::make_shared<Evpn::EvpnTables::EvpnLogging>())
	,evpn_timers(std::make_shared<Evpn::EvpnTables::EvpnTimers>())
	,evpn_virtual_access_pws(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws>())
	,evpn_virtual_access_vfis(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis>())
	,evpnevis(std::make_shared<Evpn::EvpnTables::Evpnevis>())
	,evpnmac(std::make_shared<Evpn::EvpnTables::Evpnmac>())
{
    evpn_bgp_auto_discovery->parent = this;
    evpn_ethernet_segment->parent = this;
    evpn_instances->parent = this;
    evpn_interfaces->parent = this;
    evpn_load_balancing->parent = this;
    evpn_logging->parent = this;
    evpn_timers->parent = this;
    evpn_virtual_access_pws->parent = this;
    evpn_virtual_access_vfis->parent = this;
    evpnevis->parent = this;
    evpnmac->parent = this;

    yang_name = "evpn-tables"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::~EvpnTables()
{
}

bool Evpn::EvpnTables::has_data() const
{
    return evi_cost_out.is_set
	|| evpn_cost_in_startup.is_set
	|| evpn_source_interface.is_set
	|| (evpn_bgp_auto_discovery !=  nullptr && evpn_bgp_auto_discovery->has_data())
	|| (evpn_ethernet_segment !=  nullptr && evpn_ethernet_segment->has_data())
	|| (evpn_instances !=  nullptr && evpn_instances->has_data())
	|| (evpn_interfaces !=  nullptr && evpn_interfaces->has_data())
	|| (evpn_load_balancing !=  nullptr && evpn_load_balancing->has_data())
	|| (evpn_logging !=  nullptr && evpn_logging->has_data())
	|| (evpn_timers !=  nullptr && evpn_timers->has_data())
	|| (evpn_virtual_access_pws !=  nullptr && evpn_virtual_access_pws->has_data())
	|| (evpn_virtual_access_vfis !=  nullptr && evpn_virtual_access_vfis->has_data())
	|| (evpnevis !=  nullptr && evpnevis->has_data())
	|| (evpnmac !=  nullptr && evpnmac->has_data());
}

bool Evpn::EvpnTables::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi_cost_out.yfilter)
	|| ydk::is_set(evpn_cost_in_startup.yfilter)
	|| ydk::is_set(evpn_source_interface.yfilter)
	|| (evpn_bgp_auto_discovery !=  nullptr && evpn_bgp_auto_discovery->has_operation())
	|| (evpn_ethernet_segment !=  nullptr && evpn_ethernet_segment->has_operation())
	|| (evpn_instances !=  nullptr && evpn_instances->has_operation())
	|| (evpn_interfaces !=  nullptr && evpn_interfaces->has_operation())
	|| (evpn_load_balancing !=  nullptr && evpn_load_balancing->has_operation())
	|| (evpn_logging !=  nullptr && evpn_logging->has_operation())
	|| (evpn_timers !=  nullptr && evpn_timers->has_operation())
	|| (evpn_virtual_access_pws !=  nullptr && evpn_virtual_access_pws->has_operation())
	|| (evpn_virtual_access_vfis !=  nullptr && evpn_virtual_access_vfis->has_operation())
	|| (evpnevis !=  nullptr && evpnevis->has_operation())
	|| (evpnmac !=  nullptr && evpnmac->has_operation());
}

std::string Evpn::EvpnTables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi_cost_out.is_set || is_set(evi_cost_out.yfilter)) leaf_name_data.push_back(evi_cost_out.get_name_leafdata());
    if (evpn_cost_in_startup.is_set || is_set(evpn_cost_in_startup.yfilter)) leaf_name_data.push_back(evpn_cost_in_startup.get_name_leafdata());
    if (evpn_source_interface.is_set || is_set(evpn_source_interface.yfilter)) leaf_name_data.push_back(evpn_source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-bgp-auto-discovery")
    {
        if(evpn_bgp_auto_discovery == nullptr)
        {
            evpn_bgp_auto_discovery = std::make_shared<Evpn::EvpnTables::EvpnBgpAutoDiscovery>();
        }
        return evpn_bgp_auto_discovery;
    }

    if(child_yang_name == "evpn-ethernet-segment")
    {
        if(evpn_ethernet_segment == nullptr)
        {
            evpn_ethernet_segment = std::make_shared<Evpn::EvpnTables::EvpnEthernetSegment>();
        }
        return evpn_ethernet_segment;
    }

    if(child_yang_name == "evpn-instances")
    {
        if(evpn_instances == nullptr)
        {
            evpn_instances = std::make_shared<Evpn::EvpnTables::EvpnInstances>();
        }
        return evpn_instances;
    }

    if(child_yang_name == "evpn-interfaces")
    {
        if(evpn_interfaces == nullptr)
        {
            evpn_interfaces = std::make_shared<Evpn::EvpnTables::EvpnInterfaces>();
        }
        return evpn_interfaces;
    }

    if(child_yang_name == "evpn-load-balancing")
    {
        if(evpn_load_balancing == nullptr)
        {
            evpn_load_balancing = std::make_shared<Evpn::EvpnTables::EvpnLoadBalancing>();
        }
        return evpn_load_balancing;
    }

    if(child_yang_name == "evpn-logging")
    {
        if(evpn_logging == nullptr)
        {
            evpn_logging = std::make_shared<Evpn::EvpnTables::EvpnLogging>();
        }
        return evpn_logging;
    }

    if(child_yang_name == "evpn-timers")
    {
        if(evpn_timers == nullptr)
        {
            evpn_timers = std::make_shared<Evpn::EvpnTables::EvpnTimers>();
        }
        return evpn_timers;
    }

    if(child_yang_name == "evpn-virtual-access-pws")
    {
        if(evpn_virtual_access_pws == nullptr)
        {
            evpn_virtual_access_pws = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws>();
        }
        return evpn_virtual_access_pws;
    }

    if(child_yang_name == "evpn-virtual-access-vfis")
    {
        if(evpn_virtual_access_vfis == nullptr)
        {
            evpn_virtual_access_vfis = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis>();
        }
        return evpn_virtual_access_vfis;
    }

    if(child_yang_name == "evpnevis")
    {
        if(evpnevis == nullptr)
        {
            evpnevis = std::make_shared<Evpn::EvpnTables::Evpnevis>();
        }
        return evpnevis;
    }

    if(child_yang_name == "evpnmac")
    {
        if(evpnmac == nullptr)
        {
            evpnmac = std::make_shared<Evpn::EvpnTables::Evpnmac>();
        }
        return evpnmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpn_bgp_auto_discovery != nullptr)
    {
        children["evpn-bgp-auto-discovery"] = evpn_bgp_auto_discovery;
    }

    if(evpn_ethernet_segment != nullptr)
    {
        children["evpn-ethernet-segment"] = evpn_ethernet_segment;
    }

    if(evpn_instances != nullptr)
    {
        children["evpn-instances"] = evpn_instances;
    }

    if(evpn_interfaces != nullptr)
    {
        children["evpn-interfaces"] = evpn_interfaces;
    }

    if(evpn_load_balancing != nullptr)
    {
        children["evpn-load-balancing"] = evpn_load_balancing;
    }

    if(evpn_logging != nullptr)
    {
        children["evpn-logging"] = evpn_logging;
    }

    if(evpn_timers != nullptr)
    {
        children["evpn-timers"] = evpn_timers;
    }

    if(evpn_virtual_access_pws != nullptr)
    {
        children["evpn-virtual-access-pws"] = evpn_virtual_access_pws;
    }

    if(evpn_virtual_access_vfis != nullptr)
    {
        children["evpn-virtual-access-vfis"] = evpn_virtual_access_vfis;
    }

    if(evpnevis != nullptr)
    {
        children["evpnevis"] = evpnevis;
    }

    if(evpnmac != nullptr)
    {
        children["evpnmac"] = evpnmac;
    }

    return children;
}

void Evpn::EvpnTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi-cost-out")
    {
        evi_cost_out = value;
        evi_cost_out.value_namespace = name_space;
        evi_cost_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-cost-in-startup")
    {
        evpn_cost_in_startup = value;
        evpn_cost_in_startup.value_namespace = name_space;
        evpn_cost_in_startup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-source-interface")
    {
        evpn_source_interface = value;
        evpn_source_interface.value_namespace = name_space;
        evpn_source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi-cost-out")
    {
        evi_cost_out.yfilter = yfilter;
    }
    if(value_path == "evpn-cost-in-startup")
    {
        evpn_cost_in_startup.yfilter = yfilter;
    }
    if(value_path == "evpn-source-interface")
    {
        evpn_source_interface.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-bgp-auto-discovery" || name == "evpn-ethernet-segment" || name == "evpn-instances" || name == "evpn-interfaces" || name == "evpn-load-balancing" || name == "evpn-logging" || name == "evpn-timers" || name == "evpn-virtual-access-pws" || name == "evpn-virtual-access-vfis" || name == "evpnevis" || name == "evpnmac" || name == "evi-cost-out" || name == "evpn-cost-in-startup" || name == "evpn-source-interface")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnBgpAutoDiscovery()
    :
    enable{YType::empty, "enable"}
    	,
    evpn_route_distinguisher(std::make_shared<Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher>())
{
    evpn_route_distinguisher->parent = this;

    yang_name = "evpn-bgp-auto-discovery"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnBgpAutoDiscovery::~EvpnBgpAutoDiscovery()
{
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::has_data() const
{
    return enable.is_set
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_data());
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_operation());
}

std::string Evpn::EvpnTables::EvpnBgpAutoDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnBgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-bgp-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnBgpAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnBgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-distinguisher")
    {
        if(evpn_route_distinguisher == nullptr)
        {
            evpn_route_distinguisher = std::make_shared<Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher>();
        }
        return evpn_route_distinguisher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnBgpAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpn_route_distinguisher != nullptr)
    {
        children["evpn-route-distinguisher"] = evpn_route_distinguisher;
    }

    return children;
}

void Evpn::EvpnTables::EvpnBgpAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnBgpAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-distinguisher" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::EvpnRouteDistinguisher()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-route-distinguisher"; yang_parent_name = "evpn-bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::~EvpnRouteDistinguisher()
{
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-bgp-auto-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-index" || name == "address" || name == "as" || name == "as-index" || name == "type")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEthernetSegment::EvpnEthernetSegment()
    :
    enable{YType::empty, "enable"}
    	,
    evpn_esi_types(std::make_shared<Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes>())
{
    evpn_esi_types->parent = this;

    yang_name = "evpn-ethernet-segment"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnEthernetSegment::~EvpnEthernetSegment()
{
}

bool Evpn::EvpnTables::EvpnEthernetSegment::has_data() const
{
    return enable.is_set
	|| (evpn_esi_types !=  nullptr && evpn_esi_types->has_data());
}

bool Evpn::EvpnTables::EvpnEthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (evpn_esi_types !=  nullptr && evpn_esi_types->has_operation());
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-ethernet-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-esi-types")
    {
        if(evpn_esi_types == nullptr)
        {
            evpn_esi_types = std::make_shared<Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes>();
        }
        return evpn_esi_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpn_esi_types != nullptr)
    {
        children["evpn-esi-types"] = evpn_esi_types;
    }

    return children;
}

void Evpn::EvpnTables::EvpnEthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-esi-types" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiTypes()
{

    yang_name = "evpn-esi-types"; yang_parent_name = "evpn-ethernet-segment"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::~EvpnEsiTypes()
{
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::has_data() const
{
    for (std::size_t index=0; index<evpn_esi_type.size(); index++)
    {
        if(evpn_esi_type[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::has_operation() const
{
    for (std::size_t index=0; index<evpn_esi_type.size(); index++)
    {
        if(evpn_esi_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-ethernet-segment/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-esi-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-esi-type")
    {
        for(auto const & c : evpn_esi_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType>();
        c->parent = this;
        evpn_esi_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evpn_esi_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-esi-type")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::EvpnEsiType()
    :
    esi_type{YType::uint32, "esi-type"},
    disable_auto_generation{YType::empty, "disable-auto-generation"}
{

    yang_name = "evpn-esi-type"; yang_parent_name = "evpn-esi-types"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::~EvpnEsiType()
{
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::has_data() const
{
    return esi_type.is_set
	|| disable_auto_generation.is_set;
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(esi_type.yfilter)
	|| ydk::is_set(disable_auto_generation.yfilter);
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-ethernet-segment/evpn-esi-types/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-esi-type" <<"[esi-type='" <<esi_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_type.is_set || is_set(esi_type.yfilter)) leaf_name_data.push_back(esi_type.get_name_leafdata());
    if (disable_auto_generation.is_set || is_set(disable_auto_generation.yfilter)) leaf_name_data.push_back(disable_auto_generation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "esi-type")
    {
        esi_type = value;
        esi_type.value_namespace = name_space;
        esi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-auto-generation")
    {
        disable_auto_generation = value;
        disable_auto_generation.value_namespace = name_space;
        disable_auto_generation.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "esi-type")
    {
        esi_type.yfilter = yfilter;
    }
    if(value_path == "disable-auto-generation")
    {
        disable_auto_generation.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "esi-type" || name == "disable-auto-generation")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstances()
{

    yang_name = "evpn-instances"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnInstances::~EvpnInstances()
{
}

bool Evpn::EvpnTables::EvpnInstances::has_data() const
{
    for (std::size_t index=0; index<evpn_instance.size(); index++)
    {
        if(evpn_instance[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnInstances::has_operation() const
{
    for (std::size_t index=0; index<evpn_instance.size(); index++)
    {
        if(evpn_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance")
    {
        for(auto const & c : evpn_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance>();
        c->parent = this;
        evpn_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evpn_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstance()
    :
    eviid{YType::uint32, "eviid"},
    encapsulation{YType::enumeration, "encapsulation"},
    side{YType::enumeration, "side"},
    evi_advertise_mac_deprecated{YType::empty, "evi-advertise-mac-deprecated"},
    evi_reorig_disable{YType::empty, "evi-reorig-disable"},
    evi_unknown_unicast_flooding_disable{YType::empty, "evi-unknown-unicast-flooding-disable"},
    evpn_evi_cw_disable{YType::empty, "evpn-evi-cw-disable"},
    evpnevi_description{YType::str, "evpnevi-description"}
    	,
    evpn_instance_advertise_mac(std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac>())
	,evpn_instance_bgp_auto_discovery(std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery>())
	,evpn_instance_load_balancing(std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing>())
{
    evpn_instance_advertise_mac->parent = this;
    evpn_instance_bgp_auto_discovery->parent = this;
    evpn_instance_load_balancing->parent = this;

    yang_name = "evpn-instance"; yang_parent_name = "evpn-instances"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::~EvpnInstance()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::has_data() const
{
    return eviid.is_set
	|| encapsulation.is_set
	|| side.is_set
	|| evi_advertise_mac_deprecated.is_set
	|| evi_reorig_disable.is_set
	|| evi_unknown_unicast_flooding_disable.is_set
	|| evpn_evi_cw_disable.is_set
	|| evpnevi_description.is_set
	|| (evpn_instance_advertise_mac !=  nullptr && evpn_instance_advertise_mac->has_data())
	|| (evpn_instance_bgp_auto_discovery !=  nullptr && evpn_instance_bgp_auto_discovery->has_data())
	|| (evpn_instance_load_balancing !=  nullptr && evpn_instance_load_balancing->has_data());
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(side.yfilter)
	|| ydk::is_set(evi_advertise_mac_deprecated.yfilter)
	|| ydk::is_set(evi_reorig_disable.yfilter)
	|| ydk::is_set(evi_unknown_unicast_flooding_disable.yfilter)
	|| ydk::is_set(evpn_evi_cw_disable.yfilter)
	|| ydk::is_set(evpnevi_description.yfilter)
	|| (evpn_instance_advertise_mac !=  nullptr && evpn_instance_advertise_mac->has_operation())
	|| (evpn_instance_bgp_auto_discovery !=  nullptr && evpn_instance_bgp_auto_discovery->has_operation())
	|| (evpn_instance_load_balancing !=  nullptr && evpn_instance_load_balancing->has_operation());
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance" <<"[eviid='" <<eviid <<"']" <<"[encapsulation='" <<encapsulation <<"']" <<"[side='" <<side <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (side.is_set || is_set(side.yfilter)) leaf_name_data.push_back(side.get_name_leafdata());
    if (evi_advertise_mac_deprecated.is_set || is_set(evi_advertise_mac_deprecated.yfilter)) leaf_name_data.push_back(evi_advertise_mac_deprecated.get_name_leafdata());
    if (evi_reorig_disable.is_set || is_set(evi_reorig_disable.yfilter)) leaf_name_data.push_back(evi_reorig_disable.get_name_leafdata());
    if (evi_unknown_unicast_flooding_disable.is_set || is_set(evi_unknown_unicast_flooding_disable.yfilter)) leaf_name_data.push_back(evi_unknown_unicast_flooding_disable.get_name_leafdata());
    if (evpn_evi_cw_disable.is_set || is_set(evpn_evi_cw_disable.yfilter)) leaf_name_data.push_back(evpn_evi_cw_disable.get_name_leafdata());
    if (evpnevi_description.is_set || is_set(evpnevi_description.yfilter)) leaf_name_data.push_back(evpnevi_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-instance-advertise-mac")
    {
        if(evpn_instance_advertise_mac == nullptr)
        {
            evpn_instance_advertise_mac = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac>();
        }
        return evpn_instance_advertise_mac;
    }

    if(child_yang_name == "evpn-instance-bgp-auto-discovery")
    {
        if(evpn_instance_bgp_auto_discovery == nullptr)
        {
            evpn_instance_bgp_auto_discovery = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery>();
        }
        return evpn_instance_bgp_auto_discovery;
    }

    if(child_yang_name == "evpn-instance-load-balancing")
    {
        if(evpn_instance_load_balancing == nullptr)
        {
            evpn_instance_load_balancing = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing>();
        }
        return evpn_instance_load_balancing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpn_instance_advertise_mac != nullptr)
    {
        children["evpn-instance-advertise-mac"] = evpn_instance_advertise_mac;
    }

    if(evpn_instance_bgp_auto_discovery != nullptr)
    {
        children["evpn-instance-bgp-auto-discovery"] = evpn_instance_bgp_auto_discovery;
    }

    if(evpn_instance_load_balancing != nullptr)
    {
        children["evpn-instance-load-balancing"] = evpn_instance_load_balancing;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "side")
    {
        side = value;
        side.value_namespace = name_space;
        side.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-advertise-mac-deprecated")
    {
        evi_advertise_mac_deprecated = value;
        evi_advertise_mac_deprecated.value_namespace = name_space;
        evi_advertise_mac_deprecated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-reorig-disable")
    {
        evi_reorig_disable = value;
        evi_reorig_disable.value_namespace = name_space;
        evi_reorig_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-unknown-unicast-flooding-disable")
    {
        evi_unknown_unicast_flooding_disable = value;
        evi_unknown_unicast_flooding_disable.value_namespace = name_space;
        evi_unknown_unicast_flooding_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-evi-cw-disable")
    {
        evpn_evi_cw_disable = value;
        evpn_evi_cw_disable.value_namespace = name_space;
        evpn_evi_cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnevi-description")
    {
        evpnevi_description = value;
        evpnevi_description.value_namespace = name_space;
        evpnevi_description.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "side")
    {
        side.yfilter = yfilter;
    }
    if(value_path == "evi-advertise-mac-deprecated")
    {
        evi_advertise_mac_deprecated.yfilter = yfilter;
    }
    if(value_path == "evi-reorig-disable")
    {
        evi_reorig_disable.yfilter = yfilter;
    }
    if(value_path == "evi-unknown-unicast-flooding-disable")
    {
        evi_unknown_unicast_flooding_disable.yfilter = yfilter;
    }
    if(value_path == "evpn-evi-cw-disable")
    {
        evpn_evi_cw_disable.yfilter = yfilter;
    }
    if(value_path == "evpnevi-description")
    {
        evpnevi_description.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-instance-advertise-mac" || name == "evpn-instance-bgp-auto-discovery" || name == "evpn-instance-load-balancing" || name == "eviid" || name == "encapsulation" || name == "side" || name == "evi-advertise-mac-deprecated" || name == "evi-reorig-disable" || name == "evi-unknown-unicast-flooding-disable" || name == "evpn-evi-cw-disable" || name == "evpnevi-description")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::EvpnInstanceAdvertiseMac()
    :
    enable{YType::empty, "enable"},
    evi_advertise_mac_bvi{YType::empty, "evi-advertise-mac-bvi"}
{

    yang_name = "evpn-instance-advertise-mac"; yang_parent_name = "evpn-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::~EvpnInstanceAdvertiseMac()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::has_data() const
{
    return enable.is_set
	|| evi_advertise_mac_bvi.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evi_advertise_mac_bvi.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance-advertise-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evi_advertise_mac_bvi.is_set || is_set(evi_advertise_mac_bvi.yfilter)) leaf_name_data.push_back(evi_advertise_mac_bvi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-advertise-mac-bvi")
    {
        evi_advertise_mac_bvi = value;
        evi_advertise_mac_bvi.value_namespace = name_space;
        evi_advertise_mac_bvi.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evi-advertise-mac-bvi")
    {
        evi_advertise_mac_bvi.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evi-advertise-mac-bvi")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnInstanceBgpAutoDiscovery()
    :
    enable{YType::empty, "enable"},
    table_policy{YType::str, "table-policy"}
    	,
    evpn_route_distinguisher(std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher>())
	,evpn_route_targets(std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets>())
{
    evpn_route_distinguisher->parent = this;
    evpn_route_targets->parent = this;

    yang_name = "evpn-instance-bgp-auto-discovery"; yang_parent_name = "evpn-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::~EvpnInstanceBgpAutoDiscovery()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::has_data() const
{
    return enable.is_set
	|| table_policy.is_set
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_data())
	|| (evpn_route_targets !=  nullptr && evpn_route_targets->has_data());
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_operation())
	|| (evpn_route_targets !=  nullptr && evpn_route_targets->has_operation());
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance-bgp-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-distinguisher")
    {
        if(evpn_route_distinguisher == nullptr)
        {
            evpn_route_distinguisher = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher>();
        }
        return evpn_route_distinguisher;
    }

    if(child_yang_name == "evpn-route-targets")
    {
        if(evpn_route_targets == nullptr)
        {
            evpn_route_targets = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets>();
        }
        return evpn_route_targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpn_route_distinguisher != nullptr)
    {
        children["evpn-route-distinguisher"] = evpn_route_distinguisher;
    }

    if(evpn_route_targets != nullptr)
    {
        children["evpn-route-targets"] = evpn_route_targets;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-distinguisher" || name == "evpn-route-targets" || name == "enable" || name == "table-policy")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::EvpnRouteDistinguisher()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-route-distinguisher"; yang_parent_name = "evpn-instance-bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::~EvpnRouteDistinguisher()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-index" || name == "address" || name == "as" || name == "as-index" || name == "type")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargets()
{

    yang_name = "evpn-route-targets"; yang_parent_name = "evpn-instance-bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::~EvpnRouteTargets()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::has_data() const
{
    for (std::size_t index=0; index<evpn_route_target_as.size(); index++)
    {
        if(evpn_route_target_as[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_ipv4_address.size(); index++)
    {
        if(evpn_route_target_ipv4_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_none.size(); index++)
    {
        if(evpn_route_target_none[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::has_operation() const
{
    for (std::size_t index=0; index<evpn_route_target_as.size(); index++)
    {
        if(evpn_route_target_as[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_ipv4_address.size(); index++)
    {
        if(evpn_route_target_ipv4_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_none.size(); index++)
    {
        if(evpn_route_target_none[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-target-as")
    {
        for(auto const & c : evpn_route_target_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs>();
        c->parent = this;
        evpn_route_target_as.push_back(c);
        return c;
    }

    if(child_yang_name == "evpn-route-target-ipv4-address")
    {
        for(auto const & c : evpn_route_target_ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address>();
        c->parent = this;
        evpn_route_target_ipv4_address.push_back(c);
        return c;
    }

    if(child_yang_name == "evpn-route-target-none")
    {
        for(auto const & c : evpn_route_target_none)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone>();
        c->parent = this;
        evpn_route_target_none.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evpn_route_target_as)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : evpn_route_target_ipv4_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : evpn_route_target_none)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-target-as" || name == "evpn-route-target-ipv4-address" || name == "evpn-route-target-none")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::EvpnRouteTargetAs()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-as"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::~EvpnRouteTargetAs()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_data() const
{
    return format.is_set
	|| role.is_set
	|| as.is_set
	|| as_index.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-as" <<"[format='" <<format <<"']" <<"[role='" <<role <<"']" <<"[as='" <<as <<"']" <<"[as-index='" <<as_index <<"']" <<"[stitching='" <<stitching <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "as" || name == "as-index" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::EvpnRouteTargetIpv4Address()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-ipv4-address"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::~EvpnRouteTargetIpv4Address()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_data() const
{
    return format.is_set
	|| role.is_set
	|| address.is_set
	|| addr_index.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-ipv4-address" <<"[format='" <<format <<"']" <<"[role='" <<role <<"']" <<"[address='" <<address <<"']" <<"[addr-index='" <<addr_index <<"']" <<"[stitching='" <<stitching <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "address" || name == "addr-index" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::EvpnRouteTargetNone()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-none"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::~EvpnRouteTargetNone()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_data() const
{
    return format.is_set
	|| role.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-none" <<"[format='" <<format <<"']" <<"[role='" <<role <<"']" <<"[stitching='" <<stitching <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::EvpnInstanceLoadBalancing()
    :
    enable{YType::empty, "enable"},
    evi_flow_label{YType::empty, "evi-flow-label"}
{

    yang_name = "evpn-instance-load-balancing"; yang_parent_name = "evpn-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::~EvpnInstanceLoadBalancing()
{
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::has_data() const
{
    return enable.is_set
	|| evi_flow_label.is_set;
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evi_flow_label.yfilter);
}

std::string Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-instance-load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evi_flow_label.is_set || is_set(evi_flow_label.yfilter)) leaf_name_data.push_back(evi_flow_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-flow-label")
    {
        evi_flow_label = value;
        evi_flow_label.value_namespace = name_space;
        evi_flow_label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evi-flow-label")
    {
        evi_flow_label.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evi-flow-label")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterfaces()
{

    yang_name = "evpn-interfaces"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnInterfaces::~EvpnInterfaces()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::has_data() const
{
    for (std::size_t index=0; index<evpn_interface.size(); index++)
    {
        if(evpn_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnInterfaces::has_operation() const
{
    for (std::size_t index=0; index<evpn_interface.size(); index++)
    {
        if(evpn_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-interface")
    {
        for(auto const & c : evpn_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface>();
        c->parent = this;
        evpn_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evpn_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-interface")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterface()
    :
    interface_name{YType::str, "interface-name"},
    mac_flush{YType::empty, "mac-flush"}
    	,
    ethernet_segment(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment>())
	,evpnac_timers(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers>())
{
    ethernet_segment->parent = this;
    evpnac_timers->parent = this;

    yang_name = "evpn-interface"; yang_parent_name = "evpn-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::~EvpnInterface()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::has_data() const
{
    return interface_name.is_set
	|| mac_flush.is_set
	|| (ethernet_segment !=  nullptr && ethernet_segment->has_data())
	|| (evpnac_timers !=  nullptr && evpnac_timers->has_data());
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush.yfilter)
	|| (ethernet_segment !=  nullptr && ethernet_segment->has_operation())
	|| (evpnac_timers !=  nullptr && evpnac_timers->has_operation());
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush.is_set || is_set(mac_flush.yfilter)) leaf_name_data.push_back(mac_flush.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment")
    {
        if(ethernet_segment == nullptr)
        {
            ethernet_segment = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment>();
        }
        return ethernet_segment;
    }

    if(child_yang_name == "evpnac-timers")
    {
        if(evpnac_timers == nullptr)
        {
            evpnac_timers = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers>();
        }
        return evpnac_timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet_segment != nullptr)
    {
        children["ethernet-segment"] = ethernet_segment;
    }

    if(evpnac_timers != nullptr)
    {
        children["evpnac-timers"] = evpnac_timers;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush")
    {
        mac_flush = value;
        mac_flush.value_namespace = name_space;
        mac_flush.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush")
    {
        mac_flush.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment" || name == "evpnac-timers" || name == "interface-name" || name == "mac-flush")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::EthernetSegment()
    :
    backbone_source_mac{YType::str, "backbone-source-mac"},
    enable{YType::empty, "enable"},
    es_import_route_target{YType::str, "es-import-route-target"},
    force_single_homed{YType::empty, "force-single-homed"},
    load_balancing_single_active{YType::empty, "load-balancing-single-active"}
    	,
    identifier(nullptr) // presence node
	,manual_service_carving(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving>())
{
    manual_service_carving->parent = this;

    yang_name = "ethernet-segment"; yang_parent_name = "evpn-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::~EthernetSegment()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::has_data() const
{
    return backbone_source_mac.is_set
	|| enable.is_set
	|| es_import_route_target.is_set
	|| force_single_homed.is_set
	|| load_balancing_single_active.is_set
	|| (identifier !=  nullptr && identifier->has_data())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_data());
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backbone_source_mac.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(es_import_route_target.yfilter)
	|| ydk::is_set(force_single_homed.yfilter)
	|| ydk::is_set(load_balancing_single_active.yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_operation());
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_source_mac.is_set || is_set(backbone_source_mac.yfilter)) leaf_name_data.push_back(backbone_source_mac.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (es_import_route_target.is_set || is_set(es_import_route_target.yfilter)) leaf_name_data.push_back(es_import_route_target.get_name_leafdata());
    if (force_single_homed.is_set || is_set(force_single_homed.yfilter)) leaf_name_data.push_back(force_single_homed.get_name_leafdata());
    if (load_balancing_single_active.is_set || is_set(load_balancing_single_active.yfilter)) leaf_name_data.push_back(load_balancing_single_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "manual-service-carving")
    {
        if(manual_service_carving == nullptr)
        {
            manual_service_carving = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving>();
        }
        return manual_service_carving;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(manual_service_carving != nullptr)
    {
        children["manual-service-carving"] = manual_service_carving;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backbone-source-mac")
    {
        backbone_source_mac = value;
        backbone_source_mac.value_namespace = name_space;
        backbone_source_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target = value;
        es_import_route_target.value_namespace = name_space;
        es_import_route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-single-homed")
    {
        force_single_homed = value;
        force_single_homed.value_namespace = name_space;
        force_single_homed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balancing-single-active")
    {
        load_balancing_single_active = value;
        load_balancing_single_active.value_namespace = name_space;
        load_balancing_single_active.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbone-source-mac")
    {
        backbone_source_mac.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target.yfilter = yfilter;
    }
    if(value_path == "force-single-homed")
    {
        force_single_homed.yfilter = yfilter;
    }
    if(value_path == "load-balancing-single-active")
    {
        load_balancing_single_active.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "manual-service-carving" || name == "backbone-source-mac" || name == "enable" || name == "es-import-route-target" || name == "force-single-homed" || name == "load-balancing-single-active")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::Identifier()
    :
    bytes01{YType::str, "bytes01"},
    bytes23{YType::str, "bytes23"},
    bytes45{YType::str, "bytes45"},
    bytes67{YType::str, "bytes67"},
    bytes89{YType::str, "bytes89"},
    type{YType::enumeration, "type"}
{

    yang_name = "identifier"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::~Identifier()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::has_data() const
{
    return bytes01.is_set
	|| bytes23.is_set
	|| bytes45.is_set
	|| bytes67.is_set
	|| bytes89.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes01.yfilter)
	|| ydk::is_set(bytes23.yfilter)
	|| ydk::is_set(bytes45.yfilter)
	|| ydk::is_set(bytes67.yfilter)
	|| ydk::is_set(bytes89.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes01.is_set || is_set(bytes01.yfilter)) leaf_name_data.push_back(bytes01.get_name_leafdata());
    if (bytes23.is_set || is_set(bytes23.yfilter)) leaf_name_data.push_back(bytes23.get_name_leafdata());
    if (bytes45.is_set || is_set(bytes45.yfilter)) leaf_name_data.push_back(bytes45.get_name_leafdata());
    if (bytes67.is_set || is_set(bytes67.yfilter)) leaf_name_data.push_back(bytes67.get_name_leafdata());
    if (bytes89.is_set || is_set(bytes89.yfilter)) leaf_name_data.push_back(bytes89.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes01")
    {
        bytes01 = value;
        bytes01.value_namespace = name_space;
        bytes01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes23")
    {
        bytes23 = value;
        bytes23.value_namespace = name_space;
        bytes23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes45")
    {
        bytes45 = value;
        bytes45.value_namespace = name_space;
        bytes45.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes67")
    {
        bytes67 = value;
        bytes67.value_namespace = name_space;
        bytes67.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes89")
    {
        bytes89 = value;
        bytes89.value_namespace = name_space;
        bytes89.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes01")
    {
        bytes01.yfilter = yfilter;
    }
    if(value_path == "bytes23")
    {
        bytes23.yfilter = yfilter;
    }
    if(value_path == "bytes45")
    {
        bytes45.yfilter = yfilter;
    }
    if(value_path == "bytes67")
    {
        bytes67.yfilter = yfilter;
    }
    if(value_path == "bytes89")
    {
        bytes89.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes01" || name == "bytes23" || name == "bytes45" || name == "bytes67" || name == "bytes89" || name == "type")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ManualServiceCarving()
    :
    enable{YType::empty, "enable"}
    	,
    service_list(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList>())
{
    service_list->parent = this;

    yang_name = "manual-service-carving"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::~ManualServiceCarving()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::has_data() const
{
    return enable.is_set
	|| (service_list !=  nullptr && service_list->has_data());
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (service_list !=  nullptr && service_list->has_operation());
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-service-carving";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-list")
    {
        if(service_list == nullptr)
        {
            service_list = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList>();
        }
        return service_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_list != nullptr)
    {
        children["service-list"] = service_list;
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-list" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::ServiceList()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "service-list"; yang_parent_name = "manual-service-carving"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::~ServiceList()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::has_data() const
{
    return primary.is_set
	|| secondary.is_set;
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::EvpnacTimers()
    :
    enable{YType::empty, "enable"},
    evpnac_peering{YType::uint32, "evpnac-peering"},
    evpnac_recovery{YType::uint32, "evpnac-recovery"}
{

    yang_name = "evpnac-timers"; yang_parent_name = "evpn-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::~EvpnacTimers()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::has_data() const
{
    return enable.is_set
	|| evpnac_peering.is_set
	|| evpnac_recovery.is_set;
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evpnac_peering.yfilter)
	|| ydk::is_set(evpnac_recovery.yfilter);
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnac-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpnac_peering.is_set || is_set(evpnac_peering.yfilter)) leaf_name_data.push_back(evpnac_peering.get_name_leafdata());
    if (evpnac_recovery.is_set || is_set(evpnac_recovery.yfilter)) leaf_name_data.push_back(evpnac_recovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnac-peering")
    {
        evpnac_peering = value;
        evpnac_peering.value_namespace = name_space;
        evpnac_peering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnac-recovery")
    {
        evpnac_recovery = value;
        evpnac_recovery.value_namespace = name_space;
        evpnac_recovery.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evpnac-peering")
    {
        evpnac_peering.yfilter = yfilter;
    }
    if(value_path == "evpnac-recovery")
    {
        evpnac_recovery.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evpnac-peering" || name == "evpnac-recovery")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnLoadBalancing::EvpnLoadBalancing()
    :
    enable{YType::empty, "enable"},
    evpn_flow_label{YType::empty, "evpn-flow-label"}
{

    yang_name = "evpn-load-balancing"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnLoadBalancing::~EvpnLoadBalancing()
{
}

bool Evpn::EvpnTables::EvpnLoadBalancing::has_data() const
{
    return enable.is_set
	|| evpn_flow_label.is_set;
}

bool Evpn::EvpnTables::EvpnLoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evpn_flow_label.yfilter);
}

std::string Evpn::EvpnTables::EvpnLoadBalancing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnLoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_flow_label.is_set || is_set(evpn_flow_label.yfilter)) leaf_name_data.push_back(evpn_flow_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnLoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnLoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-flow-label")
    {
        evpn_flow_label = value;
        evpn_flow_label.value_namespace = name_space;
        evpn_flow_label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnLoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evpn-flow-label")
    {
        evpn_flow_label.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnLoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evpn-flow-label")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnLogging::EvpnLogging()
    :
    enable{YType::empty, "enable"},
    evpn_df_election{YType::empty, "evpn-df-election"}
{

    yang_name = "evpn-logging"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnLogging::~EvpnLogging()
{
}

bool Evpn::EvpnTables::EvpnLogging::has_data() const
{
    return enable.is_set
	|| evpn_df_election.is_set;
}

bool Evpn::EvpnTables::EvpnLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evpn_df_election.yfilter);
}

std::string Evpn::EvpnTables::EvpnLogging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_df_election.is_set || is_set(evpn_df_election.yfilter)) leaf_name_data.push_back(evpn_df_election.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-df-election")
    {
        evpn_df_election = value;
        evpn_df_election.value_namespace = name_space;
        evpn_df_election.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evpn-df-election")
    {
        evpn_df_election.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evpn-df-election")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnTimers::EvpnTimers()
    :
    enable{YType::empty, "enable"},
    evpn_peering{YType::uint32, "evpn-peering"},
    evpn_recovery{YType::uint32, "evpn-recovery"}
{

    yang_name = "evpn-timers"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnTimers::~EvpnTimers()
{
}

bool Evpn::EvpnTables::EvpnTimers::has_data() const
{
    return enable.is_set
	|| evpn_peering.is_set
	|| evpn_recovery.is_set;
}

bool Evpn::EvpnTables::EvpnTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evpn_peering.yfilter)
	|| ydk::is_set(evpn_recovery.yfilter);
}

std::string Evpn::EvpnTables::EvpnTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_peering.is_set || is_set(evpn_peering.yfilter)) leaf_name_data.push_back(evpn_peering.get_name_leafdata());
    if (evpn_recovery.is_set || is_set(evpn_recovery.yfilter)) leaf_name_data.push_back(evpn_recovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-peering")
    {
        evpn_peering = value;
        evpn_peering.value_namespace = name_space;
        evpn_peering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-recovery")
    {
        evpn_recovery = value;
        evpn_recovery.value_namespace = name_space;
        evpn_recovery.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evpn-peering")
    {
        evpn_peering.yfilter = yfilter;
    }
    if(value_path == "evpn-recovery")
    {
        evpn_recovery.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evpn-peering" || name == "evpn-recovery")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPws()
{

    yang_name = "evpn-virtual-access-pws"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::~EvpnVirtualAccessPws()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::has_data() const
{
    for (std::size_t index=0; index<evpn_virtual_access_pw.size(); index++)
    {
        if(evpn_virtual_access_pw[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::has_operation() const
{
    for (std::size_t index=0; index<evpn_virtual_access_pw.size(); index++)
    {
        if(evpn_virtual_access_pw[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-pws";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-virtual-access-pw")
    {
        for(auto const & c : evpn_virtual_access_pw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw>();
        c->parent = this;
        evpn_virtual_access_pw.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evpn_virtual_access_pw)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-virtual-access-pw")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPw()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"}
    	,
    evpn_virtual_access_pw_timers(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers>())
	,evpn_virtual_ethernet_segment(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment>())
{
    evpn_virtual_access_pw_timers->parent = this;
    evpn_virtual_ethernet_segment->parent = this;

    yang_name = "evpn-virtual-access-pw"; yang_parent_name = "evpn-virtual-access-pws"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::~EvpnVirtualAccessPw()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| (evpn_virtual_access_pw_timers !=  nullptr && evpn_virtual_access_pw_timers->has_data())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| (evpn_virtual_access_pw_timers !=  nullptr && evpn_virtual_access_pw_timers->has_operation())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-virtual-access-pws/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-pw" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-virtual-access-pw-timers")
    {
        if(evpn_virtual_access_pw_timers == nullptr)
        {
            evpn_virtual_access_pw_timers = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers>();
        }
        return evpn_virtual_access_pw_timers;
    }

    if(child_yang_name == "evpn-virtual-ethernet-segment")
    {
        if(evpn_virtual_ethernet_segment == nullptr)
        {
            evpn_virtual_ethernet_segment = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment>();
        }
        return evpn_virtual_ethernet_segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpn_virtual_access_pw_timers != nullptr)
    {
        children["evpn-virtual-access-pw-timers"] = evpn_virtual_access_pw_timers;
    }

    if(evpn_virtual_ethernet_segment != nullptr)
    {
        children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-virtual-access-pw-timers" || name == "evpn-virtual-ethernet-segment" || name == "neighbor" || name == "pseudowire-id")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::EvpnVirtualAccessPwTimers()
    :
    enable{YType::empty, "enable"},
    evpn_virtual_access_pw_peering{YType::uint32, "evpn-virtual-access-pw-peering"},
    evpn_virtual_access_pw_recovery{YType::uint32, "evpn-virtual-access-pw-recovery"}
{

    yang_name = "evpn-virtual-access-pw-timers"; yang_parent_name = "evpn-virtual-access-pw"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::~EvpnVirtualAccessPwTimers()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::has_data() const
{
    return enable.is_set
	|| evpn_virtual_access_pw_peering.is_set
	|| evpn_virtual_access_pw_recovery.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evpn_virtual_access_pw_peering.yfilter)
	|| ydk::is_set(evpn_virtual_access_pw_recovery.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-pw-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_virtual_access_pw_peering.is_set || is_set(evpn_virtual_access_pw_peering.yfilter)) leaf_name_data.push_back(evpn_virtual_access_pw_peering.get_name_leafdata());
    if (evpn_virtual_access_pw_recovery.is_set || is_set(evpn_virtual_access_pw_recovery.yfilter)) leaf_name_data.push_back(evpn_virtual_access_pw_recovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-virtual-access-pw-peering")
    {
        evpn_virtual_access_pw_peering = value;
        evpn_virtual_access_pw_peering.value_namespace = name_space;
        evpn_virtual_access_pw_peering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-virtual-access-pw-recovery")
    {
        evpn_virtual_access_pw_recovery = value;
        evpn_virtual_access_pw_recovery.value_namespace = name_space;
        evpn_virtual_access_pw_recovery.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evpn-virtual-access-pw-peering")
    {
        evpn_virtual_access_pw_peering.yfilter = yfilter;
    }
    if(value_path == "evpn-virtual-access-pw-recovery")
    {
        evpn_virtual_access_pw_recovery.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evpn-virtual-access-pw-peering" || name == "evpn-virtual-access-pw-recovery")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::EvpnVirtualEthernetSegment()
    :
    enable{YType::empty, "enable"},
    es_import_route_target{YType::str, "es-import-route-target"}
    	,
    identifier(nullptr) // presence node
	,manual_service_carving(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving>())
{
    manual_service_carving->parent = this;

    yang_name = "evpn-virtual-ethernet-segment"; yang_parent_name = "evpn-virtual-access-pw"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::~EvpnVirtualEthernetSegment()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::has_data() const
{
    return enable.is_set
	|| es_import_route_target.is_set
	|| (identifier !=  nullptr && identifier->has_data())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(es_import_route_target.yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-ethernet-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (es_import_route_target.is_set || is_set(es_import_route_target.yfilter)) leaf_name_data.push_back(es_import_route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "manual-service-carving")
    {
        if(manual_service_carving == nullptr)
        {
            manual_service_carving = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving>();
        }
        return manual_service_carving;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(manual_service_carving != nullptr)
    {
        children["manual-service-carving"] = manual_service_carving;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target = value;
        es_import_route_target.value_namespace = name_space;
        es_import_route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "manual-service-carving" || name == "enable" || name == "es-import-route-target")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::Identifier()
    :
    bytes01{YType::str, "bytes01"},
    bytes23{YType::str, "bytes23"},
    bytes45{YType::str, "bytes45"},
    bytes67{YType::str, "bytes67"},
    bytes89{YType::str, "bytes89"},
    type{YType::enumeration, "type"}
{

    yang_name = "identifier"; yang_parent_name = "evpn-virtual-ethernet-segment"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::~Identifier()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::has_data() const
{
    return bytes01.is_set
	|| bytes23.is_set
	|| bytes45.is_set
	|| bytes67.is_set
	|| bytes89.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes01.yfilter)
	|| ydk::is_set(bytes23.yfilter)
	|| ydk::is_set(bytes45.yfilter)
	|| ydk::is_set(bytes67.yfilter)
	|| ydk::is_set(bytes89.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes01.is_set || is_set(bytes01.yfilter)) leaf_name_data.push_back(bytes01.get_name_leafdata());
    if (bytes23.is_set || is_set(bytes23.yfilter)) leaf_name_data.push_back(bytes23.get_name_leafdata());
    if (bytes45.is_set || is_set(bytes45.yfilter)) leaf_name_data.push_back(bytes45.get_name_leafdata());
    if (bytes67.is_set || is_set(bytes67.yfilter)) leaf_name_data.push_back(bytes67.get_name_leafdata());
    if (bytes89.is_set || is_set(bytes89.yfilter)) leaf_name_data.push_back(bytes89.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes01")
    {
        bytes01 = value;
        bytes01.value_namespace = name_space;
        bytes01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes23")
    {
        bytes23 = value;
        bytes23.value_namespace = name_space;
        bytes23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes45")
    {
        bytes45 = value;
        bytes45.value_namespace = name_space;
        bytes45.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes67")
    {
        bytes67 = value;
        bytes67.value_namespace = name_space;
        bytes67.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes89")
    {
        bytes89 = value;
        bytes89.value_namespace = name_space;
        bytes89.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes01")
    {
        bytes01.yfilter = yfilter;
    }
    if(value_path == "bytes23")
    {
        bytes23.yfilter = yfilter;
    }
    if(value_path == "bytes45")
    {
        bytes45.yfilter = yfilter;
    }
    if(value_path == "bytes67")
    {
        bytes67.yfilter = yfilter;
    }
    if(value_path == "bytes89")
    {
        bytes89.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes01" || name == "bytes23" || name == "bytes45" || name == "bytes67" || name == "bytes89" || name == "type")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ManualServiceCarving()
    :
    enable{YType::empty, "enable"}
    	,
    service_list(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList>())
{
    service_list->parent = this;

    yang_name = "manual-service-carving"; yang_parent_name = "evpn-virtual-ethernet-segment"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::~ManualServiceCarving()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::has_data() const
{
    return enable.is_set
	|| (service_list !=  nullptr && service_list->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (service_list !=  nullptr && service_list->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-service-carving";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-list")
    {
        if(service_list == nullptr)
        {
            service_list = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList>();
        }
        return service_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_list != nullptr)
    {
        children["service-list"] = service_list;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-list" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::ServiceList()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "service-list"; yang_parent_name = "manual-service-carving"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::~ServiceList()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_data() const
{
    return primary.is_set
	|| secondary.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfis()
{

    yang_name = "evpn-virtual-access-vfis"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::~EvpnVirtualAccessVfis()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::has_data() const
{
    for (std::size_t index=0; index<evpn_virtual_access_vfi.size(); index++)
    {
        if(evpn_virtual_access_vfi[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::has_operation() const
{
    for (std::size_t index=0; index<evpn_virtual_access_vfi.size(); index++)
    {
        if(evpn_virtual_access_vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-vfis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-virtual-access-vfi")
    {
        for(auto const & c : evpn_virtual_access_vfi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi>();
        c->parent = this;
        evpn_virtual_access_vfi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evpn_virtual_access_vfi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-virtual-access-vfi")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfi()
    :
    name{YType::str, "name"}
    	,
    evpn_virtual_access_vfi_timers(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers>())
	,evpn_virtual_ethernet_segment(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment>())
{
    evpn_virtual_access_vfi_timers->parent = this;
    evpn_virtual_ethernet_segment->parent = this;

    yang_name = "evpn-virtual-access-vfi"; yang_parent_name = "evpn-virtual-access-vfis"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::~EvpnVirtualAccessVfi()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::has_data() const
{
    return name.is_set
	|| (evpn_virtual_access_vfi_timers !=  nullptr && evpn_virtual_access_vfi_timers->has_data())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (evpn_virtual_access_vfi_timers !=  nullptr && evpn_virtual_access_vfi_timers->has_operation())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-virtual-access-vfis/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-vfi" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-virtual-access-vfi-timers")
    {
        if(evpn_virtual_access_vfi_timers == nullptr)
        {
            evpn_virtual_access_vfi_timers = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers>();
        }
        return evpn_virtual_access_vfi_timers;
    }

    if(child_yang_name == "evpn-virtual-ethernet-segment")
    {
        if(evpn_virtual_ethernet_segment == nullptr)
        {
            evpn_virtual_ethernet_segment = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment>();
        }
        return evpn_virtual_ethernet_segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpn_virtual_access_vfi_timers != nullptr)
    {
        children["evpn-virtual-access-vfi-timers"] = evpn_virtual_access_vfi_timers;
    }

    if(evpn_virtual_ethernet_segment != nullptr)
    {
        children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-virtual-access-vfi-timers" || name == "evpn-virtual-ethernet-segment" || name == "name")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::EvpnVirtualAccessVfiTimers()
    :
    enable{YType::empty, "enable"},
    evpn_virtual_access_vfi_peering{YType::uint32, "evpn-virtual-access-vfi-peering"},
    evpn_virtual_access_vfi_recovery{YType::uint32, "evpn-virtual-access-vfi-recovery"}
{

    yang_name = "evpn-virtual-access-vfi-timers"; yang_parent_name = "evpn-virtual-access-vfi"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::~EvpnVirtualAccessVfiTimers()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::has_data() const
{
    return enable.is_set
	|| evpn_virtual_access_vfi_peering.is_set
	|| evpn_virtual_access_vfi_recovery.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evpn_virtual_access_vfi_peering.yfilter)
	|| ydk::is_set(evpn_virtual_access_vfi_recovery.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-vfi-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_virtual_access_vfi_peering.is_set || is_set(evpn_virtual_access_vfi_peering.yfilter)) leaf_name_data.push_back(evpn_virtual_access_vfi_peering.get_name_leafdata());
    if (evpn_virtual_access_vfi_recovery.is_set || is_set(evpn_virtual_access_vfi_recovery.yfilter)) leaf_name_data.push_back(evpn_virtual_access_vfi_recovery.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-virtual-access-vfi-peering")
    {
        evpn_virtual_access_vfi_peering = value;
        evpn_virtual_access_vfi_peering.value_namespace = name_space;
        evpn_virtual_access_vfi_peering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-virtual-access-vfi-recovery")
    {
        evpn_virtual_access_vfi_recovery = value;
        evpn_virtual_access_vfi_recovery.value_namespace = name_space;
        evpn_virtual_access_vfi_recovery.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evpn-virtual-access-vfi-peering")
    {
        evpn_virtual_access_vfi_peering.yfilter = yfilter;
    }
    if(value_path == "evpn-virtual-access-vfi-recovery")
    {
        evpn_virtual_access_vfi_recovery.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evpn-virtual-access-vfi-peering" || name == "evpn-virtual-access-vfi-recovery")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::EvpnVirtualEthernetSegment()
    :
    enable{YType::empty, "enable"},
    es_import_route_target{YType::str, "es-import-route-target"}
    	,
    identifier(nullptr) // presence node
	,manual_service_carving(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving>())
{
    manual_service_carving->parent = this;

    yang_name = "evpn-virtual-ethernet-segment"; yang_parent_name = "evpn-virtual-access-vfi"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::~EvpnVirtualEthernetSegment()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::has_data() const
{
    return enable.is_set
	|| es_import_route_target.is_set
	|| (identifier !=  nullptr && identifier->has_data())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(es_import_route_target.yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-ethernet-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (es_import_route_target.is_set || is_set(es_import_route_target.yfilter)) leaf_name_data.push_back(es_import_route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "manual-service-carving")
    {
        if(manual_service_carving == nullptr)
        {
            manual_service_carving = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving>();
        }
        return manual_service_carving;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(manual_service_carving != nullptr)
    {
        children["manual-service-carving"] = manual_service_carving;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target = value;
        es_import_route_target.value_namespace = name_space;
        es_import_route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "manual-service-carving" || name == "enable" || name == "es-import-route-target")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::Identifier()
    :
    bytes01{YType::str, "bytes01"},
    bytes23{YType::str, "bytes23"},
    bytes45{YType::str, "bytes45"},
    bytes67{YType::str, "bytes67"},
    bytes89{YType::str, "bytes89"},
    type{YType::enumeration, "type"}
{

    yang_name = "identifier"; yang_parent_name = "evpn-virtual-ethernet-segment"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::~Identifier()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::has_data() const
{
    return bytes01.is_set
	|| bytes23.is_set
	|| bytes45.is_set
	|| bytes67.is_set
	|| bytes89.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes01.yfilter)
	|| ydk::is_set(bytes23.yfilter)
	|| ydk::is_set(bytes45.yfilter)
	|| ydk::is_set(bytes67.yfilter)
	|| ydk::is_set(bytes89.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes01.is_set || is_set(bytes01.yfilter)) leaf_name_data.push_back(bytes01.get_name_leafdata());
    if (bytes23.is_set || is_set(bytes23.yfilter)) leaf_name_data.push_back(bytes23.get_name_leafdata());
    if (bytes45.is_set || is_set(bytes45.yfilter)) leaf_name_data.push_back(bytes45.get_name_leafdata());
    if (bytes67.is_set || is_set(bytes67.yfilter)) leaf_name_data.push_back(bytes67.get_name_leafdata());
    if (bytes89.is_set || is_set(bytes89.yfilter)) leaf_name_data.push_back(bytes89.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes01")
    {
        bytes01 = value;
        bytes01.value_namespace = name_space;
        bytes01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes23")
    {
        bytes23 = value;
        bytes23.value_namespace = name_space;
        bytes23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes45")
    {
        bytes45 = value;
        bytes45.value_namespace = name_space;
        bytes45.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes67")
    {
        bytes67 = value;
        bytes67.value_namespace = name_space;
        bytes67.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes89")
    {
        bytes89 = value;
        bytes89.value_namespace = name_space;
        bytes89.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes01")
    {
        bytes01.yfilter = yfilter;
    }
    if(value_path == "bytes23")
    {
        bytes23.yfilter = yfilter;
    }
    if(value_path == "bytes45")
    {
        bytes45.yfilter = yfilter;
    }
    if(value_path == "bytes67")
    {
        bytes67.yfilter = yfilter;
    }
    if(value_path == "bytes89")
    {
        bytes89.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes01" || name == "bytes23" || name == "bytes45" || name == "bytes67" || name == "bytes89" || name == "type")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ManualServiceCarving()
    :
    enable{YType::empty, "enable"}
    	,
    service_list(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList>())
{
    service_list->parent = this;

    yang_name = "manual-service-carving"; yang_parent_name = "evpn-virtual-ethernet-segment"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::~ManualServiceCarving()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::has_data() const
{
    return enable.is_set
	|| (service_list !=  nullptr && service_list->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (service_list !=  nullptr && service_list->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-service-carving";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-list")
    {
        if(service_list == nullptr)
        {
            service_list = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList>();
        }
        return service_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_list != nullptr)
    {
        children["service-list"] = service_list;
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-list" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::ServiceList()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "service-list"; yang_parent_name = "manual-service-carving"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::~ServiceList()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_data() const
{
    return primary.is_set
	|| secondary.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnevis::Evpnevis()
{

    yang_name = "evpnevis"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::Evpnevis::~Evpnevis()
{
}

bool Evpn::EvpnTables::Evpnevis::has_data() const
{
    for (std::size_t index=0; index<evpnevi.size(); index++)
    {
        if(evpnevi[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::Evpnevis::has_operation() const
{
    for (std::size_t index=0; index<evpnevi.size(); index++)
    {
        if(evpnevi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::Evpnevis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::Evpnevis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnevis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnevis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpnevi")
    {
        for(auto const & c : evpnevi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi>();
        c->parent = this;
        evpnevi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnevis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evpnevi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::EvpnTables::Evpnevis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::Evpnevis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::Evpnevis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpnevi")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::Evpnevi()
    :
    eviid{YType::uint32, "eviid"},
    evi_advertise_mac_deprecated{YType::empty, "evi-advertise-mac-deprecated"},
    evi_reorig_disable{YType::empty, "evi-reorig-disable"},
    evi_unknown_unicast_flooding_disable{YType::empty, "evi-unknown-unicast-flooding-disable"},
    evpn_evi_cw_disable{YType::empty, "evpn-evi-cw-disable"},
    evpnevi_description{YType::str, "evpnevi-description"}
    	,
    evi_advertise_mac(std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac>())
	,evi_load_balancing(std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing>())
	,evpnev_ibgp_auto_discovery(std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery>())
{
    evi_advertise_mac->parent = this;
    evi_load_balancing->parent = this;
    evpnev_ibgp_auto_discovery->parent = this;

    yang_name = "evpnevi"; yang_parent_name = "evpnevis"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::~Evpnevi()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::has_data() const
{
    return eviid.is_set
	|| evi_advertise_mac_deprecated.is_set
	|| evi_reorig_disable.is_set
	|| evi_unknown_unicast_flooding_disable.is_set
	|| evpn_evi_cw_disable.is_set
	|| evpnevi_description.is_set
	|| (evi_advertise_mac !=  nullptr && evi_advertise_mac->has_data())
	|| (evi_load_balancing !=  nullptr && evi_load_balancing->has_data())
	|| (evpnev_ibgp_auto_discovery !=  nullptr && evpnev_ibgp_auto_discovery->has_data());
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| ydk::is_set(evi_advertise_mac_deprecated.yfilter)
	|| ydk::is_set(evi_reorig_disable.yfilter)
	|| ydk::is_set(evi_unknown_unicast_flooding_disable.yfilter)
	|| ydk::is_set(evpn_evi_cw_disable.yfilter)
	|| ydk::is_set(evpnevi_description.yfilter)
	|| (evi_advertise_mac !=  nullptr && evi_advertise_mac->has_operation())
	|| (evi_load_balancing !=  nullptr && evi_load_balancing->has_operation())
	|| (evpnev_ibgp_auto_discovery !=  nullptr && evpnev_ibgp_auto_discovery->has_operation());
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpnevis/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnevi" <<"[eviid='" <<eviid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnevis::Evpnevi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (evi_advertise_mac_deprecated.is_set || is_set(evi_advertise_mac_deprecated.yfilter)) leaf_name_data.push_back(evi_advertise_mac_deprecated.get_name_leafdata());
    if (evi_reorig_disable.is_set || is_set(evi_reorig_disable.yfilter)) leaf_name_data.push_back(evi_reorig_disable.get_name_leafdata());
    if (evi_unknown_unicast_flooding_disable.is_set || is_set(evi_unknown_unicast_flooding_disable.yfilter)) leaf_name_data.push_back(evi_unknown_unicast_flooding_disable.get_name_leafdata());
    if (evpn_evi_cw_disable.is_set || is_set(evpn_evi_cw_disable.yfilter)) leaf_name_data.push_back(evpn_evi_cw_disable.get_name_leafdata());
    if (evpnevi_description.is_set || is_set(evpnevi_description.yfilter)) leaf_name_data.push_back(evpnevi_description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evi-advertise-mac")
    {
        if(evi_advertise_mac == nullptr)
        {
            evi_advertise_mac = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac>();
        }
        return evi_advertise_mac;
    }

    if(child_yang_name == "evi-load-balancing")
    {
        if(evi_load_balancing == nullptr)
        {
            evi_load_balancing = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing>();
        }
        return evi_load_balancing;
    }

    if(child_yang_name == "evpnev-ibgp-auto-discovery")
    {
        if(evpnev_ibgp_auto_discovery == nullptr)
        {
            evpnev_ibgp_auto_discovery = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery>();
        }
        return evpnev_ibgp_auto_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnevis::Evpnevi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evi_advertise_mac != nullptr)
    {
        children["evi-advertise-mac"] = evi_advertise_mac;
    }

    if(evi_load_balancing != nullptr)
    {
        children["evi-load-balancing"] = evi_load_balancing;
    }

    if(evpnev_ibgp_auto_discovery != nullptr)
    {
        children["evpnev-ibgp-auto-discovery"] = evpnev_ibgp_auto_discovery;
    }

    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-advertise-mac-deprecated")
    {
        evi_advertise_mac_deprecated = value;
        evi_advertise_mac_deprecated.value_namespace = name_space;
        evi_advertise_mac_deprecated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-reorig-disable")
    {
        evi_reorig_disable = value;
        evi_reorig_disable.value_namespace = name_space;
        evi_reorig_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-unknown-unicast-flooding-disable")
    {
        evi_unknown_unicast_flooding_disable = value;
        evi_unknown_unicast_flooding_disable.value_namespace = name_space;
        evi_unknown_unicast_flooding_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-evi-cw-disable")
    {
        evpn_evi_cw_disable = value;
        evpn_evi_cw_disable.value_namespace = name_space;
        evpn_evi_cw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnevi-description")
    {
        evpnevi_description = value;
        evpnevi_description.value_namespace = name_space;
        evpnevi_description.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
    if(value_path == "evi-advertise-mac-deprecated")
    {
        evi_advertise_mac_deprecated.yfilter = yfilter;
    }
    if(value_path == "evi-reorig-disable")
    {
        evi_reorig_disable.yfilter = yfilter;
    }
    if(value_path == "evi-unknown-unicast-flooding-disable")
    {
        evi_unknown_unicast_flooding_disable.yfilter = yfilter;
    }
    if(value_path == "evpn-evi-cw-disable")
    {
        evpn_evi_cw_disable.yfilter = yfilter;
    }
    if(value_path == "evpnevi-description")
    {
        evpnevi_description.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi-advertise-mac" || name == "evi-load-balancing" || name == "evpnev-ibgp-auto-discovery" || name == "eviid" || name == "evi-advertise-mac-deprecated" || name == "evi-reorig-disable" || name == "evi-unknown-unicast-flooding-disable" || name == "evpn-evi-cw-disable" || name == "evpnevi-description")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac::EviAdvertiseMac()
    :
    enable{YType::empty, "enable"},
    evi_advertise_mac_bvi{YType::empty, "evi-advertise-mac-bvi"}
{

    yang_name = "evi-advertise-mac"; yang_parent_name = "evpnevi"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac::~EviAdvertiseMac()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac::has_data() const
{
    return enable.is_set
	|| evi_advertise_mac_bvi.is_set;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evi_advertise_mac_bvi.yfilter);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-advertise-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evi_advertise_mac_bvi.is_set || is_set(evi_advertise_mac_bvi.yfilter)) leaf_name_data.push_back(evi_advertise_mac_bvi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-advertise-mac-bvi")
    {
        evi_advertise_mac_bvi = value;
        evi_advertise_mac_bvi.value_namespace = name_space;
        evi_advertise_mac_bvi.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evi-advertise-mac-bvi")
    {
        evi_advertise_mac_bvi.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evi-advertise-mac-bvi")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::EviLoadBalancing()
    :
    enable{YType::empty, "enable"},
    evi_flow_label{YType::empty, "evi-flow-label"}
{

    yang_name = "evi-load-balancing"; yang_parent_name = "evpnevi"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::~EviLoadBalancing()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::has_data() const
{
    return enable.is_set
	|| evi_flow_label.is_set;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evi_flow_label.yfilter);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evi_flow_label.is_set || is_set(evi_flow_label.yfilter)) leaf_name_data.push_back(evi_flow_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evi-flow-label")
    {
        evi_flow_label = value;
        evi_flow_label.value_namespace = name_space;
        evi_flow_label.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evi-flow-label")
    {
        evi_flow_label.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evi-flow-label")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnevIbgpAutoDiscovery()
    :
    enable{YType::empty, "enable"},
    table_policy{YType::str, "table-policy"}
    	,
    evpn_route_distinguisher(std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher>())
	,evpn_route_targets(std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets>())
{
    evpn_route_distinguisher->parent = this;
    evpn_route_targets->parent = this;

    yang_name = "evpnev-ibgp-auto-discovery"; yang_parent_name = "evpnevi"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::~EvpnevIbgpAutoDiscovery()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::has_data() const
{
    return enable.is_set
	|| table_policy.is_set
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_data())
	|| (evpn_route_targets !=  nullptr && evpn_route_targets->has_data());
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_operation())
	|| (evpn_route_targets !=  nullptr && evpn_route_targets->has_operation());
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnev-ibgp-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-distinguisher")
    {
        if(evpn_route_distinguisher == nullptr)
        {
            evpn_route_distinguisher = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher>();
        }
        return evpn_route_distinguisher;
    }

    if(child_yang_name == "evpn-route-targets")
    {
        if(evpn_route_targets == nullptr)
        {
            evpn_route_targets = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets>();
        }
        return evpn_route_targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpn_route_distinguisher != nullptr)
    {
        children["evpn-route-distinguisher"] = evpn_route_distinguisher;
    }

    if(evpn_route_targets != nullptr)
    {
        children["evpn-route-targets"] = evpn_route_targets;
    }

    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-distinguisher" || name == "evpn-route-targets" || name == "enable" || name == "table-policy")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher::EvpnRouteDistinguisher()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{

    yang_name = "evpn-route-distinguisher"; yang_parent_name = "evpnev-ibgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher::~EvpnRouteDistinguisher()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-index" || name == "address" || name == "as" || name == "as-index" || name == "type")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargets()
{

    yang_name = "evpn-route-targets"; yang_parent_name = "evpnev-ibgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::~EvpnRouteTargets()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::has_data() const
{
    for (std::size_t index=0; index<evpn_route_target_as.size(); index++)
    {
        if(evpn_route_target_as[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_ipv4_address.size(); index++)
    {
        if(evpn_route_target_ipv4_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_none.size(); index++)
    {
        if(evpn_route_target_none[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::has_operation() const
{
    for (std::size_t index=0; index<evpn_route_target_as.size(); index++)
    {
        if(evpn_route_target_as[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_ipv4_address.size(); index++)
    {
        if(evpn_route_target_ipv4_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_none.size(); index++)
    {
        if(evpn_route_target_none[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-target-as")
    {
        for(auto const & c : evpn_route_target_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs>();
        c->parent = this;
        evpn_route_target_as.push_back(c);
        return c;
    }

    if(child_yang_name == "evpn-route-target-ipv4-address")
    {
        for(auto const & c : evpn_route_target_ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address>();
        c->parent = this;
        evpn_route_target_ipv4_address.push_back(c);
        return c;
    }

    if(child_yang_name == "evpn-route-target-none")
    {
        for(auto const & c : evpn_route_target_none)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone>();
        c->parent = this;
        evpn_route_target_none.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : evpn_route_target_as)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : evpn_route_target_ipv4_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : evpn_route_target_none)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-target-as" || name == "evpn-route-target-ipv4-address" || name == "evpn-route-target-none")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::EvpnRouteTargetAs()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-as"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::~EvpnRouteTargetAs()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_data() const
{
    return format.is_set
	|| role.is_set
	|| as.is_set
	|| as_index.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-as" <<"[format='" <<format <<"']" <<"[role='" <<role <<"']" <<"[as='" <<as <<"']" <<"[as-index='" <<as_index <<"']" <<"[stitching='" <<stitching <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "as" || name == "as-index" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::EvpnRouteTargetIpv4Address()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-ipv4-address"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::~EvpnRouteTargetIpv4Address()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_data() const
{
    return format.is_set
	|| role.is_set
	|| address.is_set
	|| addr_index.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-ipv4-address" <<"[format='" <<format <<"']" <<"[role='" <<role <<"']" <<"[address='" <<address <<"']" <<"[addr-index='" <<addr_index <<"']" <<"[stitching='" <<stitching <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "address" || name == "addr-index" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::EvpnRouteTargetNone()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    stitching{YType::enumeration, "stitching"}
{

    yang_name = "evpn-route-target-none"; yang_parent_name = "evpn-route-targets"; is_top_level_class = false; has_list_ancestor = true;
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::~EvpnRouteTargetNone()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_data() const
{
    return format.is_set
	|| role.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(stitching.yfilter);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-none" <<"[format='" <<format <<"']" <<"[role='" <<role <<"']" <<"[stitching='" <<stitching <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.yfilter)) leaf_name_data.push_back(stitching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching")
    {
        stitching = value;
        stitching.value_namespace = name_space;
        stitching.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "stitching")
    {
        stitching.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "role" || name == "stitching")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnmac::Evpnmac()
    :
    enable{YType::empty, "enable"}
    	,
    evpnmac_secure(std::make_shared<Evpn::EvpnTables::Evpnmac::EvpnmacSecure>())
{
    evpnmac_secure->parent = this;

    yang_name = "evpnmac"; yang_parent_name = "evpn-tables"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::Evpnmac::~Evpnmac()
{
}

bool Evpn::EvpnTables::Evpnmac::has_data() const
{
    return enable.is_set
	|| (evpnmac_secure !=  nullptr && evpnmac_secure->has_data());
}

bool Evpn::EvpnTables::Evpnmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (evpnmac_secure !=  nullptr && evpnmac_secure->has_operation());
}

std::string Evpn::EvpnTables::Evpnmac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::Evpnmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpnmac-secure")
    {
        if(evpnmac_secure == nullptr)
        {
            evpnmac_secure = std::make_shared<Evpn::EvpnTables::Evpnmac::EvpnmacSecure>();
        }
        return evpnmac_secure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evpnmac_secure != nullptr)
    {
        children["evpnmac-secure"] = evpnmac_secure;
    }

    return children;
}

void Evpn::EvpnTables::Evpnmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpnmac-secure" || name == "enable")
        return true;
    return false;
}

Evpn::EvpnTables::Evpnmac::EvpnmacSecure::EvpnmacSecure()
    :
    enable{YType::empty, "enable"},
    evpnmac_secure_freeze_time{YType::uint32, "evpnmac-secure-freeze-time"},
    evpnmac_secure_move_count{YType::uint32, "evpnmac-secure-move-count"},
    evpnmac_secure_move_interval{YType::uint32, "evpnmac-secure-move-interval"},
    evpnmac_secure_retry_count{YType::uint32, "evpnmac-secure-retry-count"}
{

    yang_name = "evpnmac-secure"; yang_parent_name = "evpnmac"; is_top_level_class = false; has_list_ancestor = false;
}

Evpn::EvpnTables::Evpnmac::EvpnmacSecure::~EvpnmacSecure()
{
}

bool Evpn::EvpnTables::Evpnmac::EvpnmacSecure::has_data() const
{
    return enable.is_set
	|| evpnmac_secure_freeze_time.is_set
	|| evpnmac_secure_move_count.is_set
	|| evpnmac_secure_move_interval.is_set
	|| evpnmac_secure_retry_count.is_set;
}

bool Evpn::EvpnTables::Evpnmac::EvpnmacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(evpnmac_secure_freeze_time.yfilter)
	|| ydk::is_set(evpnmac_secure_move_count.yfilter)
	|| ydk::is_set(evpnmac_secure_move_interval.yfilter)
	|| ydk::is_set(evpnmac_secure_retry_count.yfilter);
}

std::string Evpn::EvpnTables::Evpnmac::EvpnmacSecure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpnmac/" << get_segment_path();
    return path_buffer.str();
}

std::string Evpn::EvpnTables::Evpnmac::EvpnmacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnmac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Evpn::EvpnTables::Evpnmac::EvpnmacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpnmac_secure_freeze_time.is_set || is_set(evpnmac_secure_freeze_time.yfilter)) leaf_name_data.push_back(evpnmac_secure_freeze_time.get_name_leafdata());
    if (evpnmac_secure_move_count.is_set || is_set(evpnmac_secure_move_count.yfilter)) leaf_name_data.push_back(evpnmac_secure_move_count.get_name_leafdata());
    if (evpnmac_secure_move_interval.is_set || is_set(evpnmac_secure_move_interval.yfilter)) leaf_name_data.push_back(evpnmac_secure_move_interval.get_name_leafdata());
    if (evpnmac_secure_retry_count.is_set || is_set(evpnmac_secure_retry_count.yfilter)) leaf_name_data.push_back(evpnmac_secure_retry_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnmac::EvpnmacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Evpn::EvpnTables::Evpnmac::EvpnmacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Evpn::EvpnTables::Evpnmac::EvpnmacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnmac-secure-freeze-time")
    {
        evpnmac_secure_freeze_time = value;
        evpnmac_secure_freeze_time.value_namespace = name_space;
        evpnmac_secure_freeze_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnmac-secure-move-count")
    {
        evpnmac_secure_move_count = value;
        evpnmac_secure_move_count.value_namespace = name_space;
        evpnmac_secure_move_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnmac-secure-move-interval")
    {
        evpnmac_secure_move_interval = value;
        evpnmac_secure_move_interval.value_namespace = name_space;
        evpnmac_secure_move_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpnmac-secure-retry-count")
    {
        evpnmac_secure_retry_count = value;
        evpnmac_secure_retry_count.value_namespace = name_space;
        evpnmac_secure_retry_count.value_namespace_prefix = name_space_prefix;
    }
}

void Evpn::EvpnTables::Evpnmac::EvpnmacSecure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "evpnmac-secure-freeze-time")
    {
        evpnmac_secure_freeze_time.yfilter = yfilter;
    }
    if(value_path == "evpnmac-secure-move-count")
    {
        evpnmac_secure_move_count.yfilter = yfilter;
    }
    if(value_path == "evpnmac-secure-move-interval")
    {
        evpnmac_secure_move_interval.yfilter = yfilter;
    }
    if(value_path == "evpnmac-secure-retry-count")
    {
        evpnmac_secure_retry_count.yfilter = yfilter;
    }
}

bool Evpn::EvpnTables::Evpnmac::EvpnmacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "evpnmac-secure-freeze-time" || name == "evpnmac-secure-move-count" || name == "evpnmac-secure-move-interval" || name == "evpnmac-secure-retry-count")
        return true;
    return false;
}

GenericInterfaceLists::GenericInterfaceLists()
{

    yang_name = "generic-interface-lists"; yang_parent_name = "Cisco-IOS-XR-l2vpn-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

GenericInterfaceLists::~GenericInterfaceLists()
{
}

bool GenericInterfaceLists::has_data() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceLists::has_operation() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GenericInterfaceLists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:generic-interface-lists";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceLists::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceLists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface")
    {
        for(auto const & c : generic_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<GenericInterfaceLists::GenericInterface>();
        c->parent = this;
        generic_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceLists::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : generic_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GenericInterfaceLists::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceLists::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> GenericInterfaceLists::clone_ptr() const
{
    return std::make_shared<GenericInterfaceLists>();
}

std::string GenericInterfaceLists::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GenericInterfaceLists::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GenericInterfaceLists::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> GenericInterfaceLists::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool GenericInterfaceLists::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface")
        return true;
    return false;
}

GenericInterfaceLists::GenericInterface::GenericInterface()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    enable{YType::empty, "enable"}
    	,
    interfaces(std::make_shared<GenericInterfaceLists::GenericInterface::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "generic-interface"; yang_parent_name = "generic-interface-lists"; is_top_level_class = false; has_list_ancestor = false;
}

GenericInterfaceLists::GenericInterface::~GenericInterface()
{
}

bool GenericInterfaceLists::GenericInterface::has_data() const
{
    return generic_interface_list_name.is_set
	|| enable.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool GenericInterfaceLists::GenericInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string GenericInterfaceLists::GenericInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:generic-interface-lists/" << get_segment_path();
    return path_buffer.str();
}

std::string GenericInterfaceLists::GenericInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface" <<"[generic-interface-list-name='" <<generic_interface_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceLists::GenericInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.yfilter)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceLists::GenericInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<GenericInterfaceLists::GenericInterface::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceLists::GenericInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void GenericInterfaceLists::GenericInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
        generic_interface_list_name.value_namespace = name_space;
        generic_interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceLists::GenericInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool GenericInterfaceLists::GenericInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "generic-interface-list-name" || name == "enable")
        return true;
    return false;
}

GenericInterfaceLists::GenericInterface::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "generic-interface"; is_top_level_class = false; has_list_ancestor = true;
}

GenericInterfaceLists::GenericInterface::Interfaces::~Interfaces()
{
}

bool GenericInterfaceLists::GenericInterface::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceLists::GenericInterface::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string GenericInterfaceLists::GenericInterface::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceLists::GenericInterface::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceLists::GenericInterface::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<GenericInterfaceLists::GenericInterface::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceLists::GenericInterface::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void GenericInterfaceLists::GenericInterface::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void GenericInterfaceLists::GenericInterface::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool GenericInterfaceLists::GenericInterface::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

GenericInterfaceLists::GenericInterface::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    enable{YType::empty, "enable"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

GenericInterfaceLists::GenericInterface::Interfaces::Interface::~Interface()
{
}

bool GenericInterfaceLists::GenericInterface::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| enable.is_set;
}

bool GenericInterfaceLists::GenericInterface::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string GenericInterfaceLists::GenericInterface::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > GenericInterfaceLists::GenericInterface::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> GenericInterfaceLists::GenericInterface::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceLists::GenericInterface::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GenericInterfaceLists::GenericInterface::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceLists::GenericInterface::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool GenericInterfaceLists::GenericInterface::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "enable")
        return true;
    return false;
}

L2Vpn::L2Vpn()
    :
    capability{YType::enumeration, "capability"},
    enable{YType::empty, "enable"},
    l2vpn_router_id{YType::str, "l2vpn-router-id"},
    load_balance{YType::enumeration, "load-balance"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    mspw_description{YType::str, "mspw-description"},
    mtu_mismatch_ignore{YType::empty, "mtu-mismatch-ignore"},
    nsr{YType::empty, "nsr"},
    pw_grouping{YType::empty, "pw-grouping"},
    pw_status_disable{YType::empty, "pw-status-disable"},
    pwoam_refresh{YType::uint32, "pwoam-refresh"},
    tcn_propagation{YType::empty, "tcn-propagation"}
    	,
    auto_discovery(std::make_shared<L2Vpn::AutoDiscovery>())
	,database(std::make_shared<L2Vpn::Database>())
	,neighbor(std::make_shared<L2Vpn::Neighbor>())
	,pbb(std::make_shared<L2Vpn::Pbb>())
	,pw_routing(std::make_shared<L2Vpn::PwRouting>())
	,snmp(std::make_shared<L2Vpn::Snmp>())
	,utility(std::make_shared<L2Vpn::Utility>())
{
    auto_discovery->parent = this;
    database->parent = this;
    neighbor->parent = this;
    pbb->parent = this;
    pw_routing->parent = this;
    snmp->parent = this;
    utility->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "Cisco-IOS-XR-l2vpn-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

L2Vpn::~L2Vpn()
{
}

bool L2Vpn::has_data() const
{
    return capability.is_set
	|| enable.is_set
	|| l2vpn_router_id.is_set
	|| load_balance.is_set
	|| mac_limit_threshold.is_set
	|| mspw_description.is_set
	|| mtu_mismatch_ignore.is_set
	|| nsr.is_set
	|| pw_grouping.is_set
	|| pw_status_disable.is_set
	|| pwoam_refresh.is_set
	|| tcn_propagation.is_set
	|| (auto_discovery !=  nullptr && auto_discovery->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw_routing !=  nullptr && pw_routing->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (utility !=  nullptr && utility->has_data());
}

bool L2Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(l2vpn_router_id.yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(mspw_description.yfilter)
	|| ydk::is_set(mtu_mismatch_ignore.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(pw_grouping.yfilter)
	|| ydk::is_set(pw_status_disable.yfilter)
	|| ydk::is_set(pwoam_refresh.yfilter)
	|| ydk::is_set(tcn_propagation.yfilter)
	|| (auto_discovery !=  nullptr && auto_discovery->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw_routing !=  nullptr && pw_routing->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (utility !=  nullptr && utility->has_operation());
}

std::string L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (l2vpn_router_id.is_set || is_set(l2vpn_router_id.yfilter)) leaf_name_data.push_back(l2vpn_router_id.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (mspw_description.is_set || is_set(mspw_description.yfilter)) leaf_name_data.push_back(mspw_description.get_name_leafdata());
    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.yfilter)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (pw_grouping.is_set || is_set(pw_grouping.yfilter)) leaf_name_data.push_back(pw_grouping.get_name_leafdata());
    if (pw_status_disable.is_set || is_set(pw_status_disable.yfilter)) leaf_name_data.push_back(pw_status_disable.get_name_leafdata());
    if (pwoam_refresh.is_set || is_set(pwoam_refresh.yfilter)) leaf_name_data.push_back(pwoam_refresh.get_name_leafdata());
    if (tcn_propagation.is_set || is_set(tcn_propagation.yfilter)) leaf_name_data.push_back(tcn_propagation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-discovery")
    {
        if(auto_discovery == nullptr)
        {
            auto_discovery = std::make_shared<L2Vpn::AutoDiscovery>();
        }
        return auto_discovery;
    }

    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<L2Vpn::Database>();
        }
        return database;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<L2Vpn::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2Vpn::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "pw-routing")
    {
        if(pw_routing == nullptr)
        {
            pw_routing = std::make_shared<L2Vpn::PwRouting>();
        }
        return pw_routing;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<L2Vpn::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "utility")
    {
        if(utility == nullptr)
        {
            utility = std::make_shared<L2Vpn::Utility>();
        }
        return utility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_discovery != nullptr)
    {
        children["auto-discovery"] = auto_discovery;
    }

    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(pw_routing != nullptr)
    {
        children["pw-routing"] = pw_routing;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(utility != nullptr)
    {
        children["utility"] = utility;
    }

    return children;
}

void L2Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id = value;
        l2vpn_router_id.value_namespace = name_space;
        l2vpn_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mspw-description")
    {
        mspw_description = value;
        mspw_description.value_namespace = name_space;
        mspw_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
        mtu_mismatch_ignore.value_namespace = name_space;
        mtu_mismatch_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-grouping")
    {
        pw_grouping = value;
        pw_grouping.value_namespace = name_space;
        pw_grouping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-status-disable")
    {
        pw_status_disable = value;
        pw_status_disable.value_namespace = name_space;
        pw_status_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwoam-refresh")
    {
        pwoam_refresh = value;
        pwoam_refresh.value_namespace = name_space;
        pwoam_refresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn-propagation")
    {
        tcn_propagation = value;
        tcn_propagation.value_namespace = name_space;
        tcn_propagation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id.yfilter = yfilter;
    }
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "mspw-description")
    {
        mspw_description.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "pw-grouping")
    {
        pw_grouping.yfilter = yfilter;
    }
    if(value_path == "pw-status-disable")
    {
        pw_status_disable.yfilter = yfilter;
    }
    if(value_path == "pwoam-refresh")
    {
        pwoam_refresh.yfilter = yfilter;
    }
    if(value_path == "tcn-propagation")
    {
        tcn_propagation.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> L2Vpn::clone_ptr() const
{
    return std::make_shared<L2Vpn>();
}

std::string L2Vpn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2Vpn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2Vpn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> L2Vpn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool L2Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-discovery" || name == "database" || name == "neighbor" || name == "pbb" || name == "pw-routing" || name == "snmp" || name == "utility" || name == "capability" || name == "enable" || name == "l2vpn-router-id" || name == "load-balance" || name == "mac-limit-threshold" || name == "mspw-description" || name == "mtu-mismatch-ignore" || name == "nsr" || name == "pw-grouping" || name == "pw-status-disable" || name == "pwoam-refresh" || name == "tcn-propagation")
        return true;
    return false;
}

L2Vpn::AutoDiscovery::AutoDiscovery()
    :
    bgp_signaling(std::make_shared<L2Vpn::AutoDiscovery::BgpSignaling>())
{
    bgp_signaling->parent = this;

    yang_name = "auto-discovery"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::AutoDiscovery::~AutoDiscovery()
{
}

bool L2Vpn::AutoDiscovery::has_data() const
{
    return (bgp_signaling !=  nullptr && bgp_signaling->has_data());
}

bool L2Vpn::AutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (bgp_signaling !=  nullptr && bgp_signaling->has_operation());
}

std::string L2Vpn::AutoDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::AutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::AutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::AutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-signaling")
    {
        if(bgp_signaling == nullptr)
        {
            bgp_signaling = std::make_shared<L2Vpn::AutoDiscovery::BgpSignaling>();
        }
        return bgp_signaling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::AutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_signaling != nullptr)
    {
        children["bgp-signaling"] = bgp_signaling;
    }

    return children;
}

void L2Vpn::AutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::AutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::AutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-signaling")
        return true;
    return false;
}

L2Vpn::AutoDiscovery::BgpSignaling::BgpSignaling()
    :
    mtu_mismatch_ignore{YType::empty, "mtu-mismatch-ignore"}
{

    yang_name = "bgp-signaling"; yang_parent_name = "auto-discovery"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::AutoDiscovery::BgpSignaling::~BgpSignaling()
{
}

bool L2Vpn::AutoDiscovery::BgpSignaling::has_data() const
{
    return mtu_mismatch_ignore.is_set;
}

bool L2Vpn::AutoDiscovery::BgpSignaling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu_mismatch_ignore.yfilter);
}

std::string L2Vpn::AutoDiscovery::BgpSignaling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/auto-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::AutoDiscovery::BgpSignaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-signaling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::AutoDiscovery::BgpSignaling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.yfilter)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::AutoDiscovery::BgpSignaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::AutoDiscovery::BgpSignaling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::AutoDiscovery::BgpSignaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
        mtu_mismatch_ignore.value_namespace = name_space;
        mtu_mismatch_ignore.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::AutoDiscovery::BgpSignaling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore.yfilter = yfilter;
    }
}

bool L2Vpn::AutoDiscovery::BgpSignaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu-mismatch-ignore")
        return true;
    return false;
}

L2Vpn::Database::Database()
    :
    bridge_domain_groups(std::make_shared<L2Vpn::Database::BridgeDomainGroups>())
	,flexible_xconnect_service_table(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable>())
	,g8032_rings(std::make_shared<L2Vpn::Database::G8032Rings>())
	,pseudowire_classes(std::make_shared<L2Vpn::Database::PseudowireClasses>())
	,redundancy(std::make_shared<L2Vpn::Database::Redundancy>())
	,xconnect_groups(std::make_shared<L2Vpn::Database::XconnectGroups>())
{
    bridge_domain_groups->parent = this;
    flexible_xconnect_service_table->parent = this;
    g8032_rings->parent = this;
    pseudowire_classes->parent = this;
    redundancy->parent = this;
    xconnect_groups->parent = this;

    yang_name = "database"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::~Database()
{
}

bool L2Vpn::Database::has_data() const
{
    return (bridge_domain_groups !=  nullptr && bridge_domain_groups->has_data())
	|| (flexible_xconnect_service_table !=  nullptr && flexible_xconnect_service_table->has_data())
	|| (g8032_rings !=  nullptr && g8032_rings->has_data())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_data());
}

bool L2Vpn::Database::has_operation() const
{
    return is_set(yfilter)
	|| (bridge_domain_groups !=  nullptr && bridge_domain_groups->has_operation())
	|| (flexible_xconnect_service_table !=  nullptr && flexible_xconnect_service_table->has_operation())
	|| (g8032_rings !=  nullptr && g8032_rings->has_operation())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_operation());
}

std::string L2Vpn::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain-groups")
    {
        if(bridge_domain_groups == nullptr)
        {
            bridge_domain_groups = std::make_shared<L2Vpn::Database::BridgeDomainGroups>();
        }
        return bridge_domain_groups;
    }

    if(child_yang_name == "flexible-xconnect-service-table")
    {
        if(flexible_xconnect_service_table == nullptr)
        {
            flexible_xconnect_service_table = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable>();
        }
        return flexible_xconnect_service_table;
    }

    if(child_yang_name == "g8032-rings")
    {
        if(g8032_rings == nullptr)
        {
            g8032_rings = std::make_shared<L2Vpn::Database::G8032Rings>();
        }
        return g8032_rings;
    }

    if(child_yang_name == "pseudowire-classes")
    {
        if(pseudowire_classes == nullptr)
        {
            pseudowire_classes = std::make_shared<L2Vpn::Database::PseudowireClasses>();
        }
        return pseudowire_classes;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<L2Vpn::Database::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "xconnect-groups")
    {
        if(xconnect_groups == nullptr)
        {
            xconnect_groups = std::make_shared<L2Vpn::Database::XconnectGroups>();
        }
        return xconnect_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domain_groups != nullptr)
    {
        children["bridge-domain-groups"] = bridge_domain_groups;
    }

    if(flexible_xconnect_service_table != nullptr)
    {
        children["flexible-xconnect-service-table"] = flexible_xconnect_service_table;
    }

    if(g8032_rings != nullptr)
    {
        children["g8032-rings"] = g8032_rings;
    }

    if(pseudowire_classes != nullptr)
    {
        children["pseudowire-classes"] = pseudowire_classes;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(xconnect_groups != nullptr)
    {
        children["xconnect-groups"] = xconnect_groups;
    }

    return children;
}

void L2Vpn::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-groups" || name == "flexible-xconnect-service-table" || name == "g8032-rings" || name == "pseudowire-classes" || name == "redundancy" || name == "xconnect-groups")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroups()
{

    yang_name = "bridge-domain-groups"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::BridgeDomainGroups::~BridgeDomainGroups()
{
}

bool L2Vpn::Database::BridgeDomainGroups::has_data() const
{
    for (std::size_t index=0; index<bridge_domain_group.size(); index++)
    {
        if(bridge_domain_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain_group.size(); index++)
    {
        if(bridge_domain_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::BridgeDomainGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain-group")
    {
        for(auto const & c : bridge_domain_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup>();
        c->parent = this;
        bridge_domain_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bridge_domain_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-group")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomainGroup()
    :
    name{YType::str, "name"}
    	,
    bridge_domains(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains>())
{
    bridge_domains->parent = this;

    yang_name = "bridge-domain-group"; yang_parent_name = "bridge-domain-groups"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::~BridgeDomainGroup()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::has_data() const
{
    return name.is_set
	|| (bridge_domains !=  nullptr && bridge_domains->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (bridge_domains !=  nullptr && bridge_domains->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/bridge-domain-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domains")
    {
        if(bridge_domains == nullptr)
        {
            bridge_domains = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains>();
        }
        return bridge_domains;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domains != nullptr)
    {
        children["bridge-domains"] = bridge_domains;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domains" || name == "name")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomains()
{

    yang_name = "bridge-domains"; yang_parent_name = "bridge-domain-group"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::~BridgeDomains()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::has_data() const
{
    for (std::size_t index=0; index<bridge_domain.size(); index++)
    {
        if(bridge_domain[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain.size(); index++)
    {
        if(bridge_domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain")
    {
        for(auto const & c : bridge_domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain>();
        c->parent = this;
        bridge_domain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bridge_domain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomain()
    :
    name{YType::str, "name"},
    bridge_description{YType::str, "bridge-description"},
    bridge_domain_mtu{YType::uint32, "bridge-domain-mtu"},
    coupled_mode{YType::empty, "coupled-mode"},
    dhcp{YType::str, "dhcp"},
    flooding{YType::empty, "flooding"},
    flooding_unknown_unicast{YType::empty, "flooding-unknown-unicast"},
    igmp_snooping{YType::str, "igmp-snooping"},
    igmp_snooping_disable{YType::empty, "igmp-snooping-disable"},
    mld_snooping{YType::str, "mld-snooping"},
    shutdown{YType::empty, "shutdown"},
    transport_mode{YType::enumeration, "transport-mode"}
    	,
    access_vfis(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis>())
	,bd_attachment_circuits(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits>())
	,bd_pseudowire_evpns(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns>())
	,bd_pseudowires(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires>())
	,bd_storm_controls(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls>())
	,bridge_domain_evis(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis>())
	,bridge_domain_mac(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac>())
	,bridge_domain_pbb(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb>())
	,dai(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai>())
	,ip_source_guard(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard>())
	,member_vnis(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis>())
	,nv_satellite(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite>())
	,routed_interfaces(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces>())
	,vfis(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis>())
{
    access_vfis->parent = this;
    bd_attachment_circuits->parent = this;
    bd_pseudowire_evpns->parent = this;
    bd_pseudowires->parent = this;
    bd_storm_controls->parent = this;
    bridge_domain_evis->parent = this;
    bridge_domain_mac->parent = this;
    bridge_domain_pbb->parent = this;
    dai->parent = this;
    ip_source_guard->parent = this;
    member_vnis->parent = this;
    nv_satellite->parent = this;
    routed_interfaces->parent = this;
    vfis->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "bridge-domains"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::~BridgeDomain()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::has_data() const
{
    return name.is_set
	|| bridge_description.is_set
	|| bridge_domain_mtu.is_set
	|| coupled_mode.is_set
	|| dhcp.is_set
	|| flooding.is_set
	|| flooding_unknown_unicast.is_set
	|| igmp_snooping.is_set
	|| igmp_snooping_disable.is_set
	|| mld_snooping.is_set
	|| shutdown.is_set
	|| transport_mode.is_set
	|| (access_vfis !=  nullptr && access_vfis->has_data())
	|| (bd_attachment_circuits !=  nullptr && bd_attachment_circuits->has_data())
	|| (bd_pseudowire_evpns !=  nullptr && bd_pseudowire_evpns->has_data())
	|| (bd_pseudowires !=  nullptr && bd_pseudowires->has_data())
	|| (bd_storm_controls !=  nullptr && bd_storm_controls->has_data())
	|| (bridge_domain_evis !=  nullptr && bridge_domain_evis->has_data())
	|| (bridge_domain_mac !=  nullptr && bridge_domain_mac->has_data())
	|| (bridge_domain_pbb !=  nullptr && bridge_domain_pbb->has_data())
	|| (dai !=  nullptr && dai->has_data())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_data())
	|| (member_vnis !=  nullptr && member_vnis->has_data())
	|| (nv_satellite !=  nullptr && nv_satellite->has_data())
	|| (routed_interfaces !=  nullptr && routed_interfaces->has_data())
	|| (vfis !=  nullptr && vfis->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(bridge_description.yfilter)
	|| ydk::is_set(bridge_domain_mtu.yfilter)
	|| ydk::is_set(coupled_mode.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(flooding.yfilter)
	|| ydk::is_set(flooding_unknown_unicast.yfilter)
	|| ydk::is_set(igmp_snooping.yfilter)
	|| ydk::is_set(igmp_snooping_disable.yfilter)
	|| ydk::is_set(mld_snooping.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| (access_vfis !=  nullptr && access_vfis->has_operation())
	|| (bd_attachment_circuits !=  nullptr && bd_attachment_circuits->has_operation())
	|| (bd_pseudowire_evpns !=  nullptr && bd_pseudowire_evpns->has_operation())
	|| (bd_pseudowires !=  nullptr && bd_pseudowires->has_operation())
	|| (bd_storm_controls !=  nullptr && bd_storm_controls->has_operation())
	|| (bridge_domain_evis !=  nullptr && bridge_domain_evis->has_operation())
	|| (bridge_domain_mac !=  nullptr && bridge_domain_mac->has_operation())
	|| (bridge_domain_pbb !=  nullptr && bridge_domain_pbb->has_operation())
	|| (dai !=  nullptr && dai->has_operation())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_operation())
	|| (member_vnis !=  nullptr && member_vnis->has_operation())
	|| (nv_satellite !=  nullptr && nv_satellite->has_operation())
	|| (routed_interfaces !=  nullptr && routed_interfaces->has_operation())
	|| (vfis !=  nullptr && vfis->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bridge_description.is_set || is_set(bridge_description.yfilter)) leaf_name_data.push_back(bridge_description.get_name_leafdata());
    if (bridge_domain_mtu.is_set || is_set(bridge_domain_mtu.yfilter)) leaf_name_data.push_back(bridge_domain_mtu.get_name_leafdata());
    if (coupled_mode.is_set || is_set(coupled_mode.yfilter)) leaf_name_data.push_back(coupled_mode.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (flooding.is_set || is_set(flooding.yfilter)) leaf_name_data.push_back(flooding.get_name_leafdata());
    if (flooding_unknown_unicast.is_set || is_set(flooding_unknown_unicast.yfilter)) leaf_name_data.push_back(flooding_unknown_unicast.get_name_leafdata());
    if (igmp_snooping.is_set || is_set(igmp_snooping.yfilter)) leaf_name_data.push_back(igmp_snooping.get_name_leafdata());
    if (igmp_snooping_disable.is_set || is_set(igmp_snooping_disable.yfilter)) leaf_name_data.push_back(igmp_snooping_disable.get_name_leafdata());
    if (mld_snooping.is_set || is_set(mld_snooping.yfilter)) leaf_name_data.push_back(mld_snooping.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfis")
    {
        if(access_vfis == nullptr)
        {
            access_vfis = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis>();
        }
        return access_vfis;
    }

    if(child_yang_name == "bd-attachment-circuits")
    {
        if(bd_attachment_circuits == nullptr)
        {
            bd_attachment_circuits = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits>();
        }
        return bd_attachment_circuits;
    }

    if(child_yang_name == "bd-pseudowire-evpns")
    {
        if(bd_pseudowire_evpns == nullptr)
        {
            bd_pseudowire_evpns = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns>();
        }
        return bd_pseudowire_evpns;
    }

    if(child_yang_name == "bd-pseudowires")
    {
        if(bd_pseudowires == nullptr)
        {
            bd_pseudowires = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires>();
        }
        return bd_pseudowires;
    }

    if(child_yang_name == "bd-storm-controls")
    {
        if(bd_storm_controls == nullptr)
        {
            bd_storm_controls = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls>();
        }
        return bd_storm_controls;
    }

    if(child_yang_name == "bridge-domain-evis")
    {
        if(bridge_domain_evis == nullptr)
        {
            bridge_domain_evis = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis>();
        }
        return bridge_domain_evis;
    }

    if(child_yang_name == "bridge-domain-mac")
    {
        if(bridge_domain_mac == nullptr)
        {
            bridge_domain_mac = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac>();
        }
        return bridge_domain_mac;
    }

    if(child_yang_name == "bridge-domain-pbb")
    {
        if(bridge_domain_pbb == nullptr)
        {
            bridge_domain_pbb = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb>();
        }
        return bridge_domain_pbb;
    }

    if(child_yang_name == "dai")
    {
        if(dai == nullptr)
        {
            dai = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai>();
        }
        return dai;
    }

    if(child_yang_name == "ip-source-guard")
    {
        if(ip_source_guard == nullptr)
        {
            ip_source_guard = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard>();
        }
        return ip_source_guard;
    }

    if(child_yang_name == "member-vnis")
    {
        if(member_vnis == nullptr)
        {
            member_vnis = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis>();
        }
        return member_vnis;
    }

    if(child_yang_name == "nv-satellite")
    {
        if(nv_satellite == nullptr)
        {
            nv_satellite = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite>();
        }
        return nv_satellite;
    }

    if(child_yang_name == "routed-interfaces")
    {
        if(routed_interfaces == nullptr)
        {
            routed_interfaces = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces>();
        }
        return routed_interfaces;
    }

    if(child_yang_name == "vfis")
    {
        if(vfis == nullptr)
        {
            vfis = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis>();
        }
        return vfis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_vfis != nullptr)
    {
        children["access-vfis"] = access_vfis;
    }

    if(bd_attachment_circuits != nullptr)
    {
        children["bd-attachment-circuits"] = bd_attachment_circuits;
    }

    if(bd_pseudowire_evpns != nullptr)
    {
        children["bd-pseudowire-evpns"] = bd_pseudowire_evpns;
    }

    if(bd_pseudowires != nullptr)
    {
        children["bd-pseudowires"] = bd_pseudowires;
    }

    if(bd_storm_controls != nullptr)
    {
        children["bd-storm-controls"] = bd_storm_controls;
    }

    if(bridge_domain_evis != nullptr)
    {
        children["bridge-domain-evis"] = bridge_domain_evis;
    }

    if(bridge_domain_mac != nullptr)
    {
        children["bridge-domain-mac"] = bridge_domain_mac;
    }

    if(bridge_domain_pbb != nullptr)
    {
        children["bridge-domain-pbb"] = bridge_domain_pbb;
    }

    if(dai != nullptr)
    {
        children["dai"] = dai;
    }

    if(ip_source_guard != nullptr)
    {
        children["ip-source-guard"] = ip_source_guard;
    }

    if(member_vnis != nullptr)
    {
        children["member-vnis"] = member_vnis;
    }

    if(nv_satellite != nullptr)
    {
        children["nv-satellite"] = nv_satellite;
    }

    if(routed_interfaces != nullptr)
    {
        children["routed-interfaces"] = routed_interfaces;
    }

    if(vfis != nullptr)
    {
        children["vfis"] = vfis;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-description")
    {
        bridge_description = value;
        bridge_description.value_namespace = name_space;
        bridge_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-mtu")
    {
        bridge_domain_mtu = value;
        bridge_domain_mtu.value_namespace = name_space;
        bridge_domain_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coupled-mode")
    {
        coupled_mode = value;
        coupled_mode.value_namespace = name_space;
        coupled_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding")
    {
        flooding = value;
        flooding.value_namespace = name_space;
        flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-unknown-unicast")
    {
        flooding_unknown_unicast = value;
        flooding_unknown_unicast.value_namespace = name_space;
        flooding_unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snooping")
    {
        igmp_snooping = value;
        igmp_snooping.value_namespace = name_space;
        igmp_snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snooping-disable")
    {
        igmp_snooping_disable = value;
        igmp_snooping_disable.value_namespace = name_space;
        igmp_snooping_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snooping")
    {
        mld_snooping = value;
        mld_snooping.value_namespace = name_space;
        mld_snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "bridge-description")
    {
        bridge_description.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-mtu")
    {
        bridge_domain_mtu.yfilter = yfilter;
    }
    if(value_path == "coupled-mode")
    {
        coupled_mode.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "flooding")
    {
        flooding.yfilter = yfilter;
    }
    if(value_path == "flooding-unknown-unicast")
    {
        flooding_unknown_unicast.yfilter = yfilter;
    }
    if(value_path == "igmp-snooping")
    {
        igmp_snooping.yfilter = yfilter;
    }
    if(value_path == "igmp-snooping-disable")
    {
        igmp_snooping_disable.yfilter = yfilter;
    }
    if(value_path == "mld-snooping")
    {
        mld_snooping.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfis" || name == "bd-attachment-circuits" || name == "bd-pseudowire-evpns" || name == "bd-pseudowires" || name == "bd-storm-controls" || name == "bridge-domain-evis" || name == "bridge-domain-mac" || name == "bridge-domain-pbb" || name == "dai" || name == "ip-source-guard" || name == "member-vnis" || name == "nv-satellite" || name == "routed-interfaces" || name == "vfis" || name == "name" || name == "bridge-description" || name == "bridge-domain-mtu" || name == "coupled-mode" || name == "dhcp" || name == "flooding" || name == "flooding-unknown-unicast" || name == "igmp-snooping" || name == "igmp-snooping-disable" || name == "mld-snooping" || name == "shutdown" || name == "transport-mode")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfis()
{

    yang_name = "access-vfis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::~AccessVfis()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::has_data() const
{
    for (std::size_t index=0; index<access_vfi.size(); index++)
    {
        if(access_vfi[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::has_operation() const
{
    for (std::size_t index=0; index<access_vfi.size(); index++)
    {
        if(access_vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi")
    {
        for(auto const & c : access_vfi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi>();
        c->parent = this;
        access_vfi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_vfi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfi()
    :
    name{YType::str, "name"},
    access_vfi_shutdown{YType::empty, "access-vfi-shutdown"}
    	,
    access_vfi_pseudowires(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires>())
{
    access_vfi_pseudowires->parent = this;

    yang_name = "access-vfi"; yang_parent_name = "access-vfis"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::~AccessVfi()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::has_data() const
{
    return name.is_set
	|| access_vfi_shutdown.is_set
	|| (access_vfi_pseudowires !=  nullptr && access_vfi_pseudowires->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(access_vfi_shutdown.yfilter)
	|| (access_vfi_pseudowires !=  nullptr && access_vfi_pseudowires->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (access_vfi_shutdown.is_set || is_set(access_vfi_shutdown.yfilter)) leaf_name_data.push_back(access_vfi_shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowires")
    {
        if(access_vfi_pseudowires == nullptr)
        {
            access_vfi_pseudowires = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires>();
        }
        return access_vfi_pseudowires;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_vfi_pseudowires != nullptr)
    {
        children["access-vfi-pseudowires"] = access_vfi_pseudowires;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-vfi-shutdown")
    {
        access_vfi_shutdown = value;
        access_vfi_shutdown.value_namespace = name_space;
        access_vfi_shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "access-vfi-shutdown")
    {
        access_vfi_shutdown.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowires" || name == "name" || name == "access-vfi-shutdown")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowires()
{

    yang_name = "access-vfi-pseudowires"; yang_parent_name = "access-vfi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::~AccessVfiPseudowires()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::has_data() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire.size(); index++)
    {
        if(access_vfi_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::has_operation() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire.size(); index++)
    {
        if(access_vfi_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowire")
    {
        for(auto const & c : access_vfi_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire>();
        c->parent = this;
        access_vfi_pseudowire.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_vfi_pseudowire)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowire")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    access_vfi_pw_class{YType::str, "access-vfi-pw-class"}
    	,
    access_vfi_pseudowire_static_mac_addresses(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses>())
{
    access_vfi_pseudowire_static_mac_addresses->parent = this;

    yang_name = "access-vfi-pseudowire"; yang_parent_name = "access-vfi-pseudowires"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::~AccessVfiPseudowire()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| access_vfi_pw_class.is_set
	|| (access_vfi_pseudowire_static_mac_addresses !=  nullptr && access_vfi_pseudowire_static_mac_addresses->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(access_vfi_pw_class.yfilter)
	|| (access_vfi_pseudowire_static_mac_addresses !=  nullptr && access_vfi_pseudowire_static_mac_addresses->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (access_vfi_pw_class.is_set || is_set(access_vfi_pw_class.yfilter)) leaf_name_data.push_back(access_vfi_pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowire-static-mac-addresses")
    {
        if(access_vfi_pseudowire_static_mac_addresses == nullptr)
        {
            access_vfi_pseudowire_static_mac_addresses = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses>();
        }
        return access_vfi_pseudowire_static_mac_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_vfi_pseudowire_static_mac_addresses != nullptr)
    {
        children["access-vfi-pseudowire-static-mac-addresses"] = access_vfi_pseudowire_static_mac_addresses;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-vfi-pw-class")
    {
        access_vfi_pw_class = value;
        access_vfi_pw_class.value_namespace = name_space;
        access_vfi_pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "access-vfi-pw-class")
    {
        access_vfi_pw_class.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowire-static-mac-addresses" || name == "neighbor" || name == "pseudowire-id" || name == "access-vfi-pw-class")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddresses()
{

    yang_name = "access-vfi-pseudowire-static-mac-addresses"; yang_parent_name = "access-vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::~AccessVfiPseudowireStaticMacAddresses()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::has_data() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire_static_mac_address.size(); index++)
    {
        if(access_vfi_pseudowire_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire_static_mac_address.size(); index++)
    {
        if(access_vfi_pseudowire_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowire-static-mac-address")
    {
        for(auto const & c : access_vfi_pseudowire_static_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress>();
        c->parent = this;
        access_vfi_pseudowire_static_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_vfi_pseudowire_static_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowire-static-mac-address")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::AccessVfiPseudowireStaticMacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "access-vfi-pseudowire-static-mac-address"; yang_parent_name = "access-vfi-pseudowire-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::~AccessVfiPseudowireStaticMacAddress()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::has_data() const
{
    return address.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire-static-mac-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuits()
{

    yang_name = "bd-attachment-circuits"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::~BdAttachmentCircuits()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<bd_attachment_circuit.size(); index++)
    {
        if(bd_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<bd_attachment_circuit.size(); index++)
    {
        if(bd_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-attachment-circuit")
    {
        for(auto const & c : bd_attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit>();
        c->parent = this;
        bd_attachment_circuit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bd_attachment_circuit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-attachment-circuit")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdAttachmentCircuit()
    :
    name{YType::str, "name"},
    interface_flooding{YType::enumeration, "interface-flooding"},
    interface_flooding_unknown_unicast{YType::enumeration, "interface-flooding-unknown-unicast"},
    interface_igmp_snoop{YType::str, "interface-igmp-snoop"},
    interface_mld_snoop{YType::str, "interface-mld-snoop"}
    	,
    bdac_storm_control_types(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes>())
	,interface_dai(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai>())
	,interface_ip_source_guard(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard>())
	,interface_mac(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac>())
	,interface_profile(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile>())
	,split_horizon(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon>())
	,static_mac_addresses(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses>())
{
    bdac_storm_control_types->parent = this;
    interface_dai->parent = this;
    interface_ip_source_guard->parent = this;
    interface_mac->parent = this;
    interface_profile->parent = this;
    split_horizon->parent = this;
    static_mac_addresses->parent = this;

    yang_name = "bd-attachment-circuit"; yang_parent_name = "bd-attachment-circuits"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::~BdAttachmentCircuit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::has_data() const
{
    return name.is_set
	|| interface_flooding.is_set
	|| interface_flooding_unknown_unicast.is_set
	|| interface_igmp_snoop.is_set
	|| interface_mld_snoop.is_set
	|| (bdac_storm_control_types !=  nullptr && bdac_storm_control_types->has_data())
	|| (interface_dai !=  nullptr && interface_dai->has_data())
	|| (interface_ip_source_guard !=  nullptr && interface_ip_source_guard->has_data())
	|| (interface_mac !=  nullptr && interface_mac->has_data())
	|| (interface_profile !=  nullptr && interface_profile->has_data())
	|| (split_horizon !=  nullptr && split_horizon->has_data())
	|| (static_mac_addresses !=  nullptr && static_mac_addresses->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_flooding.yfilter)
	|| ydk::is_set(interface_flooding_unknown_unicast.yfilter)
	|| ydk::is_set(interface_igmp_snoop.yfilter)
	|| ydk::is_set(interface_mld_snoop.yfilter)
	|| (bdac_storm_control_types !=  nullptr && bdac_storm_control_types->has_operation())
	|| (interface_dai !=  nullptr && interface_dai->has_operation())
	|| (interface_ip_source_guard !=  nullptr && interface_ip_source_guard->has_operation())
	|| (interface_mac !=  nullptr && interface_mac->has_operation())
	|| (interface_profile !=  nullptr && interface_profile->has_operation())
	|| (split_horizon !=  nullptr && split_horizon->has_operation())
	|| (static_mac_addresses !=  nullptr && static_mac_addresses->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-attachment-circuit" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_flooding.is_set || is_set(interface_flooding.yfilter)) leaf_name_data.push_back(interface_flooding.get_name_leafdata());
    if (interface_flooding_unknown_unicast.is_set || is_set(interface_flooding_unknown_unicast.yfilter)) leaf_name_data.push_back(interface_flooding_unknown_unicast.get_name_leafdata());
    if (interface_igmp_snoop.is_set || is_set(interface_igmp_snoop.yfilter)) leaf_name_data.push_back(interface_igmp_snoop.get_name_leafdata());
    if (interface_mld_snoop.is_set || is_set(interface_mld_snoop.yfilter)) leaf_name_data.push_back(interface_mld_snoop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdac-storm-control-types")
    {
        if(bdac_storm_control_types == nullptr)
        {
            bdac_storm_control_types = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes>();
        }
        return bdac_storm_control_types;
    }

    if(child_yang_name == "interface-dai")
    {
        if(interface_dai == nullptr)
        {
            interface_dai = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai>();
        }
        return interface_dai;
    }

    if(child_yang_name == "interface-ip-source-guard")
    {
        if(interface_ip_source_guard == nullptr)
        {
            interface_ip_source_guard = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard>();
        }
        return interface_ip_source_guard;
    }

    if(child_yang_name == "interface-mac")
    {
        if(interface_mac == nullptr)
        {
            interface_mac = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac>();
        }
        return interface_mac;
    }

    if(child_yang_name == "interface-profile")
    {
        if(interface_profile == nullptr)
        {
            interface_profile = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile>();
        }
        return interface_profile;
    }

    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon>();
        }
        return split_horizon;
    }

    if(child_yang_name == "static-mac-addresses")
    {
        if(static_mac_addresses == nullptr)
        {
            static_mac_addresses = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses>();
        }
        return static_mac_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bdac_storm_control_types != nullptr)
    {
        children["bdac-storm-control-types"] = bdac_storm_control_types;
    }

    if(interface_dai != nullptr)
    {
        children["interface-dai"] = interface_dai;
    }

    if(interface_ip_source_guard != nullptr)
    {
        children["interface-ip-source-guard"] = interface_ip_source_guard;
    }

    if(interface_mac != nullptr)
    {
        children["interface-mac"] = interface_mac;
    }

    if(interface_profile != nullptr)
    {
        children["interface-profile"] = interface_profile;
    }

    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    if(static_mac_addresses != nullptr)
    {
        children["static-mac-addresses"] = static_mac_addresses;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flooding")
    {
        interface_flooding = value;
        interface_flooding.value_namespace = name_space;
        interface_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-flooding-unknown-unicast")
    {
        interface_flooding_unknown_unicast = value;
        interface_flooding_unknown_unicast.value_namespace = name_space;
        interface_flooding_unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-igmp-snoop")
    {
        interface_igmp_snoop = value;
        interface_igmp_snoop.value_namespace = name_space;
        interface_igmp_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mld-snoop")
    {
        interface_mld_snoop = value;
        interface_mld_snoop.value_namespace = name_space;
        interface_mld_snoop.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-flooding")
    {
        interface_flooding.yfilter = yfilter;
    }
    if(value_path == "interface-flooding-unknown-unicast")
    {
        interface_flooding_unknown_unicast.yfilter = yfilter;
    }
    if(value_path == "interface-igmp-snoop")
    {
        interface_igmp_snoop.yfilter = yfilter;
    }
    if(value_path == "interface-mld-snoop")
    {
        interface_mld_snoop.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdac-storm-control-types" || name == "interface-dai" || name == "interface-ip-source-guard" || name == "interface-mac" || name == "interface-profile" || name == "split-horizon" || name == "static-mac-addresses" || name == "name" || name == "interface-flooding" || name == "interface-flooding-unknown-unicast" || name == "interface-igmp-snoop" || name == "interface-mld-snoop")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlTypes()
{

    yang_name = "bdac-storm-control-types"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::~BdacStormControlTypes()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::has_data() const
{
    for (std::size_t index=0; index<bdac_storm_control_type.size(); index++)
    {
        if(bdac_storm_control_type[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::has_operation() const
{
    for (std::size_t index=0; index<bdac_storm_control_type.size(); index++)
    {
        if(bdac_storm_control_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdac-storm-control-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdac-storm-control-type")
    {
        for(auto const & c : bdac_storm_control_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType>();
        c->parent = this;
        bdac_storm_control_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bdac_storm_control_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdac-storm-control-type")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::BdacStormControlType()
    :
    sctype{YType::enumeration, "sctype"}
    	,
    storm_control_unit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit>())
{
    storm_control_unit->parent = this;

    yang_name = "bdac-storm-control-type"; yang_parent_name = "bdac-storm-control-types"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::~BdacStormControlType()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::has_data() const
{
    return sctype.is_set
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sctype.yfilter)
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdac-storm-control-type" <<"[sctype='" <<sctype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sctype.is_set || is_set(sctype.yfilter)) leaf_name_data.push_back(sctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control-unit")
    {
        if(storm_control_unit == nullptr)
        {
            storm_control_unit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit>();
        }
        return storm_control_unit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(storm_control_unit != nullptr)
    {
        children["storm-control-unit"] = storm_control_unit;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sctype")
    {
        sctype = value;
        sctype.value_namespace = name_space;
        sctype.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sctype")
    {
        sctype.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control-unit" || name == "sctype")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::StormControlUnit()
    :
    kbits_per_sec{YType::uint32, "kbits-per-sec"},
    pkts_per_sec{YType::uint32, "pkts-per-sec"}
{

    yang_name = "storm-control-unit"; yang_parent_name = "bdac-storm-control-type"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::~StormControlUnit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::has_data() const
{
    return kbits_per_sec.is_set
	|| pkts_per_sec.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbits_per_sec.yfilter)
	|| ydk::is_set(pkts_per_sec.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control-unit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbits_per_sec.is_set || is_set(kbits_per_sec.yfilter)) leaf_name_data.push_back(kbits_per_sec.get_name_leafdata());
    if (pkts_per_sec.is_set || is_set(pkts_per_sec.yfilter)) leaf_name_data.push_back(pkts_per_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec = value;
        kbits_per_sec.value_namespace = name_space;
        kbits_per_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec = value;
        pkts_per_sec.value_namespace = name_space;
        pkts_per_sec.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec.yfilter = yfilter;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbits-per-sec" || name == "pkts-per-sec")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDai()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
    	,
    interface_dai_address_validation(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation>())
{
    interface_dai_address_validation->parent = this;

    yang_name = "interface-dai"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::~InterfaceDai()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::has_data() const
{
    return disable.is_set
	|| enable.is_set
	|| logging.is_set
	|| (interface_dai_address_validation !=  nullptr && interface_dai_address_validation->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| (interface_dai_address_validation !=  nullptr && interface_dai_address_validation->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dai";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-dai-address-validation")
    {
        if(interface_dai_address_validation == nullptr)
        {
            interface_dai_address_validation = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation>();
        }
        return interface_dai_address_validation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_dai_address_validation != nullptr)
    {
        children["interface-dai-address-validation"] = interface_dai_address_validation;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-dai-address-validation" || name == "disable" || name == "enable" || name == "logging")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::InterfaceDaiAddressValidation()
    :
    destination_mac_verification{YType::enumeration, "destination-mac-verification"},
    enable{YType::empty, "enable"},
    ipv4_verification{YType::enumeration, "ipv4-verification"},
    source_mac_verification{YType::enumeration, "source-mac-verification"}
{

    yang_name = "interface-dai-address-validation"; yang_parent_name = "interface-dai"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::~InterfaceDaiAddressValidation()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::has_data() const
{
    return destination_mac_verification.is_set
	|| enable.is_set
	|| ipv4_verification.is_set
	|| source_mac_verification.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_mac_verification.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(ipv4_verification.yfilter)
	|| ydk::is_set(source_mac_verification.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dai-address-validation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_mac_verification.is_set || is_set(destination_mac_verification.yfilter)) leaf_name_data.push_back(destination_mac_verification.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_verification.is_set || is_set(ipv4_verification.yfilter)) leaf_name_data.push_back(ipv4_verification.get_name_leafdata());
    if (source_mac_verification.is_set || is_set(source_mac_verification.yfilter)) leaf_name_data.push_back(source_mac_verification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification = value;
        destination_mac_verification.value_namespace = name_space;
        destination_mac_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-verification")
    {
        ipv4_verification = value;
        ipv4_verification.value_namespace = name_space;
        ipv4_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification = value;
        source_mac_verification.value_namespace = name_space;
        source_mac_verification.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "ipv4-verification")
    {
        ipv4_verification.yfilter = yfilter;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-mac-verification" || name == "enable" || name == "ipv4-verification" || name == "source-mac-verification")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::InterfaceIpSourceGuard()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
{

    yang_name = "interface-ip-source-guard"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::~InterfaceIpSourceGuard()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::has_data() const
{
    return disable.is_set
	|| enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ip-source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "enable" || name == "logging")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMac()
    :
    interface_mac_learning{YType::enumeration, "interface-mac-learning"},
    interface_mac_port_down_flush{YType::enumeration, "interface-mac-port-down-flush"}
    	,
    interface_mac_aging(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging>())
	,interface_mac_limit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit>())
	,interface_mac_secure(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure>())
{
    interface_mac_aging->parent = this;
    interface_mac_limit->parent = this;
    interface_mac_secure->parent = this;

    yang_name = "interface-mac"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::~InterfaceMac()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::has_data() const
{
    return interface_mac_learning.is_set
	|| interface_mac_port_down_flush.is_set
	|| (interface_mac_aging !=  nullptr && interface_mac_aging->has_data())
	|| (interface_mac_limit !=  nullptr && interface_mac_limit->has_data())
	|| (interface_mac_secure !=  nullptr && interface_mac_secure->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_mac_learning.yfilter)
	|| ydk::is_set(interface_mac_port_down_flush.yfilter)
	|| (interface_mac_aging !=  nullptr && interface_mac_aging->has_operation())
	|| (interface_mac_limit !=  nullptr && interface_mac_limit->has_operation())
	|| (interface_mac_secure !=  nullptr && interface_mac_secure->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_mac_learning.is_set || is_set(interface_mac_learning.yfilter)) leaf_name_data.push_back(interface_mac_learning.get_name_leafdata());
    if (interface_mac_port_down_flush.is_set || is_set(interface_mac_port_down_flush.yfilter)) leaf_name_data.push_back(interface_mac_port_down_flush.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-mac-aging")
    {
        if(interface_mac_aging == nullptr)
        {
            interface_mac_aging = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging>();
        }
        return interface_mac_aging;
    }

    if(child_yang_name == "interface-mac-limit")
    {
        if(interface_mac_limit == nullptr)
        {
            interface_mac_limit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit>();
        }
        return interface_mac_limit;
    }

    if(child_yang_name == "interface-mac-secure")
    {
        if(interface_mac_secure == nullptr)
        {
            interface_mac_secure = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure>();
        }
        return interface_mac_secure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_mac_aging != nullptr)
    {
        children["interface-mac-aging"] = interface_mac_aging;
    }

    if(interface_mac_limit != nullptr)
    {
        children["interface-mac-limit"] = interface_mac_limit;
    }

    if(interface_mac_secure != nullptr)
    {
        children["interface-mac-secure"] = interface_mac_secure;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-mac-learning")
    {
        interface_mac_learning = value;
        interface_mac_learning.value_namespace = name_space;
        interface_mac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mac-port-down-flush")
    {
        interface_mac_port_down_flush = value;
        interface_mac_port_down_flush.value_namespace = name_space;
        interface_mac_port_down_flush.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-mac-learning")
    {
        interface_mac_learning.yfilter = yfilter;
    }
    if(value_path == "interface-mac-port-down-flush")
    {
        interface_mac_port_down_flush.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-mac-aging" || name == "interface-mac-limit" || name == "interface-mac-secure" || name == "interface-mac-learning" || name == "interface-mac-port-down-flush")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::InterfaceMacAging()
    :
    interface_mac_aging_time{YType::uint32, "interface-mac-aging-time"},
    interface_mac_aging_type{YType::enumeration, "interface-mac-aging-type"}
{

    yang_name = "interface-mac-aging"; yang_parent_name = "interface-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::~InterfaceMacAging()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::has_data() const
{
    return interface_mac_aging_time.is_set
	|| interface_mac_aging_type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_mac_aging_time.yfilter)
	|| ydk::is_set(interface_mac_aging_type.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_mac_aging_time.is_set || is_set(interface_mac_aging_time.yfilter)) leaf_name_data.push_back(interface_mac_aging_time.get_name_leafdata());
    if (interface_mac_aging_type.is_set || is_set(interface_mac_aging_type.yfilter)) leaf_name_data.push_back(interface_mac_aging_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-mac-aging-time")
    {
        interface_mac_aging_time = value;
        interface_mac_aging_time.value_namespace = name_space;
        interface_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mac-aging-type")
    {
        interface_mac_aging_type = value;
        interface_mac_aging_type.value_namespace = name_space;
        interface_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-mac-aging-time")
    {
        interface_mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "interface-mac-aging-type")
    {
        interface_mac_aging_type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-mac-aging-time" || name == "interface-mac-aging-type")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::InterfaceMacLimit()
    :
    interface_mac_limit_action{YType::enumeration, "interface-mac-limit-action"},
    interface_mac_limit_max{YType::uint32, "interface-mac-limit-max"},
    interface_mac_limit_notif{YType::enumeration, "interface-mac-limit-notif"}
{

    yang_name = "interface-mac-limit"; yang_parent_name = "interface-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::~InterfaceMacLimit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::has_data() const
{
    return interface_mac_limit_action.is_set
	|| interface_mac_limit_max.is_set
	|| interface_mac_limit_notif.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_mac_limit_action.yfilter)
	|| ydk::is_set(interface_mac_limit_max.yfilter)
	|| ydk::is_set(interface_mac_limit_notif.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_mac_limit_action.is_set || is_set(interface_mac_limit_action.yfilter)) leaf_name_data.push_back(interface_mac_limit_action.get_name_leafdata());
    if (interface_mac_limit_max.is_set || is_set(interface_mac_limit_max.yfilter)) leaf_name_data.push_back(interface_mac_limit_max.get_name_leafdata());
    if (interface_mac_limit_notif.is_set || is_set(interface_mac_limit_notif.yfilter)) leaf_name_data.push_back(interface_mac_limit_notif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-mac-limit-action")
    {
        interface_mac_limit_action = value;
        interface_mac_limit_action.value_namespace = name_space;
        interface_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mac-limit-max")
    {
        interface_mac_limit_max = value;
        interface_mac_limit_max.value_namespace = name_space;
        interface_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-mac-limit-notif")
    {
        interface_mac_limit_notif = value;
        interface_mac_limit_notif.value_namespace = name_space;
        interface_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-mac-limit-action")
    {
        interface_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "interface-mac-limit-max")
    {
        interface_mac_limit_max.yfilter = yfilter;
    }
    if(value_path == "interface-mac-limit-notif")
    {
        interface_mac_limit_notif.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-mac-limit-action" || name == "interface-mac-limit-max" || name == "interface-mac-limit-notif")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::InterfaceMacSecure()
    :
    action{YType::enumeration, "action"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
{

    yang_name = "interface-mac-secure"; yang_parent_name = "interface-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::~InterfaceMacSecure()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::has_data() const
{
    return action.is_set
	|| disable.is_set
	|| enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "disable" || name == "enable" || name == "logging")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::InterfaceProfile()
    :
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"},
    profile_id{YType::enumeration, "profile-id"}
{

    yang_name = "interface-profile"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::~InterfaceProfile()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::has_data() const
{
    return dhcp_snooping_id.is_set
	|| profile_id.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter)
	|| ydk::is_set(profile_id.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
        dhcp_snooping_id.value_namespace = name_space;
        dhcp_snooping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping-id" || name == "profile-id")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizon()
    :
    split_horizon_group_id(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId>())
{
    split_horizon_group_id->parent = this;

    yang_name = "split-horizon"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::~SplitHorizon()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::has_data() const
{
    return (split_horizon_group_id !=  nullptr && split_horizon_group_id->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| (split_horizon_group_id !=  nullptr && split_horizon_group_id->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon-group-id")
    {
        if(split_horizon_group_id == nullptr)
        {
            split_horizon_group_id = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId>();
        }
        return split_horizon_group_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split_horizon_group_id != nullptr)
    {
        children["split-horizon-group-id"] = split_horizon_group_id;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon-group-id")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::SplitHorizonGroupId()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "split-horizon-group-id"; yang_parent_name = "split-horizon"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::~SplitHorizonGroupId()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::has_data() const
{
    return enable.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddresses()
{

    yang_name = "static-mac-addresses"; yang_parent_name = "bd-attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::~StaticMacAddresses()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::has_data() const
{
    for (std::size_t index=0; index<static_mac_address.size(); index++)
    {
        if(static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<static_mac_address.size(); index++)
    {
        if(static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-mac-address")
    {
        for(auto const & c : static_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress>();
        c->parent = this;
        static_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : static_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-mac-address")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::StaticMacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "static-mac-address"; yang_parent_name = "static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::~StaticMacAddress()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::has_data() const
{
    return address.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mac-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpns()
{

    yang_name = "bd-pseudowire-evpns"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::~BdPseudowireEvpns()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::has_data() const
{
    for (std::size_t index=0; index<bd_pseudowire_evpn.size(); index++)
    {
        if(bd_pseudowire_evpn[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::has_operation() const
{
    for (std::size_t index=0; index<bd_pseudowire_evpn.size(); index++)
    {
        if(bd_pseudowire_evpn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowire-evpns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pseudowire-evpn")
    {
        for(auto const & c : bd_pseudowire_evpn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn>();
        c->parent = this;
        bd_pseudowire_evpn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bd_pseudowire_evpn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pseudowire-evpn")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::BdPseudowireEvpn()
    :
    eviid{YType::uint32, "eviid"},
    acid{YType::uint32, "acid"}
{

    yang_name = "bd-pseudowire-evpn"; yang_parent_name = "bd-pseudowire-evpns"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::~BdPseudowireEvpn()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::has_data() const
{
    return eviid.is_set
	|| acid.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| ydk::is_set(acid.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowire-evpn" <<"[eviid='" <<eviid <<"']" <<"[acid='" <<acid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (acid.is_set || is_set(acid.yfilter)) leaf_name_data.push_back(acid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acid")
    {
        acid = value;
        acid.value_namespace = name_space;
        acid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
    if(value_path == "acid")
    {
        acid.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eviid" || name == "acid")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowires()
{

    yang_name = "bd-pseudowires"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::~BdPseudowires()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::has_data() const
{
    for (std::size_t index=0; index<bd_pseudowire.size(); index++)
    {
        if(bd_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::has_operation() const
{
    for (std::size_t index=0; index<bd_pseudowire.size(); index++)
    {
        if(bd_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pseudowire")
    {
        for(auto const & c : bd_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire>();
        c->parent = this;
        bd_pseudowire.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bd_pseudowire)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pseudowire")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    bd_pw_class{YType::str, "bd-pw-class"},
    pseudowire_flooding{YType::enumeration, "pseudowire-flooding"},
    pseudowire_flooding_unknown_unicast{YType::enumeration, "pseudowire-flooding-unknown-unicast"},
    pseudowire_igmp_snoop{YType::str, "pseudowire-igmp-snoop"},
    pseudowire_mld_snoop{YType::str, "pseudowire-mld-snoop"}
    	,
    bd_pw_mpls_static_labels(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels>())
	,bd_pw_split_horizon(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon>())
	,bd_pw_static_mac_addresses(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses>())
	,bdpw_storm_control_types(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes>())
	,bridge_domain_backup_pseudowires(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires>())
	,pseudowire_dai(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai>())
	,pseudowire_ip_source_guard(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard>())
	,pseudowire_mac(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac>())
	,pseudowire_profile(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile>())
{
    bd_pw_mpls_static_labels->parent = this;
    bd_pw_split_horizon->parent = this;
    bd_pw_static_mac_addresses->parent = this;
    bdpw_storm_control_types->parent = this;
    bridge_domain_backup_pseudowires->parent = this;
    pseudowire_dai->parent = this;
    pseudowire_ip_source_guard->parent = this;
    pseudowire_mac->parent = this;
    pseudowire_profile->parent = this;

    yang_name = "bd-pseudowire"; yang_parent_name = "bd-pseudowires"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::~BdPseudowire()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| bd_pw_class.is_set
	|| pseudowire_flooding.is_set
	|| pseudowire_flooding_unknown_unicast.is_set
	|| pseudowire_igmp_snoop.is_set
	|| pseudowire_mld_snoop.is_set
	|| (bd_pw_mpls_static_labels !=  nullptr && bd_pw_mpls_static_labels->has_data())
	|| (bd_pw_split_horizon !=  nullptr && bd_pw_split_horizon->has_data())
	|| (bd_pw_static_mac_addresses !=  nullptr && bd_pw_static_mac_addresses->has_data())
	|| (bdpw_storm_control_types !=  nullptr && bdpw_storm_control_types->has_data())
	|| (bridge_domain_backup_pseudowires !=  nullptr && bridge_domain_backup_pseudowires->has_data())
	|| (pseudowire_dai !=  nullptr && pseudowire_dai->has_data())
	|| (pseudowire_ip_source_guard !=  nullptr && pseudowire_ip_source_guard->has_data())
	|| (pseudowire_mac !=  nullptr && pseudowire_mac->has_data())
	|| (pseudowire_profile !=  nullptr && pseudowire_profile->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(bd_pw_class.yfilter)
	|| ydk::is_set(pseudowire_flooding.yfilter)
	|| ydk::is_set(pseudowire_flooding_unknown_unicast.yfilter)
	|| ydk::is_set(pseudowire_igmp_snoop.yfilter)
	|| ydk::is_set(pseudowire_mld_snoop.yfilter)
	|| (bd_pw_mpls_static_labels !=  nullptr && bd_pw_mpls_static_labels->has_operation())
	|| (bd_pw_split_horizon !=  nullptr && bd_pw_split_horizon->has_operation())
	|| (bd_pw_static_mac_addresses !=  nullptr && bd_pw_static_mac_addresses->has_operation())
	|| (bdpw_storm_control_types !=  nullptr && bdpw_storm_control_types->has_operation())
	|| (bridge_domain_backup_pseudowires !=  nullptr && bridge_domain_backup_pseudowires->has_operation())
	|| (pseudowire_dai !=  nullptr && pseudowire_dai->has_operation())
	|| (pseudowire_ip_source_guard !=  nullptr && pseudowire_ip_source_guard->has_operation())
	|| (pseudowire_mac !=  nullptr && pseudowire_mac->has_operation())
	|| (pseudowire_profile !=  nullptr && pseudowire_profile->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (bd_pw_class.is_set || is_set(bd_pw_class.yfilter)) leaf_name_data.push_back(bd_pw_class.get_name_leafdata());
    if (pseudowire_flooding.is_set || is_set(pseudowire_flooding.yfilter)) leaf_name_data.push_back(pseudowire_flooding.get_name_leafdata());
    if (pseudowire_flooding_unknown_unicast.is_set || is_set(pseudowire_flooding_unknown_unicast.yfilter)) leaf_name_data.push_back(pseudowire_flooding_unknown_unicast.get_name_leafdata());
    if (pseudowire_igmp_snoop.is_set || is_set(pseudowire_igmp_snoop.yfilter)) leaf_name_data.push_back(pseudowire_igmp_snoop.get_name_leafdata());
    if (pseudowire_mld_snoop.is_set || is_set(pseudowire_mld_snoop.yfilter)) leaf_name_data.push_back(pseudowire_mld_snoop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pw-mpls-static-labels")
    {
        if(bd_pw_mpls_static_labels == nullptr)
        {
            bd_pw_mpls_static_labels = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels>();
        }
        return bd_pw_mpls_static_labels;
    }

    if(child_yang_name == "bd-pw-split-horizon")
    {
        if(bd_pw_split_horizon == nullptr)
        {
            bd_pw_split_horizon = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon>();
        }
        return bd_pw_split_horizon;
    }

    if(child_yang_name == "bd-pw-static-mac-addresses")
    {
        if(bd_pw_static_mac_addresses == nullptr)
        {
            bd_pw_static_mac_addresses = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses>();
        }
        return bd_pw_static_mac_addresses;
    }

    if(child_yang_name == "bdpw-storm-control-types")
    {
        if(bdpw_storm_control_types == nullptr)
        {
            bdpw_storm_control_types = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes>();
        }
        return bdpw_storm_control_types;
    }

    if(child_yang_name == "bridge-domain-backup-pseudowires")
    {
        if(bridge_domain_backup_pseudowires == nullptr)
        {
            bridge_domain_backup_pseudowires = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires>();
        }
        return bridge_domain_backup_pseudowires;
    }

    if(child_yang_name == "pseudowire-dai")
    {
        if(pseudowire_dai == nullptr)
        {
            pseudowire_dai = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai>();
        }
        return pseudowire_dai;
    }

    if(child_yang_name == "pseudowire-ip-source-guard")
    {
        if(pseudowire_ip_source_guard == nullptr)
        {
            pseudowire_ip_source_guard = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard>();
        }
        return pseudowire_ip_source_guard;
    }

    if(child_yang_name == "pseudowire-mac")
    {
        if(pseudowire_mac == nullptr)
        {
            pseudowire_mac = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac>();
        }
        return pseudowire_mac;
    }

    if(child_yang_name == "pseudowire-profile")
    {
        if(pseudowire_profile == nullptr)
        {
            pseudowire_profile = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile>();
        }
        return pseudowire_profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bd_pw_mpls_static_labels != nullptr)
    {
        children["bd-pw-mpls-static-labels"] = bd_pw_mpls_static_labels;
    }

    if(bd_pw_split_horizon != nullptr)
    {
        children["bd-pw-split-horizon"] = bd_pw_split_horizon;
    }

    if(bd_pw_static_mac_addresses != nullptr)
    {
        children["bd-pw-static-mac-addresses"] = bd_pw_static_mac_addresses;
    }

    if(bdpw_storm_control_types != nullptr)
    {
        children["bdpw-storm-control-types"] = bdpw_storm_control_types;
    }

    if(bridge_domain_backup_pseudowires != nullptr)
    {
        children["bridge-domain-backup-pseudowires"] = bridge_domain_backup_pseudowires;
    }

    if(pseudowire_dai != nullptr)
    {
        children["pseudowire-dai"] = pseudowire_dai;
    }

    if(pseudowire_ip_source_guard != nullptr)
    {
        children["pseudowire-ip-source-guard"] = pseudowire_ip_source_guard;
    }

    if(pseudowire_mac != nullptr)
    {
        children["pseudowire-mac"] = pseudowire_mac;
    }

    if(pseudowire_profile != nullptr)
    {
        children["pseudowire-profile"] = pseudowire_profile;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-pw-class")
    {
        bd_pw_class = value;
        bd_pw_class.value_namespace = name_space;
        bd_pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-flooding")
    {
        pseudowire_flooding = value;
        pseudowire_flooding.value_namespace = name_space;
        pseudowire_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-flooding-unknown-unicast")
    {
        pseudowire_flooding_unknown_unicast = value;
        pseudowire_flooding_unknown_unicast.value_namespace = name_space;
        pseudowire_flooding_unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-igmp-snoop")
    {
        pseudowire_igmp_snoop = value;
        pseudowire_igmp_snoop.value_namespace = name_space;
        pseudowire_igmp_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mld-snoop")
    {
        pseudowire_mld_snoop = value;
        pseudowire_mld_snoop.value_namespace = name_space;
        pseudowire_mld_snoop.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "bd-pw-class")
    {
        bd_pw_class.yfilter = yfilter;
    }
    if(value_path == "pseudowire-flooding")
    {
        pseudowire_flooding.yfilter = yfilter;
    }
    if(value_path == "pseudowire-flooding-unknown-unicast")
    {
        pseudowire_flooding_unknown_unicast.yfilter = yfilter;
    }
    if(value_path == "pseudowire-igmp-snoop")
    {
        pseudowire_igmp_snoop.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mld-snoop")
    {
        pseudowire_mld_snoop.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pw-mpls-static-labels" || name == "bd-pw-split-horizon" || name == "bd-pw-static-mac-addresses" || name == "bdpw-storm-control-types" || name == "bridge-domain-backup-pseudowires" || name == "pseudowire-dai" || name == "pseudowire-ip-source-guard" || name == "pseudowire-mac" || name == "pseudowire-profile" || name == "neighbor" || name == "pseudowire-id" || name == "bd-pw-class" || name == "pseudowire-flooding" || name == "pseudowire-flooding-unknown-unicast" || name == "pseudowire-igmp-snoop" || name == "pseudowire-mld-snoop")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::BdPwMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "bd-pw-mpls-static-labels"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::~BdPwMplsStaticLabels()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizon()
    :
    bd_pw_split_horizon_group(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup>())
{
    bd_pw_split_horizon_group->parent = this;

    yang_name = "bd-pw-split-horizon"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::~BdPwSplitHorizon()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::has_data() const
{
    return (bd_pw_split_horizon_group !=  nullptr && bd_pw_split_horizon_group->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| (bd_pw_split_horizon_group !=  nullptr && bd_pw_split_horizon_group->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pw-split-horizon-group")
    {
        if(bd_pw_split_horizon_group == nullptr)
        {
            bd_pw_split_horizon_group = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup>();
        }
        return bd_pw_split_horizon_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bd_pw_split_horizon_group != nullptr)
    {
        children["bd-pw-split-horizon-group"] = bd_pw_split_horizon_group;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pw-split-horizon-group")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::BdPwSplitHorizonGroup()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bd-pw-split-horizon-group"; yang_parent_name = "bd-pw-split-horizon"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::~BdPwSplitHorizonGroup()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::has_data() const
{
    return enable.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-split-horizon-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddresses()
{

    yang_name = "bd-pw-static-mac-addresses"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::~BdPwStaticMacAddresses()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::has_data() const
{
    for (std::size_t index=0; index<bd_pw_static_mac_address.size(); index++)
    {
        if(bd_pw_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<bd_pw_static_mac_address.size(); index++)
    {
        if(bd_pw_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pw-static-mac-address")
    {
        for(auto const & c : bd_pw_static_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress>();
        c->parent = this;
        bd_pw_static_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bd_pw_static_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pw-static-mac-address")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::BdPwStaticMacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "bd-pw-static-mac-address"; yang_parent_name = "bd-pw-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::~BdPwStaticMacAddress()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::has_data() const
{
    return address.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-static-mac-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlTypes()
{

    yang_name = "bdpw-storm-control-types"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::~BdpwStormControlTypes()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::has_data() const
{
    for (std::size_t index=0; index<bdpw_storm_control_type.size(); index++)
    {
        if(bdpw_storm_control_type[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::has_operation() const
{
    for (std::size_t index=0; index<bdpw_storm_control_type.size(); index++)
    {
        if(bdpw_storm_control_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdpw-storm-control-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdpw-storm-control-type")
    {
        for(auto const & c : bdpw_storm_control_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType>();
        c->parent = this;
        bdpw_storm_control_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bdpw_storm_control_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdpw-storm-control-type")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::BdpwStormControlType()
    :
    sctype{YType::enumeration, "sctype"}
    	,
    storm_control_unit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit>())
{
    storm_control_unit->parent = this;

    yang_name = "bdpw-storm-control-type"; yang_parent_name = "bdpw-storm-control-types"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::~BdpwStormControlType()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::has_data() const
{
    return sctype.is_set
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sctype.yfilter)
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdpw-storm-control-type" <<"[sctype='" <<sctype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sctype.is_set || is_set(sctype.yfilter)) leaf_name_data.push_back(sctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control-unit")
    {
        if(storm_control_unit == nullptr)
        {
            storm_control_unit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit>();
        }
        return storm_control_unit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(storm_control_unit != nullptr)
    {
        children["storm-control-unit"] = storm_control_unit;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sctype")
    {
        sctype = value;
        sctype.value_namespace = name_space;
        sctype.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sctype")
    {
        sctype.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control-unit" || name == "sctype")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::StormControlUnit()
    :
    kbits_per_sec{YType::uint32, "kbits-per-sec"},
    pkts_per_sec{YType::uint32, "pkts-per-sec"}
{

    yang_name = "storm-control-unit"; yang_parent_name = "bdpw-storm-control-type"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::~StormControlUnit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::has_data() const
{
    return kbits_per_sec.is_set
	|| pkts_per_sec.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbits_per_sec.yfilter)
	|| ydk::is_set(pkts_per_sec.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control-unit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbits_per_sec.is_set || is_set(kbits_per_sec.yfilter)) leaf_name_data.push_back(kbits_per_sec.get_name_leafdata());
    if (pkts_per_sec.is_set || is_set(pkts_per_sec.yfilter)) leaf_name_data.push_back(pkts_per_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec = value;
        kbits_per_sec.value_namespace = name_space;
        kbits_per_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec = value;
        pkts_per_sec.value_namespace = name_space;
        pkts_per_sec.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec.yfilter = yfilter;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbits-per-sec" || name == "pkts-per-sec")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowires()
{

    yang_name = "bridge-domain-backup-pseudowires"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::~BridgeDomainBackupPseudowires()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::has_data() const
{
    for (std::size_t index=0; index<bridge_domain_backup_pseudowire.size(); index++)
    {
        if(bridge_domain_backup_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain_backup_pseudowire.size(); index++)
    {
        if(bridge_domain_backup_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-backup-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain-backup-pseudowire")
    {
        for(auto const & c : bridge_domain_backup_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire>();
        c->parent = this;
        bridge_domain_backup_pseudowire.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bridge_domain_backup_pseudowire)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-backup-pseudowire")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::BridgeDomainBackupPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    bridge_domain_backup_pw_class{YType::str, "bridge-domain-backup-pw-class"}
{

    yang_name = "bridge-domain-backup-pseudowire"; yang_parent_name = "bridge-domain-backup-pseudowires"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::~BridgeDomainBackupPseudowire()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| bridge_domain_backup_pw_class.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(bridge_domain_backup_pw_class.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-backup-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (bridge_domain_backup_pw_class.is_set || is_set(bridge_domain_backup_pw_class.yfilter)) leaf_name_data.push_back(bridge_domain_backup_pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-backup-pw-class")
    {
        bridge_domain_backup_pw_class = value;
        bridge_domain_backup_pw_class.value_namespace = name_space;
        bridge_domain_backup_pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-backup-pw-class")
    {
        bridge_domain_backup_pw_class.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "pseudowire-id" || name == "bridge-domain-backup-pw-class")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDai()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
    	,
    pseudowire_dai_address_validation(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation>())
{
    pseudowire_dai_address_validation->parent = this;

    yang_name = "pseudowire-dai"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::~PseudowireDai()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::has_data() const
{
    return disable.is_set
	|| enable.is_set
	|| logging.is_set
	|| (pseudowire_dai_address_validation !=  nullptr && pseudowire_dai_address_validation->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| (pseudowire_dai_address_validation !=  nullptr && pseudowire_dai_address_validation->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-dai";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-dai-address-validation")
    {
        if(pseudowire_dai_address_validation == nullptr)
        {
            pseudowire_dai_address_validation = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation>();
        }
        return pseudowire_dai_address_validation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire_dai_address_validation != nullptr)
    {
        children["pseudowire-dai-address-validation"] = pseudowire_dai_address_validation;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-dai-address-validation" || name == "disable" || name == "enable" || name == "logging")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::PseudowireDaiAddressValidation()
    :
    destination_mac_verification{YType::enumeration, "destination-mac-verification"},
    ipv4_verification{YType::enumeration, "ipv4-verification"},
    source_mac_verification{YType::enumeration, "source-mac-verification"}
{

    yang_name = "pseudowire-dai-address-validation"; yang_parent_name = "pseudowire-dai"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::~PseudowireDaiAddressValidation()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::has_data() const
{
    return destination_mac_verification.is_set
	|| ipv4_verification.is_set
	|| source_mac_verification.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_mac_verification.yfilter)
	|| ydk::is_set(ipv4_verification.yfilter)
	|| ydk::is_set(source_mac_verification.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-dai-address-validation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_mac_verification.is_set || is_set(destination_mac_verification.yfilter)) leaf_name_data.push_back(destination_mac_verification.get_name_leafdata());
    if (ipv4_verification.is_set || is_set(ipv4_verification.yfilter)) leaf_name_data.push_back(ipv4_verification.get_name_leafdata());
    if (source_mac_verification.is_set || is_set(source_mac_verification.yfilter)) leaf_name_data.push_back(source_mac_verification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification = value;
        destination_mac_verification.value_namespace = name_space;
        destination_mac_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-verification")
    {
        ipv4_verification = value;
        ipv4_verification.value_namespace = name_space;
        ipv4_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification = value;
        source_mac_verification.value_namespace = name_space;
        source_mac_verification.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification.yfilter = yfilter;
    }
    if(value_path == "ipv4-verification")
    {
        ipv4_verification.yfilter = yfilter;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-mac-verification" || name == "ipv4-verification" || name == "source-mac-verification")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::PseudowireIpSourceGuard()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
{

    yang_name = "pseudowire-ip-source-guard"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::~PseudowireIpSourceGuard()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::has_data() const
{
    return disable.is_set
	|| enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ip-source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "enable" || name == "logging")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMac()
    :
    enable{YType::empty, "enable"},
    pseudowire_mac_learning{YType::enumeration, "pseudowire-mac-learning"},
    pseudowire_mac_port_down_flush{YType::enumeration, "pseudowire-mac-port-down-flush"}
    	,
    pseudowire_mac_aging(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging>())
	,pseudowire_mac_limit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit>())
	,pseudowire_mac_secure(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure>())
{
    pseudowire_mac_aging->parent = this;
    pseudowire_mac_limit->parent = this;
    pseudowire_mac_secure->parent = this;

    yang_name = "pseudowire-mac"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::~PseudowireMac()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::has_data() const
{
    return enable.is_set
	|| pseudowire_mac_learning.is_set
	|| pseudowire_mac_port_down_flush.is_set
	|| (pseudowire_mac_aging !=  nullptr && pseudowire_mac_aging->has_data())
	|| (pseudowire_mac_limit !=  nullptr && pseudowire_mac_limit->has_data())
	|| (pseudowire_mac_secure !=  nullptr && pseudowire_mac_secure->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(pseudowire_mac_learning.yfilter)
	|| ydk::is_set(pseudowire_mac_port_down_flush.yfilter)
	|| (pseudowire_mac_aging !=  nullptr && pseudowire_mac_aging->has_operation())
	|| (pseudowire_mac_limit !=  nullptr && pseudowire_mac_limit->has_operation())
	|| (pseudowire_mac_secure !=  nullptr && pseudowire_mac_secure->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (pseudowire_mac_learning.is_set || is_set(pseudowire_mac_learning.yfilter)) leaf_name_data.push_back(pseudowire_mac_learning.get_name_leafdata());
    if (pseudowire_mac_port_down_flush.is_set || is_set(pseudowire_mac_port_down_flush.yfilter)) leaf_name_data.push_back(pseudowire_mac_port_down_flush.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-mac-aging")
    {
        if(pseudowire_mac_aging == nullptr)
        {
            pseudowire_mac_aging = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging>();
        }
        return pseudowire_mac_aging;
    }

    if(child_yang_name == "pseudowire-mac-limit")
    {
        if(pseudowire_mac_limit == nullptr)
        {
            pseudowire_mac_limit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit>();
        }
        return pseudowire_mac_limit;
    }

    if(child_yang_name == "pseudowire-mac-secure")
    {
        if(pseudowire_mac_secure == nullptr)
        {
            pseudowire_mac_secure = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure>();
        }
        return pseudowire_mac_secure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire_mac_aging != nullptr)
    {
        children["pseudowire-mac-aging"] = pseudowire_mac_aging;
    }

    if(pseudowire_mac_limit != nullptr)
    {
        children["pseudowire-mac-limit"] = pseudowire_mac_limit;
    }

    if(pseudowire_mac_secure != nullptr)
    {
        children["pseudowire-mac-secure"] = pseudowire_mac_secure;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-learning")
    {
        pseudowire_mac_learning = value;
        pseudowire_mac_learning.value_namespace = name_space;
        pseudowire_mac_learning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-port-down-flush")
    {
        pseudowire_mac_port_down_flush = value;
        pseudowire_mac_port_down_flush.value_namespace = name_space;
        pseudowire_mac_port_down_flush.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-learning")
    {
        pseudowire_mac_learning.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-port-down-flush")
    {
        pseudowire_mac_port_down_flush.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-mac-aging" || name == "pseudowire-mac-limit" || name == "pseudowire-mac-secure" || name == "enable" || name == "pseudowire-mac-learning" || name == "pseudowire-mac-port-down-flush")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::PseudowireMacAging()
    :
    pseudowire_mac_aging_time{YType::uint32, "pseudowire-mac-aging-time"},
    pseudowire_mac_aging_type{YType::enumeration, "pseudowire-mac-aging-type"}
{

    yang_name = "pseudowire-mac-aging"; yang_parent_name = "pseudowire-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::~PseudowireMacAging()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::has_data() const
{
    return pseudowire_mac_aging_time.is_set
	|| pseudowire_mac_aging_type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_mac_aging_time.yfilter)
	|| ydk::is_set(pseudowire_mac_aging_type.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_mac_aging_time.is_set || is_set(pseudowire_mac_aging_time.yfilter)) leaf_name_data.push_back(pseudowire_mac_aging_time.get_name_leafdata());
    if (pseudowire_mac_aging_type.is_set || is_set(pseudowire_mac_aging_type.yfilter)) leaf_name_data.push_back(pseudowire_mac_aging_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-mac-aging-time")
    {
        pseudowire_mac_aging_time = value;
        pseudowire_mac_aging_time.value_namespace = name_space;
        pseudowire_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-aging-type")
    {
        pseudowire_mac_aging_type = value;
        pseudowire_mac_aging_type.value_namespace = name_space;
        pseudowire_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-mac-aging-time")
    {
        pseudowire_mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-aging-type")
    {
        pseudowire_mac_aging_type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-mac-aging-time" || name == "pseudowire-mac-aging-type")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::PseudowireMacLimit()
    :
    pseudowire_mac_limit_action{YType::enumeration, "pseudowire-mac-limit-action"},
    pseudowire_mac_limit_max{YType::uint32, "pseudowire-mac-limit-max"},
    pseudowire_mac_limit_notif{YType::enumeration, "pseudowire-mac-limit-notif"}
{

    yang_name = "pseudowire-mac-limit"; yang_parent_name = "pseudowire-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::~PseudowireMacLimit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::has_data() const
{
    return pseudowire_mac_limit_action.is_set
	|| pseudowire_mac_limit_max.is_set
	|| pseudowire_mac_limit_notif.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_mac_limit_action.yfilter)
	|| ydk::is_set(pseudowire_mac_limit_max.yfilter)
	|| ydk::is_set(pseudowire_mac_limit_notif.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_mac_limit_action.is_set || is_set(pseudowire_mac_limit_action.yfilter)) leaf_name_data.push_back(pseudowire_mac_limit_action.get_name_leafdata());
    if (pseudowire_mac_limit_max.is_set || is_set(pseudowire_mac_limit_max.yfilter)) leaf_name_data.push_back(pseudowire_mac_limit_max.get_name_leafdata());
    if (pseudowire_mac_limit_notif.is_set || is_set(pseudowire_mac_limit_notif.yfilter)) leaf_name_data.push_back(pseudowire_mac_limit_notif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-mac-limit-action")
    {
        pseudowire_mac_limit_action = value;
        pseudowire_mac_limit_action.value_namespace = name_space;
        pseudowire_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-limit-max")
    {
        pseudowire_mac_limit_max = value;
        pseudowire_mac_limit_max.value_namespace = name_space;
        pseudowire_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-limit-notif")
    {
        pseudowire_mac_limit_notif = value;
        pseudowire_mac_limit_notif.value_namespace = name_space;
        pseudowire_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-mac-limit-action")
    {
        pseudowire_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-limit-max")
    {
        pseudowire_mac_limit_max.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-limit-notif")
    {
        pseudowire_mac_limit_notif.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-mac-limit-action" || name == "pseudowire-mac-limit-max" || name == "pseudowire-mac-limit-notif")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::PseudowireMacSecure()
    :
    action{YType::enumeration, "action"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
{

    yang_name = "pseudowire-mac-secure"; yang_parent_name = "pseudowire-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::~PseudowireMacSecure()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::has_data() const
{
    return action.is_set
	|| disable.is_set
	|| enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "disable" || name == "enable" || name == "logging")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::PseudowireProfile()
    :
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"},
    profile_id{YType::enumeration, "profile-id"}
{

    yang_name = "pseudowire-profile"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::~PseudowireProfile()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::has_data() const
{
    return dhcp_snooping_id.is_set
	|| profile_id.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter)
	|| ydk::is_set(profile_id.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
        dhcp_snooping_id.value_namespace = name_space;
        dhcp_snooping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping-id" || name == "profile-id")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControls()
{

    yang_name = "bd-storm-controls"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::~BdStormControls()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::has_data() const
{
    for (std::size_t index=0; index<bd_storm_control.size(); index++)
    {
        if(bd_storm_control[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::has_operation() const
{
    for (std::size_t index=0; index<bd_storm_control.size(); index++)
    {
        if(bd_storm_control[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-storm-controls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-storm-control")
    {
        for(auto const & c : bd_storm_control)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl>();
        c->parent = this;
        bd_storm_control.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bd_storm_control)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-storm-control")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::BdStormControl()
    :
    sctype{YType::enumeration, "sctype"}
    	,
    storm_control_unit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit>())
{
    storm_control_unit->parent = this;

    yang_name = "bd-storm-control"; yang_parent_name = "bd-storm-controls"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::~BdStormControl()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::has_data() const
{
    return sctype.is_set
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sctype.yfilter)
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-storm-control" <<"[sctype='" <<sctype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sctype.is_set || is_set(sctype.yfilter)) leaf_name_data.push_back(sctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control-unit")
    {
        if(storm_control_unit == nullptr)
        {
            storm_control_unit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit>();
        }
        return storm_control_unit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(storm_control_unit != nullptr)
    {
        children["storm-control-unit"] = storm_control_unit;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sctype")
    {
        sctype = value;
        sctype.value_namespace = name_space;
        sctype.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sctype")
    {
        sctype.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control-unit" || name == "sctype")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::StormControlUnit()
    :
    kbits_per_sec{YType::uint32, "kbits-per-sec"},
    pkts_per_sec{YType::uint32, "pkts-per-sec"}
{

    yang_name = "storm-control-unit"; yang_parent_name = "bd-storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::~StormControlUnit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::has_data() const
{
    return kbits_per_sec.is_set
	|| pkts_per_sec.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbits_per_sec.yfilter)
	|| ydk::is_set(pkts_per_sec.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control-unit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbits_per_sec.is_set || is_set(kbits_per_sec.yfilter)) leaf_name_data.push_back(kbits_per_sec.get_name_leafdata());
    if (pkts_per_sec.is_set || is_set(pkts_per_sec.yfilter)) leaf_name_data.push_back(pkts_per_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec = value;
        kbits_per_sec.value_namespace = name_space;
        kbits_per_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec = value;
        pkts_per_sec.value_namespace = name_space;
        pkts_per_sec.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec.yfilter = yfilter;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbits-per-sec" || name == "pkts-per-sec")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvis()
{

    yang_name = "bridge-domain-evis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::~BridgeDomainEvis()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::has_data() const
{
    for (std::size_t index=0; index<bridge_domain_evi.size(); index++)
    {
        if(bridge_domain_evi[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain_evi.size(); index++)
    {
        if(bridge_domain_evi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-evis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain-evi")
    {
        for(auto const & c : bridge_domain_evi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi>();
        c->parent = this;
        bridge_domain_evi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bridge_domain_evi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-evi")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::BridgeDomainEvi()
    :
    eviid{YType::uint32, "eviid"}
{

    yang_name = "bridge-domain-evi"; yang_parent_name = "bridge-domain-evis"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::~BridgeDomainEvi()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::has_data() const
{
    return eviid.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-evi" <<"[eviid='" <<eviid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eviid")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BridgeDomainMac()
    :
    bd_mac_learn{YType::enumeration, "bd-mac-learn"},
    bd_mac_port_down_flush{YType::empty, "bd-mac-port-down-flush"},
    bd_mac_withdraw{YType::empty, "bd-mac-withdraw"},
    bd_mac_withdraw_access_pw_disable{YType::empty, "bd-mac-withdraw-access-pw-disable"},
    bd_mac_withdraw_behavior{YType::enumeration, "bd-mac-withdraw-behavior"},
    bd_mac_withdraw_relay{YType::empty, "bd-mac-withdraw-relay"}
    	,
    bd_mac_aging(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging>())
	,bd_mac_filters(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters>())
	,bd_mac_limit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit>())
	,mac_secure(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure>())
{
    bd_mac_aging->parent = this;
    bd_mac_filters->parent = this;
    bd_mac_limit->parent = this;
    mac_secure->parent = this;

    yang_name = "bridge-domain-mac"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::~BridgeDomainMac()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::has_data() const
{
    return bd_mac_learn.is_set
	|| bd_mac_port_down_flush.is_set
	|| bd_mac_withdraw.is_set
	|| bd_mac_withdraw_access_pw_disable.is_set
	|| bd_mac_withdraw_behavior.is_set
	|| bd_mac_withdraw_relay.is_set
	|| (bd_mac_aging !=  nullptr && bd_mac_aging->has_data())
	|| (bd_mac_filters !=  nullptr && bd_mac_filters->has_data())
	|| (bd_mac_limit !=  nullptr && bd_mac_limit->has_data())
	|| (mac_secure !=  nullptr && mac_secure->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_mac_learn.yfilter)
	|| ydk::is_set(bd_mac_port_down_flush.yfilter)
	|| ydk::is_set(bd_mac_withdraw.yfilter)
	|| ydk::is_set(bd_mac_withdraw_access_pw_disable.yfilter)
	|| ydk::is_set(bd_mac_withdraw_behavior.yfilter)
	|| ydk::is_set(bd_mac_withdraw_relay.yfilter)
	|| (bd_mac_aging !=  nullptr && bd_mac_aging->has_operation())
	|| (bd_mac_filters !=  nullptr && bd_mac_filters->has_operation())
	|| (bd_mac_limit !=  nullptr && bd_mac_limit->has_operation())
	|| (mac_secure !=  nullptr && mac_secure->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_learn.is_set || is_set(bd_mac_learn.yfilter)) leaf_name_data.push_back(bd_mac_learn.get_name_leafdata());
    if (bd_mac_port_down_flush.is_set || is_set(bd_mac_port_down_flush.yfilter)) leaf_name_data.push_back(bd_mac_port_down_flush.get_name_leafdata());
    if (bd_mac_withdraw.is_set || is_set(bd_mac_withdraw.yfilter)) leaf_name_data.push_back(bd_mac_withdraw.get_name_leafdata());
    if (bd_mac_withdraw_access_pw_disable.is_set || is_set(bd_mac_withdraw_access_pw_disable.yfilter)) leaf_name_data.push_back(bd_mac_withdraw_access_pw_disable.get_name_leafdata());
    if (bd_mac_withdraw_behavior.is_set || is_set(bd_mac_withdraw_behavior.yfilter)) leaf_name_data.push_back(bd_mac_withdraw_behavior.get_name_leafdata());
    if (bd_mac_withdraw_relay.is_set || is_set(bd_mac_withdraw_relay.yfilter)) leaf_name_data.push_back(bd_mac_withdraw_relay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-mac-aging")
    {
        if(bd_mac_aging == nullptr)
        {
            bd_mac_aging = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging>();
        }
        return bd_mac_aging;
    }

    if(child_yang_name == "bd-mac-filters")
    {
        if(bd_mac_filters == nullptr)
        {
            bd_mac_filters = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters>();
        }
        return bd_mac_filters;
    }

    if(child_yang_name == "bd-mac-limit")
    {
        if(bd_mac_limit == nullptr)
        {
            bd_mac_limit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit>();
        }
        return bd_mac_limit;
    }

    if(child_yang_name == "mac-secure")
    {
        if(mac_secure == nullptr)
        {
            mac_secure = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure>();
        }
        return mac_secure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bd_mac_aging != nullptr)
    {
        children["bd-mac-aging"] = bd_mac_aging;
    }

    if(bd_mac_filters != nullptr)
    {
        children["bd-mac-filters"] = bd_mac_filters;
    }

    if(bd_mac_limit != nullptr)
    {
        children["bd-mac-limit"] = bd_mac_limit;
    }

    if(mac_secure != nullptr)
    {
        children["mac-secure"] = mac_secure;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-mac-learn")
    {
        bd_mac_learn = value;
        bd_mac_learn.value_namespace = name_space;
        bd_mac_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-port-down-flush")
    {
        bd_mac_port_down_flush = value;
        bd_mac_port_down_flush.value_namespace = name_space;
        bd_mac_port_down_flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-withdraw")
    {
        bd_mac_withdraw = value;
        bd_mac_withdraw.value_namespace = name_space;
        bd_mac_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-withdraw-access-pw-disable")
    {
        bd_mac_withdraw_access_pw_disable = value;
        bd_mac_withdraw_access_pw_disable.value_namespace = name_space;
        bd_mac_withdraw_access_pw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-withdraw-behavior")
    {
        bd_mac_withdraw_behavior = value;
        bd_mac_withdraw_behavior.value_namespace = name_space;
        bd_mac_withdraw_behavior.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-withdraw-relay")
    {
        bd_mac_withdraw_relay = value;
        bd_mac_withdraw_relay.value_namespace = name_space;
        bd_mac_withdraw_relay.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-mac-learn")
    {
        bd_mac_learn.yfilter = yfilter;
    }
    if(value_path == "bd-mac-port-down-flush")
    {
        bd_mac_port_down_flush.yfilter = yfilter;
    }
    if(value_path == "bd-mac-withdraw")
    {
        bd_mac_withdraw.yfilter = yfilter;
    }
    if(value_path == "bd-mac-withdraw-access-pw-disable")
    {
        bd_mac_withdraw_access_pw_disable.yfilter = yfilter;
    }
    if(value_path == "bd-mac-withdraw-behavior")
    {
        bd_mac_withdraw_behavior.yfilter = yfilter;
    }
    if(value_path == "bd-mac-withdraw-relay")
    {
        bd_mac_withdraw_relay.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-aging" || name == "bd-mac-filters" || name == "bd-mac-limit" || name == "mac-secure" || name == "bd-mac-learn" || name == "bd-mac-port-down-flush" || name == "bd-mac-withdraw" || name == "bd-mac-withdraw-access-pw-disable" || name == "bd-mac-withdraw-behavior" || name == "bd-mac-withdraw-relay")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::BdMacAging()
    :
    bd_mac_aging_time{YType::uint32, "bd-mac-aging-time"},
    bd_mac_aging_type{YType::enumeration, "bd-mac-aging-type"}
{

    yang_name = "bd-mac-aging"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::~BdMacAging()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::has_data() const
{
    return bd_mac_aging_time.is_set
	|| bd_mac_aging_type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_mac_aging_time.yfilter)
	|| ydk::is_set(bd_mac_aging_type.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_aging_time.is_set || is_set(bd_mac_aging_time.yfilter)) leaf_name_data.push_back(bd_mac_aging_time.get_name_leafdata());
    if (bd_mac_aging_type.is_set || is_set(bd_mac_aging_type.yfilter)) leaf_name_data.push_back(bd_mac_aging_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-mac-aging-time")
    {
        bd_mac_aging_time = value;
        bd_mac_aging_time.value_namespace = name_space;
        bd_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-aging-type")
    {
        bd_mac_aging_type = value;
        bd_mac_aging_type.value_namespace = name_space;
        bd_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-mac-aging-time")
    {
        bd_mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "bd-mac-aging-type")
    {
        bd_mac_aging_type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-aging-time" || name == "bd-mac-aging-type")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilters()
{

    yang_name = "bd-mac-filters"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::~BdMacFilters()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::has_data() const
{
    for (std::size_t index=0; index<bd_mac_filter.size(); index++)
    {
        if(bd_mac_filter[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::has_operation() const
{
    for (std::size_t index=0; index<bd_mac_filter.size(); index++)
    {
        if(bd_mac_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-mac-filter")
    {
        for(auto const & c : bd_mac_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter>();
        c->parent = this;
        bd_mac_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bd_mac_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-filter")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::BdMacFilter()
    :
    address{YType::str, "address"},
    drop{YType::empty, "drop"}
{

    yang_name = "bd-mac-filter"; yang_parent_name = "bd-mac-filters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::~BdMacFilter()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::has_data() const
{
    return address.is_set
	|| drop.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-filter" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "drop")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::BdMacLimit()
    :
    bd_mac_limit_action{YType::enumeration, "bd-mac-limit-action"},
    bd_mac_limit_max{YType::uint32, "bd-mac-limit-max"},
    bd_mac_limit_notif{YType::enumeration, "bd-mac-limit-notif"}
{

    yang_name = "bd-mac-limit"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::~BdMacLimit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::has_data() const
{
    return bd_mac_limit_action.is_set
	|| bd_mac_limit_max.is_set
	|| bd_mac_limit_notif.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_mac_limit_action.yfilter)
	|| ydk::is_set(bd_mac_limit_max.yfilter)
	|| ydk::is_set(bd_mac_limit_notif.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_limit_action.is_set || is_set(bd_mac_limit_action.yfilter)) leaf_name_data.push_back(bd_mac_limit_action.get_name_leafdata());
    if (bd_mac_limit_max.is_set || is_set(bd_mac_limit_max.yfilter)) leaf_name_data.push_back(bd_mac_limit_max.get_name_leafdata());
    if (bd_mac_limit_notif.is_set || is_set(bd_mac_limit_notif.yfilter)) leaf_name_data.push_back(bd_mac_limit_notif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-mac-limit-action")
    {
        bd_mac_limit_action = value;
        bd_mac_limit_action.value_namespace = name_space;
        bd_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-limit-max")
    {
        bd_mac_limit_max = value;
        bd_mac_limit_max.value_namespace = name_space;
        bd_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-limit-notif")
    {
        bd_mac_limit_notif = value;
        bd_mac_limit_notif.value_namespace = name_space;
        bd_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-mac-limit-action")
    {
        bd_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "bd-mac-limit-max")
    {
        bd_mac_limit_max.yfilter = yfilter;
    }
    if(value_path == "bd-mac-limit-notif")
    {
        bd_mac_limit_notif.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-limit-action" || name == "bd-mac-limit-max" || name == "bd-mac-limit-notif")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::MacSecure()
    :
    action{YType::enumeration, "action"},
    enable{YType::empty, "enable"},
    logging{YType::empty, "logging"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "mac-secure"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::~MacSecure()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::has_data() const
{
    return action.is_set
	|| enable.is_set
	|| logging.is_set
	|| threshold.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "enable" || name == "logging" || name == "threshold")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::BridgeDomainPbb()
    :
    pbb_core(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore>())
	,pbb_edges(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges>())
{
    pbb_core->parent = this;
    pbb_edges->parent = this;

    yang_name = "bridge-domain-pbb"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::~BridgeDomainPbb()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::has_data() const
{
    return (pbb_core !=  nullptr && pbb_core->has_data())
	|| (pbb_edges !=  nullptr && pbb_edges->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::has_operation() const
{
    return is_set(yfilter)
	|| (pbb_core !=  nullptr && pbb_core->has_operation())
	|| (pbb_edges !=  nullptr && pbb_edges->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-core")
    {
        if(pbb_core == nullptr)
        {
            pbb_core = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore>();
        }
        return pbb_core;
    }

    if(child_yang_name == "pbb-edges")
    {
        if(pbb_edges == nullptr)
        {
            pbb_edges = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges>();
        }
        return pbb_edges;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pbb_core != nullptr)
    {
        children["pbb-core"] = pbb_core;
    }

    if(pbb_edges != nullptr)
    {
        children["pbb-edges"] = pbb_edges;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core" || name == "pbb-edges")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCore()
    :
    enable{YType::empty, "enable"},
    pbb_core_igmp_profile{YType::str, "pbb-core-igmp-profile"},
    pbb_core_mmrp_flood_optimization{YType::empty, "pbb-core-mmrp-flood-optimization"},
    vlan_id{YType::uint32, "vlan-id"}
    	,
    pbb_core_dhcp_profile(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile>())
	,pbb_core_evis(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis>())
	,pbb_core_mac(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac>())
{
    pbb_core_dhcp_profile->parent = this;
    pbb_core_evis->parent = this;
    pbb_core_mac->parent = this;

    yang_name = "pbb-core"; yang_parent_name = "bridge-domain-pbb"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::~PbbCore()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::has_data() const
{
    return enable.is_set
	|| pbb_core_igmp_profile.is_set
	|| pbb_core_mmrp_flood_optimization.is_set
	|| vlan_id.is_set
	|| (pbb_core_dhcp_profile !=  nullptr && pbb_core_dhcp_profile->has_data())
	|| (pbb_core_evis !=  nullptr && pbb_core_evis->has_data())
	|| (pbb_core_mac !=  nullptr && pbb_core_mac->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(pbb_core_igmp_profile.yfilter)
	|| ydk::is_set(pbb_core_mmrp_flood_optimization.yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| (pbb_core_dhcp_profile !=  nullptr && pbb_core_dhcp_profile->has_operation())
	|| (pbb_core_evis !=  nullptr && pbb_core_evis->has_operation())
	|| (pbb_core_mac !=  nullptr && pbb_core_mac->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (pbb_core_igmp_profile.is_set || is_set(pbb_core_igmp_profile.yfilter)) leaf_name_data.push_back(pbb_core_igmp_profile.get_name_leafdata());
    if (pbb_core_mmrp_flood_optimization.is_set || is_set(pbb_core_mmrp_flood_optimization.yfilter)) leaf_name_data.push_back(pbb_core_mmrp_flood_optimization.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-core-dhcp-profile")
    {
        if(pbb_core_dhcp_profile == nullptr)
        {
            pbb_core_dhcp_profile = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile>();
        }
        return pbb_core_dhcp_profile;
    }

    if(child_yang_name == "pbb-core-evis")
    {
        if(pbb_core_evis == nullptr)
        {
            pbb_core_evis = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis>();
        }
        return pbb_core_evis;
    }

    if(child_yang_name == "pbb-core-mac")
    {
        if(pbb_core_mac == nullptr)
        {
            pbb_core_mac = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac>();
        }
        return pbb_core_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pbb_core_dhcp_profile != nullptr)
    {
        children["pbb-core-dhcp-profile"] = pbb_core_dhcp_profile;
    }

    if(pbb_core_evis != nullptr)
    {
        children["pbb-core-evis"] = pbb_core_evis;
    }

    if(pbb_core_mac != nullptr)
    {
        children["pbb-core-mac"] = pbb_core_mac;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-igmp-profile")
    {
        pbb_core_igmp_profile = value;
        pbb_core_igmp_profile.value_namespace = name_space;
        pbb_core_igmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-mmrp-flood-optimization")
    {
        pbb_core_mmrp_flood_optimization = value;
        pbb_core_mmrp_flood_optimization.value_namespace = name_space;
        pbb_core_mmrp_flood_optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "pbb-core-igmp-profile")
    {
        pbb_core_igmp_profile.yfilter = yfilter;
    }
    if(value_path == "pbb-core-mmrp-flood-optimization")
    {
        pbb_core_mmrp_flood_optimization.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-dhcp-profile" || name == "pbb-core-evis" || name == "pbb-core-mac" || name == "enable" || name == "pbb-core-igmp-profile" || name == "pbb-core-mmrp-flood-optimization" || name == "vlan-id")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::PbbCoreDhcpProfile()
    :
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"},
    profile_id{YType::enumeration, "profile-id"}
{

    yang_name = "pbb-core-dhcp-profile"; yang_parent_name = "pbb-core"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::~PbbCoreDhcpProfile()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::has_data() const
{
    return dhcp_snooping_id.is_set
	|| profile_id.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter)
	|| ydk::is_set(profile_id.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-dhcp-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
        dhcp_snooping_id.value_namespace = name_space;
        dhcp_snooping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping-id" || name == "profile-id")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvis()
{

    yang_name = "pbb-core-evis"; yang_parent_name = "pbb-core"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::~PbbCoreEvis()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::has_data() const
{
    for (std::size_t index=0; index<pbb_core_evi.size(); index++)
    {
        if(pbb_core_evi[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::has_operation() const
{
    for (std::size_t index=0; index<pbb_core_evi.size(); index++)
    {
        if(pbb_core_evi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-evis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-core-evi")
    {
        for(auto const & c : pbb_core_evi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi>();
        c->parent = this;
        pbb_core_evi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pbb_core_evi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-evi")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::PbbCoreEvi()
    :
    eviid{YType::uint32, "eviid"}
{

    yang_name = "pbb-core-evi"; yang_parent_name = "pbb-core-evis"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::~PbbCoreEvi()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::has_data() const
{
    return eviid.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-evi" <<"[eviid='" <<eviid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eviid")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMac()
    :
    pbb_core_mac_learning{YType::enumeration, "pbb-core-mac-learning"}
    	,
    pbb_core_mac_aging(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging>())
	,pbb_core_mac_limit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit>())
{
    pbb_core_mac_aging->parent = this;
    pbb_core_mac_limit->parent = this;

    yang_name = "pbb-core-mac"; yang_parent_name = "pbb-core"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::~PbbCoreMac()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::has_data() const
{
    return pbb_core_mac_learning.is_set
	|| (pbb_core_mac_aging !=  nullptr && pbb_core_mac_aging->has_data())
	|| (pbb_core_mac_limit !=  nullptr && pbb_core_mac_limit->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_core_mac_learning.yfilter)
	|| (pbb_core_mac_aging !=  nullptr && pbb_core_mac_aging->has_operation())
	|| (pbb_core_mac_limit !=  nullptr && pbb_core_mac_limit->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_learning.is_set || is_set(pbb_core_mac_learning.yfilter)) leaf_name_data.push_back(pbb_core_mac_learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-core-mac-aging")
    {
        if(pbb_core_mac_aging == nullptr)
        {
            pbb_core_mac_aging = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging>();
        }
        return pbb_core_mac_aging;
    }

    if(child_yang_name == "pbb-core-mac-limit")
    {
        if(pbb_core_mac_limit == nullptr)
        {
            pbb_core_mac_limit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit>();
        }
        return pbb_core_mac_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pbb_core_mac_aging != nullptr)
    {
        children["pbb-core-mac-aging"] = pbb_core_mac_aging;
    }

    if(pbb_core_mac_limit != nullptr)
    {
        children["pbb-core-mac-limit"] = pbb_core_mac_limit;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-core-mac-learning")
    {
        pbb_core_mac_learning = value;
        pbb_core_mac_learning.value_namespace = name_space;
        pbb_core_mac_learning.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-core-mac-learning")
    {
        pbb_core_mac_learning.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-mac-aging" || name == "pbb-core-mac-limit" || name == "pbb-core-mac-learning")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::PbbCoreMacAging()
    :
    pbb_core_mac_aging_time{YType::uint32, "pbb-core-mac-aging-time"},
    pbb_core_mac_aging_type{YType::enumeration, "pbb-core-mac-aging-type"}
{

    yang_name = "pbb-core-mac-aging"; yang_parent_name = "pbb-core-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::~PbbCoreMacAging()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::has_data() const
{
    return pbb_core_mac_aging_time.is_set
	|| pbb_core_mac_aging_type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_core_mac_aging_time.yfilter)
	|| ydk::is_set(pbb_core_mac_aging_type.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_aging_time.is_set || is_set(pbb_core_mac_aging_time.yfilter)) leaf_name_data.push_back(pbb_core_mac_aging_time.get_name_leafdata());
    if (pbb_core_mac_aging_type.is_set || is_set(pbb_core_mac_aging_type.yfilter)) leaf_name_data.push_back(pbb_core_mac_aging_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-core-mac-aging-time")
    {
        pbb_core_mac_aging_time = value;
        pbb_core_mac_aging_time.value_namespace = name_space;
        pbb_core_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-mac-aging-type")
    {
        pbb_core_mac_aging_type = value;
        pbb_core_mac_aging_type.value_namespace = name_space;
        pbb_core_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-core-mac-aging-time")
    {
        pbb_core_mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "pbb-core-mac-aging-type")
    {
        pbb_core_mac_aging_type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-mac-aging-time" || name == "pbb-core-mac-aging-type")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::PbbCoreMacLimit()
    :
    pbb_core_mac_limit_action{YType::enumeration, "pbb-core-mac-limit-action"},
    pbb_core_mac_limit_max{YType::uint32, "pbb-core-mac-limit-max"},
    pbb_core_mac_limit_notif{YType::enumeration, "pbb-core-mac-limit-notif"}
{

    yang_name = "pbb-core-mac-limit"; yang_parent_name = "pbb-core-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::~PbbCoreMacLimit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::has_data() const
{
    return pbb_core_mac_limit_action.is_set
	|| pbb_core_mac_limit_max.is_set
	|| pbb_core_mac_limit_notif.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_core_mac_limit_action.yfilter)
	|| ydk::is_set(pbb_core_mac_limit_max.yfilter)
	|| ydk::is_set(pbb_core_mac_limit_notif.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_limit_action.is_set || is_set(pbb_core_mac_limit_action.yfilter)) leaf_name_data.push_back(pbb_core_mac_limit_action.get_name_leafdata());
    if (pbb_core_mac_limit_max.is_set || is_set(pbb_core_mac_limit_max.yfilter)) leaf_name_data.push_back(pbb_core_mac_limit_max.get_name_leafdata());
    if (pbb_core_mac_limit_notif.is_set || is_set(pbb_core_mac_limit_notif.yfilter)) leaf_name_data.push_back(pbb_core_mac_limit_notif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-core-mac-limit-action")
    {
        pbb_core_mac_limit_action = value;
        pbb_core_mac_limit_action.value_namespace = name_space;
        pbb_core_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-mac-limit-max")
    {
        pbb_core_mac_limit_max = value;
        pbb_core_mac_limit_max.value_namespace = name_space;
        pbb_core_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-mac-limit-notif")
    {
        pbb_core_mac_limit_notif = value;
        pbb_core_mac_limit_notif.value_namespace = name_space;
        pbb_core_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-core-mac-limit-action")
    {
        pbb_core_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "pbb-core-mac-limit-max")
    {
        pbb_core_mac_limit_max.yfilter = yfilter;
    }
    if(value_path == "pbb-core-mac-limit-notif")
    {
        pbb_core_mac_limit_notif.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-mac-limit-action" || name == "pbb-core-mac-limit-max" || name == "pbb-core-mac-limit-notif")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdges()
{

    yang_name = "pbb-edges"; yang_parent_name = "bridge-domain-pbb"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::~PbbEdges()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::has_data() const
{
    for (std::size_t index=0; index<pbb_edge.size(); index++)
    {
        if(pbb_edge[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::has_operation() const
{
    for (std::size_t index=0; index<pbb_edge.size(); index++)
    {
        if(pbb_edge[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-edge")
    {
        for(auto const & c : pbb_edge)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge>();
        c->parent = this;
        pbb_edge.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pbb_edge)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdge()
    :
    isid{YType::uint32, "isid"},
    core_bd_name{YType::str, "core-bd-name"},
    pbb_edge_igmp_profile{YType::str, "pbb-edge-igmp-profile"},
    unknown_unicast_bmac{YType::str, "unknown-unicast-bmac"}
    	,
    pbb_edge_dhcp_profile(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile>())
	,pbb_edge_mac(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac>())
	,pbb_edge_split_horizon_group(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup>())
	,pbb_static_mac_mappings(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings>())
{
    pbb_edge_dhcp_profile->parent = this;
    pbb_edge_mac->parent = this;
    pbb_edge_split_horizon_group->parent = this;
    pbb_static_mac_mappings->parent = this;

    yang_name = "pbb-edge"; yang_parent_name = "pbb-edges"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::~PbbEdge()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::has_data() const
{
    return isid.is_set
	|| core_bd_name.is_set
	|| pbb_edge_igmp_profile.is_set
	|| unknown_unicast_bmac.is_set
	|| (pbb_edge_dhcp_profile !=  nullptr && pbb_edge_dhcp_profile->has_data())
	|| (pbb_edge_mac !=  nullptr && pbb_edge_mac->has_data())
	|| (pbb_edge_split_horizon_group !=  nullptr && pbb_edge_split_horizon_group->has_data())
	|| (pbb_static_mac_mappings !=  nullptr && pbb_static_mac_mappings->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isid.yfilter)
	|| ydk::is_set(core_bd_name.yfilter)
	|| ydk::is_set(pbb_edge_igmp_profile.yfilter)
	|| ydk::is_set(unknown_unicast_bmac.yfilter)
	|| (pbb_edge_dhcp_profile !=  nullptr && pbb_edge_dhcp_profile->has_operation())
	|| (pbb_edge_mac !=  nullptr && pbb_edge_mac->has_operation())
	|| (pbb_edge_split_horizon_group !=  nullptr && pbb_edge_split_horizon_group->has_operation())
	|| (pbb_static_mac_mappings !=  nullptr && pbb_static_mac_mappings->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge" <<"[isid='" <<isid <<"']" <<"[core-bd-name='" <<core_bd_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isid.is_set || is_set(isid.yfilter)) leaf_name_data.push_back(isid.get_name_leafdata());
    if (core_bd_name.is_set || is_set(core_bd_name.yfilter)) leaf_name_data.push_back(core_bd_name.get_name_leafdata());
    if (pbb_edge_igmp_profile.is_set || is_set(pbb_edge_igmp_profile.yfilter)) leaf_name_data.push_back(pbb_edge_igmp_profile.get_name_leafdata());
    if (unknown_unicast_bmac.is_set || is_set(unknown_unicast_bmac.yfilter)) leaf_name_data.push_back(unknown_unicast_bmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-edge-dhcp-profile")
    {
        if(pbb_edge_dhcp_profile == nullptr)
        {
            pbb_edge_dhcp_profile = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile>();
        }
        return pbb_edge_dhcp_profile;
    }

    if(child_yang_name == "pbb-edge-mac")
    {
        if(pbb_edge_mac == nullptr)
        {
            pbb_edge_mac = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac>();
        }
        return pbb_edge_mac;
    }

    if(child_yang_name == "pbb-edge-split-horizon-group")
    {
        if(pbb_edge_split_horizon_group == nullptr)
        {
            pbb_edge_split_horizon_group = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup>();
        }
        return pbb_edge_split_horizon_group;
    }

    if(child_yang_name == "pbb-static-mac-mappings")
    {
        if(pbb_static_mac_mappings == nullptr)
        {
            pbb_static_mac_mappings = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings>();
        }
        return pbb_static_mac_mappings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pbb_edge_dhcp_profile != nullptr)
    {
        children["pbb-edge-dhcp-profile"] = pbb_edge_dhcp_profile;
    }

    if(pbb_edge_mac != nullptr)
    {
        children["pbb-edge-mac"] = pbb_edge_mac;
    }

    if(pbb_edge_split_horizon_group != nullptr)
    {
        children["pbb-edge-split-horizon-group"] = pbb_edge_split_horizon_group;
    }

    if(pbb_static_mac_mappings != nullptr)
    {
        children["pbb-static-mac-mappings"] = pbb_static_mac_mappings;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isid")
    {
        isid = value;
        isid.value_namespace = name_space;
        isid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-bd-name")
    {
        core_bd_name = value;
        core_bd_name.value_namespace = name_space;
        core_bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-igmp-profile")
    {
        pbb_edge_igmp_profile = value;
        pbb_edge_igmp_profile.value_namespace = name_space;
        pbb_edge_igmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-bmac")
    {
        unknown_unicast_bmac = value;
        unknown_unicast_bmac.value_namespace = name_space;
        unknown_unicast_bmac.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isid")
    {
        isid.yfilter = yfilter;
    }
    if(value_path == "core-bd-name")
    {
        core_bd_name.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-igmp-profile")
    {
        pbb_edge_igmp_profile.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-bmac")
    {
        unknown_unicast_bmac.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-dhcp-profile" || name == "pbb-edge-mac" || name == "pbb-edge-split-horizon-group" || name == "pbb-static-mac-mappings" || name == "isid" || name == "core-bd-name" || name == "pbb-edge-igmp-profile" || name == "unknown-unicast-bmac")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::PbbEdgeDhcpProfile()
    :
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"},
    profile_id{YType::enumeration, "profile-id"}
{

    yang_name = "pbb-edge-dhcp-profile"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::~PbbEdgeDhcpProfile()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::has_data() const
{
    return dhcp_snooping_id.is_set
	|| profile_id.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter)
	|| ydk::is_set(profile_id.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-dhcp-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
        dhcp_snooping_id.value_namespace = name_space;
        dhcp_snooping_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id.yfilter = yfilter;
    }
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping-id" || name == "profile-id")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMac()
    :
    pbb_edge_mac_learning{YType::enumeration, "pbb-edge-mac-learning"}
    	,
    pbb_edge_mac_aging(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging>())
	,pbb_edge_mac_limit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit>())
	,pbb_edge_mac_secure(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure>())
{
    pbb_edge_mac_aging->parent = this;
    pbb_edge_mac_limit->parent = this;
    pbb_edge_mac_secure->parent = this;

    yang_name = "pbb-edge-mac"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::~PbbEdgeMac()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::has_data() const
{
    return pbb_edge_mac_learning.is_set
	|| (pbb_edge_mac_aging !=  nullptr && pbb_edge_mac_aging->has_data())
	|| (pbb_edge_mac_limit !=  nullptr && pbb_edge_mac_limit->has_data())
	|| (pbb_edge_mac_secure !=  nullptr && pbb_edge_mac_secure->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_edge_mac_learning.yfilter)
	|| (pbb_edge_mac_aging !=  nullptr && pbb_edge_mac_aging->has_operation())
	|| (pbb_edge_mac_limit !=  nullptr && pbb_edge_mac_limit->has_operation())
	|| (pbb_edge_mac_secure !=  nullptr && pbb_edge_mac_secure->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_learning.is_set || is_set(pbb_edge_mac_learning.yfilter)) leaf_name_data.push_back(pbb_edge_mac_learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-edge-mac-aging")
    {
        if(pbb_edge_mac_aging == nullptr)
        {
            pbb_edge_mac_aging = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging>();
        }
        return pbb_edge_mac_aging;
    }

    if(child_yang_name == "pbb-edge-mac-limit")
    {
        if(pbb_edge_mac_limit == nullptr)
        {
            pbb_edge_mac_limit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit>();
        }
        return pbb_edge_mac_limit;
    }

    if(child_yang_name == "pbb-edge-mac-secure")
    {
        if(pbb_edge_mac_secure == nullptr)
        {
            pbb_edge_mac_secure = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure>();
        }
        return pbb_edge_mac_secure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pbb_edge_mac_aging != nullptr)
    {
        children["pbb-edge-mac-aging"] = pbb_edge_mac_aging;
    }

    if(pbb_edge_mac_limit != nullptr)
    {
        children["pbb-edge-mac-limit"] = pbb_edge_mac_limit;
    }

    if(pbb_edge_mac_secure != nullptr)
    {
        children["pbb-edge-mac-secure"] = pbb_edge_mac_secure;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-edge-mac-learning")
    {
        pbb_edge_mac_learning = value;
        pbb_edge_mac_learning.value_namespace = name_space;
        pbb_edge_mac_learning.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-edge-mac-learning")
    {
        pbb_edge_mac_learning.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-mac-aging" || name == "pbb-edge-mac-limit" || name == "pbb-edge-mac-secure" || name == "pbb-edge-mac-learning")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::PbbEdgeMacAging()
    :
    pbb_edge_mac_aging_time{YType::uint32, "pbb-edge-mac-aging-time"},
    pbb_edge_mac_aging_type{YType::enumeration, "pbb-edge-mac-aging-type"}
{

    yang_name = "pbb-edge-mac-aging"; yang_parent_name = "pbb-edge-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::~PbbEdgeMacAging()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::has_data() const
{
    return pbb_edge_mac_aging_time.is_set
	|| pbb_edge_mac_aging_type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_edge_mac_aging_time.yfilter)
	|| ydk::is_set(pbb_edge_mac_aging_type.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_aging_time.is_set || is_set(pbb_edge_mac_aging_time.yfilter)) leaf_name_data.push_back(pbb_edge_mac_aging_time.get_name_leafdata());
    if (pbb_edge_mac_aging_type.is_set || is_set(pbb_edge_mac_aging_type.yfilter)) leaf_name_data.push_back(pbb_edge_mac_aging_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-edge-mac-aging-time")
    {
        pbb_edge_mac_aging_time = value;
        pbb_edge_mac_aging_time.value_namespace = name_space;
        pbb_edge_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-mac-aging-type")
    {
        pbb_edge_mac_aging_type = value;
        pbb_edge_mac_aging_type.value_namespace = name_space;
        pbb_edge_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-edge-mac-aging-time")
    {
        pbb_edge_mac_aging_time.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-mac-aging-type")
    {
        pbb_edge_mac_aging_type.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-mac-aging-time" || name == "pbb-edge-mac-aging-type")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::PbbEdgeMacLimit()
    :
    pbb_edge_mac_limit_action{YType::enumeration, "pbb-edge-mac-limit-action"},
    pbb_edge_mac_limit_max{YType::uint32, "pbb-edge-mac-limit-max"},
    pbb_edge_mac_limit_notif{YType::enumeration, "pbb-edge-mac-limit-notif"}
{

    yang_name = "pbb-edge-mac-limit"; yang_parent_name = "pbb-edge-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::~PbbEdgeMacLimit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::has_data() const
{
    return pbb_edge_mac_limit_action.is_set
	|| pbb_edge_mac_limit_max.is_set
	|| pbb_edge_mac_limit_notif.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_edge_mac_limit_action.yfilter)
	|| ydk::is_set(pbb_edge_mac_limit_max.yfilter)
	|| ydk::is_set(pbb_edge_mac_limit_notif.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_limit_action.is_set || is_set(pbb_edge_mac_limit_action.yfilter)) leaf_name_data.push_back(pbb_edge_mac_limit_action.get_name_leafdata());
    if (pbb_edge_mac_limit_max.is_set || is_set(pbb_edge_mac_limit_max.yfilter)) leaf_name_data.push_back(pbb_edge_mac_limit_max.get_name_leafdata());
    if (pbb_edge_mac_limit_notif.is_set || is_set(pbb_edge_mac_limit_notif.yfilter)) leaf_name_data.push_back(pbb_edge_mac_limit_notif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-edge-mac-limit-action")
    {
        pbb_edge_mac_limit_action = value;
        pbb_edge_mac_limit_action.value_namespace = name_space;
        pbb_edge_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-mac-limit-max")
    {
        pbb_edge_mac_limit_max = value;
        pbb_edge_mac_limit_max.value_namespace = name_space;
        pbb_edge_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-mac-limit-notif")
    {
        pbb_edge_mac_limit_notif = value;
        pbb_edge_mac_limit_notif.value_namespace = name_space;
        pbb_edge_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-edge-mac-limit-action")
    {
        pbb_edge_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-mac-limit-max")
    {
        pbb_edge_mac_limit_max.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-mac-limit-notif")
    {
        pbb_edge_mac_limit_notif.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-mac-limit-action" || name == "pbb-edge-mac-limit-max" || name == "pbb-edge-mac-limit-notif")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::PbbEdgeMacSecure()
    :
    accept_shutdown{YType::empty, "accept-shutdown"},
    action{YType::enumeration, "action"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
{

    yang_name = "pbb-edge-mac-secure"; yang_parent_name = "pbb-edge-mac"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::~PbbEdgeMacSecure()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::has_data() const
{
    return accept_shutdown.is_set
	|| action.is_set
	|| disable.is_set
	|| enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_shutdown.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_shutdown.is_set || is_set(accept_shutdown.yfilter)) leaf_name_data.push_back(accept_shutdown.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-shutdown")
    {
        accept_shutdown = value;
        accept_shutdown.value_namespace = name_space;
        accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-shutdown")
    {
        accept_shutdown.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-shutdown" || name == "action" || name == "disable" || name == "enable" || name == "logging")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::PbbEdgeSplitHorizonGroup()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "pbb-edge-split-horizon-group"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::~PbbEdgeSplitHorizonGroup()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::has_data() const
{
    return disable.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-split-horizon-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMappings()
{

    yang_name = "pbb-static-mac-mappings"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::~PbbStaticMacMappings()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::has_data() const
{
    for (std::size_t index=0; index<pbb_static_mac_mapping.size(); index++)
    {
        if(pbb_static_mac_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::has_operation() const
{
    for (std::size_t index=0; index<pbb_static_mac_mapping.size(); index++)
    {
        if(pbb_static_mac_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-static-mac-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-static-mac-mapping")
    {
        for(auto const & c : pbb_static_mac_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping>();
        c->parent = this;
        pbb_static_mac_mapping.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pbb_static_mac_mapping)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-static-mac-mapping")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::PbbStaticMacMapping()
    :
    address{YType::str, "address"},
    pbb_static_mac_mapping_bmac{YType::str, "pbb-static-mac-mapping-bmac"}
{

    yang_name = "pbb-static-mac-mapping"; yang_parent_name = "pbb-static-mac-mappings"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::~PbbStaticMacMapping()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::has_data() const
{
    return address.is_set
	|| pbb_static_mac_mapping_bmac.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(pbb_static_mac_mapping_bmac.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-static-mac-mapping" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pbb_static_mac_mapping_bmac.is_set || is_set(pbb_static_mac_mapping_bmac.yfilter)) leaf_name_data.push_back(pbb_static_mac_mapping_bmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-static-mac-mapping-bmac")
    {
        pbb_static_mac_mapping_bmac = value;
        pbb_static_mac_mapping_bmac.value_namespace = name_space;
        pbb_static_mac_mapping_bmac.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "pbb-static-mac-mapping-bmac")
    {
        pbb_static_mac_mapping_bmac.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "pbb-static-mac-mapping-bmac")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::Dai()
    :
    enable{YType::empty, "enable"},
    logging{YType::empty, "logging"}
    	,
    dai_address_validation(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation>())
{
    dai_address_validation->parent = this;

    yang_name = "dai"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::~Dai()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::has_data() const
{
    return enable.is_set
	|| logging.is_set
	|| (dai_address_validation !=  nullptr && dai_address_validation->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| (dai_address_validation !=  nullptr && dai_address_validation->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dai-address-validation")
    {
        if(dai_address_validation == nullptr)
        {
            dai_address_validation = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation>();
        }
        return dai_address_validation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dai_address_validation != nullptr)
    {
        children["dai-address-validation"] = dai_address_validation;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dai-address-validation" || name == "enable" || name == "logging")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::DaiAddressValidation()
    :
    destination_mac_verification{YType::empty, "destination-mac-verification"},
    enable{YType::empty, "enable"},
    ipv4_verification{YType::empty, "ipv4-verification"},
    source_mac_verification{YType::empty, "source-mac-verification"}
{

    yang_name = "dai-address-validation"; yang_parent_name = "dai"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::~DaiAddressValidation()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::has_data() const
{
    return destination_mac_verification.is_set
	|| enable.is_set
	|| ipv4_verification.is_set
	|| source_mac_verification.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_mac_verification.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(ipv4_verification.yfilter)
	|| ydk::is_set(source_mac_verification.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-address-validation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_mac_verification.is_set || is_set(destination_mac_verification.yfilter)) leaf_name_data.push_back(destination_mac_verification.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_verification.is_set || is_set(ipv4_verification.yfilter)) leaf_name_data.push_back(ipv4_verification.get_name_leafdata());
    if (source_mac_verification.is_set || is_set(source_mac_verification.yfilter)) leaf_name_data.push_back(source_mac_verification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification = value;
        destination_mac_verification.value_namespace = name_space;
        destination_mac_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-verification")
    {
        ipv4_verification = value;
        ipv4_verification.value_namespace = name_space;
        ipv4_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification = value;
        source_mac_verification.value_namespace = name_space;
        source_mac_verification.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "ipv4-verification")
    {
        ipv4_verification.yfilter = yfilter;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-mac-verification" || name == "enable" || name == "ipv4-verification" || name == "source-mac-verification")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::IpSourceGuard()
    :
    enable{YType::empty, "enable"},
    logging{YType::empty, "logging"}
{

    yang_name = "ip-source-guard"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::~IpSourceGuard()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::has_data() const
{
    return enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "logging")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVnis()
{

    yang_name = "member-vnis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::~MemberVnis()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::has_data() const
{
    for (std::size_t index=0; index<member_vni.size(); index++)
    {
        if(member_vni[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::has_operation() const
{
    for (std::size_t index=0; index<member_vni.size(); index++)
    {
        if(member_vni[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni")
    {
        for(auto const & c : member_vni)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni>();
        c->parent = this;
        member_vni.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member_vni)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVni()
    :
    vni{YType::uint32, "vni"}
    	,
    member_vni_static_mac_addresses(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses>())
{
    member_vni_static_mac_addresses->parent = this;

    yang_name = "member-vni"; yang_parent_name = "member-vnis"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::~MemberVni()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::has_data() const
{
    return vni.is_set
	|| (member_vni_static_mac_addresses !=  nullptr && member_vni_static_mac_addresses->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni.yfilter)
	|| (member_vni_static_mac_addresses !=  nullptr && member_vni_static_mac_addresses->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni" <<"[vni='" <<vni <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni-static-mac-addresses")
    {
        if(member_vni_static_mac_addresses == nullptr)
        {
            member_vni_static_mac_addresses = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses>();
        }
        return member_vni_static_mac_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member_vni_static_mac_addresses != nullptr)
    {
        children["member-vni-static-mac-addresses"] = member_vni_static_mac_addresses;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni-static-mac-addresses" || name == "vni")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddresses()
{

    yang_name = "member-vni-static-mac-addresses"; yang_parent_name = "member-vni"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::~MemberVniStaticMacAddresses()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::has_data() const
{
    for (std::size_t index=0; index<member_vni_static_mac_address.size(); index++)
    {
        if(member_vni_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<member_vni_static_mac_address.size(); index++)
    {
        if(member_vni_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni-static-mac-address")
    {
        for(auto const & c : member_vni_static_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress>();
        c->parent = this;
        member_vni_static_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member_vni_static_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni-static-mac-address")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::MemberVniStaticMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    next_hop_ip{YType::str, "next-hop-ip"}
{

    yang_name = "member-vni-static-mac-address"; yang_parent_name = "member-vni-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::~MemberVniStaticMacAddress()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::has_data() const
{
    return mac_address.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni-static-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "next-hop-ip")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::NvSatellite()
    :
    enable{YType::empty, "enable"},
    offload_ipv4_multicast_enable{YType::empty, "offload-ipv4-multicast-enable"}
{

    yang_name = "nv-satellite"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::~NvSatellite()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::has_data() const
{
    return enable.is_set
	|| offload_ipv4_multicast_enable.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(offload_ipv4_multicast_enable.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (offload_ipv4_multicast_enable.is_set || is_set(offload_ipv4_multicast_enable.yfilter)) leaf_name_data.push_back(offload_ipv4_multicast_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offload-ipv4-multicast-enable")
    {
        offload_ipv4_multicast_enable = value;
        offload_ipv4_multicast_enable.value_namespace = name_space;
        offload_ipv4_multicast_enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "offload-ipv4-multicast-enable")
    {
        offload_ipv4_multicast_enable.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "offload-ipv4-multicast-enable")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterfaces()
{

    yang_name = "routed-interfaces"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::~RoutedInterfaces()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::has_data() const
{
    for (std::size_t index=0; index<routed_interface.size(); index++)
    {
        if(routed_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<routed_interface.size(); index++)
    {
        if(routed_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routed-interface")
    {
        for(auto const & c : routed_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface>();
        c->parent = this;
        routed_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : routed_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routed-interface")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    routed_interface_split_horizon_group(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup>())
{
    routed_interface_split_horizon_group->parent = this;

    yang_name = "routed-interface"; yang_parent_name = "routed-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::~RoutedInterface()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::has_data() const
{
    return interface_name.is_set
	|| (routed_interface_split_horizon_group !=  nullptr && routed_interface_split_horizon_group->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (routed_interface_split_horizon_group !=  nullptr && routed_interface_split_horizon_group->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routed-interface-split-horizon-group")
    {
        if(routed_interface_split_horizon_group == nullptr)
        {
            routed_interface_split_horizon_group = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup>();
        }
        return routed_interface_split_horizon_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(routed_interface_split_horizon_group != nullptr)
    {
        children["routed-interface-split-horizon-group"] = routed_interface_split_horizon_group;
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routed-interface-split-horizon-group" || name == "interface-name")
        return true;
    return false;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::RoutedInterfaceSplitHorizonGroup()
    :
    routed_interface_split_horizon_group_core{YType::empty, "routed-interface-split-horizon-group-core"}
{

    yang_name = "routed-interface-split-horizon-group"; yang_parent_name = "routed-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::~RoutedInterfaceSplitHorizonGroup()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::has_data() const
{
    return routed_interface_split_horizon_group_core.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routed_interface_split_horizon_group_core.yfilter);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed-interface-split-horizon-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routed_interface_split_horizon_group_core.is_set || is_set(routed_interface_split_horizon_group_core.yfilter)) leaf_name_data.push_back(routed_interface_split_horizon_group_core.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routed-interface-split-horizon-group-core")
    {
        routed_interface_split_horizon_group_core = value;
        routed_interface_split_horizon_group_core.value_namespace = name_space;
        routed_interface_split_horizon_group_core.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routed-interface-split-horizon-group-core")
    {
        routed_interface_split_horizon_group_core.yfilter = yfilter;
    }
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routed-interface-split-horizon-group-core")
        return true;
    return false;
}

const Enum::YLeaf BgpRouteTarget::no_stitching {0, "no-stitching"};
const Enum::YLeaf BgpRouteTarget::stitching {1, "stitching"};

const Enum::YLeaf BdmacLearn::disable_learning {2, "disable-learning"};

const Enum::YLeaf LdpVplsId::two_byte_as {10, "two-byte-as"};
const Enum::YLeaf LdpVplsId::ipv4_address {266, "ipv4-address"};

const Enum::YLeaf TypeOfServiceMode::none {0, "none"};
const Enum::YLeaf TypeOfServiceMode::reflect {1, "reflect"};

const Enum::YLeaf StormControl::unicast {1, "unicast"};
const Enum::YLeaf StormControl::multicast {2, "multicast"};
const Enum::YLeaf StormControl::broadcast {4, "broadcast"};

const Enum::YLeaf PreferredPath::te_tunnel {2, "te-tunnel"};
const Enum::YLeaf PreferredPath::ip_tunnel {3, "ip-tunnel"};
const Enum::YLeaf PreferredPath::tp_tunnel {4, "tp-tunnel"};
const Enum::YLeaf PreferredPath::sr_te_policy {5, "sr-te-policy"};

const Enum::YLeaf InterfaceTrafficFlood::traffic_flooding {0, "traffic-flooding"};
const Enum::YLeaf InterfaceTrafficFlood::enable_flooding {1, "enable-flooding"};
const Enum::YLeaf InterfaceTrafficFlood::disable_flooding {2, "disable-flooding"};

const Enum::YLeaf MacWithdrawBehavior::legacy {1, "legacy"};
const Enum::YLeaf MacWithdrawBehavior::optimized {2, "optimized"};

const Enum::YLeaf PwSwitchingPointTlv::hide {2, "hide"};

const Enum::YLeaf ControlWord::enable {1, "enable"};
const Enum::YLeaf ControlWord::disable {2, "disable"};

const Enum::YLeaf L2Encapsulation::vlan {4, "vlan"};
const Enum::YLeaf L2Encapsulation::ethernet {5, "ethernet"};

const Enum::YLeaf L2vpnVerification::enable {1, "enable"};
const Enum::YLeaf L2vpnVerification::disable {2, "disable"};

const Enum::YLeaf VccvVerification::none {0, "none"};
const Enum::YLeaf VccvVerification::lsp_ping {2, "lsp-ping"};

const Enum::YLeaf BgpRouteTargetFormat::none {0, "none"};
const Enum::YLeaf BgpRouteTargetFormat::two_byte_as {1, "two-byte-as"};
const Enum::YLeaf BgpRouteTargetFormat::four_byte_as {2, "four-byte-as"};
const Enum::YLeaf BgpRouteTargetFormat::ipv4_address {3, "ipv4-address"};
const Enum::YLeaf BgpRouteTargetFormat::es_import {1538, "es-import"};

const Enum::YLeaf ErpPort::none {1, "none"};
const Enum::YLeaf ErpPort::virtual_ {2, "virtual"};
const Enum::YLeaf ErpPort::interface {3, "interface"};

const Enum::YLeaf EvpnEncapsulation::evpn_encapsulationvxlan {8, "evpn-encapsulationvxlan"};
const Enum::YLeaf EvpnEncapsulation::evpn_encapsulation_mpls {10, "evpn-encapsulation-mpls"};

const Enum::YLeaf EthernetSegmentIdentifier::type0 {0, "type0"};
const Enum::YLeaf EthernetSegmentIdentifier::legacy {128, "legacy"};
const Enum::YLeaf EthernetSegmentIdentifier::override {129, "override"};

const Enum::YLeaf PortDownFlush::port_down_flush {0, "port-down-flush"};
const Enum::YLeaf PortDownFlush::enable_port_down_flush {1, "enable-port-down-flush"};
const Enum::YLeaf PortDownFlush::disable_port_down_flush {2, "disable-port-down-flush"};

const Enum::YLeaf MacLearn::default_learning {0, "default-learning"};
const Enum::YLeaf MacLearn::enable_learning {1, "enable-learning"};
const Enum::YLeaf MacLearn::disable_learning {2, "disable-learning"};

const Enum::YLeaf TransportMode::ethernet {1, "ethernet"};
const Enum::YLeaf TransportMode::vlan {2, "vlan"};
const Enum::YLeaf TransportMode::vlan_passthrough {3, "vlan-passthrough"};

const Enum::YLeaf MacAging::absolute {1, "absolute"};
const Enum::YLeaf MacAging::inactivity {2, "inactivity"};

const Enum::YLeaf RplRole::owner {1, "owner"};
const Enum::YLeaf RplRole::neighbor {2, "neighbor"};
const Enum::YLeaf RplRole::next_neighbor {3, "next-neighbor"};

const Enum::YLeaf MplsSignalingProtocol::none {1, "none"};
const Enum::YLeaf MplsSignalingProtocol::ldp {4, "ldp"};

const Enum::YLeaf BgpRouteDistinguisher::auto_ {1, "auto"};
const Enum::YLeaf BgpRouteDistinguisher::two_byte_as {2, "two-byte-as"};
const Enum::YLeaf BgpRouteDistinguisher::four_byte_as {3, "four-byte-as"};
const Enum::YLeaf BgpRouteDistinguisher::ipv4_address {4, "ipv4-address"};

const Enum::YLeaf L2tpSignalingProtocol::none {1, "none"};
const Enum::YLeaf L2tpSignalingProtocol::l2tpv3 {2, "l2tpv3"};

const Enum::YLeaf Interworking::ethernet {1, "ethernet"};
const Enum::YLeaf Interworking::ipv4 {3, "ipv4"};

const Enum::YLeaf LoadBalance::source_dest_mac {1, "source-dest-mac"};
const Enum::YLeaf LoadBalance::source_dest_ip {2, "source-dest-ip"};
const Enum::YLeaf LoadBalance::pseudowire_label {4, "pseudowire-label"};

const Enum::YLeaf BgpRouteTargetRole::both {0, "both"};
const Enum::YLeaf BgpRouteTargetRole::import {1, "import"};
const Enum::YLeaf BgpRouteTargetRole::export_ {2, "export"};

const Enum::YLeaf L2tpCookieSize::zero {0, "zero"};
const Enum::YLeaf L2tpCookieSize::four {4, "four"};
const Enum::YLeaf L2tpCookieSize::eight {8, "eight"};

const Enum::YLeaf FlowLabelLoadBalance::off {0, "off"};
const Enum::YLeaf FlowLabelLoadBalance::receive {1, "receive"};
const Enum::YLeaf FlowLabelLoadBalance::transmit {2, "transmit"};
const Enum::YLeaf FlowLabelLoadBalance::both {3, "both"};

const Enum::YLeaf BackupDisable::never {0, "never"};
const Enum::YLeaf BackupDisable::delay {1, "delay"};

const Enum::YLeaf Erpaps::interface {1, "interface"};
const Enum::YLeaf Erpaps::bridge_domain {2, "bridge-domain"};
const Enum::YLeaf Erpaps::xconnect {3, "xconnect"};
const Enum::YLeaf Erpaps::none {4, "none"};

const Enum::YLeaf ErpPort1::port0 {0, "port0"};
const Enum::YLeaf ErpPort1::port1 {1, "port1"};

const Enum::YLeaf L2tpv3Sequencing::off {0, "off"};
const Enum::YLeaf L2tpv3Sequencing::both {4, "both"};

const Enum::YLeaf InterfaceProfile::snoop {1, "snoop"};
const Enum::YLeaf InterfaceProfile::dhcp_protocol {2, "dhcp-protocol"};

const Enum::YLeaf L2vpnLogging::enable {1, "enable"};
const Enum::YLeaf L2vpnLogging::disable {2, "disable"};

const Enum::YLeaf FlowLabelTlvCode::Y_17 {4, "17"};
const Enum::YLeaf FlowLabelTlvCode::disable {8, "disable"};

const Enum::YLeaf MplsSequencing::off {0, "off"};
const Enum::YLeaf MplsSequencing::transmit {1, "transmit"};
const Enum::YLeaf MplsSequencing::receive {2, "receive"};
const Enum::YLeaf MplsSequencing::both {4, "both"};

const Enum::YLeaf MacSecureAction::restrict {1, "restrict"};
const Enum::YLeaf MacSecureAction::none {2, "none"};
const Enum::YLeaf MacSecureAction::shutdown {3, "shutdown"};

const Enum::YLeaf BridgeDomainTransportMode::vlan_passthrough {3, "vlan-passthrough"};

const Enum::YLeaf MacLimitAction::none {0, "none"};
const Enum::YLeaf MacLimitAction::flood {1, "flood"};
const Enum::YLeaf MacLimitAction::no_flood {2, "no-flood"};
const Enum::YLeaf MacLimitAction::shutdown {3, "shutdown"};

const Enum::YLeaf MacNotification::no_notif {0, "no-notif"};
const Enum::YLeaf MacNotification::syslog {1, "syslog"};
const Enum::YLeaf MacNotification::trap {2, "trap"};
const Enum::YLeaf MacNotification::syslog_snmp {3, "syslog-snmp"};

const Enum::YLeaf EvpnSide::evpn_side_stitching {2, "evpn-side-stitching"};

const Enum::YLeaf L2vpnCapabilityMode::high_mode {1, "high-mode"};
const Enum::YLeaf L2vpnCapabilityMode::single_mode {2, "single-mode"};


}
}

