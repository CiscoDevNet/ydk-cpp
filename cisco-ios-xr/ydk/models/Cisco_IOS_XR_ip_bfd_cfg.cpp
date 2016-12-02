
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ip_bfd_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_bfd_cfg {

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

EntityPath Bfd::FlapDamp::BundleMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/flap-damp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_delay.is_set || is_set(initial_delay.operation)) leaf_name_data.push_back(initial_delay.get_name_leafdata());
    if (l3_only_mode.is_set || is_set(l3_only_mode.operation)) leaf_name_data.push_back(l3_only_mode.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.operation)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());
    if (secondary_delay.is_set || is_set(secondary_delay.operation)) leaf_name_data.push_back(secondary_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Bfd::FlapDamp::BundleMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::FlapDamp::BundleMember::get_children()
{
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

EntityPath Bfd::FlapDamp::Extensions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/flap-damp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_monitor.is_set || is_set(down_monitor.operation)) leaf_name_data.push_back(down_monitor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Bfd::FlapDamp::Extensions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::FlapDamp::Extensions::get_children()
{
    return children;
}

void Bfd::FlapDamp::Extensions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-monitor")
    {
        down_monitor = value;
    }
}

Bfd::FlapDamp::FlapDamp()
    :
    	dampen_disable{YType::empty, "dampen-disable"},
	 initial_delay{YType::uint32, "initial-delay"},
	 maximum_delay{YType::uint32, "maximum-delay"},
	 secondary_delay{YType::uint32, "secondary-delay"},
	 threshold{YType::uint32, "threshold"}
    	,
    bundle_member(std::make_unique<Bfd::FlapDamp::BundleMember>())
	,extensions(std::make_unique<Bfd::FlapDamp::Extensions>())
{
    bundle_member->parent = this;
    children["bundle-member"] = bundle_member.get();

    extensions->parent = this;
    children["extensions"] = extensions.get();

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
	|| (bundle_member !=  nullptr && is_set(bundle_member->operation))
	|| (extensions !=  nullptr && is_set(extensions->operation));
}

std::string Bfd::FlapDamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flap-damp";

    return path_buffer.str();

}

EntityPath Bfd::FlapDamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* Bfd::FlapDamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-member")
    {
        if(bundle_member != nullptr)
        {
            children["bundle-member"] = bundle_member.get();
        }
        else
        {
            bundle_member = std::make_unique<Bfd::FlapDamp::BundleMember>();
            bundle_member->parent = this;
            children["bundle-member"] = bundle_member.get();
        }
        return children.at("bundle-member");
    }

    if(child_yang_name == "extensions")
    {
        if(extensions != nullptr)
        {
            children["extensions"] = extensions.get();
        }
        else
        {
            extensions = std::make_unique<Bfd::FlapDamp::Extensions>();
            extensions->parent = this;
            children["extensions"] = extensions.get();
        }
        return children.at("extensions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::FlapDamp::get_children()
{
    if(children.find("bundle-member") == children.end())
    {
        if(bundle_member != nullptr)
        {
            children["bundle-member"] = bundle_member.get();
        }
    }

    if(children.find("extensions") == children.end())
    {
        if(extensions != nullptr)
        {
            children["extensions"] = extensions.get();
        }
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

EntityPath Bfd::EchoLatency::Detect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/echo-latency/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (latency_detect_count.is_set || is_set(latency_detect_count.operation)) leaf_name_data.push_back(latency_detect_count.get_name_leafdata());
    if (latency_detect_enabled.is_set || is_set(latency_detect_enabled.operation)) leaf_name_data.push_back(latency_detect_enabled.get_name_leafdata());
    if (latency_detect_percentage.is_set || is_set(latency_detect_percentage.operation)) leaf_name_data.push_back(latency_detect_percentage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Bfd::EchoLatency::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::EchoLatency::Detect::get_children()
{
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

Bfd::EchoLatency::EchoLatency()
    :
    detect(std::make_unique<Bfd::EchoLatency::Detect>())
{
    detect->parent = this;
    children["detect"] = detect.get();

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
	|| (detect !=  nullptr && is_set(detect->operation));
}

std::string Bfd::EchoLatency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo-latency";

    return path_buffer.str();

}

EntityPath Bfd::EchoLatency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Bfd::EchoLatency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detect")
    {
        if(detect != nullptr)
        {
            children["detect"] = detect.get();
        }
        else
        {
            detect = std::make_unique<Bfd::EchoLatency::Detect>();
            detect->parent = this;
            children["detect"] = detect.get();
        }
        return children.at("detect");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::EchoLatency::get_children()
{
    if(children.find("detect") == children.end())
    {
        if(detect != nullptr)
        {
            children["detect"] = detect.get();
        }
    }

    return children;
}

void Bfd::EchoLatency::set_value(const std::string & value_path, std::string value)
{
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

EntityPath Bfd::EchoStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Bfd::EchoStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::EchoStartup::get_children()
{
    return children;
}

void Bfd::EchoStartup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "validate")
    {
        validate = value;
    }
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
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Bfd::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_echo_usage.is_set || is_set(interface_echo_usage.operation)) leaf_name_data.push_back(interface_echo_usage.get_name_leafdata());
    if (interface_ipv4_echo_source.is_set || is_set(interface_ipv4_echo_source.operation)) leaf_name_data.push_back(interface_ipv4_echo_source.get_name_leafdata());
    if (ipv6_checksum.is_set || is_set(ipv6_checksum.operation)) leaf_name_data.push_back(ipv6_checksum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Bfd::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::Interfaces::Interface::get_children()
{
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

EntityPath Bfd::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Bfd::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Bfd::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Bfd::Interfaces::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "multi-path-include" <<"[location='" <<location.get() <<"']";

    return path_buffer.str();

}

EntityPath Bfd::MultiPathIncludes::MultiPathInclude::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/multi-path-includes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Bfd::MultiPathIncludes::MultiPathInclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::MultiPathIncludes::MultiPathInclude::get_children()
{
    return children;
}

void Bfd::MultiPathIncludes::MultiPathInclude::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location")
    {
        location = value;
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

EntityPath Bfd::MultiPathIncludes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Bfd::MultiPathIncludes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multi-path-include")
    {
        for(auto const & c : multi_path_include)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Bfd::MultiPathIncludes::MultiPathInclude>();
        c->parent = this;
        multi_path_include.push_back(std::move(c));
        children[segment_path] = multi_path_include.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::MultiPathIncludes::get_children()
{
    for (auto const & c : multi_path_include)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Bfd::MultiPathIncludes::set_value(const std::string & value_path, std::string value)
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

EntityPath Bfd::Bundle::Coexistence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/bundle/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bob_blb.is_set || is_set(bob_blb.operation)) leaf_name_data.push_back(bob_blb.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Bfd::Bundle::Coexistence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::Bundle::Coexistence::get_children()
{
    return children;
}

void Bfd::Bundle::Coexistence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bob-blb")
    {
        bob_blb = value;
    }
}

Bfd::Bundle::Bundle()
    :
    coexistence(std::make_unique<Bfd::Bundle::Coexistence>())
{
    coexistence->parent = this;
    children["coexistence"] = coexistence.get();

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
	|| (coexistence !=  nullptr && is_set(coexistence->operation));
}

std::string Bfd::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle";

    return path_buffer.str();

}

EntityPath Bfd::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Bfd::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "coexistence")
    {
        if(coexistence != nullptr)
        {
            children["coexistence"] = coexistence.get();
        }
        else
        {
            coexistence = std::make_unique<Bfd::Bundle::Coexistence>();
            coexistence->parent = this;
            children["coexistence"] = coexistence.get();
        }
        return children.at("coexistence");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::Bundle::get_children()
{
    if(children.find("coexistence") == children.end())
    {
        if(coexistence != nullptr)
        {
            children["coexistence"] = coexistence.get();
        }
    }

    return children;
}

void Bfd::Bundle::set_value(const std::string & value_path, std::string value)
{
}

Bfd::Bfd()
    :
    	global_echo_min_interval{YType::uint32, "global-echo-min-interval"},
	 global_echo_usage{YType::empty, "global-echo-usage"},
	 global_ipv4_echo_source{YType::str, "global-ipv4-echo-source"},
	 ipv6_checksum_disable{YType::empty, "ipv6-checksum-disable"},
	 single_hop_trap{YType::empty, "single-hop-trap"},
	 ttl_drop_threshold{YType::uint32, "ttl-drop-threshold"}
    	,
    bundle(std::make_unique<Bfd::Bundle>())
	,echo_latency(std::make_unique<Bfd::EchoLatency>())
	,echo_startup(std::make_unique<Bfd::EchoStartup>())
	,flap_damp(std::make_unique<Bfd::FlapDamp>())
	,interfaces(std::make_unique<Bfd::Interfaces>())
	,multi_path_includes(std::make_unique<Bfd::MultiPathIncludes>())
{
    bundle->parent = this;
    children["bundle"] = bundle.get();

    echo_latency->parent = this;
    children["echo-latency"] = echo_latency.get();

    echo_startup->parent = this;
    children["echo-startup"] = echo_startup.get();

    flap_damp->parent = this;
    children["flap-damp"] = flap_damp.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    multi_path_includes->parent = this;
    children["multi-path-includes"] = multi_path_includes.get();

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
	|| (bundle !=  nullptr && is_set(bundle->operation))
	|| (echo_latency !=  nullptr && is_set(echo_latency->operation))
	|| (echo_startup !=  nullptr && is_set(echo_startup->operation))
	|| (flap_damp !=  nullptr && is_set(flap_damp->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (multi_path_includes !=  nullptr && is_set(multi_path_includes->operation));
}

std::string Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-bfd-cfg:bfd";

    return path_buffer.str();

}

EntityPath Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
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

Entity* Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle")
    {
        if(bundle != nullptr)
        {
            children["bundle"] = bundle.get();
        }
        else
        {
            bundle = std::make_unique<Bfd::Bundle>();
            bundle->parent = this;
            children["bundle"] = bundle.get();
        }
        return children.at("bundle");
    }

    if(child_yang_name == "echo-latency")
    {
        if(echo_latency != nullptr)
        {
            children["echo-latency"] = echo_latency.get();
        }
        else
        {
            echo_latency = std::make_unique<Bfd::EchoLatency>();
            echo_latency->parent = this;
            children["echo-latency"] = echo_latency.get();
        }
        return children.at("echo-latency");
    }

    if(child_yang_name == "echo-startup")
    {
        if(echo_startup != nullptr)
        {
            children["echo-startup"] = echo_startup.get();
        }
        else
        {
            echo_startup = std::make_unique<Bfd::EchoStartup>();
            echo_startup->parent = this;
            children["echo-startup"] = echo_startup.get();
        }
        return children.at("echo-startup");
    }

    if(child_yang_name == "flap-damp")
    {
        if(flap_damp != nullptr)
        {
            children["flap-damp"] = flap_damp.get();
        }
        else
        {
            flap_damp = std::make_unique<Bfd::FlapDamp>();
            flap_damp->parent = this;
            children["flap-damp"] = flap_damp.get();
        }
        return children.at("flap-damp");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Bfd::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "multi-path-includes")
    {
        if(multi_path_includes != nullptr)
        {
            children["multi-path-includes"] = multi_path_includes.get();
        }
        else
        {
            multi_path_includes = std::make_unique<Bfd::MultiPathIncludes>();
            multi_path_includes->parent = this;
            children["multi-path-includes"] = multi_path_includes.get();
        }
        return children.at("multi-path-includes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Bfd::get_children()
{
    if(children.find("bundle") == children.end())
    {
        if(bundle != nullptr)
        {
            children["bundle"] = bundle.get();
        }
    }

    if(children.find("echo-latency") == children.end())
    {
        if(echo_latency != nullptr)
        {
            children["echo-latency"] = echo_latency.get();
        }
    }

    if(children.find("echo-startup") == children.end())
    {
        if(echo_startup != nullptr)
        {
            children["echo-startup"] = echo_startup.get();
        }
    }

    if(children.find("flap-damp") == children.end())
    {
        if(flap_damp != nullptr)
        {
            children["flap-damp"] = flap_damp.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("multi-path-includes") == children.end())
    {
        if(multi_path_includes != nullptr)
        {
            children["multi-path-includes"] = multi_path_includes.get();
        }
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

std::unique_ptr<Entity> Bfd::clone_ptr()
{
    return std::make_unique<Bfd>();
}

const Enum::Value BfdEchoStartupValidateEnum::off {0, "off"};
const Enum::Value BfdEchoStartupValidateEnum::on {1, "on"};
const Enum::Value BfdEchoStartupValidateEnum::force {2, "force"};

const Enum::Value BfdIfIpv6ChecksumUsageEnum::disable {0, "disable"};
const Enum::Value BfdIfIpv6ChecksumUsageEnum::enable {1, "enable"};

const Enum::Value BfdIfEchoUsageEnum::enable {0, "enable"};
const Enum::Value BfdIfEchoUsageEnum::disable {1, "disable"};

const Enum::Value BfdBundleCoexistenceBobBlbEnum::inherited {1, "inherited"};
const Enum::Value BfdBundleCoexistenceBobBlbEnum::logical {2, "logical"};


}
}

