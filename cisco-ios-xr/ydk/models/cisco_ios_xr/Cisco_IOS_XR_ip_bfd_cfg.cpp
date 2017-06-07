
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_bfd_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_bfd_cfg {

Bfd::Bfd()
    :
    global_echo_min_interval{YType::uint32, "global-echo-min-interval"},
    global_echo_usage{YType::empty, "global-echo-usage"},
    global_ipv4_echo_source{YType::str, "global-ipv4-echo-source"},
    ipv6_checksum_disable{YType::empty, "ipv6-checksum-disable"},
    single_hop_trap{YType::empty, "single-hop-trap"},
    ttl_drop_threshold{YType::uint32, "ttl-drop-threshold"}
    	,
    bundle(std::make_shared<Bfd::Bundle>())
	,echo_latency(std::make_shared<Bfd::EchoLatency>())
	,echo_startup(std::make_shared<Bfd::EchoStartup>())
	,flap_damp(std::make_shared<Bfd::FlapDamp>())
	,interfaces(std::make_shared<Bfd::Interfaces>())
	,multi_path_includes(std::make_shared<Bfd::MultiPathIncludes>())
{
    bundle->parent = this;

    echo_latency->parent = this;

    echo_startup->parent = this;

    flap_damp->parent = this;

    interfaces->parent = this;

    multi_path_includes->parent = this;

    yang_name = "bfd"; yang_parent_name = "Cisco-IOS-XR-ip-bfd-cfg";
}

Bfd::~Bfd()
{
}

bool Bfd::has_data() const
{
    return global_echo_min_interval.is_set
	|| global_echo_usage.is_set
	|| global_ipv4_echo_source.is_set
	|| ipv6_checksum_disable.is_set
	|| single_hop_trap.is_set
	|| ttl_drop_threshold.is_set
	|| (bundle !=  nullptr && bundle->has_data())
	|| (echo_latency !=  nullptr && echo_latency->has_data())
	|| (echo_startup !=  nullptr && echo_startup->has_data())
	|| (flap_damp !=  nullptr && flap_damp->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (multi_path_includes !=  nullptr && multi_path_includes->has_data());
}

bool Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(global_echo_min_interval.operation)
	|| is_set(global_echo_usage.operation)
	|| is_set(global_ipv4_echo_source.operation)
	|| is_set(ipv6_checksum_disable.operation)
	|| is_set(single_hop_trap.operation)
	|| is_set(ttl_drop_threshold.operation)
	|| (bundle !=  nullptr && bundle->has_operation())
	|| (echo_latency !=  nullptr && echo_latency->has_operation())
	|| (echo_startup !=  nullptr && echo_startup->has_operation())
	|| (flap_damp !=  nullptr && flap_damp->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (multi_path_includes !=  nullptr && multi_path_includes->has_operation());
}

std::string Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd";

    return path_buffer.str();

}

const EntityPath Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_echo_min_interval.is_set || is_set(global_echo_min_interval.operation)) leaf_name_data.push_back(global_echo_min_interval.get_name_leafdata());
    if (global_echo_usage.is_set || is_set(global_echo_usage.operation)) leaf_name_data.push_back(global_echo_usage.get_name_leafdata());
    if (global_ipv4_echo_source.is_set || is_set(global_ipv4_echo_source.operation)) leaf_name_data.push_back(global_ipv4_echo_source.get_name_leafdata());
    if (ipv6_checksum_disable.is_set || is_set(ipv6_checksum_disable.operation)) leaf_name_data.push_back(ipv6_checksum_disable.get_name_leafdata());
    if (single_hop_trap.is_set || is_set(single_hop_trap.operation)) leaf_name_data.push_back(single_hop_trap.get_name_leafdata());
    if (ttl_drop_threshold.is_set || is_set(ttl_drop_threshold.operation)) leaf_name_data.push_back(ttl_drop_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle")
    {
        if(bundle == nullptr)
        {
            bundle = std::make_shared<Bfd::Bundle>();
        }
        return bundle;
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

    if(child_yang_name == "flap-damp")
    {
        if(flap_damp == nullptr)
        {
            flap_damp = std::make_shared<Bfd::FlapDamp>();
        }
        return flap_damp;
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle != nullptr)
    {
        children["bundle"] = bundle;
    }

    if(echo_latency != nullptr)
    {
        children["echo-latency"] = echo_latency;
    }

    if(echo_startup != nullptr)
    {
        children["echo-startup"] = echo_startup;
    }

    if(flap_damp != nullptr)
    {
        children["flap-damp"] = flap_damp;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(multi_path_includes != nullptr)
    {
        children["multi-path-includes"] = multi_path_includes;
    }

    return children;
}

void Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-echo-min-interval")
    {
        global_echo_min_interval = value;
    }
    if(value_path == "global-echo-usage")
    {
        global_echo_usage = value;
    }
    if(value_path == "global-ipv4-echo-source")
    {
        global_ipv4_echo_source = value;
    }
    if(value_path == "ipv6-checksum-disable")
    {
        ipv6_checksum_disable = value;
    }
    if(value_path == "single-hop-trap")
    {
        single_hop_trap = value;
    }
    if(value_path == "ttl-drop-threshold")
    {
        ttl_drop_threshold = value;
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

Bfd::FlapDamp::FlapDamp()
    :
    dampen_disable{YType::empty, "dampen-disable"},
    initial_delay{YType::uint32, "initial-delay"},
    maximum_delay{YType::uint32, "maximum-delay"},
    secondary_delay{YType::uint32, "secondary-delay"},
    threshold{YType::uint32, "threshold"}
    	,
    bundle_member(std::make_shared<Bfd::FlapDamp::BundleMember>())
	,extensions(std::make_shared<Bfd::FlapDamp::Extensions>())
{
    bundle_member->parent = this;

    extensions->parent = this;

    yang_name = "flap-damp"; yang_parent_name = "bfd";
}

Bfd::FlapDamp::~FlapDamp()
{
}

bool Bfd::FlapDamp::has_data() const
{
    return dampen_disable.is_set
	|| initial_delay.is_set
	|| maximum_delay.is_set
	|| secondary_delay.is_set
	|| threshold.is_set
	|| (bundle_member !=  nullptr && bundle_member->has_data())
	|| (extensions !=  nullptr && extensions->has_data());
}

bool Bfd::FlapDamp::has_operation() const
{
    return is_set(operation)
	|| is_set(dampen_disable.operation)
	|| is_set(initial_delay.operation)
	|| is_set(maximum_delay.operation)
	|| is_set(secondary_delay.operation)
	|| is_set(threshold.operation)
	|| (bundle_member !=  nullptr && bundle_member->has_operation())
	|| (extensions !=  nullptr && extensions->has_operation());
}

std::string Bfd::FlapDamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flap-damp";

    return path_buffer.str();

}

const EntityPath Bfd::FlapDamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampen_disable.is_set || is_set(dampen_disable.operation)) leaf_name_data.push_back(dampen_disable.get_name_leafdata());
    if (initial_delay.is_set || is_set(initial_delay.operation)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.operation)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());
    if (secondary_delay.is_set || is_set(secondary_delay.operation)) leaf_name_data.push_back(secondary_delay.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::FlapDamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dampen-disable")
    {
        dampen_disable = value;
    }
    if(value_path == "initial-delay")
    {
        initial_delay = value;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
    }
    if(value_path == "secondary-delay")
    {
        secondary_delay = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Bfd::FlapDamp::BundleMember::BundleMember()
    :
    initial_delay{YType::uint32, "initial-delay"},
    l3_only_mode{YType::empty, "l3-only-mode"},
    maximum_delay{YType::uint32, "maximum-delay"},
    secondary_delay{YType::uint32, "secondary-delay"}
{
    yang_name = "bundle-member"; yang_parent_name = "flap-damp";
}

Bfd::FlapDamp::BundleMember::~BundleMember()
{
}

bool Bfd::FlapDamp::BundleMember::has_data() const
{
    return initial_delay.is_set
	|| l3_only_mode.is_set
	|| maximum_delay.is_set
	|| secondary_delay.is_set;
}

bool Bfd::FlapDamp::BundleMember::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_delay.operation)
	|| is_set(l3_only_mode.operation)
	|| is_set(maximum_delay.operation)
	|| is_set(secondary_delay.operation);
}

std::string Bfd::FlapDamp::BundleMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-member";

    return path_buffer.str();

}

const EntityPath Bfd::FlapDamp::BundleMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/flap-damp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_delay.is_set || is_set(initial_delay.operation)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (l3_only_mode.is_set || is_set(l3_only_mode.operation)) leaf_name_data.push_back(l3_only_mode.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.operation)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());
    if (secondary_delay.is_set || is_set(secondary_delay.operation)) leaf_name_data.push_back(secondary_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::FlapDamp::BundleMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-delay")
    {
        initial_delay = value;
    }
    if(value_path == "l3-only-mode")
    {
        l3_only_mode = value;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
    }
    if(value_path == "secondary-delay")
    {
        secondary_delay = value;
    }
}

Bfd::FlapDamp::Extensions::Extensions()
    :
    down_monitor{YType::empty, "down-monitor"}
{
    yang_name = "extensions"; yang_parent_name = "flap-damp";
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
    return is_set(operation)
	|| is_set(down_monitor.operation);
}

std::string Bfd::FlapDamp::Extensions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extensions";

    return path_buffer.str();

}

const EntityPath Bfd::FlapDamp::Extensions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/flap-damp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_monitor.is_set || is_set(down_monitor.operation)) leaf_name_data.push_back(down_monitor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::FlapDamp::Extensions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-monitor")
    {
        down_monitor = value;
    }
}

Bfd::EchoLatency::EchoLatency()
    :
    detect(std::make_shared<Bfd::EchoLatency::Detect>())
{
    detect->parent = this;

    yang_name = "echo-latency"; yang_parent_name = "bfd";
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
    return is_set(operation)
	|| (detect !=  nullptr && detect->has_operation());
}

std::string Bfd::EchoLatency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-latency";

    return path_buffer.str();

}

const EntityPath Bfd::EchoLatency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::EchoLatency::set_value(const std::string & value_path, std::string value)
{
}

Bfd::EchoLatency::Detect::Detect()
    :
    latency_detect_count{YType::uint32, "latency-detect-count"},
    latency_detect_enabled{YType::boolean, "latency-detect-enabled"},
    latency_detect_percentage{YType::uint32, "latency-detect-percentage"}
{
    yang_name = "detect"; yang_parent_name = "echo-latency";
}

Bfd::EchoLatency::Detect::~Detect()
{
}

bool Bfd::EchoLatency::Detect::has_data() const
{
    return latency_detect_count.is_set
	|| latency_detect_enabled.is_set
	|| latency_detect_percentage.is_set;
}

bool Bfd::EchoLatency::Detect::has_operation() const
{
    return is_set(operation)
	|| is_set(latency_detect_count.operation)
	|| is_set(latency_detect_enabled.operation)
	|| is_set(latency_detect_percentage.operation);
}

std::string Bfd::EchoLatency::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";

    return path_buffer.str();

}

const EntityPath Bfd::EchoLatency::Detect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/echo-latency/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (latency_detect_count.is_set || is_set(latency_detect_count.operation)) leaf_name_data.push_back(latency_detect_count.get_name_leafdata());
    if (latency_detect_enabled.is_set || is_set(latency_detect_enabled.operation)) leaf_name_data.push_back(latency_detect_enabled.get_name_leafdata());
    if (latency_detect_percentage.is_set || is_set(latency_detect_percentage.operation)) leaf_name_data.push_back(latency_detect_percentage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::EchoLatency::Detect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "latency-detect-count")
    {
        latency_detect_count = value;
    }
    if(value_path == "latency-detect-enabled")
    {
        latency_detect_enabled = value;
    }
    if(value_path == "latency-detect-percentage")
    {
        latency_detect_percentage = value;
    }
}

Bfd::EchoStartup::EchoStartup()
    :
    validate{YType::enumeration, "validate"}
{
    yang_name = "echo-startup"; yang_parent_name = "bfd";
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
    return is_set(operation)
	|| is_set(validate.operation);
}

std::string Bfd::EchoStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-startup";

    return path_buffer.str();

}

const EntityPath Bfd::EchoStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::EchoStartup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "validate")
    {
        validate = value;
    }
}

Bfd::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "bfd";
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
    return is_set(operation);
}

std::string Bfd::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Bfd::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_echo_usage{YType::enumeration, "interface-echo-usage"},
    interface_ipv4_echo_source{YType::str, "interface-ipv4-echo-source"},
    ipv6_checksum{YType::enumeration, "ipv6-checksum"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Bfd::Interfaces::Interface::~Interface()
{
}

bool Bfd::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface_echo_usage.is_set
	|| interface_ipv4_echo_source.is_set
	|| ipv6_checksum.is_set;
}

bool Bfd::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_echo_usage.operation)
	|| is_set(interface_ipv4_echo_source.operation)
	|| is_set(ipv6_checksum.operation);
}

std::string Bfd::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Bfd::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_echo_usage.is_set || is_set(interface_echo_usage.operation)) leaf_name_data.push_back(interface_echo_usage.get_name_leafdata());
    if (interface_ipv4_echo_source.is_set || is_set(interface_ipv4_echo_source.operation)) leaf_name_data.push_back(interface_ipv4_echo_source.get_name_leafdata());
    if (ipv6_checksum.is_set || is_set(ipv6_checksum.operation)) leaf_name_data.push_back(ipv6_checksum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-echo-usage")
    {
        interface_echo_usage = value;
    }
    if(value_path == "interface-ipv4-echo-source")
    {
        interface_ipv4_echo_source = value;
    }
    if(value_path == "ipv6-checksum")
    {
        ipv6_checksum = value;
    }
}

Bfd::MultiPathIncludes::MultiPathIncludes()
{
    yang_name = "multi-path-includes"; yang_parent_name = "bfd";
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
    return is_set(operation);
}

std::string Bfd::MultiPathIncludes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-path-includes";

    return path_buffer.str();

}

const EntityPath Bfd::MultiPathIncludes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::MultiPathIncludes::set_value(const std::string & value_path, std::string value)
{
}

Bfd::MultiPathIncludes::MultiPathInclude::MultiPathInclude()
    :
    location{YType::str, "location"}
{
    yang_name = "multi-path-include"; yang_parent_name = "multi-path-includes";
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
    return is_set(operation)
	|| is_set(location.operation);
}

std::string Bfd::MultiPathIncludes::MultiPathInclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-path-include" <<"[location='" <<location <<"']";

    return path_buffer.str();

}

const EntityPath Bfd::MultiPathIncludes::MultiPathInclude::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/multi-path-includes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::MultiPathIncludes::MultiPathInclude::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
    }
}

Bfd::Bundle::Bundle()
    :
    coexistence(std::make_shared<Bfd::Bundle::Coexistence>())
{
    coexistence->parent = this;

    yang_name = "bundle"; yang_parent_name = "bfd";
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
    return is_set(operation)
	|| (coexistence !=  nullptr && coexistence->has_operation());
}

std::string Bfd::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle";

    return path_buffer.str();

}

const EntityPath Bfd::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::Bundle::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Bundle::Coexistence::Coexistence()
    :
    bob_blb{YType::enumeration, "bob-blb"}
{
    yang_name = "coexistence"; yang_parent_name = "bundle";
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
    return is_set(operation)
	|| is_set(bob_blb.operation);
}

std::string Bfd::Bundle::Coexistence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coexistence";

    return path_buffer.str();

}

const EntityPath Bfd::Bundle::Coexistence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/bundle/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bob_blb.is_set || is_set(bob_blb.operation)) leaf_name_data.push_back(bob_blb.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Bfd::Bundle::Coexistence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bob-blb")
    {
        bob_blb = value;
    }
}

const Enum::YLeaf BfdEchoStartupValidateEnum::off {0, "off"};
const Enum::YLeaf BfdEchoStartupValidateEnum::on {1, "on"};
const Enum::YLeaf BfdEchoStartupValidateEnum::force {2, "force"};

const Enum::YLeaf BfdIfIpv6ChecksumUsageEnum::disable {0, "disable"};
const Enum::YLeaf BfdIfIpv6ChecksumUsageEnum::enable {1, "enable"};

const Enum::YLeaf BfdIfEchoUsageEnum::enable {0, "enable"};
const Enum::YLeaf BfdIfEchoUsageEnum::disable {1, "disable"};

const Enum::YLeaf BfdBundleCoexistenceBobBlbEnum::inherited {1, "inherited"};
const Enum::YLeaf BfdBundleCoexistenceBobBlbEnum::logical {2, "logical"};


}
}

