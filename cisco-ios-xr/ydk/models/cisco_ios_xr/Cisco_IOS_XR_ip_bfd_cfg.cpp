
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_bfd_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_bfd_cfg {

Bfd::Bfd()
    :
    global_echo_usage{YType::empty, "global-echo-usage"},
    ipv6_checksum_disable{YType::empty, "ipv6-checksum-disable"},
    global_echo_min_interval{YType::uint32, "global-echo-min-interval"},
    ttl_drop_threshold{YType::uint32, "ttl-drop-threshold"},
    single_hop_trap{YType::empty, "single-hop-trap"},
    global_ipv4_echo_source{YType::str, "global-ipv4-echo-source"}
    	,
    flap_damp(std::make_shared<Bfd::FlapDamp>())
	,echo_latency(std::make_shared<Bfd::EchoLatency>())
	,echo_startup(std::make_shared<Bfd::EchoStartup>())
	,interfaces(std::make_shared<Bfd::Interfaces>())
	,multi_path_includes(std::make_shared<Bfd::MultiPathIncludes>())
	,bundle(std::make_shared<Bfd::Bundle>())
{
    flap_damp->parent = this;
    echo_latency->parent = this;
    echo_startup->parent = this;
    interfaces->parent = this;
    multi_path_includes->parent = this;
    bundle->parent = this;

    yang_name = "bfd"; yang_parent_name = "Cisco-IOS-XR-ip-bfd-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Bfd::~Bfd()
{
}

bool Bfd::has_data() const
{
    return global_echo_usage.is_set
	|| ipv6_checksum_disable.is_set
	|| global_echo_min_interval.is_set
	|| ttl_drop_threshold.is_set
	|| single_hop_trap.is_set
	|| global_ipv4_echo_source.is_set
	|| (flap_damp !=  nullptr && flap_damp->has_data())
	|| (echo_latency !=  nullptr && echo_latency->has_data())
	|| (echo_startup !=  nullptr && echo_startup->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (multi_path_includes !=  nullptr && multi_path_includes->has_data())
	|| (bundle !=  nullptr && bundle->has_data());
}

bool Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_echo_usage.yfilter)
	|| ydk::is_set(ipv6_checksum_disable.yfilter)
	|| ydk::is_set(global_echo_min_interval.yfilter)
	|| ydk::is_set(ttl_drop_threshold.yfilter)
	|| ydk::is_set(single_hop_trap.yfilter)
	|| ydk::is_set(global_ipv4_echo_source.yfilter)
	|| (flap_damp !=  nullptr && flap_damp->has_operation())
	|| (echo_latency !=  nullptr && echo_latency->has_operation())
	|| (echo_startup !=  nullptr && echo_startup->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (multi_path_includes !=  nullptr && multi_path_includes->has_operation())
	|| (bundle !=  nullptr && bundle->has_operation());
}

std::string Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_echo_usage.is_set || is_set(global_echo_usage.yfilter)) leaf_name_data.push_back(global_echo_usage.get_name_leafdata());
    if (ipv6_checksum_disable.is_set || is_set(ipv6_checksum_disable.yfilter)) leaf_name_data.push_back(ipv6_checksum_disable.get_name_leafdata());
    if (global_echo_min_interval.is_set || is_set(global_echo_min_interval.yfilter)) leaf_name_data.push_back(global_echo_min_interval.get_name_leafdata());
    if (ttl_drop_threshold.is_set || is_set(ttl_drop_threshold.yfilter)) leaf_name_data.push_back(ttl_drop_threshold.get_name_leafdata());
    if (single_hop_trap.is_set || is_set(single_hop_trap.yfilter)) leaf_name_data.push_back(single_hop_trap.get_name_leafdata());
    if (global_ipv4_echo_source.is_set || is_set(global_ipv4_echo_source.yfilter)) leaf_name_data.push_back(global_ipv4_echo_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flap-damp")
    {
        if(flap_damp == nullptr)
        {
            flap_damp = std::make_shared<Bfd::FlapDamp>();
        }
        return flap_damp;
    }

    if(child_yang_name == "echo-latency")
    {
        if(echo_latency == nullptr)
        {
            echo_latency = std::make_shared<Bfd::EchoLatency>();
        }
        return echo_latency;
    }

    if(child_yang_name == "echo-startup")
    {
        if(echo_startup == nullptr)
        {
            echo_startup = std::make_shared<Bfd::EchoStartup>();
        }
        return echo_startup;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Bfd::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "multi-path-includes")
    {
        if(multi_path_includes == nullptr)
        {
            multi_path_includes = std::make_shared<Bfd::MultiPathIncludes>();
        }
        return multi_path_includes;
    }

    if(child_yang_name == "bundle")
    {
        if(bundle == nullptr)
        {
            bundle = std::make_shared<Bfd::Bundle>();
        }
        return bundle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flap_damp != nullptr)
    {
        children["flap-damp"] = flap_damp;
    }

    if(echo_latency != nullptr)
    {
        children["echo-latency"] = echo_latency;
    }

    if(echo_startup != nullptr)
    {
        children["echo-startup"] = echo_startup;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(multi_path_includes != nullptr)
    {
        children["multi-path-includes"] = multi_path_includes;
    }

    if(bundle != nullptr)
    {
        children["bundle"] = bundle;
    }

    return children;
}

void Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-echo-usage")
    {
        global_echo_usage = value;
        global_echo_usage.value_namespace = name_space;
        global_echo_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-checksum-disable")
    {
        ipv6_checksum_disable = value;
        ipv6_checksum_disable.value_namespace = name_space;
        ipv6_checksum_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-echo-min-interval")
    {
        global_echo_min_interval = value;
        global_echo_min_interval.value_namespace = name_space;
        global_echo_min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-drop-threshold")
    {
        ttl_drop_threshold = value;
        ttl_drop_threshold.value_namespace = name_space;
        ttl_drop_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-hop-trap")
    {
        single_hop_trap = value;
        single_hop_trap.value_namespace = name_space;
        single_hop_trap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-ipv4-echo-source")
    {
        global_ipv4_echo_source = value;
        global_ipv4_echo_source.value_namespace = name_space;
        global_ipv4_echo_source.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-echo-usage")
    {
        global_echo_usage.yfilter = yfilter;
    }
    if(value_path == "ipv6-checksum-disable")
    {
        ipv6_checksum_disable.yfilter = yfilter;
    }
    if(value_path == "global-echo-min-interval")
    {
        global_echo_min_interval.yfilter = yfilter;
    }
    if(value_path == "ttl-drop-threshold")
    {
        ttl_drop_threshold.yfilter = yfilter;
    }
    if(value_path == "single-hop-trap")
    {
        single_hop_trap.yfilter = yfilter;
    }
    if(value_path == "global-ipv4-echo-source")
    {
        global_ipv4_echo_source.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Bfd::clone_ptr() const
{
    return std::make_shared<Bfd>();
}

std::string Bfd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Bfd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Bfd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Bfd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flap-damp" || name == "echo-latency" || name == "echo-startup" || name == "interfaces" || name == "multi-path-includes" || name == "bundle" || name == "global-echo-usage" || name == "ipv6-checksum-disable" || name == "global-echo-min-interval" || name == "ttl-drop-threshold" || name == "single-hop-trap" || name == "global-ipv4-echo-source")
        return true;
    return false;
}

Bfd::FlapDamp::FlapDamp()
    :
    threshold{YType::uint32, "threshold"},
    initial_delay{YType::uint32, "initial-delay"},
    maximum_delay{YType::uint32, "maximum-delay"},
    dampen_disable{YType::empty, "dampen-disable"},
    secondary_delay{YType::uint32, "secondary-delay"}
    	,
    bundle_member(std::make_shared<Bfd::FlapDamp::BundleMember>())
	,extensions(std::make_shared<Bfd::FlapDamp::Extensions>())
{
    bundle_member->parent = this;
    extensions->parent = this;

    yang_name = "flap-damp"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::FlapDamp::~FlapDamp()
{
}

bool Bfd::FlapDamp::has_data() const
{
    return threshold.is_set
	|| initial_delay.is_set
	|| maximum_delay.is_set
	|| dampen_disable.is_set
	|| secondary_delay.is_set
	|| (bundle_member !=  nullptr && bundle_member->has_data())
	|| (extensions !=  nullptr && extensions->has_data());
}

bool Bfd::FlapDamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(initial_delay.yfilter)
	|| ydk::is_set(maximum_delay.yfilter)
	|| ydk::is_set(dampen_disable.yfilter)
	|| ydk::is_set(secondary_delay.yfilter)
	|| (bundle_member !=  nullptr && bundle_member->has_operation())
	|| (extensions !=  nullptr && extensions->has_operation());
}

std::string Bfd::FlapDamp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::FlapDamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flap-damp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::FlapDamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (initial_delay.is_set || is_set(initial_delay.yfilter)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.yfilter)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());
    if (dampen_disable.is_set || is_set(dampen_disable.yfilter)) leaf_name_data.push_back(dampen_disable.get_name_leafdata());
    if (secondary_delay.is_set || is_set(secondary_delay.yfilter)) leaf_name_data.push_back(secondary_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::FlapDamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-member")
    {
        if(bundle_member == nullptr)
        {
            bundle_member = std::make_shared<Bfd::FlapDamp::BundleMember>();
        }
        return bundle_member;
    }

    if(child_yang_name == "extensions")
    {
        if(extensions == nullptr)
        {
            extensions = std::make_shared<Bfd::FlapDamp::Extensions>();
        }
        return extensions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::FlapDamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_member != nullptr)
    {
        children["bundle-member"] = bundle_member;
    }

    if(extensions != nullptr)
    {
        children["extensions"] = extensions;
    }

    return children;
}

void Bfd::FlapDamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-delay")
    {
        initial_delay = value;
        initial_delay.value_namespace = name_space;
        initial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
        maximum_delay.value_namespace = name_space;
        maximum_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampen-disable")
    {
        dampen_disable = value;
        dampen_disable.value_namespace = name_space;
        dampen_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-delay")
    {
        secondary_delay = value;
        secondary_delay.value_namespace = name_space;
        secondary_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::FlapDamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "initial-delay")
    {
        initial_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay.yfilter = yfilter;
    }
    if(value_path == "dampen-disable")
    {
        dampen_disable.yfilter = yfilter;
    }
    if(value_path == "secondary-delay")
    {
        secondary_delay.yfilter = yfilter;
    }
}

bool Bfd::FlapDamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-member" || name == "extensions" || name == "threshold" || name == "initial-delay" || name == "maximum-delay" || name == "dampen-disable" || name == "secondary-delay")
        return true;
    return false;
}

Bfd::FlapDamp::BundleMember::BundleMember()
    :
    initial_delay{YType::uint32, "initial-delay"},
    maximum_delay{YType::uint32, "maximum-delay"},
    secondary_delay{YType::uint32, "secondary-delay"},
    l3_only_mode{YType::empty, "l3-only-mode"}
{

    yang_name = "bundle-member"; yang_parent_name = "flap-damp"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::FlapDamp::BundleMember::~BundleMember()
{
}

bool Bfd::FlapDamp::BundleMember::has_data() const
{
    return initial_delay.is_set
	|| maximum_delay.is_set
	|| secondary_delay.is_set
	|| l3_only_mode.is_set;
}

bool Bfd::FlapDamp::BundleMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_delay.yfilter)
	|| ydk::is_set(maximum_delay.yfilter)
	|| ydk::is_set(secondary_delay.yfilter)
	|| ydk::is_set(l3_only_mode.yfilter);
}

std::string Bfd::FlapDamp::BundleMember::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/flap-damp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::FlapDamp::BundleMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::FlapDamp::BundleMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_delay.is_set || is_set(initial_delay.yfilter)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.yfilter)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());
    if (secondary_delay.is_set || is_set(secondary_delay.yfilter)) leaf_name_data.push_back(secondary_delay.get_name_leafdata());
    if (l3_only_mode.is_set || is_set(l3_only_mode.yfilter)) leaf_name_data.push_back(l3_only_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::FlapDamp::BundleMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::FlapDamp::BundleMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::FlapDamp::BundleMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-delay")
    {
        initial_delay = value;
        initial_delay.value_namespace = name_space;
        initial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
        maximum_delay.value_namespace = name_space;
        maximum_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-delay")
    {
        secondary_delay = value;
        secondary_delay.value_namespace = name_space;
        secondary_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3-only-mode")
    {
        l3_only_mode = value;
        l3_only_mode.value_namespace = name_space;
        l3_only_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::FlapDamp::BundleMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-delay")
    {
        initial_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay.yfilter = yfilter;
    }
    if(value_path == "secondary-delay")
    {
        secondary_delay.yfilter = yfilter;
    }
    if(value_path == "l3-only-mode")
    {
        l3_only_mode.yfilter = yfilter;
    }
}

bool Bfd::FlapDamp::BundleMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-delay" || name == "maximum-delay" || name == "secondary-delay" || name == "l3-only-mode")
        return true;
    return false;
}

Bfd::FlapDamp::Extensions::Extensions()
    :
    down_monitor{YType::empty, "down-monitor"}
{

    yang_name = "extensions"; yang_parent_name = "flap-damp"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::FlapDamp::Extensions::~Extensions()
{
}

bool Bfd::FlapDamp::Extensions::has_data() const
{
    return down_monitor.is_set;
}

bool Bfd::FlapDamp::Extensions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_monitor.yfilter);
}

std::string Bfd::FlapDamp::Extensions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/flap-damp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::FlapDamp::Extensions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extensions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::FlapDamp::Extensions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_monitor.is_set || is_set(down_monitor.yfilter)) leaf_name_data.push_back(down_monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::FlapDamp::Extensions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::FlapDamp::Extensions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::FlapDamp::Extensions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-monitor")
    {
        down_monitor = value;
        down_monitor.value_namespace = name_space;
        down_monitor.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::FlapDamp::Extensions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-monitor")
    {
        down_monitor.yfilter = yfilter;
    }
}

bool Bfd::FlapDamp::Extensions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-monitor")
        return true;
    return false;
}

Bfd::EchoLatency::EchoLatency()
    :
    detect(std::make_shared<Bfd::EchoLatency::Detect>())
{
    detect->parent = this;

    yang_name = "echo-latency"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::EchoLatency::~EchoLatency()
{
}

bool Bfd::EchoLatency::has_data() const
{
    return (detect !=  nullptr && detect->has_data());
}

bool Bfd::EchoLatency::has_operation() const
{
    return is_set(yfilter)
	|| (detect !=  nullptr && detect->has_operation());
}

std::string Bfd::EchoLatency::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::EchoLatency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::EchoLatency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::EchoLatency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detect")
    {
        if(detect == nullptr)
        {
            detect = std::make_shared<Bfd::EchoLatency::Detect>();
        }
        return detect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::EchoLatency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detect != nullptr)
    {
        children["detect"] = detect;
    }

    return children;
}

void Bfd::EchoLatency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::EchoLatency::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::EchoLatency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detect")
        return true;
    return false;
}

Bfd::EchoLatency::Detect::Detect()
    :
    latency_detect_enabled{YType::boolean, "latency-detect-enabled"},
    latency_detect_percentage{YType::uint32, "latency-detect-percentage"},
    latency_detect_count{YType::uint32, "latency-detect-count"}
{

    yang_name = "detect"; yang_parent_name = "echo-latency"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::EchoLatency::Detect::~Detect()
{
}

bool Bfd::EchoLatency::Detect::has_data() const
{
    return latency_detect_enabled.is_set
	|| latency_detect_percentage.is_set
	|| latency_detect_count.is_set;
}

bool Bfd::EchoLatency::Detect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(latency_detect_enabled.yfilter)
	|| ydk::is_set(latency_detect_percentage.yfilter)
	|| ydk::is_set(latency_detect_count.yfilter);
}

std::string Bfd::EchoLatency::Detect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/echo-latency/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::EchoLatency::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::EchoLatency::Detect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (latency_detect_enabled.is_set || is_set(latency_detect_enabled.yfilter)) leaf_name_data.push_back(latency_detect_enabled.get_name_leafdata());
    if (latency_detect_percentage.is_set || is_set(latency_detect_percentage.yfilter)) leaf_name_data.push_back(latency_detect_percentage.get_name_leafdata());
    if (latency_detect_count.is_set || is_set(latency_detect_count.yfilter)) leaf_name_data.push_back(latency_detect_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::EchoLatency::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::EchoLatency::Detect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::EchoLatency::Detect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "latency-detect-enabled")
    {
        latency_detect_enabled = value;
        latency_detect_enabled.value_namespace = name_space;
        latency_detect_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-detect-percentage")
    {
        latency_detect_percentage = value;
        latency_detect_percentage.value_namespace = name_space;
        latency_detect_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latency-detect-count")
    {
        latency_detect_count = value;
        latency_detect_count.value_namespace = name_space;
        latency_detect_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::EchoLatency::Detect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "latency-detect-enabled")
    {
        latency_detect_enabled.yfilter = yfilter;
    }
    if(value_path == "latency-detect-percentage")
    {
        latency_detect_percentage.yfilter = yfilter;
    }
    if(value_path == "latency-detect-count")
    {
        latency_detect_count.yfilter = yfilter;
    }
}

bool Bfd::EchoLatency::Detect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "latency-detect-enabled" || name == "latency-detect-percentage" || name == "latency-detect-count")
        return true;
    return false;
}

Bfd::EchoStartup::EchoStartup()
    :
    validate{YType::enumeration, "validate"}
{

    yang_name = "echo-startup"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::EchoStartup::~EchoStartup()
{
}

bool Bfd::EchoStartup::has_data() const
{
    return validate.is_set;
}

bool Bfd::EchoStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(validate.yfilter);
}

std::string Bfd::EchoStartup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::EchoStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::EchoStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::EchoStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::EchoStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::EchoStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::EchoStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
}

bool Bfd::EchoStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Bfd::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Interfaces::~Interfaces()
{
}

bool Bfd::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bfd::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Bfd::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_echo_usage{YType::enumeration, "interface-echo-usage"},
    ipv6_checksum{YType::enumeration, "ipv6-checksum"},
    interface_ipv4_echo_source{YType::str, "interface-ipv4-echo-source"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Interfaces::Interface::~Interface()
{
}

bool Bfd::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface_echo_usage.is_set
	|| ipv6_checksum.is_set
	|| interface_ipv4_echo_source.is_set;
}

bool Bfd::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_echo_usage.yfilter)
	|| ydk::is_set(ipv6_checksum.yfilter)
	|| ydk::is_set(interface_ipv4_echo_source.yfilter);
}

std::string Bfd::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_echo_usage.is_set || is_set(interface_echo_usage.yfilter)) leaf_name_data.push_back(interface_echo_usage.get_name_leafdata());
    if (ipv6_checksum.is_set || is_set(ipv6_checksum.yfilter)) leaf_name_data.push_back(ipv6_checksum.get_name_leafdata());
    if (interface_ipv4_echo_source.is_set || is_set(interface_ipv4_echo_source.yfilter)) leaf_name_data.push_back(interface_ipv4_echo_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-echo-usage")
    {
        interface_echo_usage = value;
        interface_echo_usage.value_namespace = name_space;
        interface_echo_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-checksum")
    {
        ipv6_checksum = value;
        ipv6_checksum.value_namespace = name_space;
        ipv6_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ipv4-echo-source")
    {
        interface_ipv4_echo_source = value;
        interface_ipv4_echo_source.value_namespace = name_space;
        interface_ipv4_echo_source.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-echo-usage")
    {
        interface_echo_usage.yfilter = yfilter;
    }
    if(value_path == "ipv6-checksum")
    {
        ipv6_checksum.yfilter = yfilter;
    }
    if(value_path == "interface-ipv4-echo-source")
    {
        interface_ipv4_echo_source.yfilter = yfilter;
    }
}

bool Bfd::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-echo-usage" || name == "ipv6-checksum" || name == "interface-ipv4-echo-source")
        return true;
    return false;
}

Bfd::MultiPathIncludes::MultiPathIncludes()
{

    yang_name = "multi-path-includes"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::MultiPathIncludes::~MultiPathIncludes()
{
}

bool Bfd::MultiPathIncludes::has_data() const
{
    for (std::size_t index=0; index<multi_path_include.size(); index++)
    {
        if(multi_path_include[index]->has_data())
            return true;
    }
    return false;
}

bool Bfd::MultiPathIncludes::has_operation() const
{
    for (std::size_t index=0; index<multi_path_include.size(); index++)
    {
        if(multi_path_include[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bfd::MultiPathIncludes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::MultiPathIncludes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-path-includes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::MultiPathIncludes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::MultiPathIncludes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multi-path-include")
    {
        for(auto const & c : multi_path_include)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bfd::MultiPathIncludes::MultiPathInclude>();
        c->parent = this;
        multi_path_include.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::MultiPathIncludes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multi_path_include)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bfd::MultiPathIncludes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::MultiPathIncludes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::MultiPathIncludes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-path-include")
        return true;
    return false;
}

Bfd::MultiPathIncludes::MultiPathInclude::MultiPathInclude()
    :
    location{YType::str, "location"}
{

    yang_name = "multi-path-include"; yang_parent_name = "multi-path-includes"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::MultiPathIncludes::MultiPathInclude::~MultiPathInclude()
{
}

bool Bfd::MultiPathIncludes::MultiPathInclude::has_data() const
{
    return location.is_set;
}

bool Bfd::MultiPathIncludes::MultiPathInclude::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Bfd::MultiPathIncludes::MultiPathInclude::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/multi-path-includes/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::MultiPathIncludes::MultiPathInclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-path-include" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::MultiPathIncludes::MultiPathInclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::MultiPathIncludes::MultiPathInclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::MultiPathIncludes::MultiPathInclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::MultiPathIncludes::MultiPathInclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::MultiPathIncludes::MultiPathInclude::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Bfd::MultiPathIncludes::MultiPathInclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Bfd::Bundle::Bundle()
    :
    coexistence(std::make_shared<Bfd::Bundle::Coexistence>())
{
    coexistence->parent = this;

    yang_name = "bundle"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Bundle::~Bundle()
{
}

bool Bfd::Bundle::has_data() const
{
    return (coexistence !=  nullptr && coexistence->has_data());
}

bool Bfd::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| (coexistence !=  nullptr && coexistence->has_operation());
}

std::string Bfd::Bundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "coexistence")
    {
        if(coexistence == nullptr)
        {
            coexistence = std::make_shared<Bfd::Bundle::Coexistence>();
        }
        return coexistence;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(coexistence != nullptr)
    {
        children["coexistence"] = coexistence;
    }

    return children;
}

void Bfd::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bfd::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bfd::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coexistence")
        return true;
    return false;
}

Bfd::Bundle::Coexistence::Coexistence()
    :
    bob_blb{YType::enumeration, "bob-blb"}
{

    yang_name = "coexistence"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = false;
}

Bfd::Bundle::Coexistence::~Coexistence()
{
}

bool Bfd::Bundle::Coexistence::has_data() const
{
    return bob_blb.is_set;
}

bool Bfd::Bundle::Coexistence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bob_blb.yfilter);
}

std::string Bfd::Bundle::Coexistence::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/bundle/" << get_segment_path();
    return path_buffer.str();
}

std::string Bfd::Bundle::Coexistence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coexistence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bfd::Bundle::Coexistence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bob_blb.is_set || is_set(bob_blb.yfilter)) leaf_name_data.push_back(bob_blb.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bfd::Bundle::Coexistence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::Bundle::Coexistence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bfd::Bundle::Coexistence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bob-blb")
    {
        bob_blb = value;
        bob_blb.value_namespace = name_space;
        bob_blb.value_namespace_prefix = name_space_prefix;
    }
}

void Bfd::Bundle::Coexistence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bob-blb")
    {
        bob_blb.yfilter = yfilter;
    }
}

bool Bfd::Bundle::Coexistence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bob-blb")
        return true;
    return false;
}

const Enum::YLeaf BfdEchoStartupValidate::off {0, "off"};
const Enum::YLeaf BfdEchoStartupValidate::on {1, "on"};
const Enum::YLeaf BfdEchoStartupValidate::force {2, "force"};

const Enum::YLeaf BfdBundleCoexistenceBobBlb::inherited {1, "inherited"};
const Enum::YLeaf BfdBundleCoexistenceBobBlb::logical {2, "logical"};

const Enum::YLeaf BfdIfEchoUsage::enable {0, "enable"};
const Enum::YLeaf BfdIfEchoUsage::disable {1, "disable"};

const Enum::YLeaf BfdIfIpv6ChecksumUsage::disable {0, "disable"};
const Enum::YLeaf BfdIfIpv6ChecksumUsage::enable {1, "enable"};


}
}

