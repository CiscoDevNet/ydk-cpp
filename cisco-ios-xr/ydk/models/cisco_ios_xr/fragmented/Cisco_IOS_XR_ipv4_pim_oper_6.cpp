
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_6.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_8.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_7.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_oper {

Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::AnycastRpRange()
    :
    ancast_rp_marked{YType::boolean, "ancast-rp-marked"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_shared<Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix>())
{
    prefix->parent = this;

    yang_name = "anycast-rp-range"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::~AnycastRpRange()
{
}

bool Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::has_data() const
{
    return ancast_rp_marked.is_set
	|| prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ancast_rp_marked.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anycast-rp-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ancast_rp_marked.is_set || is_set(ancast_rp_marked.yfilter)) leaf_name_data.push_back(ancast_rp_marked.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ancast-rp-marked")
    {
        ancast_rp_marked = value;
        ancast_rp_marked.value_namespace = name_space;
        ancast_rp_marked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ancast-rp-marked")
    {
        ancast_rp_marked.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "ancast-rp-marked" || name == "prefix-length")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "anycast-rp-range"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::~Prefix()
{
}

bool Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::ExportRouteTarget()
    :
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    configured{YType::boolean, "configured"},
    route_target{YType::str, "route-target"},
    segment_border{YType::boolean, "segment-border"},
    update_pending{YType::boolean, "update-pending"}
{

    yang_name = "export-route-target"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::~ExportRouteTarget()
{
}

bool Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::has_data() const
{
    return anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| bgp_auto_discovery.is_set
	|| configured.is_set
	|| route_target.is_set
	|| segment_border.is_set
	|| update_pending.is_set;
}

bool Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(anycast_rp.yfilter)
	|| ydk::is_set(anycast_rp_marked.yfilter)
	|| ydk::is_set(bgp_auto_discovery.yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(segment_border.yfilter)
	|| ydk::is_set(update_pending.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_rp.is_set || is_set(anycast_rp.yfilter)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.yfilter)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.yfilter)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.yfilter)) leaf_name_data.push_back(segment_border.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.yfilter)) leaf_name_data.push_back(update_pending.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anycast-rp")
    {
        anycast_rp = value;
        anycast_rp.value_namespace = name_space;
        anycast_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked = value;
        anycast_rp_marked.value_namespace = name_space;
        anycast_rp_marked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
        bgp_auto_discovery.value_namespace = name_space;
        bgp_auto_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
        segment_border.value_namespace = name_space;
        segment_border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
        update_pending.value_namespace = name_space;
        update_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anycast-rp")
    {
        anycast_rp.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "segment-border")
    {
        segment_border.yfilter = yfilter;
    }
    if(value_path == "update-pending")
    {
        update_pending.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anycast-rp" || name == "anycast-rp-marked" || name == "bgp-auto-discovery" || name == "configured" || name == "route-target" || name == "segment-border" || name == "update-pending")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::ImportRouteTarget()
    :
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    configured{YType::boolean, "configured"},
    route_target{YType::str, "route-target"},
    segment_border{YType::boolean, "segment-border"},
    update_pending{YType::boolean, "update-pending"}
{

    yang_name = "import-route-target"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::~ImportRouteTarget()
{
}

bool Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::has_data() const
{
    return anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| bgp_auto_discovery.is_set
	|| configured.is_set
	|| route_target.is_set
	|| segment_border.is_set
	|| update_pending.is_set;
}

bool Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(anycast_rp.yfilter)
	|| ydk::is_set(anycast_rp_marked.yfilter)
	|| ydk::is_set(bgp_auto_discovery.yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(segment_border.yfilter)
	|| ydk::is_set(update_pending.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_rp.is_set || is_set(anycast_rp.yfilter)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.yfilter)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.yfilter)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.yfilter)) leaf_name_data.push_back(segment_border.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.yfilter)) leaf_name_data.push_back(update_pending.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anycast-rp")
    {
        anycast_rp = value;
        anycast_rp.value_namespace = name_space;
        anycast_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked = value;
        anycast_rp_marked.value_namespace = name_space;
        anycast_rp_marked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
        bgp_auto_discovery.value_namespace = name_space;
        bgp_auto_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
        segment_border.value_namespace = name_space;
        segment_border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
        update_pending.value_namespace = name_space;
        update_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anycast-rp")
    {
        anycast_rp.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "segment-border")
    {
        segment_border.yfilter = yfilter;
    }
    if(value_path == "update-pending")
    {
        update_pending.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anycast-rp" || name == "anycast-rp-marked" || name == "bgp-auto-discovery" || name == "configured" || name == "route-target" || name == "segment-border" || name == "update-pending")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::RemoteDefaultGroup()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "remote-default-group"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::~RemoteDefaultGroup()
{
}

bool Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-default-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::RpfDefaultTable()
    :
    afi{YType::uint32, "afi"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    safi{YType::uint32, "safi"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    vrf_id{YType::uint32, "vrf-id"}
{

    yang_name = "rpf-default-table"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::~RpfDefaultTable()
{
}

bool Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::has_data() const
{
    return afi.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_convergence.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_registration_done.is_set
	|| rpf_registrations.is_set
	|| safi.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| vrf_id.is_set;
}

bool Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_ital_registration_done.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter)
	|| ydk::is_set(is_rib_convergence_received.yfilter)
	|| ydk::is_set(is_rib_registration_done.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(vrf_id.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-default-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.yfilter)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.yfilter)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.yfilter)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done = value;
        is_ital_registration_done.value_namespace = name_space;
        is_ital_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
        is_rib_convergence_received.value_namespace = name_space;
        is_rib_convergence_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
        is_rib_registration_done.value_namespace = name_space;
        is_rib_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "is-active" || name == "is-ital-registration-done" || name == "is-rib-convergence" || name == "is-rib-convergence-received" || name == "is-rib-registration-done" || name == "rpf-registrations" || name == "safi" || name == "table-id" || name == "table-name" || name == "vrf-id")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Gre::Gre()
    :
    gre_hashes(std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreHashes>())
	,gre_next_hops(std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops>())
{
    gre_hashes->parent = this;
    gre_next_hops->parent = this;

    yang_name = "gre"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Gre::~Gre()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::has_data() const
{
    return (gre_hashes !=  nullptr && gre_hashes->has_data())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_data());
}

bool Pim::Active::Vrfs::Vrf::Gre::has_operation() const
{
    return is_set(yfilter)
	|| (gre_hashes !=  nullptr && gre_hashes->has_operation())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hashes")
    {
        if(gre_hashes == nullptr)
        {
            gre_hashes = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreHashes>();
        }
        return gre_hashes;
    }

    if(child_yang_name == "gre-next-hops")
    {
        if(gre_next_hops == nullptr)
        {
            gre_next_hops = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops>();
        }
        return gre_next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gre_hashes != nullptr)
    {
        children["gre-hashes"] = gre_hashes;
    }

    if(gre_next_hops != nullptr)
    {
        children["gre-next-hops"] = gre_next_hops;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-hashes" || name == "gre-next-hops")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHashes()
{

    yang_name = "gre-hashes"; yang_parent_name = "gre"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Gre::GreHashes::~GreHashes()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreHashes::has_data() const
{
    for (std::size_t index=0; index<gre_hash.size(); index++)
    {
        if(gre_hash[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreHashes::has_operation() const
{
    for (std::size_t index=0; index<gre_hash.size(); index++)
    {
        if(gre_hash[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hashes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hash")
    {
        for(auto const & c : gre_hash)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash>();
        c->parent = this;
        gre_hash.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gre_hash)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreHashes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Gre::GreHashes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreHashes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-hash")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::GreHash()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    ifname{YType::str, "ifname"},
    next_hop_interface{YType::str, "next-hop-interface"}
{

    yang_name = "gre-hash"; yang_parent_name = "gre-hashes"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::~GreHash()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| ifname.is_set
	|| next_hop_interface.is_set;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hash" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[ifname='" <<ifname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "ifname" || name == "next-hop-interface")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHops()
{

    yang_name = "gre-next-hops"; yang_parent_name = "gre"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::~GreNextHops()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::has_data() const
{
    for (std::size_t index=0; index<gre_next_hop.size(); index++)
    {
        if(gre_next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::has_operation() const
{
    for (std::size_t index=0; index<gre_next_hop.size(); index++)
    {
        if(gre_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-next-hop")
    {
        for(auto const & c : gre_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop>();
        c->parent = this;
        gre_next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gre_next_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-next-hop")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GreNextHop()
    :
    destination_address{YType::str, "destination-address"},
    is_connected{YType::uint8, "is-connected"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"}
    	,
    registered_address(std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress>())
{
    registered_address->parent = this;

    yang_name = "gre-next-hop"; yang_parent_name = "gre-next-hops"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::~GreNextHop()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::has_data() const
{
    for (std::size_t index=0; index<gre_path.size(); index++)
    {
        if(gre_path[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| is_connected.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| (registered_address !=  nullptr && registered_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::has_operation() const
{
    for (std::size_t index=0; index<gre_path.size(); index++)
    {
        if(gre_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| (registered_address !=  nullptr && registered_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-path")
    {
        for(auto const & c : gre_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath>();
        c->parent = this;
        gre_path.push_back(c);
        return c;
    }

    if(child_yang_name == "registered-address")
    {
        if(registered_address == nullptr)
        {
            registered_address = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress>();
        }
        return registered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gre_path)
    {
        children[c->get_segment_path()] = c;
    }

    if(registered_address != nullptr)
    {
        children["registered-address"] = registered_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
        metric_preference.value_namespace = name_space;
        metric_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-path" || name == "registered-address" || name == "destination-address" || name == "is-connected" || name == "metric" || name == "metric-preference")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GrePath()
    :
    extranet_vrf_name{YType::str, "extranet-vrf-name"},
    gre_interface_name{YType::str, "gre-interface-name"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    is_gre_interface_disabled{YType::boolean, "is-gre-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"}
    	,
    gre_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>())
	,gre_next_hop(std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>())
{
    gre_neighbor->parent = this;
    gre_next_hop->parent = this;

    yang_name = "gre-path"; yang_parent_name = "gre-next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::~GrePath()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::has_data() const
{
    return extranet_vrf_name.is_set
	|| gre_interface_name.is_set
	|| is_connector_attribute_present.is_set
	|| is_gre_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_data())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_data());
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extranet_vrf_name.yfilter)
	|| ydk::is_set(gre_interface_name.yfilter)
	|| ydk::is_set(is_connector_attribute_present.yfilter)
	|| ydk::is_set(is_gre_interface_disabled.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_operation())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.yfilter)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());
    if (gre_interface_name.is_set || is_set(gre_interface_name.yfilter)) leaf_name_data.push_back(gre_interface_name.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.yfilter)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (is_gre_interface_disabled.is_set || is_set(is_gre_interface_disabled.yfilter)) leaf_name_data.push_back(is_gre_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-neighbor")
    {
        if(gre_neighbor == nullptr)
        {
            gre_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>();
        }
        return gre_neighbor;
    }

    if(child_yang_name == "gre-next-hop")
    {
        if(gre_next_hop == nullptr)
        {
            gre_next_hop = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>();
        }
        return gre_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gre_neighbor != nullptr)
    {
        children["gre-neighbor"] = gre_neighbor;
    }

    if(gre_next_hop != nullptr)
    {
        children["gre-next-hop"] = gre_next_hop;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
        extranet_vrf_name.value_namespace = name_space;
        extranet_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre-interface-name")
    {
        gre_interface_name = value;
        gre_interface_name.value_namespace = name_space;
        gre_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
        is_connector_attribute_present.value_namespace = name_space;
        is_connector_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gre-interface-disabled")
    {
        is_gre_interface_disabled = value;
        is_gre_interface_disabled.value_namespace = name_space;
        is_gre_interface_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name.yfilter = yfilter;
    }
    if(value_path == "gre-interface-name")
    {
        gre_interface_name.yfilter = yfilter;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-gre-interface-disabled")
    {
        is_gre_interface_disabled.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-neighbor" || name == "gre-next-hop" || name == "extranet-vrf-name" || name == "gre-interface-name" || name == "is-connector-attribute-present" || name == "is-gre-interface-disabled" || name == "is-via-lsm")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::GreNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "gre-neighbor"; yang_parent_name = "gre-path"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::~GreNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::GreNextHop_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "gre-next-hop"; yang_parent_name = "gre-path"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::~GreNextHop_()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::RegisteredAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "registered-address"; yang_parent_name = "gre-next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::~RegisteredAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpfs()
{

    yang_name = "group-map-rpfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::~GroupMapRpfs()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::has_data() const
{
    for (std::size_t index=0; index<group_map_rpf.size(); index++)
    {
        if(group_map_rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::has_operation() const
{
    for (std::size_t index=0; index<group_map_rpf.size(); index++)
    {
        if(group_map_rpf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-rpf")
    {
        for(auto const & c : group_map_rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf>();
        c->parent = this;
        group_map_rpf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_map_rpf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-rpf")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapRpf()
    :
    are_we_rp{YType::boolean, "are-we-rp"},
    client{YType::enumeration, "client"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    rp_priority{YType::int32, "rp-priority"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"}
    	,
    group_map_information(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation>())
	,rpf_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor>())
{
    group_map_information->parent = this;
    rpf_neighbor->parent = this;

    yang_name = "group-map-rpf"; yang_parent_name = "group-map-rpfs"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::~GroupMapRpf()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::has_data() const
{
    return are_we_rp.is_set
	|| client.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| rp_priority.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data());
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(are_we_rp.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(rp_priority.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_we_rp.is_set || is_set(are_we_rp.yfilter)) leaf_name_data.push_back(are_we_rp.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_priority.is_set || is_set(rp_priority.yfilter)) leaf_name_data.push_back(rp_priority.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation>();
        }
        return group_map_information;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "are-we-rp")
    {
        are_we_rp = value;
        are_we_rp.value_namespace = name_space;
        are_we_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-priority")
    {
        rp_priority = value;
        rp_priority.value_namespace = name_space;
        rp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
        rpf_vrf_name.value_namespace = name_space;
        rpf_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "are-we-rp")
    {
        are_we_rp.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "rp-priority")
    {
        rp_priority.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-information" || name == "rpf-neighbor" || name == "are-we-rp" || name == "client" || name == "prefix" || name == "prefix-length" || name == "protocol" || name == "rp-address" || name == "rp-priority" || name == "rpf-interface-name" || name == "rpf-vrf-name")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-rpf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(is_override.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(mrib_active.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.yfilter)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.yfilter)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-override")
    {
        is_override = value;
        is_override.value_namespace = name_space;
        is_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
        mrib_active.value_namespace = name_space;
        mrib_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "is-override")
    {
        is_override.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "mrib-active")
    {
        mrib_active.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "rp-address" || name == "client" || name == "group-count" || name == "is-override" || name == "is-used" || name == "mrib-active" || name == "prefix-length" || name == "priority" || name == "protocol")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "group-map-rpf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSources()
{

    yang_name = "group-map-sources"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::~GroupMapSources()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::has_data() const
{
    for (std::size_t index=0; index<group_map_source.size(); index++)
    {
        if(group_map_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::has_operation() const
{
    for (std::size_t index=0; index<group_map_source.size(); index++)
    {
        if(group_map_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapSources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-source")
    {
        for(auto const & c : group_map_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource>();
        c->parent = this;
        group_map_source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_map_source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-source")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapSource()
    :
    client{YType::enumeration, "client"},
    expires{YType::uint64, "expires"},
    holdtime{YType::int32, "holdtime"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::int32, "priority"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    uptime{YType::uint64, "uptime"}
    	,
    group_map_information(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation>())
	,source_of_information(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation>())
{
    group_map_information->parent = this;
    source_of_information->parent = this;

    yang_name = "group-map-source"; yang_parent_name = "group-map-sources"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::~GroupMapSource()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::has_data() const
{
    return client.is_set
	|| expires.is_set
	|| holdtime.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| uptime.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation>();
        }
        return group_map_information;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-information" || name == "source-of-information" || name == "client" || name == "expires" || name == "holdtime" || name == "prefix" || name == "prefix-length" || name == "priority" || name == "protocol" || name == "rp-address" || name == "uptime")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-source"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(is_override.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(mrib_active.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.yfilter)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.yfilter)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-override")
    {
        is_override = value;
        is_override.value_namespace = name_space;
        is_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
        mrib_active.value_namespace = name_space;
        mrib_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "is-override")
    {
        is_override.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "mrib-active")
    {
        mrib_active.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "rp-address" || name == "client" || name == "group-count" || name == "is-override" || name == "is-used" || name == "mrib-active" || name == "prefix-length" || name == "priority" || name == "protocol")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-of-information"; yang_parent_name = "group-map-source"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterfaces()
{

    yang_name = "ifrs-interfaces"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::has_data() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::IfrsInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifrs-interface")
    {
        for(auto const & c : ifrs_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::IfrsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifrs_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifrs-interface")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress>())
{
    dr_address->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "configured-override-interval" || name == "configured-propagation-delay" || name == "dr-priority" || name == "external-neighbor-count" || name == "generation-id" || name == "hello-expiry" || name == "hello-interval" || name == "idb-acl-name" || name == "idb-acl-provided" || name == "idb-current-count" || name == "idb-max-count" || name == "idb-oor-enabled" || name == "idb-threshold-count" || name == "interface-address-mask" || name == "interface-name-xr" || name == "is-batch-asserts-capable" || name == "is-bidirectional-capable" || name == "is-enabled" || name == "is-proxy-capable" || name == "join-prune-interval" || name == "neighbor-count" || name == "neighbor-filter-name" || name == "override-interval" || name == "passive-interface" || name == "propagation-delay" || name == "prune-delay-enabled" || name == "virtual-interface")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dr-address"; yang_parent_name = "ifrs-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::~DrAddress()
{
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "interface-address"; yang_parent_name = "ifrs-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::IfrsSummary::IfrsSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{

    yang_name = "ifrs-summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::IfrsSummary::~IfrsSummary()
{
}

bool Pim::Active::Vrfs::Vrf::IfrsSummary::has_data() const
{
    return configuration_count.is_set
	|| interface_count.is_set;
}

bool Pim::Active::Vrfs::Vrf::IfrsSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configuration_count.yfilter)
	|| ydk::is_set(interface_count.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::IfrsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::IfrsSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_count.is_set || is_set(configuration_count.yfilter)) leaf_name_data.push_back(configuration_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::IfrsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::IfrsSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::IfrsSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configuration-count")
    {
        configuration_count = value;
        configuration_count.value_namespace = name_space;
        configuration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::IfrsSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configuration-count")
    {
        configuration_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::IfrsSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-count" || name == "interface-count")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormats()
{

    yang_name = "interface-old-formats"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::~InterfaceOldFormats()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::InterfaceOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-formats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::InterfaceOldFormats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-old-format")
    {
        for(auto const & c : interface_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat>();
        c->parent = this;
        interface_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-old-format")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress>())
{
    dr_address->parent = this;

    yang_name = "interface-old-format"; yang_parent_name = "interface-old-formats"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::~InterfaceOldFormat()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "configured-override-interval" || name == "configured-propagation-delay" || name == "dr-priority" || name == "external-neighbor-count" || name == "generation-id" || name == "hello-expiry" || name == "hello-interval" || name == "idb-acl-name" || name == "idb-acl-provided" || name == "idb-current-count" || name == "idb-max-count" || name == "idb-oor-enabled" || name == "idb-threshold-count" || name == "interface-address-mask" || name == "interface-name-xr" || name == "is-batch-asserts-capable" || name == "is-bidirectional-capable" || name == "is-enabled" || name == "is-proxy-capable" || name == "join-prune-interval" || name == "neighbor-count" || name == "neighbor-filter-name" || name == "override-interval" || name == "passive-interface" || name == "propagation-delay" || name == "prune-delay-enabled" || name == "virtual-interface")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dr-address"; yang_parent_name = "interface-old-format"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::~DrAddress()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "interface-address"; yang_parent_name = "interface-old-format"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistics()
{

    yang_name = "interface-statistics"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::InterfaceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistic")
    {
        for(auto const & c : interface_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::InterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-statistic")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"},
    input_assert{YType::uint32, "input-assert"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    input_df_election{YType::uint32, "input-df-election"},
    input_graft_ack_message{YType::uint32, "input-graft-ack-message"},
    input_graft_message{YType::uint32, "input-graft-message"},
    input_hello{YType::uint32, "input-hello"},
    input_jp{YType::uint32, "input-jp"},
    input_miscellaneous{YType::uint32, "input-miscellaneous"},
    input_register{YType::uint32, "input-register"},
    input_register_stop{YType::uint32, "input-register-stop"},
    output_assert{YType::uint32, "output-assert"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    output_df_election{YType::uint32, "output-df-election"},
    output_graft_ack_message{YType::uint32, "output-graft-ack-message"},
    output_graft_message{YType::uint32, "output-graft-message"},
    output_hello{YType::uint32, "output-hello"},
    output_jp{YType::uint32, "output-jp"},
    output_register{YType::uint32, "output-register"},
    output_register_stop{YType::uint32, "output-register-stop"}
{

    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    return interface_name.is_set
	|| input_assert.is_set
	|| input_bsr_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| input_df_election.is_set
	|| input_graft_ack_message.is_set
	|| input_graft_message.is_set
	|| input_hello.is_set
	|| input_jp.is_set
	|| input_miscellaneous.is_set
	|| input_register.is_set
	|| input_register_stop.is_set
	|| output_assert.is_set
	|| output_bsr_message.is_set
	|| output_candidate_rp_advertisement.is_set
	|| output_df_election.is_set
	|| output_graft_ack_message.is_set
	|| output_graft_message.is_set
	|| output_hello.is_set
	|| output_jp.is_set
	|| output_register.is_set
	|| output_register_stop.is_set;
}

bool Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(input_assert.yfilter)
	|| ydk::is_set(input_bsr_message.yfilter)
	|| ydk::is_set(input_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(input_df_election.yfilter)
	|| ydk::is_set(input_graft_ack_message.yfilter)
	|| ydk::is_set(input_graft_message.yfilter)
	|| ydk::is_set(input_hello.yfilter)
	|| ydk::is_set(input_jp.yfilter)
	|| ydk::is_set(input_miscellaneous.yfilter)
	|| ydk::is_set(input_register.yfilter)
	|| ydk::is_set(input_register_stop.yfilter)
	|| ydk::is_set(output_assert.yfilter)
	|| ydk::is_set(output_bsr_message.yfilter)
	|| ydk::is_set(output_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(output_df_election.yfilter)
	|| ydk::is_set(output_graft_ack_message.yfilter)
	|| ydk::is_set(output_graft_message.yfilter)
	|| ydk::is_set(output_hello.yfilter)
	|| ydk::is_set(output_jp.yfilter)
	|| ydk::is_set(output_register.yfilter)
	|| ydk::is_set(output_register_stop.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.yfilter)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.yfilter)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.yfilter)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (input_graft_ack_message.is_set || is_set(input_graft_ack_message.yfilter)) leaf_name_data.push_back(input_graft_ack_message.get_name_leafdata());
    if (input_graft_message.is_set || is_set(input_graft_message.yfilter)) leaf_name_data.push_back(input_graft_message.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.yfilter)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.yfilter)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (input_miscellaneous.is_set || is_set(input_miscellaneous.yfilter)) leaf_name_data.push_back(input_miscellaneous.get_name_leafdata());
    if (input_register.is_set || is_set(input_register.yfilter)) leaf_name_data.push_back(input_register.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.yfilter)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.yfilter)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.yfilter)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.yfilter)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (output_graft_ack_message.is_set || is_set(output_graft_ack_message.yfilter)) leaf_name_data.push_back(output_graft_ack_message.get_name_leafdata());
    if (output_graft_message.is_set || is_set(output_graft_message.yfilter)) leaf_name_data.push_back(output_graft_message.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.yfilter)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.yfilter)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (output_register.is_set || is_set(output_register.yfilter)) leaf_name_data.push_back(output_register.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.yfilter)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
        input_assert.value_namespace = name_space;
        input_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
        input_bsr_message.value_namespace = name_space;
        input_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
        input_candidate_rp_advertisement.value_namespace = name_space;
        input_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
        input_df_election.value_namespace = name_space;
        input_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-graft-ack-message")
    {
        input_graft_ack_message = value;
        input_graft_ack_message.value_namespace = name_space;
        input_graft_ack_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-graft-message")
    {
        input_graft_message = value;
        input_graft_message.value_namespace = name_space;
        input_graft_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
        input_hello.value_namespace = name_space;
        input_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
        input_jp.value_namespace = name_space;
        input_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-miscellaneous")
    {
        input_miscellaneous = value;
        input_miscellaneous.value_namespace = name_space;
        input_miscellaneous.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register")
    {
        input_register = value;
        input_register.value_namespace = name_space;
        input_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
        input_register_stop.value_namespace = name_space;
        input_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
        output_assert.value_namespace = name_space;
        output_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
        output_bsr_message.value_namespace = name_space;
        output_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
        output_candidate_rp_advertisement.value_namespace = name_space;
        output_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
        output_df_election.value_namespace = name_space;
        output_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-graft-ack-message")
    {
        output_graft_ack_message = value;
        output_graft_ack_message.value_namespace = name_space;
        output_graft_ack_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-graft-message")
    {
        output_graft_message = value;
        output_graft_message.value_namespace = name_space;
        output_graft_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
        output_hello.value_namespace = name_space;
        output_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
        output_jp.value_namespace = name_space;
        output_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register")
    {
        output_register = value;
        output_register.value_namespace = name_space;
        output_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
        output_register_stop.value_namespace = name_space;
        output_register_stop.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "input-assert")
    {
        input_assert.yfilter = yfilter;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message.yfilter = yfilter;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "input-df-election")
    {
        input_df_election.yfilter = yfilter;
    }
    if(value_path == "input-graft-ack-message")
    {
        input_graft_ack_message.yfilter = yfilter;
    }
    if(value_path == "input-graft-message")
    {
        input_graft_message.yfilter = yfilter;
    }
    if(value_path == "input-hello")
    {
        input_hello.yfilter = yfilter;
    }
    if(value_path == "input-jp")
    {
        input_jp.yfilter = yfilter;
    }
    if(value_path == "input-miscellaneous")
    {
        input_miscellaneous.yfilter = yfilter;
    }
    if(value_path == "input-register")
    {
        input_register.yfilter = yfilter;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop.yfilter = yfilter;
    }
    if(value_path == "output-assert")
    {
        output_assert.yfilter = yfilter;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message.yfilter = yfilter;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "output-df-election")
    {
        output_df_election.yfilter = yfilter;
    }
    if(value_path == "output-graft-ack-message")
    {
        output_graft_ack_message.yfilter = yfilter;
    }
    if(value_path == "output-graft-message")
    {
        output_graft_message.yfilter = yfilter;
    }
    if(value_path == "output-hello")
    {
        output_hello.yfilter = yfilter;
    }
    if(value_path == "output-jp")
    {
        output_jp.yfilter = yfilter;
    }
    if(value_path == "output-register")
    {
        output_register.yfilter = yfilter;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "input-assert" || name == "input-bsr-message" || name == "input-candidate-rp-advertisement" || name == "input-df-election" || name == "input-graft-ack-message" || name == "input-graft-message" || name == "input-hello" || name == "input-jp" || name == "input-miscellaneous" || name == "input-register" || name == "input-register-stop" || name == "output-assert" || name == "output-bsr-message" || name == "output-candidate-rp-advertisement" || name == "output-df-election" || name == "output-graft-ack-message" || name == "output-graft-message" || name == "output-hello" || name == "output-jp" || name == "output-register" || name == "output-register-stop")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Pim::Active::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress>())
{
    dr_address->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "configured-override-interval" || name == "configured-propagation-delay" || name == "dr-priority" || name == "external-neighbor-count" || name == "generation-id" || name == "hello-expiry" || name == "hello-interval" || name == "idb-acl-name" || name == "idb-acl-provided" || name == "idb-current-count" || name == "idb-max-count" || name == "idb-oor-enabled" || name == "idb-threshold-count" || name == "interface-address-mask" || name == "interface-name-xr" || name == "is-batch-asserts-capable" || name == "is-bidirectional-capable" || name == "is-enabled" || name == "is-proxy-capable" || name == "join-prune-interval" || name == "neighbor-count" || name == "neighbor-filter-name" || name == "override-interval" || name == "passive-interface" || name == "propagation-delay" || name == "prune-delay-enabled" || name == "virtual-interface")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dr-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::~DrAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "interface-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistics()
{

    yang_name = "jp-statistics"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::JpStatistics::~JpStatistics()
{
}

bool Pim::Active::Vrfs::Vrf::JpStatistics::has_data() const
{
    for (std::size_t index=0; index<jp_statistic.size(); index++)
    {
        if(jp_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::JpStatistics::has_operation() const
{
    for (std::size_t index=0; index<jp_statistic.size(); index++)
    {
        if(jp_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::JpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::JpStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::JpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jp-statistic")
    {
        for(auto const & c : jp_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic>();
        c->parent = this;
        jp_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::JpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : jp_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::JpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::JpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::JpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jp-statistic")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::JpStatistic()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    mtu{YType::uint32, "mtu"},
    received{YType::uint32, "received"},
    received100{YType::uint16, "received100"},
    received_10k{YType::uint16, "received-10k"},
    received_1k{YType::uint16, "received-1k"},
    received_50k{YType::uint16, "received-50k"},
    transmitted{YType::uint32, "transmitted"},
    transmitted100{YType::uint16, "transmitted100"},
    transmitted_10k{YType::uint16, "transmitted-10k"},
    transmitted_1k{YType::uint16, "transmitted-1k"},
    transmitted_50k{YType::uint16, "transmitted-50k"}
{

    yang_name = "jp-statistic"; yang_parent_name = "jp-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::~JpStatistic()
{
}

bool Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| mtu.is_set
	|| received.is_set
	|| received100.is_set
	|| received_10k.is_set
	|| received_1k.is_set
	|| received_50k.is_set
	|| transmitted.is_set
	|| transmitted100.is_set
	|| transmitted_10k.is_set
	|| transmitted_1k.is_set
	|| transmitted_50k.is_set;
}

bool Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(received100.yfilter)
	|| ydk::is_set(received_10k.yfilter)
	|| ydk::is_set(received_1k.yfilter)
	|| ydk::is_set(received_50k.yfilter)
	|| ydk::is_set(transmitted.yfilter)
	|| ydk::is_set(transmitted100.yfilter)
	|| ydk::is_set(transmitted_10k.yfilter)
	|| ydk::is_set(transmitted_1k.yfilter)
	|| ydk::is_set(transmitted_50k.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistic" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (received100.is_set || is_set(received100.yfilter)) leaf_name_data.push_back(received100.get_name_leafdata());
    if (received_10k.is_set || is_set(received_10k.yfilter)) leaf_name_data.push_back(received_10k.get_name_leafdata());
    if (received_1k.is_set || is_set(received_1k.yfilter)) leaf_name_data.push_back(received_1k.get_name_leafdata());
    if (received_50k.is_set || is_set(received_50k.yfilter)) leaf_name_data.push_back(received_50k.get_name_leafdata());
    if (transmitted.is_set || is_set(transmitted.yfilter)) leaf_name_data.push_back(transmitted.get_name_leafdata());
    if (transmitted100.is_set || is_set(transmitted100.yfilter)) leaf_name_data.push_back(transmitted100.get_name_leafdata());
    if (transmitted_10k.is_set || is_set(transmitted_10k.yfilter)) leaf_name_data.push_back(transmitted_10k.get_name_leafdata());
    if (transmitted_1k.is_set || is_set(transmitted_1k.yfilter)) leaf_name_data.push_back(transmitted_1k.get_name_leafdata());
    if (transmitted_50k.is_set || is_set(transmitted_50k.yfilter)) leaf_name_data.push_back(transmitted_50k.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received100")
    {
        received100 = value;
        received100.value_namespace = name_space;
        received100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-10k")
    {
        received_10k = value;
        received_10k.value_namespace = name_space;
        received_10k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-1k")
    {
        received_1k = value;
        received_1k.value_namespace = name_space;
        received_1k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-50k")
    {
        received_50k = value;
        received_50k.value_namespace = name_space;
        received_50k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted")
    {
        transmitted = value;
        transmitted.value_namespace = name_space;
        transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted100")
    {
        transmitted100 = value;
        transmitted100.value_namespace = name_space;
        transmitted100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-10k")
    {
        transmitted_10k = value;
        transmitted_10k.value_namespace = name_space;
        transmitted_10k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-1k")
    {
        transmitted_1k = value;
        transmitted_1k.value_namespace = name_space;
        transmitted_1k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-50k")
    {
        transmitted_50k = value;
        transmitted_50k.value_namespace = name_space;
        transmitted_50k.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "received100")
    {
        received100.yfilter = yfilter;
    }
    if(value_path == "received-10k")
    {
        received_10k.yfilter = yfilter;
    }
    if(value_path == "received-1k")
    {
        received_1k.yfilter = yfilter;
    }
    if(value_path == "received-50k")
    {
        received_50k.yfilter = yfilter;
    }
    if(value_path == "transmitted")
    {
        transmitted.yfilter = yfilter;
    }
    if(value_path == "transmitted100")
    {
        transmitted100.yfilter = yfilter;
    }
    if(value_path == "transmitted-10k")
    {
        transmitted_10k.yfilter = yfilter;
    }
    if(value_path == "transmitted-1k")
    {
        transmitted_1k.yfilter = yfilter;
    }
    if(value_path == "transmitted-50k")
    {
        transmitted_50k.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-name-xr" || name == "mtu" || name == "received" || name == "received100" || name == "received-10k" || name == "received-1k" || name == "received-50k" || name == "transmitted" || name == "transmitted100" || name == "transmitted-10k" || name == "transmitted-1k" || name == "transmitted-50k")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabases()
{

    yang_name = "mib-databases"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::MibDatabases::~MibDatabases()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::has_data() const
{
    for (std::size_t index=0; index<mib_database.size(); index++)
    {
        if(mib_database[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::has_operation() const
{
    for (std::size_t index=0; index<mib_database.size(); index++)
    {
        if(mib_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-databases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::MibDatabases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib-database")
    {
        for(auto const & c : mib_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase>();
        c->parent = this;
        mib_database.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mib_database)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::MibDatabases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-database")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::MibDatabase()
    :
    assert_metric{YType::uint32, "assert-metric"},
    assert_metric_preference{YType::uint32, "assert-metric-preference"},
    assert_rpt_bit{YType::boolean, "assert-rpt-bit"},
    bidirectional_route{YType::boolean, "bidirectional-route"},
    group_address{YType::str, "group-address"},
    protocol{YType::enumeration, "protocol"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_mask{YType::uint32, "rpf-mask"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    source_address{YType::str, "source-address"},
    source_netmask{YType::int32, "source-netmask"},
    spt_bit{YType::boolean, "spt-bit"},
    upstream_assert_timer{YType::int32, "upstream-assert-timer"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr>())
	,rpf_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor>())
	,rpf_root(std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot>())
	,source_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr>())
{
    group_address_xr->parent = this;
    rpf_neighbor->parent = this;
    rpf_root->parent = this;
    source_address_xr->parent = this;

    yang_name = "mib-database"; yang_parent_name = "mib-databases"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::~MibDatabase()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::has_data() const
{
    return assert_metric.is_set
	|| assert_metric_preference.is_set
	|| assert_rpt_bit.is_set
	|| bidirectional_route.is_set
	|| group_address.is_set
	|| protocol.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| rpf_interface_name.is_set
	|| rpf_mask.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_vrf_name.is_set
	|| source_address.is_set
	|| source_netmask.is_set
	|| spt_bit.is_set
	|| upstream_assert_timer.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(assert_metric.yfilter)
	|| ydk::is_set(assert_metric_preference.yfilter)
	|| ydk::is_set(assert_rpt_bit.yfilter)
	|| ydk::is_set(bidirectional_route.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rpf_drop.yfilter)
	|| ydk::is_set(rpf_extranet.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_mask.yfilter)
	|| ydk::is_set(rpf_safi.yfilter)
	|| ydk::is_set(rpf_table_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_netmask.yfilter)
	|| ydk::is_set(spt_bit.yfilter)
	|| ydk::is_set(upstream_assert_timer.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (assert_metric.is_set || is_set(assert_metric.yfilter)) leaf_name_data.push_back(assert_metric.get_name_leafdata());
    if (assert_metric_preference.is_set || is_set(assert_metric_preference.yfilter)) leaf_name_data.push_back(assert_metric_preference.get_name_leafdata());
    if (assert_rpt_bit.is_set || is_set(assert_rpt_bit.yfilter)) leaf_name_data.push_back(assert_rpt_bit.get_name_leafdata());
    if (bidirectional_route.is_set || is_set(bidirectional_route.yfilter)) leaf_name_data.push_back(bidirectional_route.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.yfilter)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.yfilter)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_mask.is_set || is_set(rpf_mask.yfilter)) leaf_name_data.push_back(rpf_mask.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.yfilter)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.yfilter)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_netmask.is_set || is_set(source_netmask.yfilter)) leaf_name_data.push_back(source_netmask.get_name_leafdata());
    if (spt_bit.is_set || is_set(spt_bit.yfilter)) leaf_name_data.push_back(spt_bit.get_name_leafdata());
    if (upstream_assert_timer.is_set || is_set(upstream_assert_timer.yfilter)) leaf_name_data.push_back(upstream_assert_timer.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root == nullptr)
        {
            rpf_root = std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot>();
        }
        return rpf_root;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_root != nullptr)
    {
        children["rpf-root"] = rpf_root;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "assert-metric")
    {
        assert_metric = value;
        assert_metric.value_namespace = name_space;
        assert_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-metric-preference")
    {
        assert_metric_preference = value;
        assert_metric_preference.value_namespace = name_space;
        assert_metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-rpt-bit")
    {
        assert_rpt_bit = value;
        assert_rpt_bit.value_namespace = name_space;
        assert_rpt_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidirectional-route")
    {
        bidirectional_route = value;
        bidirectional_route.value_namespace = name_space;
        bidirectional_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
        rpf_drop.value_namespace = name_space;
        rpf_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
        rpf_extranet.value_namespace = name_space;
        rpf_extranet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-mask")
    {
        rpf_mask = value;
        rpf_mask.value_namespace = name_space;
        rpf_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
        rpf_safi.value_namespace = name_space;
        rpf_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
        rpf_table_name.value_namespace = name_space;
        rpf_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
        rpf_vrf_name.value_namespace = name_space;
        rpf_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-netmask")
    {
        source_netmask = value;
        source_netmask.value_namespace = name_space;
        source_netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt-bit")
    {
        spt_bit = value;
        spt_bit.value_namespace = name_space;
        spt_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upstream-assert-timer")
    {
        upstream_assert_timer = value;
        upstream_assert_timer.value_namespace = name_space;
        upstream_assert_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "assert-metric")
    {
        assert_metric.yfilter = yfilter;
    }
    if(value_path == "assert-metric-preference")
    {
        assert_metric_preference.yfilter = yfilter;
    }
    if(value_path == "assert-rpt-bit")
    {
        assert_rpt_bit.yfilter = yfilter;
    }
    if(value_path == "bidirectional-route")
    {
        bidirectional_route.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop.yfilter = yfilter;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-mask")
    {
        rpf_mask.yfilter = yfilter;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi.yfilter = yfilter;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-netmask")
    {
        source_netmask.yfilter = yfilter;
    }
    if(value_path == "spt-bit")
    {
        spt_bit.yfilter = yfilter;
    }
    if(value_path == "upstream-assert-timer")
    {
        upstream_assert_timer.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "rpf-neighbor" || name == "rpf-root" || name == "source-address-xr" || name == "assert-metric" || name == "assert-metric-preference" || name == "assert-rpt-bit" || name == "bidirectional-route" || name == "group-address" || name == "protocol" || name == "rpf-drop" || name == "rpf-extranet" || name == "rpf-interface-name" || name == "rpf-mask" || name == "rpf-safi" || name == "rpf-table-name" || name == "rpf-vrf-name" || name == "source-address" || name == "source-netmask" || name == "spt-bit" || name == "upstream-assert-timer" || name == "uptime")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-root"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::~RpfRoot()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoutes()
{

    yang_name = "multicast-static-routes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::~MulticastStaticRoutes()
{
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::has_data() const
{
    for (std::size_t index=0; index<multicast_static_route.size(); index++)
    {
        if(multicast_static_route[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_static_route.size(); index++)
    {
        if(multicast_static_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-static-route")
    {
        for(auto const & c : multicast_static_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute>();
        c->parent = this;
        multicast_static_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_static_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-static-route")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::MulticastStaticRoute()
    :
    address{YType::str, "address"},
    distance{YType::uint32, "distance"},
    interface_name{YType::str, "interface-name"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    prefix_length{YType::int32, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"}
    	,
    nexthop(std::make_shared<Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>())
	,prefix(std::make_shared<Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix>())
{
    nexthop->parent = this;
    prefix->parent = this;

    yang_name = "multicast-static-route"; yang_parent_name = "multicast-static-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::~MulticastStaticRoute()
{
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::has_data() const
{
    return address.is_set
	|| distance.is_set
	|| interface_name.is_set
	|| is_via_lsm.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "prefix" || name == "address" || name == "distance" || name == "interface-name" || name == "is-via-lsm" || name == "prefix-length" || name == "prefix-length-xr")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::Nexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "nexthop"; yang_parent_name = "multicast-static-route"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::~Nexthop()
{
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "multicast-static-route"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::~Prefix()
{
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormats()
{

    yang_name = "neighbor-old-formats"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::~NeighborOldFormats()
{
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::has_data() const
{
    for (std::size_t index=0; index<neighbor_old_format.size(); index++)
    {
        if(neighbor_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::has_operation() const
{
    for (std::size_t index=0; index<neighbor_old_format.size(); index++)
    {
        if(neighbor_old_format[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::NeighborOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-formats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::NeighborOldFormats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NeighborOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-old-format")
    {
        for(auto const & c : neighbor_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat>();
        c->parent = this;
        neighbor_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NeighborOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::NeighborOldFormats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::NeighborOldFormats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-old-format")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborOldFormat()
    :
    dr_priority{YType::uint32, "dr-priority"},
    expires{YType::uint64, "expires"},
    expiry_timer{YType::uint64, "expiry-timer"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bfd_state{YType::boolean, "is-bfd-state"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_dr_priority_capable{YType::boolean, "is-dr-priority-capable"},
    is_ecmp_redirect_capable{YType::boolean, "is-ecmp-redirect-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_this_neighbor_dr{YType::boolean, "is-this-neighbor-dr"},
    is_this_neighbor_us{YType::boolean, "is-this-neighbor-us"},
    neighbor_address{YType::str, "neighbor-address"},
    override_interval{YType::uint16, "override-interval"},
    propagation_delay{YType::uint16, "propagation-delay"},
    uptime{YType::uint64, "uptime"}
{

    yang_name = "neighbor-old-format"; yang_parent_name = "neighbor-old-formats"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::~NeighborOldFormat()
{
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::has_data() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_data())
            return true;
    }
    return dr_priority.is_set
	|| expires.is_set
	|| expiry_timer.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bfd_state.is_set
	|| is_bidirectional_capable.is_set
	|| is_dr_priority_capable.is_set
	|| is_ecmp_redirect_capable.is_set
	|| is_proxy_capable.is_set
	|| is_this_neighbor_dr.is_set
	|| is_this_neighbor_us.is_set
	|| neighbor_address.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| uptime.is_set;
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::has_operation() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(expiry_timer.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_bfd_state.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_dr_priority_capable.yfilter)
	|| ydk::is_set(is_ecmp_redirect_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_this_neighbor_dr.yfilter)
	|| ydk::is_set(is_this_neighbor_us.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(uptime.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (expiry_timer.is_set || is_set(expiry_timer.yfilter)) leaf_name_data.push_back(expiry_timer.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bfd_state.is_set || is_set(is_bfd_state.yfilter)) leaf_name_data.push_back(is_bfd_state.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_dr_priority_capable.is_set || is_set(is_dr_priority_capable.yfilter)) leaf_name_data.push_back(is_dr_priority_capable.get_name_leafdata());
    if (is_ecmp_redirect_capable.is_set || is_set(is_ecmp_redirect_capable.yfilter)) leaf_name_data.push_back(is_ecmp_redirect_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_this_neighbor_dr.is_set || is_set(is_this_neighbor_dr.yfilter)) leaf_name_data.push_back(is_this_neighbor_dr.get_name_leafdata());
    if (is_this_neighbor_us.is_set || is_set(is_this_neighbor_us.yfilter)) leaf_name_data.push_back(is_this_neighbor_us.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        for(auto const & c : neighbor_address_xr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_address_xr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer = value;
        expiry_timer.value_namespace = name_space;
        expiry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state = value;
        is_bfd_state.value_namespace = name_space;
        is_bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable = value;
        is_dr_priority_capable.value_namespace = name_space;
        is_dr_priority_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable = value;
        is_ecmp_redirect_capable.value_namespace = name_space;
        is_ecmp_redirect_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr = value;
        is_this_neighbor_dr.value_namespace = name_space;
        is_this_neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us = value;
        is_this_neighbor_us.value_namespace = name_space;
        is_this_neighbor_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable.yfilter = yfilter;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "dr-priority" || name == "expires" || name == "expiry-timer" || name == "interface-name" || name == "interface-name-xr" || name == "is-batch-asserts-capable" || name == "is-bfd-state" || name == "is-bidirectional-capable" || name == "is-dr-priority-capable" || name == "is-ecmp-redirect-capable" || name == "is-proxy-capable" || name == "is-this-neighbor-dr" || name == "is-this-neighbor-us" || name == "neighbor-address" || name == "override-interval" || name == "propagation-delay" || name == "uptime")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor-old-format"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummaries()
{

    yang_name = "neighbor-summaries"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::NeighborSummaries::~NeighborSummaries()
{
}

bool Pim::Active::Vrfs::Vrf::NeighborSummaries::has_data() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::NeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::NeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::NeighborSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        for(auto const & c : neighbor_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary>();
        c->parent = this;
        neighbor_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::NeighborSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::NeighborSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::NeighborSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-summary")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::NeighborSummary()
    :
    interface_name{YType::str, "interface-name"},
    number_of_external_neighbors{YType::int32, "number-of-external-neighbors"},
    number_of_neighbors{YType::int32, "number-of-neighbors"}
{

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::~NeighborSummary()
{
}

bool Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::has_data() const
{
    return interface_name.is_set
	|| number_of_external_neighbors.is_set
	|| number_of_neighbors.is_set;
}

bool Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(number_of_external_neighbors.yfilter)
	|| ydk::is_set(number_of_neighbors.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (number_of_external_neighbors.is_set || is_set(number_of_external_neighbors.yfilter)) leaf_name_data.push_back(number_of_external_neighbors.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.yfilter)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-external-neighbors")
    {
        number_of_external_neighbors = value;
        number_of_external_neighbors.value_namespace = name_space;
        number_of_external_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
        number_of_neighbors.value_namespace = name_space;
        number_of_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "number-of-external-neighbors")
    {
        number_of_external_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "number-of-external-neighbors" || name == "number-of-neighbors")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Neighbors::~Neighbors()
{
}

bool Pim::Active::Vrfs::Vrf::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::Neighbor()
    :
    dr_priority{YType::uint32, "dr-priority"},
    expires{YType::uint64, "expires"},
    expiry_timer{YType::uint64, "expiry-timer"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bfd_state{YType::boolean, "is-bfd-state"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_dr_priority_capable{YType::boolean, "is-dr-priority-capable"},
    is_ecmp_redirect_capable{YType::boolean, "is-ecmp-redirect-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_this_neighbor_dr{YType::boolean, "is-this-neighbor-dr"},
    is_this_neighbor_us{YType::boolean, "is-this-neighbor-us"},
    neighbor_address{YType::str, "neighbor-address"},
    override_interval{YType::uint16, "override-interval"},
    propagation_delay{YType::uint16, "propagation-delay"},
    uptime{YType::uint64, "uptime"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::~Neighbor()
{
}

bool Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_data())
            return true;
    }
    return dr_priority.is_set
	|| expires.is_set
	|| expiry_timer.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bfd_state.is_set
	|| is_bidirectional_capable.is_set
	|| is_dr_priority_capable.is_set
	|| is_ecmp_redirect_capable.is_set
	|| is_proxy_capable.is_set
	|| is_this_neighbor_dr.is_set
	|| is_this_neighbor_us.is_set
	|| neighbor_address.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| uptime.is_set;
}

bool Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(expiry_timer.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_bfd_state.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_dr_priority_capable.yfilter)
	|| ydk::is_set(is_ecmp_redirect_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_this_neighbor_dr.yfilter)
	|| ydk::is_set(is_this_neighbor_us.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(uptime.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (expiry_timer.is_set || is_set(expiry_timer.yfilter)) leaf_name_data.push_back(expiry_timer.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bfd_state.is_set || is_set(is_bfd_state.yfilter)) leaf_name_data.push_back(is_bfd_state.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_dr_priority_capable.is_set || is_set(is_dr_priority_capable.yfilter)) leaf_name_data.push_back(is_dr_priority_capable.get_name_leafdata());
    if (is_ecmp_redirect_capable.is_set || is_set(is_ecmp_redirect_capable.yfilter)) leaf_name_data.push_back(is_ecmp_redirect_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_this_neighbor_dr.is_set || is_set(is_this_neighbor_dr.yfilter)) leaf_name_data.push_back(is_this_neighbor_dr.get_name_leafdata());
    if (is_this_neighbor_us.is_set || is_set(is_this_neighbor_us.yfilter)) leaf_name_data.push_back(is_this_neighbor_us.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        for(auto const & c : neighbor_address_xr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_address_xr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer = value;
        expiry_timer.value_namespace = name_space;
        expiry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state = value;
        is_bfd_state.value_namespace = name_space;
        is_bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable = value;
        is_dr_priority_capable.value_namespace = name_space;
        is_dr_priority_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable = value;
        is_ecmp_redirect_capable.value_namespace = name_space;
        is_ecmp_redirect_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr = value;
        is_this_neighbor_dr.value_namespace = name_space;
        is_this_neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us = value;
        is_this_neighbor_us.value_namespace = name_space;
        is_this_neighbor_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable.yfilter = yfilter;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "dr-priority" || name == "expires" || name == "expiry-timer" || name == "interface-name" || name == "interface-name-xr" || name == "is-batch-asserts-capable" || name == "is-bfd-state" || name == "is-bidirectional-capable" || name == "is-dr-priority-capable" || name == "is-ecmp-redirect-capable" || name == "is-proxy-capable" || name == "is-this-neighbor-dr" || name == "is-this-neighbor-us" || name == "neighbor-address" || name == "override-interval" || name == "propagation-delay" || name == "uptime")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnels()
{

    yang_name = "net-io-tunnels"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::~NetIoTunnels()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::has_data() const
{
    for (std::size_t index=0; index<net_io_tunnel.size(); index++)
    {
        if(net_io_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::has_operation() const
{
    for (std::size_t index=0; index<net_io_tunnel.size(); index++)
    {
        if(net_io_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::NetIoTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "net-io-tunnel")
    {
        for(auto const & c : net_io_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel>();
        c->parent = this;
        net_io_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : net_io_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "net-io-tunnel")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::NetIoTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_netio(std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio>())
	,rp_address(std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress>())
	,source_address(std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress>())
	,source_address_netio(std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio>())
{
    group_address_netio->parent = this;
    rp_address->parent = this;
    source_address->parent = this;
    source_address_netio->parent = this;

    yang_name = "net-io-tunnel"; yang_parent_name = "net-io-tunnels"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::~NetIoTunnel()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::has_data() const
{
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (group_address_netio !=  nullptr && group_address_netio->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data());
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio == nullptr)
        {
            group_address_netio = std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio>();
        }
        return group_address_netio;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio == nullptr)
        {
            source_address_netio = std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio>();
        }
        return source_address_netio;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_netio != nullptr)
    {
        children["group-address-netio"] = group_address_netio;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(source_address_netio != nullptr)
    {
        children["source-address-netio"] = source_address_netio;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-netio" || name == "rp-address" || name == "source-address" || name == "source-address-netio" || name == "tunnel-name" || name == "vrf-name")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-netio"; yang_parent_name = "net-io-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "net-io-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::~RpAddress()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "net-io-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::~SourceAddress()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-netio"; yang_parent_name = "net-io-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Ranges::Ranges()
{

    yang_name = "ranges"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Ranges::~Ranges()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::Range()
    :
    client{YType::enumeration, "client"},
    client_xr{YType::enumeration, "client-xr"},
    expires{YType::uint64, "expires"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"}
    	,
    rp_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr>())
	,source_of_information(std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation>())
{
    rp_address_xr->parent = this;
    source_of_information->parent = this;

    yang_name = "range"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::~Range()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::has_data() const
{
    for (std::size_t index=0; index<group_range.size(); index++)
    {
        if(group_range[index]->has_data())
            return true;
    }
    return client.is_set
	|| client_xr.is_set
	|| expires.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::has_operation() const
{
    for (std::size_t index=0; index<group_range.size(); index++)
    {
        if(group_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(client_xr.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Ranges::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (client_xr.is_set || is_set(client_xr.yfilter)) leaf_name_data.push_back(client_xr.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-range")
    {
        for(auto const & c : group_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange>();
        c->parent = this;
        group_range.push_back(c);
        return c;
    }

    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr>();
        }
        return rp_address_xr;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_range)
    {
        children[c->get_segment_path()] = c;
    }

    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-xr")
    {
        client_xr = value;
        client_xr.value_namespace = name_space;
        client_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "client-xr")
    {
        client_xr.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-range" || name == "rp-address-xr" || name == "source-of-information" || name == "client" || name == "client-xr" || name == "expires" || name == "protocol" || name == "rp-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::GroupRange()
    :
    expires{YType::uint64, "expires"},
    prefix_length{YType::int32, "prefix-length"},
    uptime{YType::uint64, "uptime"}
    	,
    prefix(std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix>())
	,source_of_information(std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation>())
{
    prefix->parent = this;
    source_of_information->parent = this;

    yang_name = "group-range"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::~GroupRange()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::has_data() const
{
    return expires.is_set
	|| prefix_length.is_set
	|| uptime.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "source-of-information" || name == "expires" || name == "prefix-length" || name == "uptime")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "group-range"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::~Prefix()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-of-information"; yang_parent_name = "group-range"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address-xr"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-of-information"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicy()
    :
    route_policy_statistics(std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics>())
	,route_policy_tests(std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests>())
{
    route_policy_statistics->parent = this;
    route_policy_tests->parent = this;

    yang_name = "route-policy"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::~RoutePolicy()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::has_data() const
{
    return (route_policy_statistics !=  nullptr && route_policy_statistics->has_data())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_data());
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (route_policy_statistics !=  nullptr && route_policy_statistics->has_operation())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy-statistics")
    {
        if(route_policy_statistics == nullptr)
        {
            route_policy_statistics = std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics>();
        }
        return route_policy_statistics;
    }

    if(child_yang_name == "route-policy-tests")
    {
        if(route_policy_tests == nullptr)
        {
            route_policy_tests = std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests>();
        }
        return route_policy_tests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_policy_statistics != nullptr)
    {
        children["route-policy-statistics"] = route_policy_statistics;
    }

    if(route_policy_tests != nullptr)
    {
        children["route-policy-tests"] = route_policy_tests;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-statistics" || name == "route-policy-tests")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::RoutePolicyStatistics()
    :
    any_table{YType::uint32, "any-table"},
    default_table{YType::uint32, "default-table"},
    drop{YType::uint32, "drop"},
    pass{YType::uint32, "pass"},
    policy_name{YType::str, "policy-name"},
    requests{YType::uint32, "requests"}
{

    yang_name = "route-policy-statistics"; yang_parent_name = "route-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::~RoutePolicyStatistics()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::has_data() const
{
    return any_table.is_set
	|| default_table.is_set
	|| drop.is_set
	|| pass.is_set
	|| policy_name.is_set
	|| requests.is_set;
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any_table.yfilter)
	|| ydk::is_set(default_table.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(pass.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_table.is_set || is_set(any_table.yfilter)) leaf_name_data.push_back(any_table.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.yfilter)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (pass.is_set || is_set(pass.yfilter)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-table")
    {
        any_table = value;
        any_table.value_namespace = name_space;
        any_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table")
    {
        default_table = value;
        default_table.value_namespace = name_space;
        default_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass")
    {
        pass = value;
        pass.value_namespace = name_space;
        pass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-table")
    {
        any_table.yfilter = yfilter;
    }
    if(value_path == "default-table")
    {
        default_table.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "pass")
    {
        pass.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any-table" || name == "default-table" || name == "drop" || name == "pass" || name == "policy-name" || name == "requests")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTests()
{

    yang_name = "route-policy-tests"; yang_parent_name = "route-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::~RoutePolicyTests()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::has_data() const
{
    for (std::size_t index=0; index<route_policy_test.size(); index++)
    {
        if(route_policy_test[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::has_operation() const
{
    for (std::size_t index=0; index<route_policy_test.size(); index++)
    {
        if(route_policy_test[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-tests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy-test")
    {
        for(auto const & c : route_policy_test)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest>();
        c->parent = this;
        route_policy_test.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_policy_test)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-test")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::RoutePolicyTest()
    :
    afi{YType::uint32, "afi"},
    default_table{YType::boolean, "default-table"},
    ext_comm{YType::str, "ext-comm"},
    extended_community_rt{YType::str, "extended-community-rt"},
    group_address{YType::str, "group-address"},
    pass{YType::boolean, "pass"},
    policy_name{YType::str, "policy-name"},
    safi{YType::uint32, "safi"},
    source_address{YType::str, "source-address"},
    table_active{YType::boolean, "table-active"},
    table_exists{YType::boolean, "table-exists"},
    table_name{YType::str, "table-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>())
	,source_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>())
{
    group_address_xr->parent = this;
    source_address_xr->parent = this;

    yang_name = "route-policy-test"; yang_parent_name = "route-policy-tests"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::~RoutePolicyTest()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_data() const
{
    return afi.is_set
	|| default_table.is_set
	|| ext_comm.is_set
	|| extended_community_rt.is_set
	|| group_address.is_set
	|| pass.is_set
	|| policy_name.is_set
	|| safi.is_set
	|| source_address.is_set
	|| table_active.is_set
	|| table_exists.is_set
	|| table_name.is_set
	|| vrf_name.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(default_table.yfilter)
	|| ydk::is_set(ext_comm.yfilter)
	|| ydk::is_set(extended_community_rt.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(pass.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(table_active.yfilter)
	|| ydk::is_set(table_exists.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.yfilter)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (ext_comm.is_set || is_set(ext_comm.yfilter)) leaf_name_data.push_back(ext_comm.get_name_leafdata());
    if (extended_community_rt.is_set || is_set(extended_community_rt.yfilter)) leaf_name_data.push_back(extended_community_rt.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (pass.is_set || is_set(pass.yfilter)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (table_active.is_set || is_set(table_active.yfilter)) leaf_name_data.push_back(table_active.get_name_leafdata());
    if (table_exists.is_set || is_set(table_exists.yfilter)) leaf_name_data.push_back(table_exists.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table")
    {
        default_table = value;
        default_table.value_namespace = name_space;
        default_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-comm")
    {
        ext_comm = value;
        ext_comm.value_namespace = name_space;
        ext_comm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-rt")
    {
        extended_community_rt = value;
        extended_community_rt.value_namespace = name_space;
        extended_community_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass")
    {
        pass = value;
        pass.value_namespace = name_space;
        pass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-active")
    {
        table_active = value;
        table_active.value_namespace = name_space;
        table_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-exists")
    {
        table_exists = value;
        table_exists.value_namespace = name_space;
        table_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "default-table")
    {
        default_table.yfilter = yfilter;
    }
    if(value_path == "ext-comm")
    {
        ext_comm.yfilter = yfilter;
    }
    if(value_path == "extended-community-rt")
    {
        extended_community_rt.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "pass")
    {
        pass.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "table-active")
    {
        table_active.yfilter = yfilter;
    }
    if(value_path == "table-exists")
    {
        table_exists.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "source-address-xr" || name == "afi" || name == "default-table" || name == "ext-comm" || name == "extended-community-rt" || name == "group-address" || name == "pass" || name == "policy-name" || name == "safi" || name == "source-address" || name == "table-active" || name == "table-exists" || name == "table-name" || name == "vrf-name")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "route-policy-test"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "route-policy-test"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RpfRedirect()
    :
    bundle_interfaces(std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces>())
	,redirect_route_databases(std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases>())
{
    bundle_interfaces->parent = this;
    redirect_route_databases->parent = this;

    yang_name = "rpf-redirect"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::~RpfRedirect()
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::has_data() const
{
    return (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (redirect_route_databases !=  nullptr && redirect_route_databases->has_data());
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::has_operation() const
{
    return is_set(yfilter)
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation())
	|| (redirect_route_databases !=  nullptr && redirect_route_databases->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::RpfRedirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RpfRedirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RpfRedirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces == nullptr)
        {
            bundle_interfaces = std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces>();
        }
        return bundle_interfaces;
    }

    if(child_yang_name == "redirect-route-databases")
    {
        if(redirect_route_databases == nullptr)
        {
            redirect_route_databases = std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases>();
        }
        return redirect_route_databases;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RpfRedirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_interfaces != nullptr)
    {
        children["bundle-interfaces"] = bundle_interfaces;
    }

    if(redirect_route_databases != nullptr)
    {
        children["redirect-route-databases"] = redirect_route_databases;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interfaces" || name == "redirect-route-databases")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterfaces()
{

    yang_name = "bundle-interfaces"; yang_parent_name = "rpf-redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::~BundleInterfaces()
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interface")
    {
        for(auto const & c : bundle_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interface")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::BundleInterface()
    :
    allocated_bandwidth{YType::int32, "allocated-bandwidth"},
    allocated_threshold_bandwidth{YType::int32, "allocated-threshold-bandwidth"},
    available_bandwidth{YType::int32, "available-bandwidth"},
    available_threshold_bandwidth{YType::int32, "available-threshold-bandwidth"},
    bundle_name{YType::str, "bundle-name"},
    interface_name{YType::str, "interface-name"},
    rpf_redirect_bundle_name{YType::str, "rpf-redirect-bundle-name"},
    rpf_redirect_interface_name{YType::str, "rpf-redirect-interface-name"},
    snooping_bandwidth_used{YType::int32, "snooping-bandwidth-used"},
    topology_bandwidth_used{YType::int32, "topology-bandwidth-used"},
    total_bandwidth{YType::int32, "total-bandwidth"}
{

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::has_data() const
{
    return allocated_bandwidth.is_set
	|| allocated_threshold_bandwidth.is_set
	|| available_bandwidth.is_set
	|| available_threshold_bandwidth.is_set
	|| bundle_name.is_set
	|| interface_name.is_set
	|| rpf_redirect_bundle_name.is_set
	|| rpf_redirect_interface_name.is_set
	|| snooping_bandwidth_used.is_set
	|| topology_bandwidth_used.is_set
	|| total_bandwidth.is_set;
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bandwidth.yfilter)
	|| ydk::is_set(allocated_threshold_bandwidth.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(available_threshold_bandwidth.yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(rpf_redirect_bundle_name.yfilter)
	|| ydk::is_set(rpf_redirect_interface_name.yfilter)
	|| ydk::is_set(snooping_bandwidth_used.yfilter)
	|| ydk::is_set(topology_bandwidth_used.yfilter)
	|| ydk::is_set(total_bandwidth.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bandwidth.is_set || is_set(allocated_bandwidth.yfilter)) leaf_name_data.push_back(allocated_bandwidth.get_name_leafdata());
    if (allocated_threshold_bandwidth.is_set || is_set(allocated_threshold_bandwidth.yfilter)) leaf_name_data.push_back(allocated_threshold_bandwidth.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (available_threshold_bandwidth.is_set || is_set(available_threshold_bandwidth.yfilter)) leaf_name_data.push_back(available_threshold_bandwidth.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rpf_redirect_bundle_name.is_set || is_set(rpf_redirect_bundle_name.yfilter)) leaf_name_data.push_back(rpf_redirect_bundle_name.get_name_leafdata());
    if (rpf_redirect_interface_name.is_set || is_set(rpf_redirect_interface_name.yfilter)) leaf_name_data.push_back(rpf_redirect_interface_name.get_name_leafdata());
    if (snooping_bandwidth_used.is_set || is_set(snooping_bandwidth_used.yfilter)) leaf_name_data.push_back(snooping_bandwidth_used.get_name_leafdata());
    if (topology_bandwidth_used.is_set || is_set(topology_bandwidth_used.yfilter)) leaf_name_data.push_back(topology_bandwidth_used.get_name_leafdata());
    if (total_bandwidth.is_set || is_set(total_bandwidth.yfilter)) leaf_name_data.push_back(total_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bandwidth")
    {
        allocated_bandwidth = value;
        allocated_bandwidth.value_namespace = name_space;
        allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-threshold-bandwidth")
    {
        allocated_threshold_bandwidth = value;
        allocated_threshold_bandwidth.value_namespace = name_space;
        allocated_threshold_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-threshold-bandwidth")
    {
        available_threshold_bandwidth = value;
        available_threshold_bandwidth.value_namespace = name_space;
        available_threshold_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-redirect-bundle-name")
    {
        rpf_redirect_bundle_name = value;
        rpf_redirect_bundle_name.value_namespace = name_space;
        rpf_redirect_bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-redirect-interface-name")
    {
        rpf_redirect_interface_name = value;
        rpf_redirect_interface_name.value_namespace = name_space;
        rpf_redirect_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snooping-bandwidth-used")
    {
        snooping_bandwidth_used = value;
        snooping_bandwidth_used.value_namespace = name_space;
        snooping_bandwidth_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-bandwidth-used")
    {
        topology_bandwidth_used = value;
        topology_bandwidth_used.value_namespace = name_space;
        topology_bandwidth_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth = value;
        total_bandwidth.value_namespace = name_space;
        total_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bandwidth")
    {
        allocated_bandwidth.yfilter = yfilter;
    }
    if(value_path == "allocated-threshold-bandwidth")
    {
        allocated_threshold_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-threshold-bandwidth")
    {
        available_threshold_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-redirect-bundle-name")
    {
        rpf_redirect_bundle_name.yfilter = yfilter;
    }
    if(value_path == "rpf-redirect-interface-name")
    {
        rpf_redirect_interface_name.yfilter = yfilter;
    }
    if(value_path == "snooping-bandwidth-used")
    {
        snooping_bandwidth_used.yfilter = yfilter;
    }
    if(value_path == "topology-bandwidth-used")
    {
        topology_bandwidth_used.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bandwidth" || name == "allocated-threshold-bandwidth" || name == "available-bandwidth" || name == "available-threshold-bandwidth" || name == "bundle-name" || name == "interface-name" || name == "rpf-redirect-bundle-name" || name == "rpf-redirect-interface-name" || name == "snooping-bandwidth-used" || name == "topology-bandwidth-used" || name == "total-bandwidth")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabases()
{

    yang_name = "redirect-route-databases"; yang_parent_name = "rpf-redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::~RedirectRouteDatabases()
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::has_data() const
{
    for (std::size_t index=0; index<redirect_route_database.size(); index++)
    {
        if(redirect_route_database[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::has_operation() const
{
    for (std::size_t index=0; index<redirect_route_database.size(); index++)
    {
        if(redirect_route_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-databases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect-route-database")
    {
        for(auto const & c : redirect_route_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase>();
        c->parent = this;
        redirect_route_database.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : redirect_route_database)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect-route-database")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::RedirectRouteDatabase()
    :
    bandwidth{YType::uint32, "bandwidth"},
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>())
	,source_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>())
{
    group_address_xr->parent = this;
    source_address_xr->parent = this;

    yang_name = "redirect-route-database"; yang_parent_name = "redirect-route-databases"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::~RedirectRouteDatabase()
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| group_address.is_set
	|| source_address.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>();
        }
        return group_address_xr;
    }

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
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "interface" || name == "source-address-xr" || name == "bandwidth" || name == "group-address" || name == "source-address" || name == "uptime")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "redirect-route-database"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::Interface()
    :
    expiry{YType::uint64, "expiry"},
    interface_name{YType::str, "interface-name"},
    is_outgoing_interface{YType::boolean, "is-outgoing-interface"},
    is_rpf_interface{YType::boolean, "is-rpf-interface"},
    is_snoop_interface{YType::boolean, "is-snoop-interface"},
    uptime{YType::uint64, "uptime"}
    	,
    rpf_address(std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>())
{
    rpf_address->parent = this;

    yang_name = "interface"; yang_parent_name = "redirect-route-database"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::~Interface()
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_data() const
{
    return expiry.is_set
	|| interface_name.is_set
	|| is_outgoing_interface.is_set
	|| is_rpf_interface.is_set
	|| is_snoop_interface.is_set
	|| uptime.is_set
	|| (rpf_address !=  nullptr && rpf_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_outgoing_interface.yfilter)
	|| ydk::is_set(is_rpf_interface.yfilter)
	|| ydk::is_set(is_snoop_interface.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (rpf_address !=  nullptr && rpf_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_outgoing_interface.is_set || is_set(is_outgoing_interface.yfilter)) leaf_name_data.push_back(is_outgoing_interface.get_name_leafdata());
    if (is_rpf_interface.is_set || is_set(is_rpf_interface.yfilter)) leaf_name_data.push_back(is_rpf_interface.get_name_leafdata());
    if (is_snoop_interface.is_set || is_set(is_snoop_interface.yfilter)) leaf_name_data.push_back(is_snoop_interface.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-address")
    {
        if(rpf_address == nullptr)
        {
            rpf_address = std::make_shared<Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>();
        }
        return rpf_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpf_address != nullptr)
    {
        children["rpf-address"] = rpf_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-outgoing-interface")
    {
        is_outgoing_interface = value;
        is_outgoing_interface.value_namespace = name_space;
        is_outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-interface")
    {
        is_rpf_interface = value;
        is_rpf_interface.value_namespace = name_space;
        is_rpf_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-snoop-interface")
    {
        is_snoop_interface = value;
        is_snoop_interface.value_namespace = name_space;
        is_snoop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-outgoing-interface")
    {
        is_outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "is-rpf-interface")
    {
        is_rpf_interface.yfilter = yfilter;
    }
    if(value_path == "is-snoop-interface")
    {
        is_snoop_interface.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-address" || name == "expiry" || name == "interface-name" || name == "is-outgoing-interface" || name == "is-rpf-interface" || name == "is-snoop-interface" || name == "uptime")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::RpfAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::~RpfAddress()
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "redirect-route-database"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::RpfSummary::RpfSummary()
    :
    default_safi{YType::uint32, "default-safi"},
    default_table_name{YType::str, "default-table-name"},
    is_isis_mtr_configured{YType::boolean, "is-isis-mtr-configured"},
    is_isis_te_configured{YType::boolean, "is-isis-te-configured"},
    is_mbgp_configured{YType::boolean, "is-mbgp-configured"},
    is_multipath_enabled{YType::boolean, "is-multipath-enabled"},
    is_multipath_interface_hash_enabled{YType::boolean, "is-multipath-interface-hash-enabled"},
    is_multipath_source_hash_enabled{YType::boolean, "is-multipath-source-hash-enabled"},
    is_multipath_source_next_hop_hash_enabled{YType::boolean, "is-multipath-source-next-hop-hash-enabled"},
    is_ospf_te_configured{YType::boolean, "is-ospf-te-configured"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    mo_frr_configured{YType::boolean, "mo-frr-configured"},
    rib_convergence_time_left{YType::uint32, "rib-convergence-time-left"},
    rib_convergence_timeout{YType::uint32, "rib-convergence-timeout"},
    rib_mo_frr_configured{YType::boolean, "rib-mo-frr-configured"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    rump_enabled{YType::boolean, "rump-enabled"}
{

    yang_name = "rpf-summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::RpfSummary::~RpfSummary()
{
}

bool Pim::Active::Vrfs::Vrf::RpfSummary::has_data() const
{
    return default_safi.is_set
	|| default_table_name.is_set
	|| is_isis_mtr_configured.is_set
	|| is_isis_te_configured.is_set
	|| is_mbgp_configured.is_set
	|| is_multipath_enabled.is_set
	|| is_multipath_interface_hash_enabled.is_set
	|| is_multipath_source_hash_enabled.is_set
	|| is_multipath_source_next_hop_hash_enabled.is_set
	|| is_ospf_te_configured.is_set
	|| is_rib_convergence.is_set
	|| mo_frr_configured.is_set
	|| rib_convergence_time_left.is_set
	|| rib_convergence_timeout.is_set
	|| rib_mo_frr_configured.is_set
	|| rpf_registrations.is_set
	|| rump_enabled.is_set;
}

bool Pim::Active::Vrfs::Vrf::RpfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_safi.yfilter)
	|| ydk::is_set(default_table_name.yfilter)
	|| ydk::is_set(is_isis_mtr_configured.yfilter)
	|| ydk::is_set(is_isis_te_configured.yfilter)
	|| ydk::is_set(is_mbgp_configured.yfilter)
	|| ydk::is_set(is_multipath_enabled.yfilter)
	|| ydk::is_set(is_multipath_interface_hash_enabled.yfilter)
	|| ydk::is_set(is_multipath_source_hash_enabled.yfilter)
	|| ydk::is_set(is_multipath_source_next_hop_hash_enabled.yfilter)
	|| ydk::is_set(is_ospf_te_configured.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter)
	|| ydk::is_set(mo_frr_configured.yfilter)
	|| ydk::is_set(rib_convergence_time_left.yfilter)
	|| ydk::is_set(rib_convergence_timeout.yfilter)
	|| ydk::is_set(rib_mo_frr_configured.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter)
	|| ydk::is_set(rump_enabled.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::RpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::RpfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_safi.is_set || is_set(default_safi.yfilter)) leaf_name_data.push_back(default_safi.get_name_leafdata());
    if (default_table_name.is_set || is_set(default_table_name.yfilter)) leaf_name_data.push_back(default_table_name.get_name_leafdata());
    if (is_isis_mtr_configured.is_set || is_set(is_isis_mtr_configured.yfilter)) leaf_name_data.push_back(is_isis_mtr_configured.get_name_leafdata());
    if (is_isis_te_configured.is_set || is_set(is_isis_te_configured.yfilter)) leaf_name_data.push_back(is_isis_te_configured.get_name_leafdata());
    if (is_mbgp_configured.is_set || is_set(is_mbgp_configured.yfilter)) leaf_name_data.push_back(is_mbgp_configured.get_name_leafdata());
    if (is_multipath_enabled.is_set || is_set(is_multipath_enabled.yfilter)) leaf_name_data.push_back(is_multipath_enabled.get_name_leafdata());
    if (is_multipath_interface_hash_enabled.is_set || is_set(is_multipath_interface_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_interface_hash_enabled.get_name_leafdata());
    if (is_multipath_source_hash_enabled.is_set || is_set(is_multipath_source_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_source_hash_enabled.get_name_leafdata());
    if (is_multipath_source_next_hop_hash_enabled.is_set || is_set(is_multipath_source_next_hop_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_source_next_hop_hash_enabled.get_name_leafdata());
    if (is_ospf_te_configured.is_set || is_set(is_ospf_te_configured.yfilter)) leaf_name_data.push_back(is_ospf_te_configured.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (mo_frr_configured.is_set || is_set(mo_frr_configured.yfilter)) leaf_name_data.push_back(mo_frr_configured.get_name_leafdata());
    if (rib_convergence_time_left.is_set || is_set(rib_convergence_time_left.yfilter)) leaf_name_data.push_back(rib_convergence_time_left.get_name_leafdata());
    if (rib_convergence_timeout.is_set || is_set(rib_convergence_timeout.yfilter)) leaf_name_data.push_back(rib_convergence_timeout.get_name_leafdata());
    if (rib_mo_frr_configured.is_set || is_set(rib_mo_frr_configured.yfilter)) leaf_name_data.push_back(rib_mo_frr_configured.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.yfilter)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-safi")
    {
        default_safi = value;
        default_safi.value_namespace = name_space;
        default_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table-name")
    {
        default_table_name = value;
        default_table_name.value_namespace = name_space;
        default_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-isis-mtr-configured")
    {
        is_isis_mtr_configured = value;
        is_isis_mtr_configured.value_namespace = name_space;
        is_isis_mtr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-isis-te-configured")
    {
        is_isis_te_configured = value;
        is_isis_te_configured.value_namespace = name_space;
        is_isis_te_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mbgp-configured")
    {
        is_mbgp_configured = value;
        is_mbgp_configured.value_namespace = name_space;
        is_mbgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-enabled")
    {
        is_multipath_enabled = value;
        is_multipath_enabled.value_namespace = name_space;
        is_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-interface-hash-enabled")
    {
        is_multipath_interface_hash_enabled = value;
        is_multipath_interface_hash_enabled.value_namespace = name_space;
        is_multipath_interface_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-source-hash-enabled")
    {
        is_multipath_source_hash_enabled = value;
        is_multipath_source_hash_enabled.value_namespace = name_space;
        is_multipath_source_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-source-next-hop-hash-enabled")
    {
        is_multipath_source_next_hop_hash_enabled = value;
        is_multipath_source_next_hop_hash_enabled.value_namespace = name_space;
        is_multipath_source_next_hop_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ospf-te-configured")
    {
        is_ospf_te_configured = value;
        is_ospf_te_configured.value_namespace = name_space;
        is_ospf_te_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mo-frr-configured")
    {
        mo_frr_configured = value;
        mo_frr_configured.value_namespace = name_space;
        mo_frr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-convergence-time-left")
    {
        rib_convergence_time_left = value;
        rib_convergence_time_left.value_namespace = name_space;
        rib_convergence_time_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-convergence-timeout")
    {
        rib_convergence_timeout = value;
        rib_convergence_timeout.value_namespace = name_space;
        rib_convergence_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-mo-frr-configured")
    {
        rib_mo_frr_configured = value;
        rib_mo_frr_configured.value_namespace = name_space;
        rib_mo_frr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
        rump_enabled.value_namespace = name_space;
        rump_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::RpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-safi")
    {
        default_safi.yfilter = yfilter;
    }
    if(value_path == "default-table-name")
    {
        default_table_name.yfilter = yfilter;
    }
    if(value_path == "is-isis-mtr-configured")
    {
        is_isis_mtr_configured.yfilter = yfilter;
    }
    if(value_path == "is-isis-te-configured")
    {
        is_isis_te_configured.yfilter = yfilter;
    }
    if(value_path == "is-mbgp-configured")
    {
        is_mbgp_configured.yfilter = yfilter;
    }
    if(value_path == "is-multipath-enabled")
    {
        is_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-interface-hash-enabled")
    {
        is_multipath_interface_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-source-hash-enabled")
    {
        is_multipath_source_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-source-next-hop-hash-enabled")
    {
        is_multipath_source_next_hop_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ospf-te-configured")
    {
        is_ospf_te_configured.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
    if(value_path == "mo-frr-configured")
    {
        mo_frr_configured.yfilter = yfilter;
    }
    if(value_path == "rib-convergence-time-left")
    {
        rib_convergence_time_left.yfilter = yfilter;
    }
    if(value_path == "rib-convergence-timeout")
    {
        rib_convergence_timeout.yfilter = yfilter;
    }
    if(value_path == "rib-mo-frr-configured")
    {
        rib_mo_frr_configured.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::RpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-safi" || name == "default-table-name" || name == "is-isis-mtr-configured" || name == "is-isis-te-configured" || name == "is-mbgp-configured" || name == "is-multipath-enabled" || name == "is-multipath-interface-hash-enabled" || name == "is-multipath-source-hash-enabled" || name == "is-multipath-source-next-hop-hash-enabled" || name == "is-ospf-te-configured" || name == "is-rib-convergence" || name == "mo-frr-configured" || name == "rib-convergence-time-left" || name == "rib-convergence-timeout" || name == "rib-mo-frr-configured" || name == "rpf-registrations" || name == "rump-enabled")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Safs()
{

    yang_name = "safs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::~Safs()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::has_data() const
{
    for (std::size_t index=0; index<saf.size(); index++)
    {
        if(saf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Safs::has_operation() const
{
    for (std::size_t index=0; index<saf.size(); index++)
    {
        if(saf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Safs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "safs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "saf")
    {
        for(auto const & c : saf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf>();
        c->parent = this;
        saf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : saf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Safs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Safs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "saf")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Saf()
    :
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"}
    	,
    rpf_hash_source_groups(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups>())
	,rpf_hash_sources(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources>())
	,rpfs(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs>())
{
    rpf_hash_source_groups->parent = this;
    rpf_hash_sources->parent = this;
    rpfs->parent = this;

    yang_name = "saf"; yang_parent_name = "safs"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::~Saf()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::has_data() const
{
    return saf_name.is_set
	|| topology_name.is_set
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_data())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_data())
	|| (rpfs !=  nullptr && rpfs->has_data());
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_operation())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_operation())
	|| (rpfs !=  nullptr && rpfs->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source-groups")
    {
        if(rpf_hash_source_groups == nullptr)
        {
            rpf_hash_source_groups = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups>();
        }
        return rpf_hash_source_groups;
    }

    if(child_yang_name == "rpf-hash-sources")
    {
        if(rpf_hash_sources == nullptr)
        {
            rpf_hash_sources = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources>();
        }
        return rpf_hash_sources;
    }

    if(child_yang_name == "rpfs")
    {
        if(rpfs == nullptr)
        {
            rpfs = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs>();
        }
        return rpfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpf_hash_source_groups != nullptr)
    {
        children["rpf-hash-source-groups"] = rpf_hash_source_groups;
    }

    if(rpf_hash_sources != nullptr)
    {
        children["rpf-hash-sources"] = rpf_hash_sources;
    }

    if(rpfs != nullptr)
    {
        children["rpfs"] = rpfs;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source-groups" || name == "rpf-hash-sources" || name == "rpfs" || name == "saf-name" || name == "topology-name")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroups()
{

    yang_name = "rpf-hash-source-groups"; yang_parent_name = "saf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::~RpfHashSourceGroups()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::has_data() const
{
    for (std::size_t index=0; index<rpf_hash_source_group.size(); index++)
    {
        if(rpf_hash_source_group[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source_group.size(); index++)
    {
        if(rpf_hash_source_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source-group")
    {
        for(auto const & c : rpf_hash_source_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup>();
        c->parent = this;
        rpf_hash_source_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpf_hash_source_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source-group")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::RpfHashSourceGroup()
    :
    group_address{YType::str, "group-address"},
    mask_length{YType::int32, "mask-length"},
    mofrr{YType::int32, "mofrr"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"},
    source_address{YType::str, "source-address"}
    	,
    next_hop_address(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>())
	,secondary_next_hop_address(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;
    secondary_next_hop_address->parent = this;

    yang_name = "rpf-hash-source-group"; yang_parent_name = "rpf-hash-source-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::~RpfHashSourceGroup()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_data() const
{
    return group_address.is_set
	|| mask_length.is_set
	|| mofrr.is_set
	|| next_hop_interface.is_set
	|| next_hop_multipath_enabled.is_set
	|| secondary_next_hop_interface.is_set
	|| source_address.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(mask_length.yfilter)
	|| ydk::is_set(mofrr.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_multipath_enabled.yfilter)
	|| ydk::is_set(secondary_next_hop_interface.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());
    if (mofrr.is_set || is_set(mofrr.yfilter)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.yfilter)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.yfilter)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>();
        }
        return next_hop_address;
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address == nullptr)
        {
            secondary_next_hop_address = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>();
        }
        return secondary_next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    if(secondary_next_hop_address != nullptr)
    {
        children["secondary-next-hop-address"] = secondary_next_hop_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr")
    {
        mofrr = value;
        mofrr.value_namespace = name_space;
        mofrr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
        next_hop_multipath_enabled.value_namespace = name_space;
        next_hop_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
        secondary_next_hop_interface.value_namespace = name_space;
        secondary_next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
    if(value_path == "mofrr")
    {
        mofrr.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "secondary-next-hop-address" || name == "group-address" || name == "mask-length" || name == "mofrr" || name == "next-hop-interface" || name == "next-hop-multipath-enabled" || name == "secondary-next-hop-interface" || name == "source-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source-group"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source-group"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSources()
{

    yang_name = "rpf-hash-sources"; yang_parent_name = "saf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::~RpfHashSources()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::has_data() const
{
    for (std::size_t index=0; index<rpf_hash_source.size(); index++)
    {
        if(rpf_hash_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source.size(); index++)
    {
        if(rpf_hash_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source")
    {
        for(auto const & c : rpf_hash_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource>();
        c->parent = this;
        rpf_hash_source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpf_hash_source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::RpfHashSource()
    :
    mofrr{YType::int32, "mofrr"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"},
    source_address{YType::str, "source-address"}
    	,
    next_hop_address(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>())
	,secondary_next_hop_address(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;
    secondary_next_hop_address->parent = this;

    yang_name = "rpf-hash-source"; yang_parent_name = "rpf-hash-sources"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::~RpfHashSource()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::has_data() const
{
    return mofrr.is_set
	|| next_hop_interface.is_set
	|| next_hop_multipath_enabled.is_set
	|| secondary_next_hop_interface.is_set
	|| source_address.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mofrr.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_multipath_enabled.yfilter)
	|| ydk::is_set(secondary_next_hop_interface.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mofrr.is_set || is_set(mofrr.yfilter)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.yfilter)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.yfilter)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>();
        }
        return next_hop_address;
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address == nullptr)
        {
            secondary_next_hop_address = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>();
        }
        return secondary_next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    if(secondary_next_hop_address != nullptr)
    {
        children["secondary-next-hop-address"] = secondary_next_hop_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mofrr")
    {
        mofrr = value;
        mofrr.value_namespace = name_space;
        mofrr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
        next_hop_multipath_enabled.value_namespace = name_space;
        next_hop_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
        secondary_next_hop_interface.value_namespace = name_space;
        secondary_next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mofrr")
    {
        mofrr.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "secondary-next-hop-address" || name == "mofrr" || name == "next-hop-interface" || name == "next-hop-multipath-enabled" || name == "secondary-next-hop-interface" || name == "source-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpfs()
{

    yang_name = "rpfs"; yang_parent_name = "saf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::~Rpfs()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::has_data() const
{
    for (std::size_t index=0; index<rpf.size(); index++)
    {
        if(rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::has_operation() const
{
    for (std::size_t index=0; index<rpf.size(); index++)
    {
        if(rpf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf")
    {
        for(auto const & c : rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf>();
        c->parent = this;
        rpf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::Rpf()
    :
    registered_address{YType::str, "registered-address"},
    is_connected{YType::uint8, "is-connected"},
    is_rpf_bgp_route{YType::boolean, "is-rpf-bgp-route"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"}
    	,
    registered_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>())
{
    registered_address_xr->parent = this;

    yang_name = "rpf"; yang_parent_name = "rpfs"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::~Rpf()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::has_data() const
{
    for (std::size_t index=0; index<rpf_path.size(); index++)
    {
        if(rpf_path[index]->has_data())
            return true;
    }
    return registered_address.is_set
	|| is_connected.is_set
	|| is_rpf_bgp_route.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::has_operation() const
{
    for (std::size_t index=0; index<rpf_path.size(); index++)
    {
        if(rpf_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(registered_address.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(is_rpf_bgp_route.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf" <<"[registered-address='" <<registered_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (registered_address.is_set || is_set(registered_address.yfilter)) leaf_name_data.push_back(registered_address.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_rpf_bgp_route.is_set || is_set(is_rpf_bgp_route.yfilter)) leaf_name_data.push_back(is_rpf_bgp_route.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registered-address-xr")
    {
        if(registered_address_xr == nullptr)
        {
            registered_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>();
        }
        return registered_address_xr;
    }

    if(child_yang_name == "rpf-path")
    {
        for(auto const & c : rpf_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath>();
        c->parent = this;
        rpf_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(registered_address_xr != nullptr)
    {
        children["registered-address-xr"] = registered_address_xr;
    }

    for (auto const & c : rpf_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "registered-address")
    {
        registered_address = value;
        registered_address.value_namespace = name_space;
        registered_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-bgp-route")
    {
        is_rpf_bgp_route = value;
        is_rpf_bgp_route.value_namespace = name_space;
        is_rpf_bgp_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
        metric_preference.value_namespace = name_space;
        metric_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "registered-address")
    {
        registered_address.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "is-rpf-bgp-route")
    {
        is_rpf_bgp_route.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registered-address-xr" || name == "rpf-path" || name == "registered-address" || name == "is-connected" || name == "is-rpf-bgp-route" || name == "metric" || name == "metric-preference")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::RegisteredAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "registered-address-xr"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::~RegisteredAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfPath()
    :
    connector{YType::str, "connector"},
    extranet_vrf_name{YType::str, "extranet-vrf-name"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    is_rpf_interface_disabled{YType::boolean, "is-rpf-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    is_via_mlsm{YType::boolean, "is-via-mlsm"},
    rpf_interface_name{YType::str, "rpf-interface-name"}
    	,
    rpf_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>())
	,rpf_nexthop(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>())
{
    rpf_neighbor->parent = this;
    rpf_nexthop->parent = this;

    yang_name = "rpf-path"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::~RpfPath()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::has_data() const
{
    return connector.is_set
	|| extranet_vrf_name.is_set
	|| is_connector_attribute_present.is_set
	|| is_rpf_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| is_via_mlsm.is_set
	|| rpf_interface_name.is_set
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_data());
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connector.yfilter)
	|| ydk::is_set(extranet_vrf_name.yfilter)
	|| ydk::is_set(is_connector_attribute_present.yfilter)
	|| ydk::is_set(is_rpf_interface_disabled.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| ydk::is_set(is_via_mlsm.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connector.is_set || is_set(connector.yfilter)) leaf_name_data.push_back(connector.get_name_leafdata());
    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.yfilter)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.yfilter)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (is_rpf_interface_disabled.is_set || is_set(is_rpf_interface_disabled.yfilter)) leaf_name_data.push_back(is_rpf_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (is_via_mlsm.is_set || is_set(is_via_mlsm.yfilter)) leaf_name_data.push_back(is_via_mlsm.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-nexthop")
    {
        if(rpf_nexthop == nullptr)
        {
            rpf_nexthop = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>();
        }
        return rpf_nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_nexthop != nullptr)
    {
        children["rpf-nexthop"] = rpf_nexthop;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connector")
    {
        connector = value;
        connector.value_namespace = name_space;
        connector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
        extranet_vrf_name.value_namespace = name_space;
        extranet_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
        is_connector_attribute_present.value_namespace = name_space;
        is_connector_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-interface-disabled")
    {
        is_rpf_interface_disabled = value;
        is_rpf_interface_disabled.value_namespace = name_space;
        is_rpf_interface_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-mlsm")
    {
        is_via_mlsm = value;
        is_via_mlsm.value_namespace = name_space;
        is_via_mlsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connector")
    {
        connector.yfilter = yfilter;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name.yfilter = yfilter;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-rpf-interface-disabled")
    {
        is_rpf_interface_disabled.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
    if(value_path == "is-via-mlsm")
    {
        is_via_mlsm.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-neighbor" || name == "rpf-nexthop" || name == "connector" || name == "extranet-vrf-name" || name == "is-connector-attribute-present" || name == "is-rpf-interface-disabled" || name == "is-via-lsm" || name == "is-via-mlsm" || name == "rpf-interface-name")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "rpf-path"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::RpfNexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-nexthop"; yang_parent_name = "rpf-path"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::~RpfNexthop()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Summary::Summary()
    :
    bsr_candidate_rp_set_count{YType::uint32, "bsr-candidate-rp-set-count"},
    bsr_candidate_rp_set_limit{YType::uint32, "bsr-candidate-rp-set-limit"},
    bsr_candidate_rp_set_threshold{YType::uint32, "bsr-candidate-rp-set-threshold"},
    bsr_range_threshold{YType::uint32, "bsr-range-threshold"},
    bsr_ranges_count{YType::uint32, "bsr-ranges-count"},
    bsr_ranges_limit{YType::uint32, "bsr-ranges-limit"},
    global_auto_rp_ranges_limit{YType::uint32, "global-auto-rp-ranges-limit"},
    global_bsr_candidate_rp_set_count{YType::uint32, "global-bsr-candidate-rp-set-count"},
    global_bsr_candidate_rp_set_limit{YType::uint32, "global-bsr-candidate-rp-set-limit"},
    global_bsr_candidate_rp_set_threshold{YType::uint32, "global-bsr-candidate-rp-set-threshold"},
    global_bsr_ranges_count{YType::uint32, "global-bsr-ranges-count"},
    global_bsr_ranges_limit{YType::uint32, "global-bsr-ranges-limit"},
    global_bsr_ranges_threshold{YType::uint32, "global-bsr-ranges-threshold"},
    global_register_limit{YType::uint32, "global-register-limit"},
    is_bsr_ranges_threshold_reached{YType::boolean, "is-bsr-ranges-threshold-reached"},
    is_global_auto_rp_ranges_limit_reached{YType::boolean, "is-global-auto-rp-ranges-limit-reached"},
    is_global_bsr_ranges_limit_reached{YType::boolean, "is-global-bsr-ranges-limit-reached"},
    is_global_register_limit_reached{YType::boolean, "is-global-register-limit-reached"},
    is_global_route_limit_reached{YType::boolean, "is-global-route-limit-reached"},
    is_global_rxi_limit_reached{YType::boolean, "is-global-rxi-limit-reached"},
    is_maximum_enforcement_disabled{YType::boolean, "is-maximum-enforcement-disabled"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    is_ranges_limit_reached{YType::boolean, "is-ranges-limit-reached"},
    is_route_limit_reached{YType::boolean, "is-route-limit-reached"},
    ranges_count{YType::uint32, "ranges-count"},
    ranges_limit{YType::uint32, "ranges-limit"},
    ranges_threshold{YType::uint32, "ranges-threshold"},
    register_count{YType::uint32, "register-count"},
    register_limit{YType::uint32, "register-limit"},
    register_limit_reached{YType::boolean, "register-limit-reached"},
    register_threshold{YType::uint32, "register-threshold"},
    route_count{YType::uint32, "route-count"},
    route_limit{YType::uint32, "route-limit"},
    route_low_water_mark{YType::uint32, "route-low-water-mark"},
    route_threshold{YType::uint32, "route-threshold"},
    rxi_limit_reached{YType::boolean, "rxi-limit-reached"},
    rxi_low_water_mark{YType::uint32, "rxi-low-water-mark"},
    topology_interface_state_count{YType::uint32, "topology-interface-state-count"},
    topology_interface_state_limit{YType::uint32, "topology-interface-state-limit"},
    topology_interface_state_threshold{YType::uint32, "topology-interface-state-threshold"}
{

    yang_name = "summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Summary::~Summary()
{
}

bool Pim::Active::Vrfs::Vrf::Summary::has_data() const
{
    return bsr_candidate_rp_set_count.is_set
	|| bsr_candidate_rp_set_limit.is_set
	|| bsr_candidate_rp_set_threshold.is_set
	|| bsr_range_threshold.is_set
	|| bsr_ranges_count.is_set
	|| bsr_ranges_limit.is_set
	|| global_auto_rp_ranges_limit.is_set
	|| global_bsr_candidate_rp_set_count.is_set
	|| global_bsr_candidate_rp_set_limit.is_set
	|| global_bsr_candidate_rp_set_threshold.is_set
	|| global_bsr_ranges_count.is_set
	|| global_bsr_ranges_limit.is_set
	|| global_bsr_ranges_threshold.is_set
	|| global_register_limit.is_set
	|| is_bsr_ranges_threshold_reached.is_set
	|| is_global_auto_rp_ranges_limit_reached.is_set
	|| is_global_bsr_ranges_limit_reached.is_set
	|| is_global_register_limit_reached.is_set
	|| is_global_route_limit_reached.is_set
	|| is_global_rxi_limit_reached.is_set
	|| is_maximum_enforcement_disabled.is_set
	|| is_node_low_memory.is_set
	|| is_ranges_limit_reached.is_set
	|| is_route_limit_reached.is_set
	|| ranges_count.is_set
	|| ranges_limit.is_set
	|| ranges_threshold.is_set
	|| register_count.is_set
	|| register_limit.is_set
	|| register_limit_reached.is_set
	|| register_threshold.is_set
	|| route_count.is_set
	|| route_limit.is_set
	|| route_low_water_mark.is_set
	|| route_threshold.is_set
	|| rxi_limit_reached.is_set
	|| rxi_low_water_mark.is_set
	|| topology_interface_state_count.is_set
	|| topology_interface_state_limit.is_set
	|| topology_interface_state_threshold.is_set;
}

bool Pim::Active::Vrfs::Vrf::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(bsr_range_threshold.yfilter)
	|| ydk::is_set(bsr_ranges_count.yfilter)
	|| ydk::is_set(bsr_ranges_limit.yfilter)
	|| ydk::is_set(global_auto_rp_ranges_limit.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(global_bsr_ranges_count.yfilter)
	|| ydk::is_set(global_bsr_ranges_limit.yfilter)
	|| ydk::is_set(global_bsr_ranges_threshold.yfilter)
	|| ydk::is_set(global_register_limit.yfilter)
	|| ydk::is_set(is_bsr_ranges_threshold_reached.yfilter)
	|| ydk::is_set(is_global_auto_rp_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_global_bsr_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_global_register_limit_reached.yfilter)
	|| ydk::is_set(is_global_route_limit_reached.yfilter)
	|| ydk::is_set(is_global_rxi_limit_reached.yfilter)
	|| ydk::is_set(is_maximum_enforcement_disabled.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(is_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_route_limit_reached.yfilter)
	|| ydk::is_set(ranges_count.yfilter)
	|| ydk::is_set(ranges_limit.yfilter)
	|| ydk::is_set(ranges_threshold.yfilter)
	|| ydk::is_set(register_count.yfilter)
	|| ydk::is_set(register_limit.yfilter)
	|| ydk::is_set(register_limit_reached.yfilter)
	|| ydk::is_set(register_threshold.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(route_limit.yfilter)
	|| ydk::is_set(route_low_water_mark.yfilter)
	|| ydk::is_set(route_threshold.yfilter)
	|| ydk::is_set(rxi_limit_reached.yfilter)
	|| ydk::is_set(rxi_low_water_mark.yfilter)
	|| ydk::is_set(topology_interface_state_count.yfilter)
	|| ydk::is_set(topology_interface_state_limit.yfilter)
	|| ydk::is_set(topology_interface_state_threshold.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_candidate_rp_set_count.is_set || is_set(bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_count.get_name_leafdata());
    if (bsr_candidate_rp_set_limit.is_set || is_set(bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_limit.get_name_leafdata());
    if (bsr_candidate_rp_set_threshold.is_set || is_set(bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (bsr_range_threshold.is_set || is_set(bsr_range_threshold.yfilter)) leaf_name_data.push_back(bsr_range_threshold.get_name_leafdata());
    if (bsr_ranges_count.is_set || is_set(bsr_ranges_count.yfilter)) leaf_name_data.push_back(bsr_ranges_count.get_name_leafdata());
    if (bsr_ranges_limit.is_set || is_set(bsr_ranges_limit.yfilter)) leaf_name_data.push_back(bsr_ranges_limit.get_name_leafdata());
    if (global_auto_rp_ranges_limit.is_set || is_set(global_auto_rp_ranges_limit.yfilter)) leaf_name_data.push_back(global_auto_rp_ranges_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_count.is_set || is_set(global_bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_count.get_name_leafdata());
    if (global_bsr_candidate_rp_set_limit.is_set || is_set(global_bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_threshold.is_set || is_set(global_bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (global_bsr_ranges_count.is_set || is_set(global_bsr_ranges_count.yfilter)) leaf_name_data.push_back(global_bsr_ranges_count.get_name_leafdata());
    if (global_bsr_ranges_limit.is_set || is_set(global_bsr_ranges_limit.yfilter)) leaf_name_data.push_back(global_bsr_ranges_limit.get_name_leafdata());
    if (global_bsr_ranges_threshold.is_set || is_set(global_bsr_ranges_threshold.yfilter)) leaf_name_data.push_back(global_bsr_ranges_threshold.get_name_leafdata());
    if (global_register_limit.is_set || is_set(global_register_limit.yfilter)) leaf_name_data.push_back(global_register_limit.get_name_leafdata());
    if (is_bsr_ranges_threshold_reached.is_set || is_set(is_bsr_ranges_threshold_reached.yfilter)) leaf_name_data.push_back(is_bsr_ranges_threshold_reached.get_name_leafdata());
    if (is_global_auto_rp_ranges_limit_reached.is_set || is_set(is_global_auto_rp_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_auto_rp_ranges_limit_reached.get_name_leafdata());
    if (is_global_bsr_ranges_limit_reached.is_set || is_set(is_global_bsr_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_bsr_ranges_limit_reached.get_name_leafdata());
    if (is_global_register_limit_reached.is_set || is_set(is_global_register_limit_reached.yfilter)) leaf_name_data.push_back(is_global_register_limit_reached.get_name_leafdata());
    if (is_global_route_limit_reached.is_set || is_set(is_global_route_limit_reached.yfilter)) leaf_name_data.push_back(is_global_route_limit_reached.get_name_leafdata());
    if (is_global_rxi_limit_reached.is_set || is_set(is_global_rxi_limit_reached.yfilter)) leaf_name_data.push_back(is_global_rxi_limit_reached.get_name_leafdata());
    if (is_maximum_enforcement_disabled.is_set || is_set(is_maximum_enforcement_disabled.yfilter)) leaf_name_data.push_back(is_maximum_enforcement_disabled.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (is_ranges_limit_reached.is_set || is_set(is_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_ranges_limit_reached.get_name_leafdata());
    if (is_route_limit_reached.is_set || is_set(is_route_limit_reached.yfilter)) leaf_name_data.push_back(is_route_limit_reached.get_name_leafdata());
    if (ranges_count.is_set || is_set(ranges_count.yfilter)) leaf_name_data.push_back(ranges_count.get_name_leafdata());
    if (ranges_limit.is_set || is_set(ranges_limit.yfilter)) leaf_name_data.push_back(ranges_limit.get_name_leafdata());
    if (ranges_threshold.is_set || is_set(ranges_threshold.yfilter)) leaf_name_data.push_back(ranges_threshold.get_name_leafdata());
    if (register_count.is_set || is_set(register_count.yfilter)) leaf_name_data.push_back(register_count.get_name_leafdata());
    if (register_limit.is_set || is_set(register_limit.yfilter)) leaf_name_data.push_back(register_limit.get_name_leafdata());
    if (register_limit_reached.is_set || is_set(register_limit_reached.yfilter)) leaf_name_data.push_back(register_limit_reached.get_name_leafdata());
    if (register_threshold.is_set || is_set(register_threshold.yfilter)) leaf_name_data.push_back(register_threshold.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_limit.is_set || is_set(route_limit.yfilter)) leaf_name_data.push_back(route_limit.get_name_leafdata());
    if (route_low_water_mark.is_set || is_set(route_low_water_mark.yfilter)) leaf_name_data.push_back(route_low_water_mark.get_name_leafdata());
    if (route_threshold.is_set || is_set(route_threshold.yfilter)) leaf_name_data.push_back(route_threshold.get_name_leafdata());
    if (rxi_limit_reached.is_set || is_set(rxi_limit_reached.yfilter)) leaf_name_data.push_back(rxi_limit_reached.get_name_leafdata());
    if (rxi_low_water_mark.is_set || is_set(rxi_low_water_mark.yfilter)) leaf_name_data.push_back(rxi_low_water_mark.get_name_leafdata());
    if (topology_interface_state_count.is_set || is_set(topology_interface_state_count.yfilter)) leaf_name_data.push_back(topology_interface_state_count.get_name_leafdata());
    if (topology_interface_state_limit.is_set || is_set(topology_interface_state_limit.yfilter)) leaf_name_data.push_back(topology_interface_state_limit.get_name_leafdata());
    if (topology_interface_state_threshold.is_set || is_set(topology_interface_state_threshold.yfilter)) leaf_name_data.push_back(topology_interface_state_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count = value;
        bsr_candidate_rp_set_count.value_namespace = name_space;
        bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit = value;
        bsr_candidate_rp_set_limit.value_namespace = name_space;
        bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold = value;
        bsr_candidate_rp_set_threshold.value_namespace = name_space;
        bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold = value;
        bsr_range_threshold.value_namespace = name_space;
        bsr_range_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count = value;
        bsr_ranges_count.value_namespace = name_space;
        bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit = value;
        bsr_ranges_limit.value_namespace = name_space;
        bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit = value;
        global_auto_rp_ranges_limit.value_namespace = name_space;
        global_auto_rp_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count = value;
        global_bsr_candidate_rp_set_count.value_namespace = name_space;
        global_bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit = value;
        global_bsr_candidate_rp_set_limit.value_namespace = name_space;
        global_bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold = value;
        global_bsr_candidate_rp_set_threshold.value_namespace = name_space;
        global_bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count = value;
        global_bsr_ranges_count.value_namespace = name_space;
        global_bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit = value;
        global_bsr_ranges_limit.value_namespace = name_space;
        global_bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold = value;
        global_bsr_ranges_threshold.value_namespace = name_space;
        global_bsr_ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit = value;
        global_register_limit.value_namespace = name_space;
        global_register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached = value;
        is_bsr_ranges_threshold_reached.value_namespace = name_space;
        is_bsr_ranges_threshold_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached = value;
        is_global_auto_rp_ranges_limit_reached.value_namespace = name_space;
        is_global_auto_rp_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached = value;
        is_global_bsr_ranges_limit_reached.value_namespace = name_space;
        is_global_bsr_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached = value;
        is_global_register_limit_reached.value_namespace = name_space;
        is_global_register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached = value;
        is_global_route_limit_reached.value_namespace = name_space;
        is_global_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached = value;
        is_global_rxi_limit_reached.value_namespace = name_space;
        is_global_rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled = value;
        is_maximum_enforcement_disabled.value_namespace = name_space;
        is_maximum_enforcement_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached = value;
        is_ranges_limit_reached.value_namespace = name_space;
        is_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached = value;
        is_route_limit_reached.value_namespace = name_space;
        is_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-count")
    {
        ranges_count = value;
        ranges_count.value_namespace = name_space;
        ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit = value;
        ranges_limit.value_namespace = name_space;
        ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold = value;
        ranges_threshold.value_namespace = name_space;
        ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-count")
    {
        register_count = value;
        register_count.value_namespace = name_space;
        register_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit")
    {
        register_limit = value;
        register_limit.value_namespace = name_space;
        register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached = value;
        register_limit_reached.value_namespace = name_space;
        register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-threshold")
    {
        register_threshold = value;
        register_threshold.value_namespace = name_space;
        register_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-limit")
    {
        route_limit = value;
        route_limit.value_namespace = name_space;
        route_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark = value;
        route_low_water_mark.value_namespace = name_space;
        route_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-threshold")
    {
        route_threshold = value;
        route_threshold.value_namespace = name_space;
        route_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached = value;
        rxi_limit_reached.value_namespace = name_space;
        rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark = value;
        rxi_low_water_mark.value_namespace = name_space;
        rxi_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count = value;
        topology_interface_state_count.value_namespace = name_space;
        topology_interface_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit = value;
        topology_interface_state_limit.value_namespace = name_space;
        topology_interface_state_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold = value;
        topology_interface_state_threshold.value_namespace = name_space;
        topology_interface_state_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit.yfilter = yfilter;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "ranges-count")
    {
        ranges_count.yfilter = yfilter;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit.yfilter = yfilter;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "register-count")
    {
        register_count.yfilter = yfilter;
    }
    if(value_path == "register-limit")
    {
        register_limit.yfilter = yfilter;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached.yfilter = yfilter;
    }
    if(value_path == "register-threshold")
    {
        register_threshold.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "route-limit")
    {
        route_limit.yfilter = yfilter;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "route-threshold")
    {
        route_threshold.yfilter = yfilter;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-candidate-rp-set-count" || name == "bsr-candidate-rp-set-limit" || name == "bsr-candidate-rp-set-threshold" || name == "bsr-range-threshold" || name == "bsr-ranges-count" || name == "bsr-ranges-limit" || name == "global-auto-rp-ranges-limit" || name == "global-bsr-candidate-rp-set-count" || name == "global-bsr-candidate-rp-set-limit" || name == "global-bsr-candidate-rp-set-threshold" || name == "global-bsr-ranges-count" || name == "global-bsr-ranges-limit" || name == "global-bsr-ranges-threshold" || name == "global-register-limit" || name == "is-bsr-ranges-threshold-reached" || name == "is-global-auto-rp-ranges-limit-reached" || name == "is-global-bsr-ranges-limit-reached" || name == "is-global-register-limit-reached" || name == "is-global-route-limit-reached" || name == "is-global-rxi-limit-reached" || name == "is-maximum-enforcement-disabled" || name == "is-node-low-memory" || name == "is-ranges-limit-reached" || name == "is-route-limit-reached" || name == "ranges-count" || name == "ranges-limit" || name == "ranges-threshold" || name == "register-count" || name == "register-limit" || name == "register-limit-reached" || name == "register-threshold" || name == "route-count" || name == "route-limit" || name == "route-low-water-mark" || name == "route-threshold" || name == "rxi-limit-reached" || name == "rxi-low-water-mark" || name == "topology-interface-state-count" || name == "topology-interface-state-limit" || name == "topology-interface-state-threshold")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::TableContexts::TableContexts()
{

    yang_name = "table-contexts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::TableContexts::~TableContexts()
{
}

bool Pim::Active::Vrfs::Vrf::TableContexts::has_data() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::TableContexts::has_operation() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::TableContexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-contexts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::TableContexts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TableContexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-context")
    {
        for(auto const & c : table_context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::TableContexts::TableContext>();
        c->parent = this;
        table_context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TableContexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : table_context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TableContexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::TableContexts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::TableContexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-context")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::TableContexts::TableContext::TableContext()
    :
    afi{YType::uint32, "afi"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    saf_name{YType::enumeration, "saf-name"},
    safi{YType::uint32, "safi"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    topology_name{YType::str, "topology-name"},
    vrf_id{YType::uint32, "vrf-id"}
{

    yang_name = "table-context"; yang_parent_name = "table-contexts"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::TableContexts::TableContext::~TableContext()
{
}

bool Pim::Active::Vrfs::Vrf::TableContexts::TableContext::has_data() const
{
    return afi.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_convergence.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_registration_done.is_set
	|| rpf_registrations.is_set
	|| saf_name.is_set
	|| safi.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| topology_name.is_set
	|| vrf_id.is_set;
}

bool Pim::Active::Vrfs::Vrf::TableContexts::TableContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_ital_registration_done.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter)
	|| ydk::is_set(is_rib_convergence_received.yfilter)
	|| ydk::is_set(is_rib_registration_done.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_id.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.yfilter)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.yfilter)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.yfilter)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TableContexts::TableContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done = value;
        is_ital_registration_done.value_namespace = name_space;
        is_ital_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
        is_rib_convergence_received.value_namespace = name_space;
        is_rib_convergence_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
        is_rib_registration_done.value_namespace = name_space;
        is_rib_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::TableContexts::TableContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::TableContexts::TableContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "is-active" || name == "is-ital-registration-done" || name == "is-rib-convergence" || name == "is-rib-convergence-received" || name == "is-rib-registration-done" || name == "rpf-registrations" || name == "saf-name" || name == "safi" || name == "table-id" || name == "table-name" || name == "topology-name" || name == "vrf-id")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topologies()
{

    yang_name = "topologies"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::~Topologies()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Topologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::Topology()
    :
    alive{YType::int32, "alive"},
    anycast_rp_match{YType::boolean, "anycast-rp-match"},
    anycast_rp_route_target{YType::str, "anycast-rp-route-target"},
    assume_alive{YType::boolean, "assume-alive"},
    bgp_join{YType::boolean, "bgp-join"},
    bgp_jp_time{YType::uint64, "bgp-jp-time"},
    connected{YType::boolean, "connected"},
    crossed_threshold{YType::boolean, "crossed-threshold"},
    customer_routing_type{YType::int32, "customer-routing-type"},
    data_mdt_addr_assigned{YType::boolean, "data-mdt-addr-assigned"},
    dont_check_connected{YType::boolean, "dont-check-connected"},
    expiry{YType::uint64, "expiry"},
    extranet_route{YType::boolean, "extranet-route"},
    group_address{YType::str, "group-address"},
    inherit_alive{YType::boolean, "inherit-alive"},
    inherit_spt{YType::boolean, "inherit-spt"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    jp_status{YType::int32, "jp-status"},
    jp_timer{YType::int32, "jp-timer"},
    kat_state{YType::boolean, "kat-state"},
    last_hop{YType::boolean, "last-hop"},
    limit_reached{YType::boolean, "limit-reached"},
    low_memory{YType::boolean, "low-memory"},
    mofrr_active{YType::boolean, "mofrr-active"},
    mofrr_backup{YType::boolean, "mofrr-backup"},
    mofrr_enabled{YType::boolean, "mofrr-enabled"},
    mofrr_primary{YType::boolean, "mofrr-primary"},
    probe_alive{YType::boolean, "probe-alive"},
    protocol{YType::enumeration, "protocol"},
    proxy{YType::boolean, "proxy"},
    really_alive{YType::boolean, "really-alive"},
    register_received{YType::boolean, "register-received"},
    register_received_timer{YType::int32, "register-received-timer"},
    remote_source{YType::boolean, "remote-source"},
    rib_mo_frr_enabled{YType::boolean, "rib-mo-frr-enabled"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_proxy_enabled{YType::boolean, "rpf-proxy-enabled"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    rpt{YType::int32, "rpt"},
    rpt_xr{YType::boolean, "rpt-xr"},
    sa_joined{YType::boolean, "sa-joined"},
    sa_received{YType::boolean, "sa-received"},
    sa_sent{YType::boolean, "sa-sent"},
    secondary_rpf_interface_name{YType::str, "secondary-rpf-interface-name"},
    sending_null_registers{YType::boolean, "sending-null-registers"},
    sending_registers{YType::boolean, "sending-registers"},
    signal_sources{YType::boolean, "signal-sources"},
    source_address{YType::str, "source-address"},
    spt{YType::boolean, "spt"},
    suppress_registers{YType::int32, "suppress-registers"},
    uptime{YType::uint64, "uptime"},
    vxlan{YType::boolean, "vxlan"},
    wildcard{YType::boolean, "wildcard"}
    	,
    group_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr>())
	,orig_src_address(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress>())
	,proxy_address(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress>())
	,rp_address(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress>())
	,rpf_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor>())
	,rpf_root(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot>())
	,secondary_rpf_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor>())
	,source_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr>())
{
    group_address_xr->parent = this;
    orig_src_address->parent = this;
    proxy_address->parent = this;
    rp_address->parent = this;
    rpf_neighbor->parent = this;
    rpf_root->parent = this;
    secondary_rpf_neighbor->parent = this;
    source_address_xr->parent = this;

    yang_name = "topology"; yang_parent_name = "topologies"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::~Topology()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::has_data() const
{
    for (std::size_t index=0; index<outgoing_interface.size(); index++)
    {
        if(outgoing_interface[index]->has_data())
            return true;
    }
    return alive.is_set
	|| anycast_rp_match.is_set
	|| anycast_rp_route_target.is_set
	|| assume_alive.is_set
	|| bgp_join.is_set
	|| bgp_jp_time.is_set
	|| connected.is_set
	|| crossed_threshold.is_set
	|| customer_routing_type.is_set
	|| data_mdt_addr_assigned.is_set
	|| dont_check_connected.is_set
	|| expiry.is_set
	|| extranet_route.is_set
	|| group_address.is_set
	|| inherit_alive.is_set
	|| inherit_spt.is_set
	|| is_via_lsm.is_set
	|| jp_status.is_set
	|| jp_timer.is_set
	|| kat_state.is_set
	|| last_hop.is_set
	|| limit_reached.is_set
	|| low_memory.is_set
	|| mofrr_active.is_set
	|| mofrr_backup.is_set
	|| mofrr_enabled.is_set
	|| mofrr_primary.is_set
	|| probe_alive.is_set
	|| protocol.is_set
	|| proxy.is_set
	|| really_alive.is_set
	|| register_received.is_set
	|| register_received_timer.is_set
	|| remote_source.is_set
	|| rib_mo_frr_enabled.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| rpf_interface_name.is_set
	|| rpf_proxy_enabled.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_vrf_name.is_set
	|| rpt.is_set
	|| rpt_xr.is_set
	|| sa_joined.is_set
	|| sa_received.is_set
	|| sa_sent.is_set
	|| secondary_rpf_interface_name.is_set
	|| sending_null_registers.is_set
	|| sending_registers.is_set
	|| signal_sources.is_set
	|| source_address.is_set
	|| spt.is_set
	|| suppress_registers.is_set
	|| uptime.is_set
	|| vxlan.is_set
	|| wildcard.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (orig_src_address !=  nullptr && orig_src_address->has_data())
	|| (proxy_address !=  nullptr && proxy_address->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::has_operation() const
{
    for (std::size_t index=0; index<outgoing_interface.size(); index++)
    {
        if(outgoing_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(alive.yfilter)
	|| ydk::is_set(anycast_rp_match.yfilter)
	|| ydk::is_set(anycast_rp_route_target.yfilter)
	|| ydk::is_set(assume_alive.yfilter)
	|| ydk::is_set(bgp_join.yfilter)
	|| ydk::is_set(bgp_jp_time.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(crossed_threshold.yfilter)
	|| ydk::is_set(customer_routing_type.yfilter)
	|| ydk::is_set(data_mdt_addr_assigned.yfilter)
	|| ydk::is_set(dont_check_connected.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(extranet_route.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(inherit_alive.yfilter)
	|| ydk::is_set(inherit_spt.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| ydk::is_set(jp_status.yfilter)
	|| ydk::is_set(jp_timer.yfilter)
	|| ydk::is_set(kat_state.yfilter)
	|| ydk::is_set(last_hop.yfilter)
	|| ydk::is_set(limit_reached.yfilter)
	|| ydk::is_set(low_memory.yfilter)
	|| ydk::is_set(mofrr_active.yfilter)
	|| ydk::is_set(mofrr_backup.yfilter)
	|| ydk::is_set(mofrr_enabled.yfilter)
	|| ydk::is_set(mofrr_primary.yfilter)
	|| ydk::is_set(probe_alive.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(proxy.yfilter)
	|| ydk::is_set(really_alive.yfilter)
	|| ydk::is_set(register_received.yfilter)
	|| ydk::is_set(register_received_timer.yfilter)
	|| ydk::is_set(remote_source.yfilter)
	|| ydk::is_set(rib_mo_frr_enabled.yfilter)
	|| ydk::is_set(rpf_drop.yfilter)
	|| ydk::is_set(rpf_extranet.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_proxy_enabled.yfilter)
	|| ydk::is_set(rpf_safi.yfilter)
	|| ydk::is_set(rpf_table_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| ydk::is_set(rpt.yfilter)
	|| ydk::is_set(rpt_xr.yfilter)
	|| ydk::is_set(sa_joined.yfilter)
	|| ydk::is_set(sa_received.yfilter)
	|| ydk::is_set(sa_sent.yfilter)
	|| ydk::is_set(secondary_rpf_interface_name.yfilter)
	|| ydk::is_set(sending_null_registers.yfilter)
	|| ydk::is_set(sending_registers.yfilter)
	|| ydk::is_set(signal_sources.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(spt.yfilter)
	|| ydk::is_set(suppress_registers.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(vxlan.yfilter)
	|| ydk::is_set(wildcard.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (orig_src_address !=  nullptr && orig_src_address->has_operation())
	|| (proxy_address !=  nullptr && proxy_address->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alive.is_set || is_set(alive.yfilter)) leaf_name_data.push_back(alive.get_name_leafdata());
    if (anycast_rp_match.is_set || is_set(anycast_rp_match.yfilter)) leaf_name_data.push_back(anycast_rp_match.get_name_leafdata());
    if (anycast_rp_route_target.is_set || is_set(anycast_rp_route_target.yfilter)) leaf_name_data.push_back(anycast_rp_route_target.get_name_leafdata());
    if (assume_alive.is_set || is_set(assume_alive.yfilter)) leaf_name_data.push_back(assume_alive.get_name_leafdata());
    if (bgp_join.is_set || is_set(bgp_join.yfilter)) leaf_name_data.push_back(bgp_join.get_name_leafdata());
    if (bgp_jp_time.is_set || is_set(bgp_jp_time.yfilter)) leaf_name_data.push_back(bgp_jp_time.get_name_leafdata());
    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (crossed_threshold.is_set || is_set(crossed_threshold.yfilter)) leaf_name_data.push_back(crossed_threshold.get_name_leafdata());
    if (customer_routing_type.is_set || is_set(customer_routing_type.yfilter)) leaf_name_data.push_back(customer_routing_type.get_name_leafdata());
    if (data_mdt_addr_assigned.is_set || is_set(data_mdt_addr_assigned.yfilter)) leaf_name_data.push_back(data_mdt_addr_assigned.get_name_leafdata());
    if (dont_check_connected.is_set || is_set(dont_check_connected.yfilter)) leaf_name_data.push_back(dont_check_connected.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (extranet_route.is_set || is_set(extranet_route.yfilter)) leaf_name_data.push_back(extranet_route.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (inherit_alive.is_set || is_set(inherit_alive.yfilter)) leaf_name_data.push_back(inherit_alive.get_name_leafdata());
    if (inherit_spt.is_set || is_set(inherit_spt.yfilter)) leaf_name_data.push_back(inherit_spt.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (jp_status.is_set || is_set(jp_status.yfilter)) leaf_name_data.push_back(jp_status.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.yfilter)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (kat_state.is_set || is_set(kat_state.yfilter)) leaf_name_data.push_back(kat_state.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.yfilter)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (limit_reached.is_set || is_set(limit_reached.yfilter)) leaf_name_data.push_back(limit_reached.get_name_leafdata());
    if (low_memory.is_set || is_set(low_memory.yfilter)) leaf_name_data.push_back(low_memory.get_name_leafdata());
    if (mofrr_active.is_set || is_set(mofrr_active.yfilter)) leaf_name_data.push_back(mofrr_active.get_name_leafdata());
    if (mofrr_backup.is_set || is_set(mofrr_backup.yfilter)) leaf_name_data.push_back(mofrr_backup.get_name_leafdata());
    if (mofrr_enabled.is_set || is_set(mofrr_enabled.yfilter)) leaf_name_data.push_back(mofrr_enabled.get_name_leafdata());
    if (mofrr_primary.is_set || is_set(mofrr_primary.yfilter)) leaf_name_data.push_back(mofrr_primary.get_name_leafdata());
    if (probe_alive.is_set || is_set(probe_alive.yfilter)) leaf_name_data.push_back(probe_alive.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.yfilter)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (really_alive.is_set || is_set(really_alive.yfilter)) leaf_name_data.push_back(really_alive.get_name_leafdata());
    if (register_received.is_set || is_set(register_received.yfilter)) leaf_name_data.push_back(register_received.get_name_leafdata());
    if (register_received_timer.is_set || is_set(register_received_timer.yfilter)) leaf_name_data.push_back(register_received_timer.get_name_leafdata());
    if (remote_source.is_set || is_set(remote_source.yfilter)) leaf_name_data.push_back(remote_source.get_name_leafdata());
    if (rib_mo_frr_enabled.is_set || is_set(rib_mo_frr_enabled.yfilter)) leaf_name_data.push_back(rib_mo_frr_enabled.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.yfilter)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.yfilter)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_proxy_enabled.is_set || is_set(rpf_proxy_enabled.yfilter)) leaf_name_data.push_back(rpf_proxy_enabled.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.yfilter)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.yfilter)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (rpt.is_set || is_set(rpt.yfilter)) leaf_name_data.push_back(rpt.get_name_leafdata());
    if (rpt_xr.is_set || is_set(rpt_xr.yfilter)) leaf_name_data.push_back(rpt_xr.get_name_leafdata());
    if (sa_joined.is_set || is_set(sa_joined.yfilter)) leaf_name_data.push_back(sa_joined.get_name_leafdata());
    if (sa_received.is_set || is_set(sa_received.yfilter)) leaf_name_data.push_back(sa_received.get_name_leafdata());
    if (sa_sent.is_set || is_set(sa_sent.yfilter)) leaf_name_data.push_back(sa_sent.get_name_leafdata());
    if (secondary_rpf_interface_name.is_set || is_set(secondary_rpf_interface_name.yfilter)) leaf_name_data.push_back(secondary_rpf_interface_name.get_name_leafdata());
    if (sending_null_registers.is_set || is_set(sending_null_registers.yfilter)) leaf_name_data.push_back(sending_null_registers.get_name_leafdata());
    if (sending_registers.is_set || is_set(sending_registers.yfilter)) leaf_name_data.push_back(sending_registers.get_name_leafdata());
    if (signal_sources.is_set || is_set(signal_sources.yfilter)) leaf_name_data.push_back(signal_sources.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (spt.is_set || is_set(spt.yfilter)) leaf_name_data.push_back(spt.get_name_leafdata());
    if (suppress_registers.is_set || is_set(suppress_registers.yfilter)) leaf_name_data.push_back(suppress_registers.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vxlan.is_set || is_set(vxlan.yfilter)) leaf_name_data.push_back(vxlan.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.yfilter)) leaf_name_data.push_back(wildcard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "orig-src-address")
    {
        if(orig_src_address == nullptr)
        {
            orig_src_address = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress>();
        }
        return orig_src_address;
    }

    if(child_yang_name == "outgoing-interface")
    {
        for(auto const & c : outgoing_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface>();
        c->parent = this;
        outgoing_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "proxy-address")
    {
        if(proxy_address == nullptr)
        {
            proxy_address = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress>();
        }
        return proxy_address;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root == nullptr)
        {
            rpf_root = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot>();
        }
        return rpf_root;
    }

    if(child_yang_name == "secondary-rpf-neighbor")
    {
        if(secondary_rpf_neighbor == nullptr)
        {
            secondary_rpf_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor>();
        }
        return secondary_rpf_neighbor;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(orig_src_address != nullptr)
    {
        children["orig-src-address"] = orig_src_address;
    }

    for (auto const & c : outgoing_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(proxy_address != nullptr)
    {
        children["proxy-address"] = proxy_address;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_root != nullptr)
    {
        children["rpf-root"] = rpf_root;
    }

    if(secondary_rpf_neighbor != nullptr)
    {
        children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alive")
    {
        alive = value;
        alive.value_namespace = name_space;
        alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-match")
    {
        anycast_rp_match = value;
        anycast_rp_match.value_namespace = name_space;
        anycast_rp_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-route-target")
    {
        anycast_rp_route_target = value;
        anycast_rp_route_target.value_namespace = name_space;
        anycast_rp_route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assume-alive")
    {
        assume_alive = value;
        assume_alive.value_namespace = name_space;
        assume_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-join")
    {
        bgp_join = value;
        bgp_join.value_namespace = name_space;
        bgp_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-jp-time")
    {
        bgp_jp_time = value;
        bgp_jp_time.value_namespace = name_space;
        bgp_jp_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crossed-threshold")
    {
        crossed_threshold = value;
        crossed_threshold.value_namespace = name_space;
        crossed_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "customer-routing-type")
    {
        customer_routing_type = value;
        customer_routing_type.value_namespace = name_space;
        customer_routing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mdt-addr-assigned")
    {
        data_mdt_addr_assigned = value;
        data_mdt_addr_assigned.value_namespace = name_space;
        data_mdt_addr_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dont-check-connected")
    {
        dont_check_connected = value;
        dont_check_connected.value_namespace = name_space;
        dont_check_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-route")
    {
        extranet_route = value;
        extranet_route.value_namespace = name_space;
        extranet_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inherit-alive")
    {
        inherit_alive = value;
        inherit_alive.value_namespace = name_space;
        inherit_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inherit-spt")
    {
        inherit_spt = value;
        inherit_spt.value_namespace = name_space;
        inherit_spt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-status")
    {
        jp_status = value;
        jp_status.value_namespace = name_space;
        jp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
        jp_timer.value_namespace = name_space;
        jp_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kat-state")
    {
        kat_state = value;
        kat_state.value_namespace = name_space;
        kat_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
        last_hop.value_namespace = name_space;
        last_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-reached")
    {
        limit_reached = value;
        limit_reached.value_namespace = name_space;
        limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-memory")
    {
        low_memory = value;
        low_memory.value_namespace = name_space;
        low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-active")
    {
        mofrr_active = value;
        mofrr_active.value_namespace = name_space;
        mofrr_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-backup")
    {
        mofrr_backup = value;
        mofrr_backup.value_namespace = name_space;
        mofrr_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-enabled")
    {
        mofrr_enabled = value;
        mofrr_enabled.value_namespace = name_space;
        mofrr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-primary")
    {
        mofrr_primary = value;
        mofrr_primary.value_namespace = name_space;
        mofrr_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-alive")
    {
        probe_alive = value;
        probe_alive.value_namespace = name_space;
        probe_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy")
    {
        proxy = value;
        proxy.value_namespace = name_space;
        proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "really-alive")
    {
        really_alive = value;
        really_alive.value_namespace = name_space;
        really_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-received")
    {
        register_received = value;
        register_received.value_namespace = name_space;
        register_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-received-timer")
    {
        register_received_timer = value;
        register_received_timer.value_namespace = name_space;
        register_received_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-source")
    {
        remote_source = value;
        remote_source.value_namespace = name_space;
        remote_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-mo-frr-enabled")
    {
        rib_mo_frr_enabled = value;
        rib_mo_frr_enabled.value_namespace = name_space;
        rib_mo_frr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
        rpf_drop.value_namespace = name_space;
        rpf_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
        rpf_extranet.value_namespace = name_space;
        rpf_extranet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-proxy-enabled")
    {
        rpf_proxy_enabled = value;
        rpf_proxy_enabled.value_namespace = name_space;
        rpf_proxy_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
        rpf_safi.value_namespace = name_space;
        rpf_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
        rpf_table_name.value_namespace = name_space;
        rpf_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
        rpf_vrf_name.value_namespace = name_space;
        rpf_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpt")
    {
        rpt = value;
        rpt.value_namespace = name_space;
        rpt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpt-xr")
    {
        rpt_xr = value;
        rpt_xr.value_namespace = name_space;
        rpt_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-joined")
    {
        sa_joined = value;
        sa_joined.value_namespace = name_space;
        sa_joined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-received")
    {
        sa_received = value;
        sa_received.value_namespace = name_space;
        sa_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-sent")
    {
        sa_sent = value;
        sa_sent.value_namespace = name_space;
        sa_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-rpf-interface-name")
    {
        secondary_rpf_interface_name = value;
        secondary_rpf_interface_name.value_namespace = name_space;
        secondary_rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sending-null-registers")
    {
        sending_null_registers = value;
        sending_null_registers.value_namespace = name_space;
        sending_null_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sending-registers")
    {
        sending_registers = value;
        sending_registers.value_namespace = name_space;
        sending_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-sources")
    {
        signal_sources = value;
        signal_sources.value_namespace = name_space;
        signal_sources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt")
    {
        spt = value;
        spt.value_namespace = name_space;
        spt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-registers")
    {
        suppress_registers = value;
        suppress_registers.value_namespace = name_space;
        suppress_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan")
    {
        vxlan = value;
        vxlan.value_namespace = name_space;
        vxlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
        wildcard.value_namespace = name_space;
        wildcard.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alive")
    {
        alive.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-match")
    {
        anycast_rp_match.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-route-target")
    {
        anycast_rp_route_target.yfilter = yfilter;
    }
    if(value_path == "assume-alive")
    {
        assume_alive.yfilter = yfilter;
    }
    if(value_path == "bgp-join")
    {
        bgp_join.yfilter = yfilter;
    }
    if(value_path == "bgp-jp-time")
    {
        bgp_jp_time.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "crossed-threshold")
    {
        crossed_threshold.yfilter = yfilter;
    }
    if(value_path == "customer-routing-type")
    {
        customer_routing_type.yfilter = yfilter;
    }
    if(value_path == "data-mdt-addr-assigned")
    {
        data_mdt_addr_assigned.yfilter = yfilter;
    }
    if(value_path == "dont-check-connected")
    {
        dont_check_connected.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "extranet-route")
    {
        extranet_route.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "inherit-alive")
    {
        inherit_alive.yfilter = yfilter;
    }
    if(value_path == "inherit-spt")
    {
        inherit_spt.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
    if(value_path == "jp-status")
    {
        jp_status.yfilter = yfilter;
    }
    if(value_path == "jp-timer")
    {
        jp_timer.yfilter = yfilter;
    }
    if(value_path == "kat-state")
    {
        kat_state.yfilter = yfilter;
    }
    if(value_path == "last-hop")
    {
        last_hop.yfilter = yfilter;
    }
    if(value_path == "limit-reached")
    {
        limit_reached.yfilter = yfilter;
    }
    if(value_path == "low-memory")
    {
        low_memory.yfilter = yfilter;
    }
    if(value_path == "mofrr-active")
    {
        mofrr_active.yfilter = yfilter;
    }
    if(value_path == "mofrr-backup")
    {
        mofrr_backup.yfilter = yfilter;
    }
    if(value_path == "mofrr-enabled")
    {
        mofrr_enabled.yfilter = yfilter;
    }
    if(value_path == "mofrr-primary")
    {
        mofrr_primary.yfilter = yfilter;
    }
    if(value_path == "probe-alive")
    {
        probe_alive.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "proxy")
    {
        proxy.yfilter = yfilter;
    }
    if(value_path == "really-alive")
    {
        really_alive.yfilter = yfilter;
    }
    if(value_path == "register-received")
    {
        register_received.yfilter = yfilter;
    }
    if(value_path == "register-received-timer")
    {
        register_received_timer.yfilter = yfilter;
    }
    if(value_path == "remote-source")
    {
        remote_source.yfilter = yfilter;
    }
    if(value_path == "rib-mo-frr-enabled")
    {
        rib_mo_frr_enabled.yfilter = yfilter;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop.yfilter = yfilter;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-proxy-enabled")
    {
        rpf_proxy_enabled.yfilter = yfilter;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi.yfilter = yfilter;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
    if(value_path == "rpt")
    {
        rpt.yfilter = yfilter;
    }
    if(value_path == "rpt-xr")
    {
        rpt_xr.yfilter = yfilter;
    }
    if(value_path == "sa-joined")
    {
        sa_joined.yfilter = yfilter;
    }
    if(value_path == "sa-received")
    {
        sa_received.yfilter = yfilter;
    }
    if(value_path == "sa-sent")
    {
        sa_sent.yfilter = yfilter;
    }
    if(value_path == "secondary-rpf-interface-name")
    {
        secondary_rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "sending-null-registers")
    {
        sending_null_registers.yfilter = yfilter;
    }
    if(value_path == "sending-registers")
    {
        sending_registers.yfilter = yfilter;
    }
    if(value_path == "signal-sources")
    {
        signal_sources.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "spt")
    {
        spt.yfilter = yfilter;
    }
    if(value_path == "suppress-registers")
    {
        suppress_registers.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "vxlan")
    {
        vxlan.yfilter = yfilter;
    }
    if(value_path == "wildcard")
    {
        wildcard.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "orig-src-address" || name == "outgoing-interface" || name == "proxy-address" || name == "rp-address" || name == "rpf-neighbor" || name == "rpf-root" || name == "secondary-rpf-neighbor" || name == "source-address-xr" || name == "alive" || name == "anycast-rp-match" || name == "anycast-rp-route-target" || name == "assume-alive" || name == "bgp-join" || name == "bgp-jp-time" || name == "connected" || name == "crossed-threshold" || name == "customer-routing-type" || name == "data-mdt-addr-assigned" || name == "dont-check-connected" || name == "expiry" || name == "extranet-route" || name == "group-address" || name == "inherit-alive" || name == "inherit-spt" || name == "is-via-lsm" || name == "jp-status" || name == "jp-timer" || name == "kat-state" || name == "last-hop" || name == "limit-reached" || name == "low-memory" || name == "mofrr-active" || name == "mofrr-backup" || name == "mofrr-enabled" || name == "mofrr-primary" || name == "probe-alive" || name == "protocol" || name == "proxy" || name == "really-alive" || name == "register-received" || name == "register-received-timer" || name == "remote-source" || name == "rib-mo-frr-enabled" || name == "rpf-drop" || name == "rpf-extranet" || name == "rpf-interface-name" || name == "rpf-proxy-enabled" || name == "rpf-safi" || name == "rpf-table-name" || name == "rpf-vrf-name" || name == "rpt" || name == "rpt-xr" || name == "sa-joined" || name == "sa-received" || name == "sa-sent" || name == "secondary-rpf-interface-name" || name == "sending-null-registers" || name == "sending-registers" || name == "signal-sources" || name == "source-address" || name == "spt" || name == "suppress-registers" || name == "uptime" || name == "vxlan" || name == "wildcard")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::OrigSrcAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "orig-src-address"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::~OrigSrcAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orig-src-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::OutgoingInterface()
    :
    admin_boundary{YType::boolean, "admin-boundary"},
    assert_state{YType::boolean, "assert-state"},
    assert_timer{YType::int32, "assert-timer"},
    bgp_c_mcast_join{YType::boolean, "bgp-c-mcast-join"},
    bgp_c_mcast_prune_delay_timer{YType::uint64, "bgp-c-mcast-prune-delay-timer"},
    data_mdt_join{YType::boolean, "data-mdt-join"},
    expiry{YType::uint64, "expiry"},
    extranet_interface{YType::boolean, "extranet-interface"},
    forwarding_state{YType::int32, "forwarding-state"},
    igmp_membership{YType::boolean, "igmp-membership"},
    immediate_state{YType::int32, "immediate-state"},
    interface_name{YType::str, "interface-name"},
    internal_interest_info{YType::int32, "internal-interest-info"},
    internal_interest_information{YType::enumeration, "internal-interest-information"},
    jp_state{YType::int32, "jp-state"},
    jp_timer{YType::int32, "jp-timer"},
    last_hop{YType::boolean, "last-hop"},
    local_mdt_join{YType::boolean, "local-mdt-join"},
    local_members{YType::int32, "local-members"},
    local_members_information{YType::enumeration, "local-members-information"},
    mdt_safi_join{YType::boolean, "mdt-safi-join"},
    mldp_inband_mdt{YType::boolean, "mldp-inband-mdt"},
    mldp_stale{YType::boolean, "mldp-stale"},
    mvpn_safi_join{YType::boolean, "mvpn-safi-join"},
    mvpnv6_safi_join{YType::boolean, "mvpnv6-safi-join"},
    sa_prune{YType::boolean, "sa-prune"},
    uptime{YType::uint64, "uptime"},
    vrf_name{YType::str, "vrf-name"}
    	,
    assert_winner(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner>())
{
    assert_winner->parent = this;

    yang_name = "outgoing-interface"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::~OutgoingInterface()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::has_data() const
{
    return admin_boundary.is_set
	|| assert_state.is_set
	|| assert_timer.is_set
	|| bgp_c_mcast_join.is_set
	|| bgp_c_mcast_prune_delay_timer.is_set
	|| data_mdt_join.is_set
	|| expiry.is_set
	|| extranet_interface.is_set
	|| forwarding_state.is_set
	|| igmp_membership.is_set
	|| immediate_state.is_set
	|| interface_name.is_set
	|| internal_interest_info.is_set
	|| internal_interest_information.is_set
	|| jp_state.is_set
	|| jp_timer.is_set
	|| last_hop.is_set
	|| local_mdt_join.is_set
	|| local_members.is_set
	|| local_members_information.is_set
	|| mdt_safi_join.is_set
	|| mldp_inband_mdt.is_set
	|| mldp_stale.is_set
	|| mvpn_safi_join.is_set
	|| mvpnv6_safi_join.is_set
	|| sa_prune.is_set
	|| uptime.is_set
	|| vrf_name.is_set
	|| (assert_winner !=  nullptr && assert_winner->has_data());
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin_boundary.yfilter)
	|| ydk::is_set(assert_state.yfilter)
	|| ydk::is_set(assert_timer.yfilter)
	|| ydk::is_set(bgp_c_mcast_join.yfilter)
	|| ydk::is_set(bgp_c_mcast_prune_delay_timer.yfilter)
	|| ydk::is_set(data_mdt_join.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(extranet_interface.yfilter)
	|| ydk::is_set(forwarding_state.yfilter)
	|| ydk::is_set(igmp_membership.yfilter)
	|| ydk::is_set(immediate_state.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(internal_interest_info.yfilter)
	|| ydk::is_set(internal_interest_information.yfilter)
	|| ydk::is_set(jp_state.yfilter)
	|| ydk::is_set(jp_timer.yfilter)
	|| ydk::is_set(last_hop.yfilter)
	|| ydk::is_set(local_mdt_join.yfilter)
	|| ydk::is_set(local_members.yfilter)
	|| ydk::is_set(local_members_information.yfilter)
	|| ydk::is_set(mdt_safi_join.yfilter)
	|| ydk::is_set(mldp_inband_mdt.yfilter)
	|| ydk::is_set(mldp_stale.yfilter)
	|| ydk::is_set(mvpn_safi_join.yfilter)
	|| ydk::is_set(mvpnv6_safi_join.yfilter)
	|| ydk::is_set(sa_prune.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (assert_winner !=  nullptr && assert_winner->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_boundary.is_set || is_set(admin_boundary.yfilter)) leaf_name_data.push_back(admin_boundary.get_name_leafdata());
    if (assert_state.is_set || is_set(assert_state.yfilter)) leaf_name_data.push_back(assert_state.get_name_leafdata());
    if (assert_timer.is_set || is_set(assert_timer.yfilter)) leaf_name_data.push_back(assert_timer.get_name_leafdata());
    if (bgp_c_mcast_join.is_set || is_set(bgp_c_mcast_join.yfilter)) leaf_name_data.push_back(bgp_c_mcast_join.get_name_leafdata());
    if (bgp_c_mcast_prune_delay_timer.is_set || is_set(bgp_c_mcast_prune_delay_timer.yfilter)) leaf_name_data.push_back(bgp_c_mcast_prune_delay_timer.get_name_leafdata());
    if (data_mdt_join.is_set || is_set(data_mdt_join.yfilter)) leaf_name_data.push_back(data_mdt_join.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (extranet_interface.is_set || is_set(extranet_interface.yfilter)) leaf_name_data.push_back(extranet_interface.get_name_leafdata());
    if (forwarding_state.is_set || is_set(forwarding_state.yfilter)) leaf_name_data.push_back(forwarding_state.get_name_leafdata());
    if (igmp_membership.is_set || is_set(igmp_membership.yfilter)) leaf_name_data.push_back(igmp_membership.get_name_leafdata());
    if (immediate_state.is_set || is_set(immediate_state.yfilter)) leaf_name_data.push_back(immediate_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (internal_interest_info.is_set || is_set(internal_interest_info.yfilter)) leaf_name_data.push_back(internal_interest_info.get_name_leafdata());
    if (internal_interest_information.is_set || is_set(internal_interest_information.yfilter)) leaf_name_data.push_back(internal_interest_information.get_name_leafdata());
    if (jp_state.is_set || is_set(jp_state.yfilter)) leaf_name_data.push_back(jp_state.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.yfilter)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.yfilter)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (local_mdt_join.is_set || is_set(local_mdt_join.yfilter)) leaf_name_data.push_back(local_mdt_join.get_name_leafdata());
    if (local_members.is_set || is_set(local_members.yfilter)) leaf_name_data.push_back(local_members.get_name_leafdata());
    if (local_members_information.is_set || is_set(local_members_information.yfilter)) leaf_name_data.push_back(local_members_information.get_name_leafdata());
    if (mdt_safi_join.is_set || is_set(mdt_safi_join.yfilter)) leaf_name_data.push_back(mdt_safi_join.get_name_leafdata());
    if (mldp_inband_mdt.is_set || is_set(mldp_inband_mdt.yfilter)) leaf_name_data.push_back(mldp_inband_mdt.get_name_leafdata());
    if (mldp_stale.is_set || is_set(mldp_stale.yfilter)) leaf_name_data.push_back(mldp_stale.get_name_leafdata());
    if (mvpn_safi_join.is_set || is_set(mvpn_safi_join.yfilter)) leaf_name_data.push_back(mvpn_safi_join.get_name_leafdata());
    if (mvpnv6_safi_join.is_set || is_set(mvpnv6_safi_join.yfilter)) leaf_name_data.push_back(mvpnv6_safi_join.get_name_leafdata());
    if (sa_prune.is_set || is_set(sa_prune.yfilter)) leaf_name_data.push_back(sa_prune.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "assert-winner")
    {
        if(assert_winner == nullptr)
        {
            assert_winner = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner>();
        }
        return assert_winner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(assert_winner != nullptr)
    {
        children["assert-winner"] = assert_winner;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-boundary")
    {
        admin_boundary = value;
        admin_boundary.value_namespace = name_space;
        admin_boundary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-state")
    {
        assert_state = value;
        assert_state.value_namespace = name_space;
        assert_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-timer")
    {
        assert_timer = value;
        assert_timer.value_namespace = name_space;
        assert_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-c-mcast-join")
    {
        bgp_c_mcast_join = value;
        bgp_c_mcast_join.value_namespace = name_space;
        bgp_c_mcast_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-c-mcast-prune-delay-timer")
    {
        bgp_c_mcast_prune_delay_timer = value;
        bgp_c_mcast_prune_delay_timer.value_namespace = name_space;
        bgp_c_mcast_prune_delay_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mdt-join")
    {
        data_mdt_join = value;
        data_mdt_join.value_namespace = name_space;
        data_mdt_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-interface")
    {
        extranet_interface = value;
        extranet_interface.value_namespace = name_space;
        extranet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-state")
    {
        forwarding_state = value;
        forwarding_state.value_namespace = name_space;
        forwarding_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-membership")
    {
        igmp_membership = value;
        igmp_membership.value_namespace = name_space;
        igmp_membership.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "immediate-state")
    {
        immediate_state = value;
        immediate_state.value_namespace = name_space;
        immediate_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-interest-info")
    {
        internal_interest_info = value;
        internal_interest_info.value_namespace = name_space;
        internal_interest_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-interest-information")
    {
        internal_interest_information = value;
        internal_interest_information.value_namespace = name_space;
        internal_interest_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-state")
    {
        jp_state = value;
        jp_state.value_namespace = name_space;
        jp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
        jp_timer.value_namespace = name_space;
        jp_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
        last_hop.value_namespace = name_space;
        last_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mdt-join")
    {
        local_mdt_join = value;
        local_mdt_join.value_namespace = name_space;
        local_mdt_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-members")
    {
        local_members = value;
        local_members.value_namespace = name_space;
        local_members.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-members-information")
    {
        local_members_information = value;
        local_members_information.value_namespace = name_space;
        local_members_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-safi-join")
    {
        mdt_safi_join = value;
        mdt_safi_join.value_namespace = name_space;
        mdt_safi_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-inband-mdt")
    {
        mldp_inband_mdt = value;
        mldp_inband_mdt.value_namespace = name_space;
        mldp_inband_mdt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-stale")
    {
        mldp_stale = value;
        mldp_stale.value_namespace = name_space;
        mldp_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-safi-join")
    {
        mvpn_safi_join = value;
        mvpn_safi_join.value_namespace = name_space;
        mvpn_safi_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpnv6-safi-join")
    {
        mvpnv6_safi_join = value;
        mvpnv6_safi_join.value_namespace = name_space;
        mvpnv6_safi_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-prune")
    {
        sa_prune = value;
        sa_prune.value_namespace = name_space;
        sa_prune.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-boundary")
    {
        admin_boundary.yfilter = yfilter;
    }
    if(value_path == "assert-state")
    {
        assert_state.yfilter = yfilter;
    }
    if(value_path == "assert-timer")
    {
        assert_timer.yfilter = yfilter;
    }
    if(value_path == "bgp-c-mcast-join")
    {
        bgp_c_mcast_join.yfilter = yfilter;
    }
    if(value_path == "bgp-c-mcast-prune-delay-timer")
    {
        bgp_c_mcast_prune_delay_timer.yfilter = yfilter;
    }
    if(value_path == "data-mdt-join")
    {
        data_mdt_join.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "extranet-interface")
    {
        extranet_interface.yfilter = yfilter;
    }
    if(value_path == "forwarding-state")
    {
        forwarding_state.yfilter = yfilter;
    }
    if(value_path == "igmp-membership")
    {
        igmp_membership.yfilter = yfilter;
    }
    if(value_path == "immediate-state")
    {
        immediate_state.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "internal-interest-info")
    {
        internal_interest_info.yfilter = yfilter;
    }
    if(value_path == "internal-interest-information")
    {
        internal_interest_information.yfilter = yfilter;
    }
    if(value_path == "jp-state")
    {
        jp_state.yfilter = yfilter;
    }
    if(value_path == "jp-timer")
    {
        jp_timer.yfilter = yfilter;
    }
    if(value_path == "last-hop")
    {
        last_hop.yfilter = yfilter;
    }
    if(value_path == "local-mdt-join")
    {
        local_mdt_join.yfilter = yfilter;
    }
    if(value_path == "local-members")
    {
        local_members.yfilter = yfilter;
    }
    if(value_path == "local-members-information")
    {
        local_members_information.yfilter = yfilter;
    }
    if(value_path == "mdt-safi-join")
    {
        mdt_safi_join.yfilter = yfilter;
    }
    if(value_path == "mldp-inband-mdt")
    {
        mldp_inband_mdt.yfilter = yfilter;
    }
    if(value_path == "mldp-stale")
    {
        mldp_stale.yfilter = yfilter;
    }
    if(value_path == "mvpn-safi-join")
    {
        mvpn_safi_join.yfilter = yfilter;
    }
    if(value_path == "mvpnv6-safi-join")
    {
        mvpnv6_safi_join.yfilter = yfilter;
    }
    if(value_path == "sa-prune")
    {
        sa_prune.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "assert-winner" || name == "admin-boundary" || name == "assert-state" || name == "assert-timer" || name == "bgp-c-mcast-join" || name == "bgp-c-mcast-prune-delay-timer" || name == "data-mdt-join" || name == "expiry" || name == "extranet-interface" || name == "forwarding-state" || name == "igmp-membership" || name == "immediate-state" || name == "interface-name" || name == "internal-interest-info" || name == "internal-interest-information" || name == "jp-state" || name == "jp-timer" || name == "last-hop" || name == "local-mdt-join" || name == "local-members" || name == "local-members-information" || name == "mdt-safi-join" || name == "mldp-inband-mdt" || name == "mldp-stale" || name == "mvpn-safi-join" || name == "mvpnv6-safi-join" || name == "sa-prune" || name == "uptime" || name == "vrf-name")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::AssertWinner()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "assert-winner"; yang_parent_name = "outgoing-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::~AssertWinner()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assert-winner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::ProxyAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "proxy-address"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::~ProxyAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::~RpAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-root"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::~RpfRoot()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::SecondaryRpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "secondary-rpf-neighbor"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::~SecondaryRpfNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCounts()
{

    yang_name = "topology-entry-flag-route-counts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::~TopologyEntryFlagRouteCounts()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-entry-flag-route-count")
    {
        for(auto const & c : topology_entry_flag_route_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount>();
        c->parent = this;
        topology_entry_flag_route_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_entry_flag_route_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-entry-flag-route-count")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::TopologyEntryFlagRouteCount()
    :
    entry_flag{YType::enumeration, "entry-flag"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
{

    yang_name = "topology-entry-flag-route-count"; yang_parent_name = "topology-entry-flag-route-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::~TopologyEntryFlagRouteCount()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_data() const
{
    return entry_flag.is_set
	|| active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set;
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_flag.yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-count" <<"[entry-flag='" <<entry_flag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_flag.is_set || is_set(entry_flag.yfilter)) leaf_name_data.push_back(entry_flag.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-flag")
    {
        entry_flag = value;
        entry_flag.value_namespace = name_space;
        entry_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-flag")
    {
        entry_flag.yfilter = yfilter;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry-flag" || name == "active-group-ranges" || name == "group-ranges" || name == "groute-count" || name == "is-node-low-memory" || name == "sg-route-count" || name == "sgr-route-count")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCounts()
{

    yang_name = "topology-interface-flag-route-counts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::~TopologyInterfaceFlagRouteCounts()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.size(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.size(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-interface-flag-route-count")
    {
        for(auto const & c : topology_interface_flag_route_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount>();
        c->parent = this;
        topology_interface_flag_route_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_interface_flag_route_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-interface-flag-route-count")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::TopologyInterfaceFlagRouteCount()
    :
    interface_flag{YType::enumeration, "interface-flag"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
{

    yang_name = "topology-interface-flag-route-count"; yang_parent_name = "topology-interface-flag-route-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::~TopologyInterfaceFlagRouteCount()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_data() const
{
    return interface_flag.is_set
	|| active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set;
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_flag.yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-count" <<"[interface-flag='" <<interface_flag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_flag.is_set || is_set(interface_flag.yfilter)) leaf_name_data.push_back(interface_flag.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-flag")
    {
        interface_flag = value;
        interface_flag.value_namespace = name_space;
        interface_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-flag")
    {
        interface_flag.yfilter = yfilter;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-flag" || name == "active-group-ranges" || name == "group-ranges" || name == "groute-count" || name == "is-node-low-memory" || name == "sg-route-count" || name == "sgr-route-count")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::TopologyRouteCount::TopologyRouteCount()
    :
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
{

    yang_name = "topology-route-count"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::TopologyRouteCount::~TopologyRouteCount()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyRouteCount::has_data() const
{
    return active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set;
}

bool Pim::Active::Vrfs::Vrf::TopologyRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::TopologyRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-route-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::TopologyRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::TopologyRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::TopologyRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-group-ranges" || name == "group-ranges" || name == "groute-count" || name == "is-node-low-memory" || name == "sg-route-count" || name == "sgr-route-count")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::TrafficCounters::TrafficCounters()
    :
    boundary_acl_rx_drop{YType::uint32, "boundary-acl-rx-drop"},
    boundary_acl_tx_drop{YType::uint32, "boundary-acl-tx-drop"},
    checksum_error{YType::uint32, "checksum-error"},
    elapsed_time{YType::uint32, "elapsed-time"},
    format_error{YType::uint32, "format-error"},
    input_assert{YType::uint32, "input-assert"},
    input_assert_batched{YType::uint32, "input-assert-batched"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    input_data_register{YType::uint32, "input-data-register"},
    input_df_election{YType::uint32, "input-df-election"},
    input_ecmp_redirect{YType::uint32, "input-ecmp-redirect"},
    input_hello{YType::uint32, "input-hello"},
    input_jp{YType::uint32, "input-jp"},
    input_no_idb_error{YType::uint32, "input-no-idb-error"},
    input_no_pim_error{YType::uint32, "input-no-pim-error"},
    input_no_vrf_error{YType::uint32, "input-no-vrf-error"},
    input_null_register{YType::uint32, "input-null-register"},
    input_pim_version_error{YType::uint32, "input-pim-version-error"},
    input_register_stop{YType::uint32, "input-register-stop"},
    inputs{YType::uint32, "inputs"},
    invalid_destination_packets{YType::uint32, "invalid-destination-packets"},
    invalid_join_prunes{YType::uint32, "invalid-join-prunes"},
    invalid_registers{YType::uint32, "invalid-registers"},
    mdt_drop_local_source_address{YType::uint32, "mdt-drop-local-source-address"},
    mdt_drop_no_idb{YType::uint32, "mdt-drop-no-idb"},
    mdt_drop_no_vrf{YType::uint32, "mdt-drop-no-vrf"},
    mdt_drop_null_local_address{YType::uint32, "mdt-drop-null-local-address"},
    mdt_join_bad_type{YType::uint32, "mdt-join-bad-type"},
    mdt_join_tlv_received{YType::uint32, "mdt-join-tlv-received"},
    mdt_join_tlv_sent{YType::uint32, "mdt-join-tlv-sent"},
    mdt_joins_drop_multiple_encapsulation{YType::uint32, "mdt-joins-drop-multiple-encapsulation"},
    mdt_send_queue_full{YType::uint32, "mdt-send-queue-full"},
    mdt_socket_error{YType::uint32, "mdt-socket-error"},
    mldp_mdt_invalid_lsm_identifier{YType::uint32, "mldp-mdt-invalid-lsm-identifier"},
    no_mdt_socket_connection{YType::uint32, "no-mdt-socket-connection"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    no_source_address{YType::uint32, "no-source-address"},
    non_supported_packets{YType::uint32, "non-supported-packets"},
    output_assert{YType::uint32, "output-assert"},
    output_assert_batched{YType::uint32, "output-assert-batched"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    output_data_register{YType::uint32, "output-data-register"},
    output_df_election{YType::uint32, "output-df-election"},
    output_ecmp_redirect{YType::uint32, "output-ecmp-redirect"},
    output_hello{YType::uint32, "output-hello"},
    output_hello_bytes{YType::uint32, "output-hello-bytes"},
    output_join_group{YType::uint32, "output-join-group"},
    output_join_prune_bytes{YType::uint32, "output-join-prune-bytes"},
    output_jp{YType::uint32, "output-jp"},
    output_loop_error{YType::uint32, "output-loop-error"},
    output_null_register{YType::uint32, "output-null-register"},
    output_prune_group{YType::uint32, "output-prune-group"},
    output_register_stop{YType::uint32, "output-register-stop"},
    outputs{YType::uint32, "outputs"},
    packet_packman_error{YType::uint32, "packet-packman-error"},
    packet_queue_last_clear{YType::uint32, "packet-queue-last-clear"},
    packet_read_socket_error{YType::uint32, "packet-read-socket-error"},
    packets_standby{YType::uint32, "packets-standby"},
    pakman_error{YType::uint32, "pakman-error"},
    send_queue_full{YType::uint32, "send-queue-full"},
    socket_error{YType::uint32, "socket-error"},
    standby_packets_error{YType::uint32, "standby-packets-error"},
    truncated_pim_packets{YType::uint32, "truncated-pim-packets"}
{

    yang_name = "traffic-counters"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::TrafficCounters::~TrafficCounters()
{
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::has_data() const
{
    for (std::size_t index=0; index<packet_queue.size(); index++)
    {
        if(packet_queue[index]->has_data())
            return true;
    }
    return boundary_acl_rx_drop.is_set
	|| boundary_acl_tx_drop.is_set
	|| checksum_error.is_set
	|| elapsed_time.is_set
	|| format_error.is_set
	|| input_assert.is_set
	|| input_assert_batched.is_set
	|| input_bsr_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| input_data_register.is_set
	|| input_df_election.is_set
	|| input_ecmp_redirect.is_set
	|| input_hello.is_set
	|| input_jp.is_set
	|| input_no_idb_error.is_set
	|| input_no_pim_error.is_set
	|| input_no_vrf_error.is_set
	|| input_null_register.is_set
	|| input_pim_version_error.is_set
	|| input_register_stop.is_set
	|| inputs.is_set
	|| invalid_destination_packets.is_set
	|| invalid_join_prunes.is_set
	|| invalid_registers.is_set
	|| mdt_drop_local_source_address.is_set
	|| mdt_drop_no_idb.is_set
	|| mdt_drop_no_vrf.is_set
	|| mdt_drop_null_local_address.is_set
	|| mdt_join_bad_type.is_set
	|| mdt_join_tlv_received.is_set
	|| mdt_join_tlv_sent.is_set
	|| mdt_joins_drop_multiple_encapsulation.is_set
	|| mdt_send_queue_full.is_set
	|| mdt_socket_error.is_set
	|| mldp_mdt_invalid_lsm_identifier.is_set
	|| no_mdt_socket_connection.is_set
	|| no_socket_connection.is_set
	|| no_source_address.is_set
	|| non_supported_packets.is_set
	|| output_assert.is_set
	|| output_assert_batched.is_set
	|| output_bsr_message.is_set
	|| output_candidate_rp_advertisement.is_set
	|| output_data_register.is_set
	|| output_df_election.is_set
	|| output_ecmp_redirect.is_set
	|| output_hello.is_set
	|| output_hello_bytes.is_set
	|| output_join_group.is_set
	|| output_join_prune_bytes.is_set
	|| output_jp.is_set
	|| output_loop_error.is_set
	|| output_null_register.is_set
	|| output_prune_group.is_set
	|| output_register_stop.is_set
	|| outputs.is_set
	|| packet_packman_error.is_set
	|| packet_queue_last_clear.is_set
	|| packet_read_socket_error.is_set
	|| packets_standby.is_set
	|| pakman_error.is_set
	|| send_queue_full.is_set
	|| socket_error.is_set
	|| standby_packets_error.is_set
	|| truncated_pim_packets.is_set;
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::has_operation() const
{
    for (std::size_t index=0; index<packet_queue.size(); index++)
    {
        if(packet_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(boundary_acl_rx_drop.yfilter)
	|| ydk::is_set(boundary_acl_tx_drop.yfilter)
	|| ydk::is_set(checksum_error.yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(format_error.yfilter)
	|| ydk::is_set(input_assert.yfilter)
	|| ydk::is_set(input_assert_batched.yfilter)
	|| ydk::is_set(input_bsr_message.yfilter)
	|| ydk::is_set(input_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(input_data_register.yfilter)
	|| ydk::is_set(input_df_election.yfilter)
	|| ydk::is_set(input_ecmp_redirect.yfilter)
	|| ydk::is_set(input_hello.yfilter)
	|| ydk::is_set(input_jp.yfilter)
	|| ydk::is_set(input_no_idb_error.yfilter)
	|| ydk::is_set(input_no_pim_error.yfilter)
	|| ydk::is_set(input_no_vrf_error.yfilter)
	|| ydk::is_set(input_null_register.yfilter)
	|| ydk::is_set(input_pim_version_error.yfilter)
	|| ydk::is_set(input_register_stop.yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| ydk::is_set(invalid_destination_packets.yfilter)
	|| ydk::is_set(invalid_join_prunes.yfilter)
	|| ydk::is_set(invalid_registers.yfilter)
	|| ydk::is_set(mdt_drop_local_source_address.yfilter)
	|| ydk::is_set(mdt_drop_no_idb.yfilter)
	|| ydk::is_set(mdt_drop_no_vrf.yfilter)
	|| ydk::is_set(mdt_drop_null_local_address.yfilter)
	|| ydk::is_set(mdt_join_bad_type.yfilter)
	|| ydk::is_set(mdt_join_tlv_received.yfilter)
	|| ydk::is_set(mdt_join_tlv_sent.yfilter)
	|| ydk::is_set(mdt_joins_drop_multiple_encapsulation.yfilter)
	|| ydk::is_set(mdt_send_queue_full.yfilter)
	|| ydk::is_set(mdt_socket_error.yfilter)
	|| ydk::is_set(mldp_mdt_invalid_lsm_identifier.yfilter)
	|| ydk::is_set(no_mdt_socket_connection.yfilter)
	|| ydk::is_set(no_socket_connection.yfilter)
	|| ydk::is_set(no_source_address.yfilter)
	|| ydk::is_set(non_supported_packets.yfilter)
	|| ydk::is_set(output_assert.yfilter)
	|| ydk::is_set(output_assert_batched.yfilter)
	|| ydk::is_set(output_bsr_message.yfilter)
	|| ydk::is_set(output_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(output_data_register.yfilter)
	|| ydk::is_set(output_df_election.yfilter)
	|| ydk::is_set(output_ecmp_redirect.yfilter)
	|| ydk::is_set(output_hello.yfilter)
	|| ydk::is_set(output_hello_bytes.yfilter)
	|| ydk::is_set(output_join_group.yfilter)
	|| ydk::is_set(output_join_prune_bytes.yfilter)
	|| ydk::is_set(output_jp.yfilter)
	|| ydk::is_set(output_loop_error.yfilter)
	|| ydk::is_set(output_null_register.yfilter)
	|| ydk::is_set(output_prune_group.yfilter)
	|| ydk::is_set(output_register_stop.yfilter)
	|| ydk::is_set(outputs.yfilter)
	|| ydk::is_set(packet_packman_error.yfilter)
	|| ydk::is_set(packet_queue_last_clear.yfilter)
	|| ydk::is_set(packet_read_socket_error.yfilter)
	|| ydk::is_set(packets_standby.yfilter)
	|| ydk::is_set(pakman_error.yfilter)
	|| ydk::is_set(send_queue_full.yfilter)
	|| ydk::is_set(socket_error.yfilter)
	|| ydk::is_set(standby_packets_error.yfilter)
	|| ydk::is_set(truncated_pim_packets.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::TrafficCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boundary_acl_rx_drop.is_set || is_set(boundary_acl_rx_drop.yfilter)) leaf_name_data.push_back(boundary_acl_rx_drop.get_name_leafdata());
    if (boundary_acl_tx_drop.is_set || is_set(boundary_acl_tx_drop.yfilter)) leaf_name_data.push_back(boundary_acl_tx_drop.get_name_leafdata());
    if (checksum_error.is_set || is_set(checksum_error.yfilter)) leaf_name_data.push_back(checksum_error.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (format_error.is_set || is_set(format_error.yfilter)) leaf_name_data.push_back(format_error.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.yfilter)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (input_assert_batched.is_set || is_set(input_assert_batched.yfilter)) leaf_name_data.push_back(input_assert_batched.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.yfilter)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (input_data_register.is_set || is_set(input_data_register.yfilter)) leaf_name_data.push_back(input_data_register.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.yfilter)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (input_ecmp_redirect.is_set || is_set(input_ecmp_redirect.yfilter)) leaf_name_data.push_back(input_ecmp_redirect.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.yfilter)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.yfilter)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (input_no_idb_error.is_set || is_set(input_no_idb_error.yfilter)) leaf_name_data.push_back(input_no_idb_error.get_name_leafdata());
    if (input_no_pim_error.is_set || is_set(input_no_pim_error.yfilter)) leaf_name_data.push_back(input_no_pim_error.get_name_leafdata());
    if (input_no_vrf_error.is_set || is_set(input_no_vrf_error.yfilter)) leaf_name_data.push_back(input_no_vrf_error.get_name_leafdata());
    if (input_null_register.is_set || is_set(input_null_register.yfilter)) leaf_name_data.push_back(input_null_register.get_name_leafdata());
    if (input_pim_version_error.is_set || is_set(input_pim_version_error.yfilter)) leaf_name_data.push_back(input_pim_version_error.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.yfilter)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (invalid_destination_packets.is_set || is_set(invalid_destination_packets.yfilter)) leaf_name_data.push_back(invalid_destination_packets.get_name_leafdata());
    if (invalid_join_prunes.is_set || is_set(invalid_join_prunes.yfilter)) leaf_name_data.push_back(invalid_join_prunes.get_name_leafdata());
    if (invalid_registers.is_set || is_set(invalid_registers.yfilter)) leaf_name_data.push_back(invalid_registers.get_name_leafdata());
    if (mdt_drop_local_source_address.is_set || is_set(mdt_drop_local_source_address.yfilter)) leaf_name_data.push_back(mdt_drop_local_source_address.get_name_leafdata());
    if (mdt_drop_no_idb.is_set || is_set(mdt_drop_no_idb.yfilter)) leaf_name_data.push_back(mdt_drop_no_idb.get_name_leafdata());
    if (mdt_drop_no_vrf.is_set || is_set(mdt_drop_no_vrf.yfilter)) leaf_name_data.push_back(mdt_drop_no_vrf.get_name_leafdata());
    if (mdt_drop_null_local_address.is_set || is_set(mdt_drop_null_local_address.yfilter)) leaf_name_data.push_back(mdt_drop_null_local_address.get_name_leafdata());
    if (mdt_join_bad_type.is_set || is_set(mdt_join_bad_type.yfilter)) leaf_name_data.push_back(mdt_join_bad_type.get_name_leafdata());
    if (mdt_join_tlv_received.is_set || is_set(mdt_join_tlv_received.yfilter)) leaf_name_data.push_back(mdt_join_tlv_received.get_name_leafdata());
    if (mdt_join_tlv_sent.is_set || is_set(mdt_join_tlv_sent.yfilter)) leaf_name_data.push_back(mdt_join_tlv_sent.get_name_leafdata());
    if (mdt_joins_drop_multiple_encapsulation.is_set || is_set(mdt_joins_drop_multiple_encapsulation.yfilter)) leaf_name_data.push_back(mdt_joins_drop_multiple_encapsulation.get_name_leafdata());
    if (mdt_send_queue_full.is_set || is_set(mdt_send_queue_full.yfilter)) leaf_name_data.push_back(mdt_send_queue_full.get_name_leafdata());
    if (mdt_socket_error.is_set || is_set(mdt_socket_error.yfilter)) leaf_name_data.push_back(mdt_socket_error.get_name_leafdata());
    if (mldp_mdt_invalid_lsm_identifier.is_set || is_set(mldp_mdt_invalid_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_mdt_invalid_lsm_identifier.get_name_leafdata());
    if (no_mdt_socket_connection.is_set || is_set(no_mdt_socket_connection.yfilter)) leaf_name_data.push_back(no_mdt_socket_connection.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.yfilter)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (no_source_address.is_set || is_set(no_source_address.yfilter)) leaf_name_data.push_back(no_source_address.get_name_leafdata());
    if (non_supported_packets.is_set || is_set(non_supported_packets.yfilter)) leaf_name_data.push_back(non_supported_packets.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.yfilter)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (output_assert_batched.is_set || is_set(output_assert_batched.yfilter)) leaf_name_data.push_back(output_assert_batched.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.yfilter)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (output_data_register.is_set || is_set(output_data_register.yfilter)) leaf_name_data.push_back(output_data_register.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.yfilter)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (output_ecmp_redirect.is_set || is_set(output_ecmp_redirect.yfilter)) leaf_name_data.push_back(output_ecmp_redirect.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.yfilter)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_hello_bytes.is_set || is_set(output_hello_bytes.yfilter)) leaf_name_data.push_back(output_hello_bytes.get_name_leafdata());
    if (output_join_group.is_set || is_set(output_join_group.yfilter)) leaf_name_data.push_back(output_join_group.get_name_leafdata());
    if (output_join_prune_bytes.is_set || is_set(output_join_prune_bytes.yfilter)) leaf_name_data.push_back(output_join_prune_bytes.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.yfilter)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (output_loop_error.is_set || is_set(output_loop_error.yfilter)) leaf_name_data.push_back(output_loop_error.get_name_leafdata());
    if (output_null_register.is_set || is_set(output_null_register.yfilter)) leaf_name_data.push_back(output_null_register.get_name_leafdata());
    if (output_prune_group.is_set || is_set(output_prune_group.yfilter)) leaf_name_data.push_back(output_prune_group.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.yfilter)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.yfilter)) leaf_name_data.push_back(outputs.get_name_leafdata());
    if (packet_packman_error.is_set || is_set(packet_packman_error.yfilter)) leaf_name_data.push_back(packet_packman_error.get_name_leafdata());
    if (packet_queue_last_clear.is_set || is_set(packet_queue_last_clear.yfilter)) leaf_name_data.push_back(packet_queue_last_clear.get_name_leafdata());
    if (packet_read_socket_error.is_set || is_set(packet_read_socket_error.yfilter)) leaf_name_data.push_back(packet_read_socket_error.get_name_leafdata());
    if (packets_standby.is_set || is_set(packets_standby.yfilter)) leaf_name_data.push_back(packets_standby.get_name_leafdata());
    if (pakman_error.is_set || is_set(pakman_error.yfilter)) leaf_name_data.push_back(pakman_error.get_name_leafdata());
    if (send_queue_full.is_set || is_set(send_queue_full.yfilter)) leaf_name_data.push_back(send_queue_full.get_name_leafdata());
    if (socket_error.is_set || is_set(socket_error.yfilter)) leaf_name_data.push_back(socket_error.get_name_leafdata());
    if (standby_packets_error.is_set || is_set(standby_packets_error.yfilter)) leaf_name_data.push_back(standby_packets_error.get_name_leafdata());
    if (truncated_pim_packets.is_set || is_set(truncated_pim_packets.yfilter)) leaf_name_data.push_back(truncated_pim_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-queue")
    {
        for(auto const & c : packet_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue>();
        c->parent = this;
        packet_queue.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TrafficCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : packet_queue)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boundary-acl-rx-drop")
    {
        boundary_acl_rx_drop = value;
        boundary_acl_rx_drop.value_namespace = name_space;
        boundary_acl_rx_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundary-acl-tx-drop")
    {
        boundary_acl_tx_drop = value;
        boundary_acl_tx_drop.value_namespace = name_space;
        boundary_acl_tx_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-error")
    {
        checksum_error = value;
        checksum_error.value_namespace = name_space;
        checksum_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-error")
    {
        format_error = value;
        format_error.value_namespace = name_space;
        format_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
        input_assert.value_namespace = name_space;
        input_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert-batched")
    {
        input_assert_batched = value;
        input_assert_batched.value_namespace = name_space;
        input_assert_batched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
        input_bsr_message.value_namespace = name_space;
        input_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
        input_candidate_rp_advertisement.value_namespace = name_space;
        input_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-data-register")
    {
        input_data_register = value;
        input_data_register.value_namespace = name_space;
        input_data_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
        input_df_election.value_namespace = name_space;
        input_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ecmp-redirect")
    {
        input_ecmp_redirect = value;
        input_ecmp_redirect.value_namespace = name_space;
        input_ecmp_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
        input_hello.value_namespace = name_space;
        input_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
        input_jp.value_namespace = name_space;
        input_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-idb-error")
    {
        input_no_idb_error = value;
        input_no_idb_error.value_namespace = name_space;
        input_no_idb_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-pim-error")
    {
        input_no_pim_error = value;
        input_no_pim_error.value_namespace = name_space;
        input_no_pim_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-vrf-error")
    {
        input_no_vrf_error = value;
        input_no_vrf_error.value_namespace = name_space;
        input_no_vrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-null-register")
    {
        input_null_register = value;
        input_null_register.value_namespace = name_space;
        input_null_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-pim-version-error")
    {
        input_pim_version_error = value;
        input_pim_version_error.value_namespace = name_space;
        input_pim_version_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
        input_register_stop.value_namespace = name_space;
        input_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-destination-packets")
    {
        invalid_destination_packets = value;
        invalid_destination_packets.value_namespace = name_space;
        invalid_destination_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-join-prunes")
    {
        invalid_join_prunes = value;
        invalid_join_prunes.value_namespace = name_space;
        invalid_join_prunes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-registers")
    {
        invalid_registers = value;
        invalid_registers.value_namespace = name_space;
        invalid_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-local-source-address")
    {
        mdt_drop_local_source_address = value;
        mdt_drop_local_source_address.value_namespace = name_space;
        mdt_drop_local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-no-idb")
    {
        mdt_drop_no_idb = value;
        mdt_drop_no_idb.value_namespace = name_space;
        mdt_drop_no_idb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-no-vrf")
    {
        mdt_drop_no_vrf = value;
        mdt_drop_no_vrf.value_namespace = name_space;
        mdt_drop_no_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-null-local-address")
    {
        mdt_drop_null_local_address = value;
        mdt_drop_null_local_address.value_namespace = name_space;
        mdt_drop_null_local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-bad-type")
    {
        mdt_join_bad_type = value;
        mdt_join_bad_type.value_namespace = name_space;
        mdt_join_bad_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-tlv-received")
    {
        mdt_join_tlv_received = value;
        mdt_join_tlv_received.value_namespace = name_space;
        mdt_join_tlv_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-tlv-sent")
    {
        mdt_join_tlv_sent = value;
        mdt_join_tlv_sent.value_namespace = name_space;
        mdt_join_tlv_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-joins-drop-multiple-encapsulation")
    {
        mdt_joins_drop_multiple_encapsulation = value;
        mdt_joins_drop_multiple_encapsulation.value_namespace = name_space;
        mdt_joins_drop_multiple_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-send-queue-full")
    {
        mdt_send_queue_full = value;
        mdt_send_queue_full.value_namespace = name_space;
        mdt_send_queue_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-socket-error")
    {
        mdt_socket_error = value;
        mdt_socket_error.value_namespace = name_space;
        mdt_socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-invalid-lsm-identifier")
    {
        mldp_mdt_invalid_lsm_identifier = value;
        mldp_mdt_invalid_lsm_identifier.value_namespace = name_space;
        mldp_mdt_invalid_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-mdt-socket-connection")
    {
        no_mdt_socket_connection = value;
        no_mdt_socket_connection.value_namespace = name_space;
        no_mdt_socket_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
        no_socket_connection.value_namespace = name_space;
        no_socket_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-source-address")
    {
        no_source_address = value;
        no_source_address.value_namespace = name_space;
        no_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-supported-packets")
    {
        non_supported_packets = value;
        non_supported_packets.value_namespace = name_space;
        non_supported_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
        output_assert.value_namespace = name_space;
        output_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert-batched")
    {
        output_assert_batched = value;
        output_assert_batched.value_namespace = name_space;
        output_assert_batched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
        output_bsr_message.value_namespace = name_space;
        output_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
        output_candidate_rp_advertisement.value_namespace = name_space;
        output_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-data-register")
    {
        output_data_register = value;
        output_data_register.value_namespace = name_space;
        output_data_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
        output_df_election.value_namespace = name_space;
        output_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ecmp-redirect")
    {
        output_ecmp_redirect = value;
        output_ecmp_redirect.value_namespace = name_space;
        output_ecmp_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
        output_hello.value_namespace = name_space;
        output_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello-bytes")
    {
        output_hello_bytes = value;
        output_hello_bytes.value_namespace = name_space;
        output_hello_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-join-group")
    {
        output_join_group = value;
        output_join_group.value_namespace = name_space;
        output_join_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-join-prune-bytes")
    {
        output_join_prune_bytes = value;
        output_join_prune_bytes.value_namespace = name_space;
        output_join_prune_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
        output_jp.value_namespace = name_space;
        output_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-loop-error")
    {
        output_loop_error = value;
        output_loop_error.value_namespace = name_space;
        output_loop_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-null-register")
    {
        output_null_register = value;
        output_null_register.value_namespace = name_space;
        output_null_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-prune-group")
    {
        output_prune_group = value;
        output_prune_group.value_namespace = name_space;
        output_prune_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
        output_register_stop.value_namespace = name_space;
        output_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outputs")
    {
        outputs = value;
        outputs.value_namespace = name_space;
        outputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-packman-error")
    {
        packet_packman_error = value;
        packet_packman_error.value_namespace = name_space;
        packet_packman_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-queue-last-clear")
    {
        packet_queue_last_clear = value;
        packet_queue_last_clear.value_namespace = name_space;
        packet_queue_last_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-read-socket-error")
    {
        packet_read_socket_error = value;
        packet_read_socket_error.value_namespace = name_space;
        packet_read_socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-standby")
    {
        packets_standby = value;
        packets_standby.value_namespace = name_space;
        packets_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pakman-error")
    {
        pakman_error = value;
        pakman_error.value_namespace = name_space;
        pakman_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-queue-full")
    {
        send_queue_full = value;
        send_queue_full.value_namespace = name_space;
        send_queue_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-error")
    {
        socket_error = value;
        socket_error.value_namespace = name_space;
        socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-packets-error")
    {
        standby_packets_error = value;
        standby_packets_error.value_namespace = name_space;
        standby_packets_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "truncated-pim-packets")
    {
        truncated_pim_packets = value;
        truncated_pim_packets.value_namespace = name_space;
        truncated_pim_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boundary-acl-rx-drop")
    {
        boundary_acl_rx_drop.yfilter = yfilter;
    }
    if(value_path == "boundary-acl-tx-drop")
    {
        boundary_acl_tx_drop.yfilter = yfilter;
    }
    if(value_path == "checksum-error")
    {
        checksum_error.yfilter = yfilter;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
    if(value_path == "format-error")
    {
        format_error.yfilter = yfilter;
    }
    if(value_path == "input-assert")
    {
        input_assert.yfilter = yfilter;
    }
    if(value_path == "input-assert-batched")
    {
        input_assert_batched.yfilter = yfilter;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message.yfilter = yfilter;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "input-data-register")
    {
        input_data_register.yfilter = yfilter;
    }
    if(value_path == "input-df-election")
    {
        input_df_election.yfilter = yfilter;
    }
    if(value_path == "input-ecmp-redirect")
    {
        input_ecmp_redirect.yfilter = yfilter;
    }
    if(value_path == "input-hello")
    {
        input_hello.yfilter = yfilter;
    }
    if(value_path == "input-jp")
    {
        input_jp.yfilter = yfilter;
    }
    if(value_path == "input-no-idb-error")
    {
        input_no_idb_error.yfilter = yfilter;
    }
    if(value_path == "input-no-pim-error")
    {
        input_no_pim_error.yfilter = yfilter;
    }
    if(value_path == "input-no-vrf-error")
    {
        input_no_vrf_error.yfilter = yfilter;
    }
    if(value_path == "input-null-register")
    {
        input_null_register.yfilter = yfilter;
    }
    if(value_path == "input-pim-version-error")
    {
        input_pim_version_error.yfilter = yfilter;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop.yfilter = yfilter;
    }
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
    if(value_path == "invalid-destination-packets")
    {
        invalid_destination_packets.yfilter = yfilter;
    }
    if(value_path == "invalid-join-prunes")
    {
        invalid_join_prunes.yfilter = yfilter;
    }
    if(value_path == "invalid-registers")
    {
        invalid_registers.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-local-source-address")
    {
        mdt_drop_local_source_address.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-no-idb")
    {
        mdt_drop_no_idb.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-no-vrf")
    {
        mdt_drop_no_vrf.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-null-local-address")
    {
        mdt_drop_null_local_address.yfilter = yfilter;
    }
    if(value_path == "mdt-join-bad-type")
    {
        mdt_join_bad_type.yfilter = yfilter;
    }
    if(value_path == "mdt-join-tlv-received")
    {
        mdt_join_tlv_received.yfilter = yfilter;
    }
    if(value_path == "mdt-join-tlv-sent")
    {
        mdt_join_tlv_sent.yfilter = yfilter;
    }
    if(value_path == "mdt-joins-drop-multiple-encapsulation")
    {
        mdt_joins_drop_multiple_encapsulation.yfilter = yfilter;
    }
    if(value_path == "mdt-send-queue-full")
    {
        mdt_send_queue_full.yfilter = yfilter;
    }
    if(value_path == "mdt-socket-error")
    {
        mdt_socket_error.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-invalid-lsm-identifier")
    {
        mldp_mdt_invalid_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "no-mdt-socket-connection")
    {
        no_mdt_socket_connection.yfilter = yfilter;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection.yfilter = yfilter;
    }
    if(value_path == "no-source-address")
    {
        no_source_address.yfilter = yfilter;
    }
    if(value_path == "non-supported-packets")
    {
        non_supported_packets.yfilter = yfilter;
    }
    if(value_path == "output-assert")
    {
        output_assert.yfilter = yfilter;
    }
    if(value_path == "output-assert-batched")
    {
        output_assert_batched.yfilter = yfilter;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message.yfilter = yfilter;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "output-data-register")
    {
        output_data_register.yfilter = yfilter;
    }
    if(value_path == "output-df-election")
    {
        output_df_election.yfilter = yfilter;
    }
    if(value_path == "output-ecmp-redirect")
    {
        output_ecmp_redirect.yfilter = yfilter;
    }
    if(value_path == "output-hello")
    {
        output_hello.yfilter = yfilter;
    }
    if(value_path == "output-hello-bytes")
    {
        output_hello_bytes.yfilter = yfilter;
    }
    if(value_path == "output-join-group")
    {
        output_join_group.yfilter = yfilter;
    }
    if(value_path == "output-join-prune-bytes")
    {
        output_join_prune_bytes.yfilter = yfilter;
    }
    if(value_path == "output-jp")
    {
        output_jp.yfilter = yfilter;
    }
    if(value_path == "output-loop-error")
    {
        output_loop_error.yfilter = yfilter;
    }
    if(value_path == "output-null-register")
    {
        output_null_register.yfilter = yfilter;
    }
    if(value_path == "output-prune-group")
    {
        output_prune_group.yfilter = yfilter;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop.yfilter = yfilter;
    }
    if(value_path == "outputs")
    {
        outputs.yfilter = yfilter;
    }
    if(value_path == "packet-packman-error")
    {
        packet_packman_error.yfilter = yfilter;
    }
    if(value_path == "packet-queue-last-clear")
    {
        packet_queue_last_clear.yfilter = yfilter;
    }
    if(value_path == "packet-read-socket-error")
    {
        packet_read_socket_error.yfilter = yfilter;
    }
    if(value_path == "packets-standby")
    {
        packets_standby.yfilter = yfilter;
    }
    if(value_path == "pakman-error")
    {
        pakman_error.yfilter = yfilter;
    }
    if(value_path == "send-queue-full")
    {
        send_queue_full.yfilter = yfilter;
    }
    if(value_path == "socket-error")
    {
        socket_error.yfilter = yfilter;
    }
    if(value_path == "standby-packets-error")
    {
        standby_packets_error.yfilter = yfilter;
    }
    if(value_path == "truncated-pim-packets")
    {
        truncated_pim_packets.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-queue" || name == "boundary-acl-rx-drop" || name == "boundary-acl-tx-drop" || name == "checksum-error" || name == "elapsed-time" || name == "format-error" || name == "input-assert" || name == "input-assert-batched" || name == "input-bsr-message" || name == "input-candidate-rp-advertisement" || name == "input-data-register" || name == "input-df-election" || name == "input-ecmp-redirect" || name == "input-hello" || name == "input-jp" || name == "input-no-idb-error" || name == "input-no-pim-error" || name == "input-no-vrf-error" || name == "input-null-register" || name == "input-pim-version-error" || name == "input-register-stop" || name == "inputs" || name == "invalid-destination-packets" || name == "invalid-join-prunes" || name == "invalid-registers" || name == "mdt-drop-local-source-address" || name == "mdt-drop-no-idb" || name == "mdt-drop-no-vrf" || name == "mdt-drop-null-local-address" || name == "mdt-join-bad-type" || name == "mdt-join-tlv-received" || name == "mdt-join-tlv-sent" || name == "mdt-joins-drop-multiple-encapsulation" || name == "mdt-send-queue-full" || name == "mdt-socket-error" || name == "mldp-mdt-invalid-lsm-identifier" || name == "no-mdt-socket-connection" || name == "no-socket-connection" || name == "no-source-address" || name == "non-supported-packets" || name == "output-assert" || name == "output-assert-batched" || name == "output-bsr-message" || name == "output-candidate-rp-advertisement" || name == "output-data-register" || name == "output-df-election" || name == "output-ecmp-redirect" || name == "output-hello" || name == "output-hello-bytes" || name == "output-join-group" || name == "output-join-prune-bytes" || name == "output-jp" || name == "output-loop-error" || name == "output-null-register" || name == "output-prune-group" || name == "output-register-stop" || name == "outputs" || name == "packet-packman-error" || name == "packet-queue-last-clear" || name == "packet-read-socket-error" || name == "packets-standby" || name == "pakman-error" || name == "send-queue-full" || name == "socket-error" || name == "standby-packets-error" || name == "truncated-pim-packets")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueue()
    :
    packet_queue_priority{YType::uint32, "packet-queue-priority"}
    	,
    packet_queue_state(std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState>())
	,packet_queue_stats(std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats>())
{
    packet_queue_state->parent = this;
    packet_queue_stats->parent = this;

    yang_name = "packet-queue"; yang_parent_name = "traffic-counters"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::~PacketQueue()
{
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::has_data() const
{
    return packet_queue_priority.is_set
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_data())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_data());
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_queue_priority.yfilter)
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_operation())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_queue_priority.is_set || is_set(packet_queue_priority.yfilter)) leaf_name_data.push_back(packet_queue_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-queue-state")
    {
        if(packet_queue_state == nullptr)
        {
            packet_queue_state = std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState>();
        }
        return packet_queue_state;
    }

    if(child_yang_name == "packet-queue-stats")
    {
        if(packet_queue_stats == nullptr)
        {
            packet_queue_stats = std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats>();
        }
        return packet_queue_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet_queue_state != nullptr)
    {
        children["packet-queue-state"] = packet_queue_state;
    }

    if(packet_queue_stats != nullptr)
    {
        children["packet-queue-stats"] = packet_queue_stats;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-queue-priority")
    {
        packet_queue_priority = value;
        packet_queue_priority.value_namespace = name_space;
        packet_queue_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-queue-priority")
    {
        packet_queue_priority.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-queue-state" || name == "packet-queue-stats" || name == "packet-queue-priority")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::PacketQueueState()
    :
    max_queue_size{YType::uint32, "max-queue-size"},
    queue_size_bytes{YType::uint32, "queue-size-bytes"},
    queue_size_packets{YType::uint32, "queue-size-packets"}
{

    yang_name = "packet-queue-state"; yang_parent_name = "packet-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::~PacketQueueState()
{
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::has_data() const
{
    return max_queue_size.is_set
	|| queue_size_bytes.is_set
	|| queue_size_packets.is_set;
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_queue_size.yfilter)
	|| ydk::is_set(queue_size_bytes.yfilter)
	|| ydk::is_set(queue_size_packets.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_queue_size.is_set || is_set(max_queue_size.yfilter)) leaf_name_data.push_back(max_queue_size.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.yfilter)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (queue_size_packets.is_set || is_set(queue_size_packets.yfilter)) leaf_name_data.push_back(queue_size_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-queue-size")
    {
        max_queue_size = value;
        max_queue_size.value_namespace = name_space;
        max_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
        queue_size_bytes.value_namespace = name_space;
        queue_size_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-packets")
    {
        queue_size_packets = value;
        queue_size_packets.value_namespace = name_space;
        queue_size_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-queue-size")
    {
        max_queue_size.yfilter = yfilter;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes.yfilter = yfilter;
    }
    if(value_path == "queue-size-packets")
    {
        queue_size_packets.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-queue-size" || name == "queue-size-bytes" || name == "queue-size-packets")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::PacketQueueStats()
    :
    dequeued_packets{YType::uint32, "dequeued-packets"},
    enqueued_packets{YType::uint32, "enqueued-packets"},
    high_water_mark_bytes{YType::uint32, "high-water-mark-bytes"},
    high_water_mark_packets{YType::uint32, "high-water-mark-packets"},
    tail_drops{YType::uint32, "tail-drops"}
{

    yang_name = "packet-queue-stats"; yang_parent_name = "packet-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::~PacketQueueStats()
{
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::has_data() const
{
    return dequeued_packets.is_set
	|| enqueued_packets.is_set
	|| high_water_mark_bytes.is_set
	|| high_water_mark_packets.is_set
	|| tail_drops.is_set;
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dequeued_packets.yfilter)
	|| ydk::is_set(enqueued_packets.yfilter)
	|| ydk::is_set(high_water_mark_bytes.yfilter)
	|| ydk::is_set(high_water_mark_packets.yfilter)
	|| ydk::is_set(tail_drops.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dequeued_packets.is_set || is_set(dequeued_packets.yfilter)) leaf_name_data.push_back(dequeued_packets.get_name_leafdata());
    if (enqueued_packets.is_set || is_set(enqueued_packets.yfilter)) leaf_name_data.push_back(enqueued_packets.get_name_leafdata());
    if (high_water_mark_bytes.is_set || is_set(high_water_mark_bytes.yfilter)) leaf_name_data.push_back(high_water_mark_bytes.get_name_leafdata());
    if (high_water_mark_packets.is_set || is_set(high_water_mark_packets.yfilter)) leaf_name_data.push_back(high_water_mark_packets.get_name_leafdata());
    if (tail_drops.is_set || is_set(tail_drops.yfilter)) leaf_name_data.push_back(tail_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dequeued-packets")
    {
        dequeued_packets = value;
        dequeued_packets.value_namespace = name_space;
        dequeued_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enqueued-packets")
    {
        enqueued_packets = value;
        enqueued_packets.value_namespace = name_space;
        enqueued_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-water-mark-bytes")
    {
        high_water_mark_bytes = value;
        high_water_mark_bytes.value_namespace = name_space;
        high_water_mark_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-water-mark-packets")
    {
        high_water_mark_packets = value;
        high_water_mark_packets.value_namespace = name_space;
        high_water_mark_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drops")
    {
        tail_drops = value;
        tail_drops.value_namespace = name_space;
        tail_drops.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dequeued-packets")
    {
        dequeued_packets.yfilter = yfilter;
    }
    if(value_path == "enqueued-packets")
    {
        enqueued_packets.yfilter = yfilter;
    }
    if(value_path == "high-water-mark-bytes")
    {
        high_water_mark_bytes.yfilter = yfilter;
    }
    if(value_path == "high-water-mark-packets")
    {
        high_water_mark_packets.yfilter = yfilter;
    }
    if(value_path == "tail-drops")
    {
        tail_drops.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dequeued-packets" || name == "enqueued-packets" || name == "high-water-mark-bytes" || name == "high-water-mark-packets" || name == "tail-drops")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Tunnels::Tunnels()
{

    yang_name = "tunnels"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Tunnels::~Tunnels()
{
}

bool Pim::Active::Vrfs::Vrf::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Active::Vrfs::Vrf::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Active::Vrfs::Vrf::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_netio(std::make_shared<Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio>())
	,rp_address(std::make_shared<Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress>())
	,source_address(std::make_shared<Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress>())
	,source_address_netio(std::make_shared<Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio>())
{
    group_address_netio->parent = this;
    rp_address->parent = this;
    source_address->parent = this;
    source_address_netio->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::~Tunnel()
{
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (group_address_netio !=  nullptr && group_address_netio->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data());
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio == nullptr)
        {
            group_address_netio = std::make_shared<Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio>();
        }
        return group_address_netio;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio == nullptr)
        {
            source_address_netio = std::make_shared<Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio>();
        }
        return source_address_netio;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_netio != nullptr)
    {
        children["group-address-netio"] = group_address_netio;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(source_address_netio != nullptr)
    {
        children["source-address-netio"] = source_address_netio;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-netio" || name == "rp-address" || name == "source-address" || name == "source-address-netio" || name == "tunnel-name" || name == "vrf-name")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-netio"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::~RpAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::~SourceAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-netio"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Standby()
    :
    default_context(std::make_shared<Pim::Standby::DefaultContext>())
	,process(std::make_shared<Pim::Standby::Process>())
	,vrfs(std::make_shared<Pim::Standby::Vrfs>())
{
    default_context->parent = this;
    process->parent = this;
    vrfs->parent = this;

    yang_name = "standby"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::~Standby()
{
}

bool Pim::Standby::has_data() const
{
    return (default_context !=  nullptr && default_context->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Pim::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Pim::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Pim::Standby::DefaultContext>();
        }
        return default_context;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Pim::Standby::Process>();
        }
        return process;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Pim::Standby::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_context != nullptr)
    {
        children["default-context"] = default_context;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Pim::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-context" || name == "process" || name == "vrfs")
        return true;
    return false;
}

Pim::Standby::DefaultContext::DefaultContext()
    :
    auto_rp(std::make_shared<Pim::Standby::DefaultContext::AutoRp>())
	,bgp_afs(std::make_shared<Pim::Standby::DefaultContext::BgpAfs>())
	,bidir_df_states(std::make_shared<Pim::Standby::DefaultContext::BidirDfStates>())
	,bidir_df_winners(std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners>())
	,bsr(std::make_shared<Pim::Standby::DefaultContext::Bsr>())
	,context(std::make_shared<Pim::Standby::DefaultContext::Context>())
	,global_interfaces(std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces>())
	,gre(std::make_shared<Pim::Standby::DefaultContext::Gre>())
	,group_map_rpfs(std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs>())
	,group_map_sources(std::make_shared<Pim::Standby::DefaultContext::GroupMapSources>())
	,ifrs_interfaces(std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces>())
	,ifrs_summary(std::make_shared<Pim::Standby::DefaultContext::IfrsSummary>())
	,interface_old_formats(std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats>())
	,interface_statistics(std::make_shared<Pim::Standby::DefaultContext::InterfaceStatistics>())
	,interfaces(std::make_shared<Pim::Standby::DefaultContext::Interfaces>())
	,jp_statistics(std::make_shared<Pim::Standby::DefaultContext::JpStatistics>())
	,mib_databases(std::make_shared<Pim::Standby::DefaultContext::MibDatabases>())
	,multicast_static_routes(std::make_shared<Pim::Standby::DefaultContext::MulticastStaticRoutes>())
	,neighbor_old_formats(std::make_shared<Pim::Standby::DefaultContext::NeighborOldFormats>())
	,neighbor_summaries(std::make_shared<Pim::Standby::DefaultContext::NeighborSummaries>())
	,neighbors(std::make_shared<Pim::Standby::DefaultContext::Neighbors>())
	,net_io_tunnels(std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels>())
	,ranges(std::make_shared<Pim::Standby::DefaultContext::Ranges>())
	,route_policy(std::make_shared<Pim::Standby::DefaultContext::RoutePolicy>())
	,rpf_redirect(std::make_shared<Pim::Standby::DefaultContext::RpfRedirect>())
	,rpf_summary(std::make_shared<Pim::Standby::DefaultContext::RpfSummary>())
	,safs(std::make_shared<Pim::Standby::DefaultContext::Safs>())
	,summary(std::make_shared<Pim::Standby::DefaultContext::Summary>())
	,table_contexts(std::make_shared<Pim::Standby::DefaultContext::TableContexts>())
	,topologies(std::make_shared<Pim::Standby::DefaultContext::Topologies>())
	,topology_entry_flag_route_counts(std::make_shared<Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts>())
	,topology_interface_flag_route_counts(std::make_shared<Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts>())
	,topology_route_count(std::make_shared<Pim::Standby::DefaultContext::TopologyRouteCount>())
	,traffic_counters(std::make_shared<Pim::Standby::DefaultContext::TrafficCounters>())
	,tunnels(std::make_shared<Pim::Standby::DefaultContext::Tunnels>())
{
    auto_rp->parent = this;
    bgp_afs->parent = this;
    bidir_df_states->parent = this;
    bidir_df_winners->parent = this;
    bsr->parent = this;
    context->parent = this;
    global_interfaces->parent = this;
    gre->parent = this;
    group_map_rpfs->parent = this;
    group_map_sources->parent = this;
    ifrs_interfaces->parent = this;
    ifrs_summary->parent = this;
    interface_old_formats->parent = this;
    interface_statistics->parent = this;
    interfaces->parent = this;
    jp_statistics->parent = this;
    mib_databases->parent = this;
    multicast_static_routes->parent = this;
    neighbor_old_formats->parent = this;
    neighbor_summaries->parent = this;
    neighbors->parent = this;
    net_io_tunnels->parent = this;
    ranges->parent = this;
    route_policy->parent = this;
    rpf_redirect->parent = this;
    rpf_summary->parent = this;
    safs->parent = this;
    summary->parent = this;
    table_contexts->parent = this;
    topologies->parent = this;
    topology_entry_flag_route_counts->parent = this;
    topology_interface_flag_route_counts->parent = this;
    topology_route_count->parent = this;
    traffic_counters->parent = this;
    tunnels->parent = this;

    yang_name = "default-context"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::~DefaultContext()
{
}

bool Pim::Standby::DefaultContext::has_data() const
{
    return (auto_rp !=  nullptr && auto_rp->has_data())
	|| (bgp_afs !=  nullptr && bgp_afs->has_data())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_data())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (context !=  nullptr && context->has_data())
	|| (global_interfaces !=  nullptr && global_interfaces->has_data())
	|| (gre !=  nullptr && gre->has_data())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_data())
	|| (group_map_sources !=  nullptr && group_map_sources->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_data())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_data())
	|| (interface_statistics !=  nullptr && interface_statistics->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (jp_statistics !=  nullptr && jp_statistics->has_data())
	|| (mib_databases !=  nullptr && mib_databases->has_data())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_data())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_data())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (route_policy !=  nullptr && route_policy->has_data())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_data())
	|| (rpf_summary !=  nullptr && rpf_summary->has_data())
	|| (safs !=  nullptr && safs->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (table_contexts !=  nullptr && table_contexts->has_data())
	|| (topologies !=  nullptr && topologies->has_data())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_data())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_data())
	|| (topology_route_count !=  nullptr && topology_route_count->has_data())
	|| (traffic_counters !=  nullptr && traffic_counters->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool Pim::Standby::DefaultContext::has_operation() const
{
    return is_set(yfilter)
	|| (auto_rp !=  nullptr && auto_rp->has_operation())
	|| (bgp_afs !=  nullptr && bgp_afs->has_operation())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_operation())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_operation())
	|| (bsr !=  nullptr && bsr->has_operation())
	|| (context !=  nullptr && context->has_operation())
	|| (global_interfaces !=  nullptr && global_interfaces->has_operation())
	|| (gre !=  nullptr && gre->has_operation())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_operation())
	|| (group_map_sources !=  nullptr && group_map_sources->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_operation())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_operation())
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (jp_statistics !=  nullptr && jp_statistics->has_operation())
	|| (mib_databases !=  nullptr && mib_databases->has_operation())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_operation())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_operation())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (route_policy !=  nullptr && route_policy->has_operation())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_operation())
	|| (rpf_summary !=  nullptr && rpf_summary->has_operation())
	|| (safs !=  nullptr && safs->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (table_contexts !=  nullptr && table_contexts->has_operation())
	|| (topologies !=  nullptr && topologies->has_operation())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_operation())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_operation())
	|| (topology_route_count !=  nullptr && topology_route_count->has_operation())
	|| (traffic_counters !=  nullptr && traffic_counters->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string Pim::Standby::DefaultContext::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-rp")
    {
        if(auto_rp == nullptr)
        {
            auto_rp = std::make_shared<Pim::Standby::DefaultContext::AutoRp>();
        }
        return auto_rp;
    }

    if(child_yang_name == "bgp-afs")
    {
        if(bgp_afs == nullptr)
        {
            bgp_afs = std::make_shared<Pim::Standby::DefaultContext::BgpAfs>();
        }
        return bgp_afs;
    }

    if(child_yang_name == "bidir-df-states")
    {
        if(bidir_df_states == nullptr)
        {
            bidir_df_states = std::make_shared<Pim::Standby::DefaultContext::BidirDfStates>();
        }
        return bidir_df_states;
    }

    if(child_yang_name == "bidir-df-winners")
    {
        if(bidir_df_winners == nullptr)
        {
            bidir_df_winners = std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners>();
        }
        return bidir_df_winners;
    }

    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Pim::Standby::DefaultContext::Bsr>();
        }
        return bsr;
    }

    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Pim::Standby::DefaultContext::Context>();
        }
        return context;
    }

    if(child_yang_name == "global-interfaces")
    {
        if(global_interfaces == nullptr)
        {
            global_interfaces = std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces>();
        }
        return global_interfaces;
    }

    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Pim::Standby::DefaultContext::Gre>();
        }
        return gre;
    }

    if(child_yang_name == "group-map-rpfs")
    {
        if(group_map_rpfs == nullptr)
        {
            group_map_rpfs = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs>();
        }
        return group_map_rpfs;
    }

    if(child_yang_name == "group-map-sources")
    {
        if(group_map_sources == nullptr)
        {
            group_map_sources = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources>();
        }
        return group_map_sources;
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces == nullptr)
        {
            ifrs_interfaces = std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces>();
        }
        return ifrs_interfaces;
    }

    if(child_yang_name == "ifrs-summary")
    {
        if(ifrs_summary == nullptr)
        {
            ifrs_summary = std::make_shared<Pim::Standby::DefaultContext::IfrsSummary>();
        }
        return ifrs_summary;
    }

    if(child_yang_name == "interface-old-formats")
    {
        if(interface_old_formats == nullptr)
        {
            interface_old_formats = std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats>();
        }
        return interface_old_formats;
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics == nullptr)
        {
            interface_statistics = std::make_shared<Pim::Standby::DefaultContext::InterfaceStatistics>();
        }
        return interface_statistics;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Pim::Standby::DefaultContext::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "jp-statistics")
    {
        if(jp_statistics == nullptr)
        {
            jp_statistics = std::make_shared<Pim::Standby::DefaultContext::JpStatistics>();
        }
        return jp_statistics;
    }

    if(child_yang_name == "mib-databases")
    {
        if(mib_databases == nullptr)
        {
            mib_databases = std::make_shared<Pim::Standby::DefaultContext::MibDatabases>();
        }
        return mib_databases;
    }

    if(child_yang_name == "multicast-static-routes")
    {
        if(multicast_static_routes == nullptr)
        {
            multicast_static_routes = std::make_shared<Pim::Standby::DefaultContext::MulticastStaticRoutes>();
        }
        return multicast_static_routes;
    }

    if(child_yang_name == "neighbor-old-formats")
    {
        if(neighbor_old_formats == nullptr)
        {
            neighbor_old_formats = std::make_shared<Pim::Standby::DefaultContext::NeighborOldFormats>();
        }
        return neighbor_old_formats;
    }

    if(child_yang_name == "neighbor-summaries")
    {
        if(neighbor_summaries == nullptr)
        {
            neighbor_summaries = std::make_shared<Pim::Standby::DefaultContext::NeighborSummaries>();
        }
        return neighbor_summaries;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Pim::Standby::DefaultContext::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "net-io-tunnels")
    {
        if(net_io_tunnels == nullptr)
        {
            net_io_tunnels = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels>();
        }
        return net_io_tunnels;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Pim::Standby::DefaultContext::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "route-policy")
    {
        if(route_policy == nullptr)
        {
            route_policy = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy>();
        }
        return route_policy;
    }

    if(child_yang_name == "rpf-redirect")
    {
        if(rpf_redirect == nullptr)
        {
            rpf_redirect = std::make_shared<Pim::Standby::DefaultContext::RpfRedirect>();
        }
        return rpf_redirect;
    }

    if(child_yang_name == "rpf-summary")
    {
        if(rpf_summary == nullptr)
        {
            rpf_summary = std::make_shared<Pim::Standby::DefaultContext::RpfSummary>();
        }
        return rpf_summary;
    }

    if(child_yang_name == "safs")
    {
        if(safs == nullptr)
        {
            safs = std::make_shared<Pim::Standby::DefaultContext::Safs>();
        }
        return safs;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Pim::Standby::DefaultContext::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "table-contexts")
    {
        if(table_contexts == nullptr)
        {
            table_contexts = std::make_shared<Pim::Standby::DefaultContext::TableContexts>();
        }
        return table_contexts;
    }

    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<Pim::Standby::DefaultContext::Topologies>();
        }
        return topologies;
    }

    if(child_yang_name == "topology-entry-flag-route-counts")
    {
        if(topology_entry_flag_route_counts == nullptr)
        {
            topology_entry_flag_route_counts = std::make_shared<Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts>();
        }
        return topology_entry_flag_route_counts;
    }

    if(child_yang_name == "topology-interface-flag-route-counts")
    {
        if(topology_interface_flag_route_counts == nullptr)
        {
            topology_interface_flag_route_counts = std::make_shared<Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts>();
        }
        return topology_interface_flag_route_counts;
    }

    if(child_yang_name == "topology-route-count")
    {
        if(topology_route_count == nullptr)
        {
            topology_route_count = std::make_shared<Pim::Standby::DefaultContext::TopologyRouteCount>();
        }
        return topology_route_count;
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters == nullptr)
        {
            traffic_counters = std::make_shared<Pim::Standby::DefaultContext::TrafficCounters>();
        }
        return traffic_counters;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<Pim::Standby::DefaultContext::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_rp != nullptr)
    {
        children["auto-rp"] = auto_rp;
    }

    if(bgp_afs != nullptr)
    {
        children["bgp-afs"] = bgp_afs;
    }

    if(bidir_df_states != nullptr)
    {
        children["bidir-df-states"] = bidir_df_states;
    }

    if(bidir_df_winners != nullptr)
    {
        children["bidir-df-winners"] = bidir_df_winners;
    }

    if(bsr != nullptr)
    {
        children["bsr"] = bsr;
    }

    if(context != nullptr)
    {
        children["context"] = context;
    }

    if(global_interfaces != nullptr)
    {
        children["global-interfaces"] = global_interfaces;
    }

    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    if(group_map_rpfs != nullptr)
    {
        children["group-map-rpfs"] = group_map_rpfs;
    }

    if(group_map_sources != nullptr)
    {
        children["group-map-sources"] = group_map_sources;
    }

    if(ifrs_interfaces != nullptr)
    {
        children["ifrs-interfaces"] = ifrs_interfaces;
    }

    if(ifrs_summary != nullptr)
    {
        children["ifrs-summary"] = ifrs_summary;
    }

    if(interface_old_formats != nullptr)
    {
        children["interface-old-formats"] = interface_old_formats;
    }

    if(interface_statistics != nullptr)
    {
        children["interface-statistics"] = interface_statistics;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(jp_statistics != nullptr)
    {
        children["jp-statistics"] = jp_statistics;
    }

    if(mib_databases != nullptr)
    {
        children["mib-databases"] = mib_databases;
    }

    if(multicast_static_routes != nullptr)
    {
        children["multicast-static-routes"] = multicast_static_routes;
    }

    if(neighbor_old_formats != nullptr)
    {
        children["neighbor-old-formats"] = neighbor_old_formats;
    }

    if(neighbor_summaries != nullptr)
    {
        children["neighbor-summaries"] = neighbor_summaries;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(net_io_tunnels != nullptr)
    {
        children["net-io-tunnels"] = net_io_tunnels;
    }

    if(ranges != nullptr)
    {
        children["ranges"] = ranges;
    }

    if(route_policy != nullptr)
    {
        children["route-policy"] = route_policy;
    }

    if(rpf_redirect != nullptr)
    {
        children["rpf-redirect"] = rpf_redirect;
    }

    if(rpf_summary != nullptr)
    {
        children["rpf-summary"] = rpf_summary;
    }

    if(safs != nullptr)
    {
        children["safs"] = safs;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(table_contexts != nullptr)
    {
        children["table-contexts"] = table_contexts;
    }

    if(topologies != nullptr)
    {
        children["topologies"] = topologies;
    }

    if(topology_entry_flag_route_counts != nullptr)
    {
        children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;
    }

    if(topology_interface_flag_route_counts != nullptr)
    {
        children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;
    }

    if(topology_route_count != nullptr)
    {
        children["topology-route-count"] = topology_route_count;
    }

    if(traffic_counters != nullptr)
    {
        children["traffic-counters"] = traffic_counters;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void Pim::Standby::DefaultContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-rp" || name == "bgp-afs" || name == "bidir-df-states" || name == "bidir-df-winners" || name == "bsr" || name == "context" || name == "global-interfaces" || name == "gre" || name == "group-map-rpfs" || name == "group-map-sources" || name == "ifrs-interfaces" || name == "ifrs-summary" || name == "interface-old-formats" || name == "interface-statistics" || name == "interfaces" || name == "jp-statistics" || name == "mib-databases" || name == "multicast-static-routes" || name == "neighbor-old-formats" || name == "neighbor-summaries" || name == "neighbors" || name == "net-io-tunnels" || name == "ranges" || name == "route-policy" || name == "rpf-redirect" || name == "rpf-summary" || name == "safs" || name == "summary" || name == "table-contexts" || name == "topologies" || name == "topology-entry-flag-route-counts" || name == "topology-interface-flag-route-counts" || name == "topology-route-count" || name == "traffic-counters" || name == "tunnels")
        return true;
    return false;
}

Pim::Standby::DefaultContext::AutoRp::AutoRp()
{

    yang_name = "auto-rp"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::AutoRp::~AutoRp()
{
}

bool Pim::Standby::DefaultContext::AutoRp::has_data() const
{
    return false;
}

bool Pim::Standby::DefaultContext::AutoRp::has_operation() const
{
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::AutoRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::AutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::AutoRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::AutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::AutoRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::AutoRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::AutoRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::AutoRp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAfs()
{

    yang_name = "bgp-afs"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::BgpAfs::~BgpAfs()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::has_data() const
{
    for (std::size_t index=0; index<bgp_af.size(); index++)
    {
        if(bgp_af[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::BgpAfs::has_operation() const
{
    for (std::size_t index=0; index<bgp_af.size(); index++)
    {
        if(bgp_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::BgpAfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BgpAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BgpAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-af")
    {
        for(auto const & c : bgp_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf>();
        c->parent = this;
        bgp_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BgpAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::BgpAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::BgpAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-af")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::BgpAf()
    :
    extranet_path_count{YType::uint32, "extranet-path-count"},
    group_address{YType::str, "group-address"},
    is_bgp_added{YType::boolean, "is-bgp-added"},
    route_distinguisher{YType::str, "route-distinguisher"},
    source_address{YType::str, "source-address"}
    	,
    group(std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group>())
	,next_hop(std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop>())
	,source(std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source>())
{
    group->parent = this;
    next_hop->parent = this;
    source->parent = this;

    yang_name = "bgp-af"; yang_parent_name = "bgp-afs"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::~BgpAf()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::has_data() const
{
    return extranet_path_count.is_set
	|| group_address.is_set
	|| is_bgp_added.is_set
	|| route_distinguisher.is_set
	|| source_address.is_set
	|| (group !=  nullptr && group->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extranet_path_count.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(is_bgp_added.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (group !=  nullptr && group->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-af";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extranet_path_count.is_set || is_set(extranet_path_count.yfilter)) leaf_name_data.push_back(extranet_path_count.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (is_bgp_added.is_set || is_set(is_bgp_added.yfilter)) leaf_name_data.push_back(is_bgp_added.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group>();
        }
        return group;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extranet-path-count")
    {
        extranet_path_count = value;
        extranet_path_count.value_namespace = name_space;
        extranet_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bgp-added")
    {
        is_bgp_added = value;
        is_bgp_added.value_namespace = name_space;
        is_bgp_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extranet-path-count")
    {
        extranet_path_count.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "is-bgp-added")
    {
        is_bgp_added.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "next-hop" || name == "source" || name == "extranet-path-count" || name == "group-address" || name == "is-bgp-added" || name == "route-distinguisher" || name == "source-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::Group()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group"; yang_parent_name = "bgp-af"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::~Group()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/bgp-af/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::NextHop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "bgp-af"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::~NextHop()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/bgp-af/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::Source()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source"; yang_parent_name = "bgp-af"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::~Source()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/bgp-af/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfStates()
{

    yang_name = "bidir-df-states"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::BidirDfStates::~BidirDfStates()
{
}

bool Pim::Standby::DefaultContext::BidirDfStates::has_data() const
{
    for (std::size_t index=0; index<bidir_df_state.size(); index++)
    {
        if(bidir_df_state[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::BidirDfStates::has_operation() const
{
    for (std::size_t index=0; index<bidir_df_state.size(); index++)
    {
        if(bidir_df_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::BidirDfStates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BidirDfStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-states";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BidirDfStates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-df-state")
    {
        for(auto const & c : bidir_df_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::BidirDfStates::BidirDfState>();
        c->parent = this;
        bidir_df_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bidir_df_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::BidirDfStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::BidirDfStates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::BidirDfStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir-df-state")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::BidirDfState()
    :
    election_state{YType::str, "election-state"},
    interface_name{YType::str, "interface-name"},
    our_metric{YType::uint32, "our-metric"},
    our_metric_preference{YType::uint32, "our-metric-preference"},
    pim_interface_name{YType::str, "pim-interface-name"},
    rp_address{YType::str, "rp-address"},
    time_nano_seconds{YType::uint64, "time-nano-seconds"},
    time_seconds{YType::uint64, "time-seconds"}
    	,
    rp_address_xr(std::make_shared<Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr>())
{
    rp_address_xr->parent = this;

    yang_name = "bidir-df-state"; yang_parent_name = "bidir-df-states"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::~BidirDfState()
{
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::has_data() const
{
    return election_state.is_set
	|| interface_name.is_set
	|| our_metric.is_set
	|| our_metric_preference.is_set
	|| pim_interface_name.is_set
	|| rp_address.is_set
	|| time_nano_seconds.is_set
	|| time_seconds.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(election_state.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(our_metric.yfilter)
	|| ydk::is_set(our_metric_preference.yfilter)
	|| ydk::is_set(pim_interface_name.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(time_nano_seconds.yfilter)
	|| ydk::is_set(time_seconds.yfilter)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bidir-df-states/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (election_state.is_set || is_set(election_state.yfilter)) leaf_name_data.push_back(election_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (our_metric.is_set || is_set(our_metric.yfilter)) leaf_name_data.push_back(our_metric.get_name_leafdata());
    if (our_metric_preference.is_set || is_set(our_metric_preference.yfilter)) leaf_name_data.push_back(our_metric_preference.get_name_leafdata());
    if (pim_interface_name.is_set || is_set(pim_interface_name.yfilter)) leaf_name_data.push_back(pim_interface_name.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (time_nano_seconds.is_set || is_set(time_nano_seconds.yfilter)) leaf_name_data.push_back(time_nano_seconds.get_name_leafdata());
    if (time_seconds.is_set || is_set(time_seconds.yfilter)) leaf_name_data.push_back(time_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr>();
        }
        return rp_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    return children;
}

void Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "election-state")
    {
        election_state = value;
        election_state.value_namespace = name_space;
        election_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "our-metric")
    {
        our_metric = value;
        our_metric.value_namespace = name_space;
        our_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "our-metric-preference")
    {
        our_metric_preference = value;
        our_metric_preference.value_namespace = name_space;
        our_metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name = value;
        pim_interface_name.value_namespace = name_space;
        pim_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-nano-seconds")
    {
        time_nano_seconds = value;
        time_nano_seconds.value_namespace = name_space;
        time_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-seconds")
    {
        time_seconds = value;
        time_seconds.value_namespace = name_space;
        time_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "election-state")
    {
        election_state.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "our-metric")
    {
        our_metric.yfilter = yfilter;
    }
    if(value_path == "our-metric-preference")
    {
        our_metric_preference.yfilter = yfilter;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "time-nano-seconds")
    {
        time_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "time-seconds")
    {
        time_seconds.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address-xr" || name == "election-state" || name == "interface-name" || name == "our-metric" || name == "our-metric-preference" || name == "pim-interface-name" || name == "rp-address" || name == "time-nano-seconds" || name == "time-seconds")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address-xr"; yang_parent_name = "bidir-df-state"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bidir-df-states/bidir-df-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinners()
{

    yang_name = "bidir-df-winners"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::BidirDfWinners::~BidirDfWinners()
{
}

bool Pim::Standby::DefaultContext::BidirDfWinners::has_data() const
{
    for (std::size_t index=0; index<bidir_df_winner.size(); index++)
    {
        if(bidir_df_winner[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::BidirDfWinners::has_operation() const
{
    for (std::size_t index=0; index<bidir_df_winner.size(); index++)
    {
        if(bidir_df_winner[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::BidirDfWinners::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BidirDfWinners::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winners";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BidirDfWinners::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfWinners::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-df-winner")
    {
        for(auto const & c : bidir_df_winner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner>();
        c->parent = this;
        bidir_df_winner.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfWinners::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bidir_df_winner)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::BidirDfWinners::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::BidirDfWinners::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::BidirDfWinners::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir-df-winner")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::BidirDfWinner()
    :
    are_we_df{YType::boolean, "are-we-df"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"},
    pim_interface_name{YType::str, "pim-interface-name"},
    rp_address{YType::str, "rp-address"},
    rp_lan{YType::boolean, "rp-lan"},
    uptime{YType::uint64, "uptime"}
    	,
    df_winner(std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner>())
	,rp_address_xr(std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr>())
{
    df_winner->parent = this;
    rp_address_xr->parent = this;

    yang_name = "bidir-df-winner"; yang_parent_name = "bidir-df-winners"; is_top_level_class = false; has_list_ancestor = false;
}

Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::~BidirDfWinner()
{
}

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::has_data() const
{
    return are_we_df.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| pim_interface_name.is_set
	|| rp_address.is_set
	|| rp_lan.is_set
	|| uptime.is_set
	|| (df_winner !=  nullptr && df_winner->has_data())
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(are_we_df.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| ydk::is_set(pim_interface_name.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(rp_lan.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (df_winner !=  nullptr && df_winner->has_operation())
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bidir-df-winners/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_we_df.is_set || is_set(are_we_df.yfilter)) leaf_name_data.push_back(are_we_df.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());
    if (pim_interface_name.is_set || is_set(pim_interface_name.yfilter)) leaf_name_data.push_back(pim_interface_name.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_lan.is_set || is_set(rp_lan.yfilter)) leaf_name_data.push_back(rp_lan.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "df-winner")
    {
        if(df_winner == nullptr)
        {
            df_winner = std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner>();
        }
        return df_winner;
    }

    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr>();
        }
        return rp_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(df_winner != nullptr)
    {
        children["df-winner"] = df_winner;
    }

    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    return children;
}

void Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "are-we-df")
    {
        are_we_df = value;
        are_we_df.value_namespace = name_space;
        are_we_df.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
        metric_preference.value_namespace = name_space;
        metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name = value;
        pim_interface_name.value_namespace = name_space;
        pim_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-lan")
    {
        rp_lan = value;
        rp_lan.value_namespace = name_space;
        rp_lan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "are-we-df")
    {
        are_we_df.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "rp-lan")
    {
        rp_lan.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-winner" || name == "rp-address-xr" || name == "are-we-df" || name == "interface-name" || name == "metric" || name == "metric-preference" || name == "pim-interface-name" || name == "rp-address" || name == "rp-lan" || name == "uptime")
        return true;
    return false;
}


}
}

