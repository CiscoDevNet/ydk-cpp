
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ping_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ping_act {

Ping::Ping()
    :
    input(std::make_shared<Ping::Input>())
    , output(std::make_shared<Ping::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "ping"; yang_parent_name = "Cisco-IOS-XR-ping-act"; is_top_level_class = true; has_list_ancestor = false; 
}

Ping::~Ping()
{
}

bool Ping::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Ping::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Ping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Ping::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Ping::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::get_children() const
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

void Ping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ping::clone_ptr() const
{
    return std::make_shared<Ping>();
}

std::string Ping::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ping::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ping::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ping::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Ping::Input::Input()
    :
    destination(std::make_shared<Ping::Input::Destination>())
    , ipv4(this, {"destination"})
    , ipv6(std::make_shared<Ping::Input::Ipv6>())
{
    destination->parent = this;
    ipv6->parent = this;

    yang_name = "input"; yang_parent_name = "ping"; is_top_level_class = false; has_list_ancestor = false; 
}

Ping::Input::~Input()
{
}

bool Ping::Input::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return (destination !=  nullptr && destination->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Ping::Input::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Ping::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping/" << get_segment_path();
    return path_buffer.str();
}

std::string Ping::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Ping::Input::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Ping::Input::Ipv4>();
        c->parent = this;
        ipv4.append(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Ping::Input::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    count = 0;
    for (auto c : ipv4.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Ping::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ping::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ping::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Ping::Input::Destination::Destination()
    :
    destination{YType::str, "destination"},
    repeat_count{YType::uint64, "repeat-count"},
    data_size{YType::uint64, "data-size"},
    timeout{YType::uint64, "timeout"},
    interval{YType::uint32, "interval"},
    pattern{YType::str, "pattern"},
    sweep{YType::boolean, "sweep"},
    vrf_name{YType::str, "vrf-name"},
    source{YType::str, "source"},
    verbose{YType::boolean, "verbose"},
    type_of_service{YType::uint8, "type-of-service"},
    do_not_frag{YType::boolean, "do-not-frag"},
    validate{YType::boolean, "validate"},
    priority{YType::uint8, "priority"},
    outgoing_interface{YType::str, "outgoing-interface"}
{

    yang_name = "destination"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Ping::Input::Destination::~Destination()
{
}

bool Ping::Input::Destination::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| repeat_count.is_set
	|| data_size.is_set
	|| timeout.is_set
	|| interval.is_set
	|| pattern.is_set
	|| sweep.is_set
	|| vrf_name.is_set
	|| source.is_set
	|| verbose.is_set
	|| type_of_service.is_set
	|| do_not_frag.is_set
	|| validate.is_set
	|| priority.is_set
	|| outgoing_interface.is_set;
}

bool Ping::Input::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(repeat_count.yfilter)
	|| ydk::is_set(data_size.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(pattern.yfilter)
	|| ydk::is_set(sweep.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(verbose.yfilter)
	|| ydk::is_set(type_of_service.yfilter)
	|| ydk::is_set(do_not_frag.yfilter)
	|| ydk::is_set(validate.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter);
}

std::string Ping::Input::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Ping::Input::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Input::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (repeat_count.is_set || is_set(repeat_count.yfilter)) leaf_name_data.push_back(repeat_count.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.yfilter)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (sweep.is_set || is_set(sweep.yfilter)) leaf_name_data.push_back(sweep.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (type_of_service.is_set || is_set(type_of_service.yfilter)) leaf_name_data.push_back(type_of_service.get_name_leafdata());
    if (do_not_frag.is_set || is_set(do_not_frag.yfilter)) leaf_name_data.push_back(do_not_frag.get_name_leafdata());
    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Input::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Input::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ping::Input::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repeat-count")
    {
        repeat_count = value;
        repeat_count.value_namespace = name_space;
        repeat_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-size")
    {
        data_size = value;
        data_size.value_namespace = name_space;
        data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep")
    {
        sweep = value;
        sweep.value_namespace = name_space;
        sweep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbose")
    {
        verbose = value;
        verbose.value_namespace = name_space;
        verbose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-of-service")
    {
        type_of_service = value;
        type_of_service.value_namespace = name_space;
        type_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "do-not-frag")
    {
        do_not_frag = value;
        do_not_frag.value_namespace = name_space;
        do_not_frag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
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

void Ping::Input::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "repeat-count")
    {
        repeat_count.yfilter = yfilter;
    }
    if(value_path == "data-size")
    {
        data_size.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
    if(value_path == "sweep")
    {
        sweep.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "verbose")
    {
        verbose.yfilter = yfilter;
    }
    if(value_path == "type-of-service")
    {
        type_of_service.yfilter = yfilter;
    }
    if(value_path == "do-not-frag")
    {
        do_not_frag.yfilter = yfilter;
    }
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
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

bool Ping::Input::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "repeat-count" || name == "data-size" || name == "timeout" || name == "interval" || name == "pattern" || name == "sweep" || name == "vrf-name" || name == "source" || name == "verbose" || name == "type-of-service" || name == "do-not-frag" || name == "validate" || name == "priority" || name == "outgoing-interface")
        return true;
    return false;
}

Ping::Input::Ipv4::Ipv4()
    :
    destination{YType::str, "destination"},
    repeat_count{YType::uint64, "repeat-count"},
    data_size{YType::uint64, "data-size"},
    timeout{YType::uint64, "timeout"},
    interval{YType::uint32, "interval"},
    pattern{YType::str, "pattern"},
    sweep{YType::boolean, "sweep"},
    vrf_name{YType::str, "vrf-name"},
    source{YType::str, "source"},
    verbose{YType::boolean, "verbose"},
    type_of_service{YType::uint8, "type-of-service"},
    do_not_frag{YType::boolean, "do-not-frag"},
    validate{YType::boolean, "validate"}
{

    yang_name = "ipv4"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Ping::Input::Ipv4::~Ipv4()
{
}

bool Ping::Input::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| repeat_count.is_set
	|| data_size.is_set
	|| timeout.is_set
	|| interval.is_set
	|| pattern.is_set
	|| sweep.is_set
	|| vrf_name.is_set
	|| source.is_set
	|| verbose.is_set
	|| type_of_service.is_set
	|| do_not_frag.is_set
	|| validate.is_set;
}

bool Ping::Input::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(repeat_count.yfilter)
	|| ydk::is_set(data_size.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(pattern.yfilter)
	|| ydk::is_set(sweep.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(verbose.yfilter)
	|| ydk::is_set(type_of_service.yfilter)
	|| ydk::is_set(do_not_frag.yfilter)
	|| ydk::is_set(validate.yfilter);
}

std::string Ping::Input::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Ping::Input::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(destination, "destination");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Input::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (repeat_count.is_set || is_set(repeat_count.yfilter)) leaf_name_data.push_back(repeat_count.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.yfilter)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (sweep.is_set || is_set(sweep.yfilter)) leaf_name_data.push_back(sweep.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (type_of_service.is_set || is_set(type_of_service.yfilter)) leaf_name_data.push_back(type_of_service.get_name_leafdata());
    if (do_not_frag.is_set || is_set(do_not_frag.yfilter)) leaf_name_data.push_back(do_not_frag.get_name_leafdata());
    if (validate.is_set || is_set(validate.yfilter)) leaf_name_data.push_back(validate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Input::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Input::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ping::Input::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repeat-count")
    {
        repeat_count = value;
        repeat_count.value_namespace = name_space;
        repeat_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-size")
    {
        data_size = value;
        data_size.value_namespace = name_space;
        data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep")
    {
        sweep = value;
        sweep.value_namespace = name_space;
        sweep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbose")
    {
        verbose = value;
        verbose.value_namespace = name_space;
        verbose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-of-service")
    {
        type_of_service = value;
        type_of_service.value_namespace = name_space;
        type_of_service.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "do-not-frag")
    {
        do_not_frag = value;
        do_not_frag.value_namespace = name_space;
        do_not_frag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validate")
    {
        validate = value;
        validate.value_namespace = name_space;
        validate.value_namespace_prefix = name_space_prefix;
    }
}

void Ping::Input::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "repeat-count")
    {
        repeat_count.yfilter = yfilter;
    }
    if(value_path == "data-size")
    {
        data_size.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
    if(value_path == "sweep")
    {
        sweep.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "verbose")
    {
        verbose.yfilter = yfilter;
    }
    if(value_path == "type-of-service")
    {
        type_of_service.yfilter = yfilter;
    }
    if(value_path == "do-not-frag")
    {
        do_not_frag.yfilter = yfilter;
    }
    if(value_path == "validate")
    {
        validate.yfilter = yfilter;
    }
}

bool Ping::Input::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "repeat-count" || name == "data-size" || name == "timeout" || name == "interval" || name == "pattern" || name == "sweep" || name == "vrf-name" || name == "source" || name == "verbose" || name == "type-of-service" || name == "do-not-frag" || name == "validate")
        return true;
    return false;
}

Ping::Input::Ipv6::Ipv6()
    :
    destination{YType::str, "destination"},
    repeat_count{YType::uint64, "repeat-count"},
    data_size{YType::uint64, "data-size"},
    timeout{YType::uint64, "timeout"},
    interval{YType::uint32, "interval"},
    pattern{YType::str, "pattern"},
    sweep{YType::boolean, "sweep"},
    vrf_name{YType::str, "vrf-name"},
    source{YType::str, "source"},
    verbose{YType::boolean, "verbose"},
    priority{YType::uint8, "priority"},
    outgoing_interface{YType::str, "outgoing-interface"}
{

    yang_name = "ipv6"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Ping::Input::Ipv6::~Ipv6()
{
}

bool Ping::Input::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| repeat_count.is_set
	|| data_size.is_set
	|| timeout.is_set
	|| interval.is_set
	|| pattern.is_set
	|| sweep.is_set
	|| vrf_name.is_set
	|| source.is_set
	|| verbose.is_set
	|| priority.is_set
	|| outgoing_interface.is_set;
}

bool Ping::Input::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(repeat_count.yfilter)
	|| ydk::is_set(data_size.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(pattern.yfilter)
	|| ydk::is_set(sweep.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(verbose.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter);
}

std::string Ping::Input::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Ping::Input::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Input::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (repeat_count.is_set || is_set(repeat_count.yfilter)) leaf_name_data.push_back(repeat_count.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.yfilter)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (sweep.is_set || is_set(sweep.yfilter)) leaf_name_data.push_back(sweep.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.yfilter)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Input::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Input::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ping::Input::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repeat-count")
    {
        repeat_count = value;
        repeat_count.value_namespace = name_space;
        repeat_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-size")
    {
        data_size = value;
        data_size.value_namespace = name_space;
        data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep")
    {
        sweep = value;
        sweep.value_namespace = name_space;
        sweep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
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

void Ping::Input::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "repeat-count")
    {
        repeat_count.yfilter = yfilter;
    }
    if(value_path == "data-size")
    {
        data_size.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
    if(value_path == "sweep")
    {
        sweep.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
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

bool Ping::Input::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "repeat-count" || name == "data-size" || name == "timeout" || name == "interval" || name == "pattern" || name == "sweep" || name == "vrf-name" || name == "source" || name == "verbose" || name == "priority" || name == "outgoing-interface")
        return true;
    return false;
}

Ping::Output::Output()
    :
    ping_response(std::make_shared<Ping::Output::PingResponse>())
{
    ping_response->parent = this;

    yang_name = "output"; yang_parent_name = "ping"; is_top_level_class = false; has_list_ancestor = false; 
}

Ping::Output::~Output()
{
}

bool Ping::Output::has_data() const
{
    if (is_presence_container) return true;
    return (ping_response !=  nullptr && ping_response->has_data());
}

bool Ping::Output::has_operation() const
{
    return is_set(yfilter)
	|| (ping_response !=  nullptr && ping_response->has_operation());
}

std::string Ping::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping/" << get_segment_path();
    return path_buffer.str();
}

std::string Ping::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ping-response")
    {
        if(ping_response == nullptr)
        {
            ping_response = std::make_shared<Ping::Output::PingResponse>();
        }
        return ping_response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ping_response != nullptr)
    {
        children["ping-response"] = ping_response;
    }

    return children;
}

void Ping::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ping::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ping::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ping-response")
        return true;
    return false;
}

Ping::Output::PingResponse::PingResponse()
    :
    ipv4(this, {"destination"})
    , ipv6(std::make_shared<Ping::Output::PingResponse::Ipv6>())
{
    ipv6->parent = this;

    yang_name = "ping-response"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = false; 
}

Ping::Output::PingResponse::~PingResponse()
{
}

bool Ping::Output::PingResponse::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return (ipv6 !=  nullptr && ipv6->has_data());
}

bool Ping::Output::PingResponse::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Ping::Output::PingResponse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping/output/" << get_segment_path();
    return path_buffer.str();
}

std::string Ping::Output::PingResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ping-response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Output::PingResponse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Output::PingResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Ping::Output::PingResponse::Ipv4>();
        c->parent = this;
        ipv4.append(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Ping::Output::PingResponse::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Output::PingResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ipv4.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Ping::Output::PingResponse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ping::Output::PingResponse::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ping::Output::PingResponse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Ping::Output::PingResponse::Ipv4::Ipv4()
    :
    destination{YType::str, "destination"},
    repeat_count{YType::uint64, "repeat-count"},
    data_size{YType::uint64, "data-size"},
    timeout{YType::uint64, "timeout"},
    interval{YType::uint32, "interval"},
    pattern{YType::str, "pattern"},
    sweep{YType::boolean, "sweep"},
    hits{YType::uint64, "hits"},
    total{YType::uint64, "total"},
    success_rate{YType::uint64, "success-rate"},
    rtt_min{YType::uint64, "rtt-min"},
    rtt_avg{YType::uint64, "rtt-avg"},
    rtt_max{YType::uint64, "rtt-max"},
    sweep_min{YType::uint32, "sweep-min"},
    sweep_max{YType::uint64, "sweep-max"},
    rotate_pattern{YType::boolean, "rotate-pattern"},
    ping_error_response{YType::str, "ping-error-response"}
        ,
    replies(std::make_shared<Ping::Output::PingResponse::Ipv4::Replies>())
{
    replies->parent = this;

    yang_name = "ipv4"; yang_parent_name = "ping-response"; is_top_level_class = false; has_list_ancestor = false; 
}

Ping::Output::PingResponse::Ipv4::~Ipv4()
{
}

bool Ping::Output::PingResponse::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| repeat_count.is_set
	|| data_size.is_set
	|| timeout.is_set
	|| interval.is_set
	|| pattern.is_set
	|| sweep.is_set
	|| hits.is_set
	|| total.is_set
	|| success_rate.is_set
	|| rtt_min.is_set
	|| rtt_avg.is_set
	|| rtt_max.is_set
	|| sweep_min.is_set
	|| sweep_max.is_set
	|| rotate_pattern.is_set
	|| ping_error_response.is_set
	|| (replies !=  nullptr && replies->has_data());
}

bool Ping::Output::PingResponse::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(repeat_count.yfilter)
	|| ydk::is_set(data_size.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(pattern.yfilter)
	|| ydk::is_set(sweep.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(success_rate.yfilter)
	|| ydk::is_set(rtt_min.yfilter)
	|| ydk::is_set(rtt_avg.yfilter)
	|| ydk::is_set(rtt_max.yfilter)
	|| ydk::is_set(sweep_min.yfilter)
	|| ydk::is_set(sweep_max.yfilter)
	|| ydk::is_set(rotate_pattern.yfilter)
	|| ydk::is_set(ping_error_response.yfilter)
	|| (replies !=  nullptr && replies->has_operation());
}

std::string Ping::Output::PingResponse::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping/output/ping-response/" << get_segment_path();
    return path_buffer.str();
}

std::string Ping::Output::PingResponse::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(destination, "destination");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Output::PingResponse::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (repeat_count.is_set || is_set(repeat_count.yfilter)) leaf_name_data.push_back(repeat_count.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.yfilter)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (sweep.is_set || is_set(sweep.yfilter)) leaf_name_data.push_back(sweep.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (success_rate.is_set || is_set(success_rate.yfilter)) leaf_name_data.push_back(success_rate.get_name_leafdata());
    if (rtt_min.is_set || is_set(rtt_min.yfilter)) leaf_name_data.push_back(rtt_min.get_name_leafdata());
    if (rtt_avg.is_set || is_set(rtt_avg.yfilter)) leaf_name_data.push_back(rtt_avg.get_name_leafdata());
    if (rtt_max.is_set || is_set(rtt_max.yfilter)) leaf_name_data.push_back(rtt_max.get_name_leafdata());
    if (sweep_min.is_set || is_set(sweep_min.yfilter)) leaf_name_data.push_back(sweep_min.get_name_leafdata());
    if (sweep_max.is_set || is_set(sweep_max.yfilter)) leaf_name_data.push_back(sweep_max.get_name_leafdata());
    if (rotate_pattern.is_set || is_set(rotate_pattern.yfilter)) leaf_name_data.push_back(rotate_pattern.get_name_leafdata());
    if (ping_error_response.is_set || is_set(ping_error_response.yfilter)) leaf_name_data.push_back(ping_error_response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Output::PingResponse::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replies")
    {
        if(replies == nullptr)
        {
            replies = std::make_shared<Ping::Output::PingResponse::Ipv4::Replies>();
        }
        return replies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Output::PingResponse::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(replies != nullptr)
    {
        children["replies"] = replies;
    }

    return children;
}

void Ping::Output::PingResponse::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repeat-count")
    {
        repeat_count = value;
        repeat_count.value_namespace = name_space;
        repeat_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-size")
    {
        data_size = value;
        data_size.value_namespace = name_space;
        data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep")
    {
        sweep = value;
        sweep.value_namespace = name_space;
        sweep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-rate")
    {
        success_rate = value;
        success_rate.value_namespace = name_space;
        success_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt-min")
    {
        rtt_min = value;
        rtt_min.value_namespace = name_space;
        rtt_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt-avg")
    {
        rtt_avg = value;
        rtt_avg.value_namespace = name_space;
        rtt_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt-max")
    {
        rtt_max = value;
        rtt_max.value_namespace = name_space;
        rtt_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep-min")
    {
        sweep_min = value;
        sweep_min.value_namespace = name_space;
        sweep_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep-max")
    {
        sweep_max = value;
        sweep_max.value_namespace = name_space;
        sweep_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotate-pattern")
    {
        rotate_pattern = value;
        rotate_pattern.value_namespace = name_space;
        rotate_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ping-error-response")
    {
        ping_error_response = value;
        ping_error_response.value_namespace = name_space;
        ping_error_response.value_namespace_prefix = name_space_prefix;
    }
}

void Ping::Output::PingResponse::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "repeat-count")
    {
        repeat_count.yfilter = yfilter;
    }
    if(value_path == "data-size")
    {
        data_size.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
    if(value_path == "sweep")
    {
        sweep.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "success-rate")
    {
        success_rate.yfilter = yfilter;
    }
    if(value_path == "rtt-min")
    {
        rtt_min.yfilter = yfilter;
    }
    if(value_path == "rtt-avg")
    {
        rtt_avg.yfilter = yfilter;
    }
    if(value_path == "rtt-max")
    {
        rtt_max.yfilter = yfilter;
    }
    if(value_path == "sweep-min")
    {
        sweep_min.yfilter = yfilter;
    }
    if(value_path == "sweep-max")
    {
        sweep_max.yfilter = yfilter;
    }
    if(value_path == "rotate-pattern")
    {
        rotate_pattern.yfilter = yfilter;
    }
    if(value_path == "ping-error-response")
    {
        ping_error_response.yfilter = yfilter;
    }
}

bool Ping::Output::PingResponse::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replies" || name == "destination" || name == "repeat-count" || name == "data-size" || name == "timeout" || name == "interval" || name == "pattern" || name == "sweep" || name == "hits" || name == "total" || name == "success-rate" || name == "rtt-min" || name == "rtt-avg" || name == "rtt-max" || name == "sweep-min" || name == "sweep-max" || name == "rotate-pattern" || name == "ping-error-response")
        return true;
    return false;
}

Ping::Output::PingResponse::Ipv4::Replies::Replies()
    :
    reply(this, {"reply_index"})
{

    yang_name = "replies"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Ping::Output::PingResponse::Ipv4::Replies::~Replies()
{
}

bool Ping::Output::PingResponse::Ipv4::Replies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reply.len(); index++)
    {
        if(reply[index]->has_data())
            return true;
    }
    return false;
}

bool Ping::Output::PingResponse::Ipv4::Replies::has_operation() const
{
    for (std::size_t index=0; index<reply.len(); index++)
    {
        if(reply[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ping::Output::PingResponse::Ipv4::Replies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Output::PingResponse::Ipv4::Replies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Output::PingResponse::Ipv4::Replies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reply")
    {
        auto c = std::make_shared<Ping::Output::PingResponse::Ipv4::Replies::Reply>();
        c->parent = this;
        reply.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Output::PingResponse::Ipv4::Replies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reply.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ping::Output::PingResponse::Ipv4::Replies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ping::Output::PingResponse::Ipv4::Replies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ping::Output::PingResponse::Ipv4::Replies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reply")
        return true;
    return false;
}

Ping::Output::PingResponse::Ipv4::Replies::Reply::Reply()
    :
    reply_index{YType::uint64, "reply-index"},
    result{YType::str, "result"}
        ,
    broadcast_reply_addresses(std::make_shared<Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses>())
{
    broadcast_reply_addresses->parent = this;

    yang_name = "reply"; yang_parent_name = "replies"; is_top_level_class = false; has_list_ancestor = true; 
}

Ping::Output::PingResponse::Ipv4::Replies::Reply::~Reply()
{
}

bool Ping::Output::PingResponse::Ipv4::Replies::Reply::has_data() const
{
    if (is_presence_container) return true;
    return reply_index.is_set
	|| result.is_set
	|| (broadcast_reply_addresses !=  nullptr && broadcast_reply_addresses->has_data());
}

bool Ping::Output::PingResponse::Ipv4::Replies::Reply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reply_index.yfilter)
	|| ydk::is_set(result.yfilter)
	|| (broadcast_reply_addresses !=  nullptr && broadcast_reply_addresses->has_operation());
}

std::string Ping::Output::PingResponse::Ipv4::Replies::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";
    ADD_KEY_TOKEN(reply_index, "reply-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Output::PingResponse::Ipv4::Replies::Reply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reply_index.is_set || is_set(reply_index.yfilter)) leaf_name_data.push_back(reply_index.get_name_leafdata());
    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Output::PingResponse::Ipv4::Replies::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-reply-addresses")
    {
        if(broadcast_reply_addresses == nullptr)
        {
            broadcast_reply_addresses = std::make_shared<Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses>();
        }
        return broadcast_reply_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Output::PingResponse::Ipv4::Replies::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(broadcast_reply_addresses != nullptr)
    {
        children["broadcast-reply-addresses"] = broadcast_reply_addresses;
    }

    return children;
}

void Ping::Output::PingResponse::Ipv4::Replies::Reply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reply-index")
    {
        reply_index = value;
        reply_index.value_namespace = name_space;
        reply_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Ping::Output::PingResponse::Ipv4::Replies::Reply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reply-index")
    {
        reply_index.yfilter = yfilter;
    }
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Ping::Output::PingResponse::Ipv4::Replies::Reply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-reply-addresses" || name == "reply-index" || name == "result")
        return true;
    return false;
}

Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddresses()
    :
    broadcast_reply_address(this, {"reply_address"})
{

    yang_name = "broadcast-reply-addresses"; yang_parent_name = "reply"; is_top_level_class = false; has_list_ancestor = true; 
}

Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::~BroadcastReplyAddresses()
{
}

bool Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<broadcast_reply_address.len(); index++)
    {
        if(broadcast_reply_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::has_operation() const
{
    for (std::size_t index=0; index<broadcast_reply_address.len(); index++)
    {
        if(broadcast_reply_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-reply-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-reply-address")
    {
        auto c = std::make_shared<Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress>();
        c->parent = this;
        broadcast_reply_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : broadcast_reply_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-reply-address")
        return true;
    return false;
}

Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::BroadcastReplyAddress()
    :
    reply_address{YType::str, "reply-address"},
    result{YType::str, "result"}
{

    yang_name = "broadcast-reply-address"; yang_parent_name = "broadcast-reply-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::~BroadcastReplyAddress()
{
}

bool Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::has_data() const
{
    if (is_presence_container) return true;
    return reply_address.is_set
	|| result.is_set;
}

bool Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reply_address.yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-reply-address";
    ADD_KEY_TOKEN(reply_address, "reply-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reply_address.is_set || is_set(reply_address.yfilter)) leaf_name_data.push_back(reply_address.get_name_leafdata());
    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reply-address")
    {
        reply_address = value;
        reply_address.value_namespace = name_space;
        reply_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reply-address")
    {
        reply_address.yfilter = yfilter;
    }
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Ping::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reply-address" || name == "result")
        return true;
    return false;
}

Ping::Output::PingResponse::Ipv6::Ipv6()
    :
    destination{YType::str, "destination"},
    repeat_count{YType::uint64, "repeat-count"},
    data_size{YType::uint64, "data-size"},
    timeout{YType::uint64, "timeout"},
    interval{YType::uint32, "interval"},
    pattern{YType::str, "pattern"},
    sweep{YType::boolean, "sweep"},
    sweep_min{YType::uint32, "sweep-min"},
    sweep_max{YType::uint64, "sweep-max"},
    rotate_pattern{YType::boolean, "rotate-pattern"},
    hits{YType::uint64, "hits"},
    total{YType::uint64, "total"},
    success_rate{YType::uint64, "success-rate"},
    rtt_min{YType::uint64, "rtt-min"},
    rtt_avg{YType::uint64, "rtt-avg"},
    rtt_max{YType::uint64, "rtt-max"}
        ,
    replies(std::make_shared<Ping::Output::PingResponse::Ipv6::Replies>())
{
    replies->parent = this;

    yang_name = "ipv6"; yang_parent_name = "ping-response"; is_top_level_class = false; has_list_ancestor = false; 
}

Ping::Output::PingResponse::Ipv6::~Ipv6()
{
}

bool Ping::Output::PingResponse::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| repeat_count.is_set
	|| data_size.is_set
	|| timeout.is_set
	|| interval.is_set
	|| pattern.is_set
	|| sweep.is_set
	|| sweep_min.is_set
	|| sweep_max.is_set
	|| rotate_pattern.is_set
	|| hits.is_set
	|| total.is_set
	|| success_rate.is_set
	|| rtt_min.is_set
	|| rtt_avg.is_set
	|| rtt_max.is_set
	|| (replies !=  nullptr && replies->has_data());
}

bool Ping::Output::PingResponse::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(repeat_count.yfilter)
	|| ydk::is_set(data_size.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(pattern.yfilter)
	|| ydk::is_set(sweep.yfilter)
	|| ydk::is_set(sweep_min.yfilter)
	|| ydk::is_set(sweep_max.yfilter)
	|| ydk::is_set(rotate_pattern.yfilter)
	|| ydk::is_set(hits.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(success_rate.yfilter)
	|| ydk::is_set(rtt_min.yfilter)
	|| ydk::is_set(rtt_avg.yfilter)
	|| ydk::is_set(rtt_max.yfilter)
	|| (replies !=  nullptr && replies->has_operation());
}

std::string Ping::Output::PingResponse::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping/output/ping-response/" << get_segment_path();
    return path_buffer.str();
}

std::string Ping::Output::PingResponse::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Output::PingResponse::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (repeat_count.is_set || is_set(repeat_count.yfilter)) leaf_name_data.push_back(repeat_count.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.yfilter)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (sweep.is_set || is_set(sweep.yfilter)) leaf_name_data.push_back(sweep.get_name_leafdata());
    if (sweep_min.is_set || is_set(sweep_min.yfilter)) leaf_name_data.push_back(sweep_min.get_name_leafdata());
    if (sweep_max.is_set || is_set(sweep_max.yfilter)) leaf_name_data.push_back(sweep_max.get_name_leafdata());
    if (rotate_pattern.is_set || is_set(rotate_pattern.yfilter)) leaf_name_data.push_back(rotate_pattern.get_name_leafdata());
    if (hits.is_set || is_set(hits.yfilter)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (success_rate.is_set || is_set(success_rate.yfilter)) leaf_name_data.push_back(success_rate.get_name_leafdata());
    if (rtt_min.is_set || is_set(rtt_min.yfilter)) leaf_name_data.push_back(rtt_min.get_name_leafdata());
    if (rtt_avg.is_set || is_set(rtt_avg.yfilter)) leaf_name_data.push_back(rtt_avg.get_name_leafdata());
    if (rtt_max.is_set || is_set(rtt_max.yfilter)) leaf_name_data.push_back(rtt_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Output::PingResponse::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replies")
    {
        if(replies == nullptr)
        {
            replies = std::make_shared<Ping::Output::PingResponse::Ipv6::Replies>();
        }
        return replies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Output::PingResponse::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(replies != nullptr)
    {
        children["replies"] = replies;
    }

    return children;
}

void Ping::Output::PingResponse::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repeat-count")
    {
        repeat_count = value;
        repeat_count.value_namespace = name_space;
        repeat_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-size")
    {
        data_size = value;
        data_size.value_namespace = name_space;
        data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep")
    {
        sweep = value;
        sweep.value_namespace = name_space;
        sweep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep-min")
    {
        sweep_min = value;
        sweep_min.value_namespace = name_space;
        sweep_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweep-max")
    {
        sweep_max = value;
        sweep_max.value_namespace = name_space;
        sweep_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotate-pattern")
    {
        rotate_pattern = value;
        rotate_pattern.value_namespace = name_space;
        rotate_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hits")
    {
        hits = value;
        hits.value_namespace = name_space;
        hits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-rate")
    {
        success_rate = value;
        success_rate.value_namespace = name_space;
        success_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt-min")
    {
        rtt_min = value;
        rtt_min.value_namespace = name_space;
        rtt_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt-avg")
    {
        rtt_avg = value;
        rtt_avg.value_namespace = name_space;
        rtt_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt-max")
    {
        rtt_max = value;
        rtt_max.value_namespace = name_space;
        rtt_max.value_namespace_prefix = name_space_prefix;
    }
}

void Ping::Output::PingResponse::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "repeat-count")
    {
        repeat_count.yfilter = yfilter;
    }
    if(value_path == "data-size")
    {
        data_size.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
    if(value_path == "sweep")
    {
        sweep.yfilter = yfilter;
    }
    if(value_path == "sweep-min")
    {
        sweep_min.yfilter = yfilter;
    }
    if(value_path == "sweep-max")
    {
        sweep_max.yfilter = yfilter;
    }
    if(value_path == "rotate-pattern")
    {
        rotate_pattern.yfilter = yfilter;
    }
    if(value_path == "hits")
    {
        hits.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "success-rate")
    {
        success_rate.yfilter = yfilter;
    }
    if(value_path == "rtt-min")
    {
        rtt_min.yfilter = yfilter;
    }
    if(value_path == "rtt-avg")
    {
        rtt_avg.yfilter = yfilter;
    }
    if(value_path == "rtt-max")
    {
        rtt_max.yfilter = yfilter;
    }
}

bool Ping::Output::PingResponse::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replies" || name == "destination" || name == "repeat-count" || name == "data-size" || name == "timeout" || name == "interval" || name == "pattern" || name == "sweep" || name == "sweep-min" || name == "sweep-max" || name == "rotate-pattern" || name == "hits" || name == "total" || name == "success-rate" || name == "rtt-min" || name == "rtt-avg" || name == "rtt-max")
        return true;
    return false;
}

Ping::Output::PingResponse::Ipv6::Replies::Replies()
    :
    reply(this, {"reply_index"})
{

    yang_name = "replies"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Ping::Output::PingResponse::Ipv6::Replies::~Replies()
{
}

bool Ping::Output::PingResponse::Ipv6::Replies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reply.len(); index++)
    {
        if(reply[index]->has_data())
            return true;
    }
    return false;
}

bool Ping::Output::PingResponse::Ipv6::Replies::has_operation() const
{
    for (std::size_t index=0; index<reply.len(); index++)
    {
        if(reply[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ping::Output::PingResponse::Ipv6::Replies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping/output/ping-response/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Ping::Output::PingResponse::Ipv6::Replies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Output::PingResponse::Ipv6::Replies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Output::PingResponse::Ipv6::Replies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reply")
    {
        auto c = std::make_shared<Ping::Output::PingResponse::Ipv6::Replies::Reply>();
        c->parent = this;
        reply.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Output::PingResponse::Ipv6::Replies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reply.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ping::Output::PingResponse::Ipv6::Replies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ping::Output::PingResponse::Ipv6::Replies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ping::Output::PingResponse::Ipv6::Replies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reply")
        return true;
    return false;
}

Ping::Output::PingResponse::Ipv6::Replies::Reply::Reply()
    :
    reply_index{YType::uint64, "reply-index"},
    result{YType::str, "result"}
{

    yang_name = "reply"; yang_parent_name = "replies"; is_top_level_class = false; has_list_ancestor = false; 
}

Ping::Output::PingResponse::Ipv6::Replies::Reply::~Reply()
{
}

bool Ping::Output::PingResponse::Ipv6::Replies::Reply::has_data() const
{
    if (is_presence_container) return true;
    return reply_index.is_set
	|| result.is_set;
}

bool Ping::Output::PingResponse::Ipv6::Replies::Reply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reply_index.yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Ping::Output::PingResponse::Ipv6::Replies::Reply::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping/output/ping-response/ipv6/replies/" << get_segment_path();
    return path_buffer.str();
}

std::string Ping::Output::PingResponse::Ipv6::Replies::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply";
    ADD_KEY_TOKEN(reply_index, "reply-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ping::Output::PingResponse::Ipv6::Replies::Reply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reply_index.is_set || is_set(reply_index.yfilter)) leaf_name_data.push_back(reply_index.get_name_leafdata());
    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ping::Output::PingResponse::Ipv6::Replies::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ping::Output::PingResponse::Ipv6::Replies::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ping::Output::PingResponse::Ipv6::Replies::Reply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reply-index")
    {
        reply_index = value;
        reply_index.value_namespace = name_space;
        reply_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Ping::Output::PingResponse::Ipv6::Replies::Reply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reply-index")
    {
        reply_index.yfilter = yfilter;
    }
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Ping::Output::PingResponse::Ipv6::Replies::Reply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reply-index" || name == "result")
        return true;
    return false;
}


}
}

