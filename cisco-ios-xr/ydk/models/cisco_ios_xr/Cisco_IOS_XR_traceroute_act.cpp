
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_traceroute_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_traceroute_act {

Traceroute::Traceroute()
    :
    input(std::make_shared<Traceroute::Input>())
    , output(std::make_shared<Traceroute::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "traceroute"; yang_parent_name = "Cisco-IOS-XR-traceroute-act"; is_top_level_class = true; has_list_ancestor = false; 
}

Traceroute::~Traceroute()
{
}

bool Traceroute::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Traceroute::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Traceroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Traceroute::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Traceroute::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Traceroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Traceroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Traceroute::clone_ptr() const
{
    return std::make_shared<Traceroute>();
}

std::string Traceroute::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Traceroute::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Traceroute::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Traceroute::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Traceroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Traceroute::Input::Input()
    :
    destination(std::make_shared<Traceroute::Input::Destination>())
    , ipv4(std::make_shared<Traceroute::Input::Ipv4>())
    , ipv6(std::make_shared<Traceroute::Input::Ipv6>())
{
    destination->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "input"; yang_parent_name = "traceroute"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Input::~Input()
{
}

bool Traceroute::Input::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Traceroute::Input::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Traceroute::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Traceroute::Input::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Traceroute::Input::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Traceroute::Input::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Traceroute::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Traceroute::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Traceroute::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Traceroute::Input::Destination::Destination()
    :
    destination{YType::str, "destination"},
    source{YType::str, "source"},
    timeout{YType::uint32, "timeout"},
    probe{YType::uint16, "probe"},
    numeric{YType::boolean, "numeric"},
    vrf_name{YType::str, "vrf-name"},
    min_ttl{YType::uint16, "min-ttl"},
    max_ttl{YType::uint16, "max-ttl"},
    port{YType::uint32, "port"},
    verbose{YType::boolean, "verbose"},
    priority{YType::uint16, "priority"},
    outgoing_interface{YType::str, "outgoing-interface"}
{

    yang_name = "destination"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Input::Destination::~Destination()
{
}

bool Traceroute::Input::Destination::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| source.is_set
	|| timeout.is_set
	|| probe.is_set
	|| numeric.is_set
	|| vrf_name.is_set
	|| min_ttl.is_set
	|| max_ttl.is_set
	|| port.is_set
	|| verbose.is_set
	|| priority.is_set
	|| outgoing_interface.is_set;
}

bool Traceroute::Input::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(probe.yfilter)
	|| ydk::is_set(numeric.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(min_ttl.yfilter)
	|| ydk::is_set(max_ttl.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(verbose.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter);
}

std::string Traceroute::Input::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Input::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Input::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (numeric.is_set || is_set(numeric.yfilter)) leaf_name_data.push_back(numeric.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.yfilter)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (max_ttl.is_set || is_set(max_ttl.yfilter)) leaf_name_data.push_back(max_ttl.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Input::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Input::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Traceroute::Input::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numeric")
    {
        numeric = value;
        numeric.value_namespace = name_space;
        numeric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
        min_ttl.value_namespace = name_space;
        min_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-ttl")
    {
        max_ttl = value;
        max_ttl.value_namespace = name_space;
        max_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbose")
    {
        verbose = value;
        verbose.value_namespace = name_space;
        verbose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Traceroute::Input::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "probe")
    {
        probe.yfilter = yfilter;
    }
    if(value_path == "numeric")
    {
        numeric.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "min-ttl")
    {
        min_ttl.yfilter = yfilter;
    }
    if(value_path == "max-ttl")
    {
        max_ttl.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "verbose")
    {
        verbose.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
}

bool Traceroute::Input::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source" || name == "timeout" || name == "probe" || name == "numeric" || name == "vrf-name" || name == "min-ttl" || name == "max-ttl" || name == "port" || name == "verbose" || name == "priority" || name == "outgoing-interface")
        return true;
    return false;
}

Traceroute::Input::Ipv4::Ipv4()
    :
    destination{YType::str, "destination"},
    source{YType::str, "source"},
    timeout{YType::uint32, "timeout"},
    probe{YType::uint16, "probe"},
    numeric{YType::boolean, "numeric"},
    vrf_name{YType::str, "vrf-name"},
    min_ttl{YType::uint16, "min-ttl"},
    max_ttl{YType::uint16, "max-ttl"},
    port{YType::uint32, "port"},
    verbose{YType::boolean, "verbose"}
{

    yang_name = "ipv4"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Input::Ipv4::~Ipv4()
{
}

bool Traceroute::Input::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| source.is_set
	|| timeout.is_set
	|| probe.is_set
	|| numeric.is_set
	|| vrf_name.is_set
	|| min_ttl.is_set
	|| max_ttl.is_set
	|| port.is_set
	|| verbose.is_set;
}

bool Traceroute::Input::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(probe.yfilter)
	|| ydk::is_set(numeric.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(min_ttl.yfilter)
	|| ydk::is_set(max_ttl.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(verbose.yfilter);
}

std::string Traceroute::Input::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Input::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Input::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (numeric.is_set || is_set(numeric.yfilter)) leaf_name_data.push_back(numeric.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.yfilter)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (max_ttl.is_set || is_set(max_ttl.yfilter)) leaf_name_data.push_back(max_ttl.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Input::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Input::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Traceroute::Input::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numeric")
    {
        numeric = value;
        numeric.value_namespace = name_space;
        numeric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
        min_ttl.value_namespace = name_space;
        min_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-ttl")
    {
        max_ttl = value;
        max_ttl.value_namespace = name_space;
        max_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbose")
    {
        verbose = value;
        verbose.value_namespace = name_space;
        verbose.value_namespace_prefix = name_space_prefix;
    }
}

void Traceroute::Input::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "probe")
    {
        probe.yfilter = yfilter;
    }
    if(value_path == "numeric")
    {
        numeric.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "min-ttl")
    {
        min_ttl.yfilter = yfilter;
    }
    if(value_path == "max-ttl")
    {
        max_ttl.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "verbose")
    {
        verbose.yfilter = yfilter;
    }
}

bool Traceroute::Input::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source" || name == "timeout" || name == "probe" || name == "numeric" || name == "vrf-name" || name == "min-ttl" || name == "max-ttl" || name == "port" || name == "verbose")
        return true;
    return false;
}

Traceroute::Input::Ipv6::Ipv6()
    :
    destination{YType::str, "destination"},
    source{YType::str, "source"},
    timeout{YType::uint32, "timeout"},
    probe{YType::uint16, "probe"},
    numeric{YType::boolean, "numeric"},
    vrf_name{YType::str, "vrf-name"},
    min_ttl{YType::uint16, "min-ttl"},
    max_ttl{YType::uint16, "max-ttl"},
    port{YType::uint32, "port"},
    verbose{YType::boolean, "verbose"},
    priority{YType::uint16, "priority"},
    outgoing_interface{YType::str, "outgoing-interface"}
{

    yang_name = "ipv6"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Input::Ipv6::~Ipv6()
{
}

bool Traceroute::Input::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| source.is_set
	|| timeout.is_set
	|| probe.is_set
	|| numeric.is_set
	|| vrf_name.is_set
	|| min_ttl.is_set
	|| max_ttl.is_set
	|| port.is_set
	|| verbose.is_set
	|| priority.is_set
	|| outgoing_interface.is_set;
}

bool Traceroute::Input::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(probe.yfilter)
	|| ydk::is_set(numeric.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(min_ttl.yfilter)
	|| ydk::is_set(max_ttl.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(verbose.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter);
}

std::string Traceroute::Input::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Input::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Input::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (numeric.is_set || is_set(numeric.yfilter)) leaf_name_data.push_back(numeric.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.yfilter)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (max_ttl.is_set || is_set(max_ttl.yfilter)) leaf_name_data.push_back(max_ttl.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Input::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Input::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Traceroute::Input::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numeric")
    {
        numeric = value;
        numeric.value_namespace = name_space;
        numeric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
        min_ttl.value_namespace = name_space;
        min_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-ttl")
    {
        max_ttl = value;
        max_ttl.value_namespace = name_space;
        max_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbose")
    {
        verbose = value;
        verbose.value_namespace = name_space;
        verbose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Traceroute::Input::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "probe")
    {
        probe.yfilter = yfilter;
    }
    if(value_path == "numeric")
    {
        numeric.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "min-ttl")
    {
        min_ttl.yfilter = yfilter;
    }
    if(value_path == "max-ttl")
    {
        max_ttl.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "verbose")
    {
        verbose.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
}

bool Traceroute::Input::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source" || name == "timeout" || name == "probe" || name == "numeric" || name == "vrf-name" || name == "min-ttl" || name == "max-ttl" || name == "port" || name == "verbose" || name == "priority" || name == "outgoing-interface")
        return true;
    return false;
}

Traceroute::Output::Output()
    :
    traceroute_response(std::make_shared<Traceroute::Output::TracerouteResponse>())
{
    traceroute_response->parent = this;

    yang_name = "output"; yang_parent_name = "traceroute"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Output::~Output()
{
}

bool Traceroute::Output::has_data() const
{
    if (is_presence_container) return true;
    return (traceroute_response !=  nullptr && traceroute_response->has_data());
}

bool Traceroute::Output::has_operation() const
{
    return is_set(yfilter)
	|| (traceroute_response !=  nullptr && traceroute_response->has_operation());
}

std::string Traceroute::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traceroute-response")
    {
        if(traceroute_response == nullptr)
        {
            traceroute_response = std::make_shared<Traceroute::Output::TracerouteResponse>();
        }
        return traceroute_response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(traceroute_response != nullptr)
    {
        children["traceroute-response"] = traceroute_response;
    }

    return children;
}

void Traceroute::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Traceroute::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Traceroute::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traceroute-response")
        return true;
    return false;
}

Traceroute::Output::TracerouteResponse::TracerouteResponse()
    :
    ipv4(std::make_shared<Traceroute::Output::TracerouteResponse::Ipv4>())
    , ipv6(std::make_shared<Traceroute::Output::TracerouteResponse::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "traceroute-response"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Output::TracerouteResponse::~TracerouteResponse()
{
}

bool Traceroute::Output::TracerouteResponse::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Traceroute::Output::TracerouteResponse::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Traceroute::Output::TracerouteResponse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Output::TracerouteResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute-response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::TracerouteResponse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::TracerouteResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Traceroute::Output::TracerouteResponse::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Traceroute::Output::TracerouteResponse::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::TracerouteResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Traceroute::Output::TracerouteResponse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Traceroute::Output::TracerouteResponse::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Traceroute::Output::TracerouteResponse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Traceroute::Output::TracerouteResponse::Ipv4::Ipv4()
    :
    destination{YType::str, "destination"},
    verbose_output{YType::str, "verbose-output"}
        ,
    hops(std::make_shared<Traceroute::Output::TracerouteResponse::Ipv4::Hops>())
{
    hops->parent = this;

    yang_name = "ipv4"; yang_parent_name = "traceroute-response"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Output::TracerouteResponse::Ipv4::~Ipv4()
{
}

bool Traceroute::Output::TracerouteResponse::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| verbose_output.is_set
	|| (hops !=  nullptr && hops->has_data());
}

bool Traceroute::Output::TracerouteResponse::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(verbose_output.yfilter)
	|| (hops !=  nullptr && hops->has_operation());
}

std::string Traceroute::Output::TracerouteResponse::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/traceroute-response/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Output::TracerouteResponse::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::TracerouteResponse::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (verbose_output.is_set || is_set(verbose_output.yfilter)) leaf_name_data.push_back(verbose_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::TracerouteResponse::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hops")
    {
        if(hops == nullptr)
        {
            hops = std::make_shared<Traceroute::Output::TracerouteResponse::Ipv4::Hops>();
        }
        return hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::TracerouteResponse::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hops != nullptr)
    {
        children["hops"] = hops;
    }

    return children;
}

void Traceroute::Output::TracerouteResponse::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbose-output")
    {
        verbose_output = value;
        verbose_output.value_namespace = name_space;
        verbose_output.value_namespace_prefix = name_space_prefix;
    }
}

void Traceroute::Output::TracerouteResponse::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "verbose-output")
    {
        verbose_output.yfilter = yfilter;
    }
}

bool Traceroute::Output::TracerouteResponse::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops" || name == "destination" || name == "verbose-output")
        return true;
    return false;
}

Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hops()
    :
    hop(this, {"hop_index"})
{

    yang_name = "hops"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Output::TracerouteResponse::Ipv4::Hops::~Hops()
{
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    return false;
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::has_operation() const
{
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Traceroute::Output::TracerouteResponse::Ipv4::Hops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/traceroute-response/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Output::TracerouteResponse::Ipv4::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::TracerouteResponse::Ipv4::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::TracerouteResponse::Ipv4::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop")
    {
        auto c = std::make_shared<Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop>();
        c->parent = this;
        hop.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::TracerouteResponse::Ipv4::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Traceroute::Output::TracerouteResponse::Ipv4::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Traceroute::Output::TracerouteResponse::Ipv4::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop")
        return true;
    return false;
}

Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Hop()
    :
    hop_index{YType::uint32, "hop-index"},
    hop_address{YType::str, "hop-address"},
    hop_hostname{YType::str, "hop-hostname"}
        ,
    probes(std::make_shared<Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes>())
{
    probes->parent = this;

    yang_name = "hop"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::~Hop()
{
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::has_data() const
{
    if (is_presence_container) return true;
    return hop_index.is_set
	|| hop_address.is_set
	|| hop_hostname.is_set
	|| (probes !=  nullptr && probes->has_data());
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_index.yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(hop_hostname.yfilter)
	|| (probes !=  nullptr && probes->has_operation());
}

std::string Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/traceroute-response/ipv4/hops/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    ADD_KEY_TOKEN(hop_index, "hop-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_index.is_set || is_set(hop_index.yfilter)) leaf_name_data.push_back(hop_index.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_hostname.is_set || is_set(hop_hostname.yfilter)) leaf_name_data.push_back(hop_hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probes")
    {
        if(probes == nullptr)
        {
            probes = std::make_shared<Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes>();
        }
        return probes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(probes != nullptr)
    {
        children["probes"] = probes;
    }

    return children;
}

void Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-index")
    {
        hop_index = value;
        hop_index.value_namespace = name_space;
        hop_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname = value;
        hop_hostname.value_namespace = name_space;
        hop_hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-index")
    {
        hop_index.yfilter = yfilter;
    }
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname.yfilter = yfilter;
    }
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probes" || name == "hop-index" || name == "hop-address" || name == "hop-hostname")
        return true;
    return false;
}

Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probes()
    :
    probe(this, {"probe_index"})
{

    yang_name = "probes"; yang_parent_name = "hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::~Probes()
{
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<probe.len(); index++)
    {
        if(probe[index]->has_data())
            return true;
    }
    return false;
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::has_operation() const
{
    for (std::size_t index=0; index<probe.len(); index++)
    {
        if(probe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe")
    {
        auto c = std::make_shared<Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe>();
        c->parent = this;
        probe.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : probe.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe")
        return true;
    return false;
}

Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe::Probe()
    :
    probe_index{YType::uint32, "probe-index"},
    result{YType::str, "result"},
    delta_time{YType::uint32, "delta-time"},
    hop_address{YType::str, "hop-address"},
    hop_hostname{YType::str, "hop-hostname"}
{

    yang_name = "probe"; yang_parent_name = "probes"; is_top_level_class = false; has_list_ancestor = true; 
}

Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe::~Probe()
{
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe::has_data() const
{
    if (is_presence_container) return true;
    return probe_index.is_set
	|| result.is_set
	|| delta_time.is_set
	|| hop_address.is_set
	|| hop_hostname.is_set;
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe_index.yfilter)
	|| ydk::is_set(result.yfilter)
	|| ydk::is_set(delta_time.yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(hop_hostname.yfilter);
}

std::string Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";
    ADD_KEY_TOKEN(probe_index, "probe-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_index.is_set || is_set(probe_index.yfilter)) leaf_name_data.push_back(probe_index.get_name_leafdata());
    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());
    if (delta_time.is_set || is_set(delta_time.yfilter)) leaf_name_data.push_back(delta_time.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_hostname.is_set || is_set(hop_hostname.yfilter)) leaf_name_data.push_back(hop_hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe-index")
    {
        probe_index = value;
        probe_index.value_namespace = name_space;
        probe_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delta-time")
    {
        delta_time = value;
        delta_time.value_namespace = name_space;
        delta_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname = value;
        hop_hostname.value_namespace = name_space;
        hop_hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe-index")
    {
        probe_index.yfilter = yfilter;
    }
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
    if(value_path == "delta-time")
    {
        delta_time.yfilter = yfilter;
    }
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname.yfilter = yfilter;
    }
}

bool Traceroute::Output::TracerouteResponse::Ipv4::Hops::Hop::Probes::Probe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-index" || name == "result" || name == "delta-time" || name == "hop-address" || name == "hop-hostname")
        return true;
    return false;
}

Traceroute::Output::TracerouteResponse::Ipv6::Ipv6()
    :
    destination{YType::str, "destination"},
    verbose_output{YType::str, "verbose-output"}
        ,
    hops(std::make_shared<Traceroute::Output::TracerouteResponse::Ipv6::Hops>())
{
    hops->parent = this;

    yang_name = "ipv6"; yang_parent_name = "traceroute-response"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Output::TracerouteResponse::Ipv6::~Ipv6()
{
}

bool Traceroute::Output::TracerouteResponse::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| verbose_output.is_set
	|| (hops !=  nullptr && hops->has_data());
}

bool Traceroute::Output::TracerouteResponse::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(verbose_output.yfilter)
	|| (hops !=  nullptr && hops->has_operation());
}

std::string Traceroute::Output::TracerouteResponse::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/traceroute-response/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Output::TracerouteResponse::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::TracerouteResponse::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (verbose_output.is_set || is_set(verbose_output.yfilter)) leaf_name_data.push_back(verbose_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::TracerouteResponse::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hops")
    {
        if(hops == nullptr)
        {
            hops = std::make_shared<Traceroute::Output::TracerouteResponse::Ipv6::Hops>();
        }
        return hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::TracerouteResponse::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hops != nullptr)
    {
        children["hops"] = hops;
    }

    return children;
}

void Traceroute::Output::TracerouteResponse::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbose-output")
    {
        verbose_output = value;
        verbose_output.value_namespace = name_space;
        verbose_output.value_namespace_prefix = name_space_prefix;
    }
}

void Traceroute::Output::TracerouteResponse::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "verbose-output")
    {
        verbose_output.yfilter = yfilter;
    }
}

bool Traceroute::Output::TracerouteResponse::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops" || name == "destination" || name == "verbose-output")
        return true;
    return false;
}

Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hops()
    :
    hop(this, {"hop_index"})
{

    yang_name = "hops"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Output::TracerouteResponse::Ipv6::Hops::~Hops()
{
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    return false;
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::has_operation() const
{
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Traceroute::Output::TracerouteResponse::Ipv6::Hops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/traceroute-response/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Output::TracerouteResponse::Ipv6::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::TracerouteResponse::Ipv6::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::TracerouteResponse::Ipv6::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop")
    {
        auto c = std::make_shared<Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop>();
        c->parent = this;
        hop.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::TracerouteResponse::Ipv6::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Traceroute::Output::TracerouteResponse::Ipv6::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Traceroute::Output::TracerouteResponse::Ipv6::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop")
        return true;
    return false;
}

Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Hop()
    :
    hop_index{YType::uint32, "hop-index"},
    hop_address{YType::str, "hop-address"},
    hop_hostname{YType::str, "hop-hostname"}
        ,
    probes(std::make_shared<Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes>())
{
    probes->parent = this;

    yang_name = "hop"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = false; 
}

Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::~Hop()
{
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::has_data() const
{
    if (is_presence_container) return true;
    return hop_index.is_set
	|| hop_address.is_set
	|| hop_hostname.is_set
	|| (probes !=  nullptr && probes->has_data());
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_index.yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(hop_hostname.yfilter)
	|| (probes !=  nullptr && probes->has_operation());
}

std::string Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/traceroute-response/ipv6/hops/" << get_segment_path();
    return path_buffer.str();
}

std::string Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    ADD_KEY_TOKEN(hop_index, "hop-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_index.is_set || is_set(hop_index.yfilter)) leaf_name_data.push_back(hop_index.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_hostname.is_set || is_set(hop_hostname.yfilter)) leaf_name_data.push_back(hop_hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probes")
    {
        if(probes == nullptr)
        {
            probes = std::make_shared<Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes>();
        }
        return probes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(probes != nullptr)
    {
        children["probes"] = probes;
    }

    return children;
}

void Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-index")
    {
        hop_index = value;
        hop_index.value_namespace = name_space;
        hop_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname = value;
        hop_hostname.value_namespace = name_space;
        hop_hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-index")
    {
        hop_index.yfilter = yfilter;
    }
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname.yfilter = yfilter;
    }
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probes" || name == "hop-index" || name == "hop-address" || name == "hop-hostname")
        return true;
    return false;
}

Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probes()
    :
    probe(this, {"probe_index"})
{

    yang_name = "probes"; yang_parent_name = "hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::~Probes()
{
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<probe.len(); index++)
    {
        if(probe[index]->has_data())
            return true;
    }
    return false;
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::has_operation() const
{
    for (std::size_t index=0; index<probe.len(); index++)
    {
        if(probe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe")
    {
        auto c = std::make_shared<Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe>();
        c->parent = this;
        probe.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : probe.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe")
        return true;
    return false;
}

Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe::Probe()
    :
    probe_index{YType::uint32, "probe-index"},
    result{YType::str, "result"},
    delta_time{YType::uint32, "delta-time"},
    hop_address{YType::str, "hop-address"},
    hop_hostname{YType::str, "hop-hostname"}
{

    yang_name = "probe"; yang_parent_name = "probes"; is_top_level_class = false; has_list_ancestor = true; 
}

Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe::~Probe()
{
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe::has_data() const
{
    if (is_presence_container) return true;
    return probe_index.is_set
	|| result.is_set
	|| delta_time.is_set
	|| hop_address.is_set
	|| hop_hostname.is_set;
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe_index.yfilter)
	|| ydk::is_set(result.yfilter)
	|| ydk::is_set(delta_time.yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(hop_hostname.yfilter);
}

std::string Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";
    ADD_KEY_TOKEN(probe_index, "probe-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_index.is_set || is_set(probe_index.yfilter)) leaf_name_data.push_back(probe_index.get_name_leafdata());
    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());
    if (delta_time.is_set || is_set(delta_time.yfilter)) leaf_name_data.push_back(delta_time.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_hostname.is_set || is_set(hop_hostname.yfilter)) leaf_name_data.push_back(hop_hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe-index")
    {
        probe_index = value;
        probe_index.value_namespace = name_space;
        probe_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delta-time")
    {
        delta_time = value;
        delta_time.value_namespace = name_space;
        delta_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname = value;
        hop_hostname.value_namespace = name_space;
        hop_hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe-index")
    {
        probe_index.yfilter = yfilter;
    }
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
    if(value_path == "delta-time")
    {
        delta_time.yfilter = yfilter;
    }
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname.yfilter = yfilter;
    }
}

bool Traceroute::Output::TracerouteResponse::Ipv6::Hops::Hop::Probes::Probe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-index" || name == "result" || name == "delta-time" || name == "hop-address" || name == "hop-hostname")
        return true;
    return false;
}


}
}

