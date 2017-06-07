
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ping_act.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ping_act {

PingRpc::PingRpc()
    :
    input(std::make_shared<PingRpc::Input>())
	,output(std::make_shared<PingRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "ping"; yang_parent_name = "Cisco-IOS-XR-ping-act";
}

PingRpc::~PingRpc()
{
}

bool PingRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool PingRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string PingRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ping-act:ping";

    return path_buffer.str();

}

const EntityPath PingRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PingRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PingRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<PingRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void PingRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> PingRpc::clone_ptr() const
{
    return std::make_shared<PingRpc>();
}

std::string PingRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PingRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PingRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

PingRpc::Input::Input()
    :
    destination(std::make_shared<PingRpc::Input::Destination>())
	,ipv6(std::make_shared<PingRpc::Input::Ipv6>())
{
    destination->parent = this;

    ipv6->parent = this;

    yang_name = "input"; yang_parent_name = "ping";
}

PingRpc::Input::~Input()
{
}

bool PingRpc::Input::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return (destination !=  nullptr && destination->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool PingRpc::Input::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string PingRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath PingRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ping-act:ping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<PingRpc::Input::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PingRpc::Input::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<PingRpc::Input::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void PingRpc::Input::set_value(const std::string & value_path, std::string value)
{
}

PingRpc::Input::Destination::Destination()
    :
    data_size{YType::uint64, "data-size"},
    destination{YType::str, "destination"},
    do_not_frag{YType::boolean, "do-not-frag"},
    interval{YType::uint32, "interval"},
    outgoing_interface{YType::str, "outgoing-interface"},
    pattern{YType::str, "pattern"},
    priority{YType::uint8, "priority"},
    repeat_count{YType::uint64, "repeat-count"},
    source{YType::str, "source"},
    sweep{YType::boolean, "sweep"},
    timeout{YType::uint64, "timeout"},
    type_of_service{YType::uint8, "type-of-service"},
    validate{YType::boolean, "validate"},
    verbose{YType::boolean, "verbose"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "destination"; yang_parent_name = "input";
}

PingRpc::Input::Destination::~Destination()
{
}

bool PingRpc::Input::Destination::has_data() const
{
    return data_size.is_set
	|| destination.is_set
	|| do_not_frag.is_set
	|| interval.is_set
	|| outgoing_interface.is_set
	|| pattern.is_set
	|| priority.is_set
	|| repeat_count.is_set
	|| source.is_set
	|| sweep.is_set
	|| timeout.is_set
	|| type_of_service.is_set
	|| validate.is_set
	|| verbose.is_set
	|| vrf_name.is_set;
}

bool PingRpc::Input::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(data_size.operation)
	|| is_set(destination.operation)
	|| is_set(do_not_frag.operation)
	|| is_set(interval.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(pattern.operation)
	|| is_set(priority.operation)
	|| is_set(repeat_count.operation)
	|| is_set(source.operation)
	|| is_set(sweep.operation)
	|| is_set(timeout.operation)
	|| is_set(type_of_service.operation)
	|| is_set(validate.operation)
	|| is_set(verbose.operation)
	|| is_set(vrf_name.operation);
}

std::string PingRpc::Input::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath PingRpc::Input::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ping-act:ping/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_size.is_set || is_set(data_size.operation)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (do_not_frag.is_set || is_set(do_not_frag.operation)) leaf_name_data.push_back(do_not_frag.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (repeat_count.is_set || is_set(repeat_count.operation)) leaf_name_data.push_back(repeat_count.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (sweep.is_set || is_set(sweep.operation)) leaf_name_data.push_back(sweep.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (type_of_service.is_set || is_set(type_of_service.operation)) leaf_name_data.push_back(type_of_service.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.operation)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Input::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Input::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PingRpc::Input::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-size")
    {
        data_size = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "do-not-frag")
    {
        do_not_frag = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "pattern")
    {
        pattern = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "repeat-count")
    {
        repeat_count = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "sweep")
    {
        sweep = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "type-of-service")
    {
        type_of_service = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
    if(value_path == "verbose")
    {
        verbose = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PingRpc::Input::Ipv4::Ipv4()
    :
    destination{YType::str, "destination"},
    data_size{YType::uint64, "data-size"},
    do_not_frag{YType::boolean, "do-not-frag"},
    interval{YType::uint32, "interval"},
    pattern{YType::str, "pattern"},
    repeat_count{YType::uint64, "repeat-count"},
    source{YType::str, "source"},
    sweep{YType::boolean, "sweep"},
    timeout{YType::uint64, "timeout"},
    type_of_service{YType::uint8, "type-of-service"},
    validate{YType::boolean, "validate"},
    verbose{YType::boolean, "verbose"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4"; yang_parent_name = "input";
}

PingRpc::Input::Ipv4::~Ipv4()
{
}

bool PingRpc::Input::Ipv4::has_data() const
{
    return destination.is_set
	|| data_size.is_set
	|| do_not_frag.is_set
	|| interval.is_set
	|| pattern.is_set
	|| repeat_count.is_set
	|| source.is_set
	|| sweep.is_set
	|| timeout.is_set
	|| type_of_service.is_set
	|| validate.is_set
	|| verbose.is_set
	|| vrf_name.is_set;
}

bool PingRpc::Input::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(data_size.operation)
	|| is_set(do_not_frag.operation)
	|| is_set(interval.operation)
	|| is_set(pattern.operation)
	|| is_set(repeat_count.operation)
	|| is_set(source.operation)
	|| is_set(sweep.operation)
	|| is_set(timeout.operation)
	|| is_set(type_of_service.operation)
	|| is_set(validate.operation)
	|| is_set(verbose.operation)
	|| is_set(vrf_name.operation);
}

std::string PingRpc::Input::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[destination='" <<destination <<"']";

    return path_buffer.str();

}

const EntityPath PingRpc::Input::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ping-act:ping/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.operation)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (do_not_frag.is_set || is_set(do_not_frag.operation)) leaf_name_data.push_back(do_not_frag.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (repeat_count.is_set || is_set(repeat_count.operation)) leaf_name_data.push_back(repeat_count.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (sweep.is_set || is_set(sweep.operation)) leaf_name_data.push_back(sweep.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (type_of_service.is_set || is_set(type_of_service.operation)) leaf_name_data.push_back(type_of_service.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.operation)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Input::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Input::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PingRpc::Input::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "data-size")
    {
        data_size = value;
    }
    if(value_path == "do-not-frag")
    {
        do_not_frag = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "pattern")
    {
        pattern = value;
    }
    if(value_path == "repeat-count")
    {
        repeat_count = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "sweep")
    {
        sweep = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "type-of-service")
    {
        type_of_service = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
    if(value_path == "verbose")
    {
        verbose = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PingRpc::Input::Ipv6::Ipv6()
    :
    data_size{YType::uint64, "data-size"},
    destination{YType::str, "destination"},
    interval{YType::uint32, "interval"},
    outgoing_interface{YType::str, "outgoing-interface"},
    pattern{YType::str, "pattern"},
    priority{YType::uint8, "priority"},
    repeat_count{YType::uint64, "repeat-count"},
    source{YType::str, "source"},
    sweep{YType::boolean, "sweep"},
    timeout{YType::uint64, "timeout"},
    verbose{YType::boolean, "verbose"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv6"; yang_parent_name = "input";
}

PingRpc::Input::Ipv6::~Ipv6()
{
}

bool PingRpc::Input::Ipv6::has_data() const
{
    return data_size.is_set
	|| destination.is_set
	|| interval.is_set
	|| outgoing_interface.is_set
	|| pattern.is_set
	|| priority.is_set
	|| repeat_count.is_set
	|| source.is_set
	|| sweep.is_set
	|| timeout.is_set
	|| verbose.is_set
	|| vrf_name.is_set;
}

bool PingRpc::Input::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(data_size.operation)
	|| is_set(destination.operation)
	|| is_set(interval.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(pattern.operation)
	|| is_set(priority.operation)
	|| is_set(repeat_count.operation)
	|| is_set(source.operation)
	|| is_set(sweep.operation)
	|| is_set(timeout.operation)
	|| is_set(verbose.operation)
	|| is_set(vrf_name.operation);
}

std::string PingRpc::Input::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath PingRpc::Input::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ping-act:ping/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_size.is_set || is_set(data_size.operation)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (repeat_count.is_set || is_set(repeat_count.operation)) leaf_name_data.push_back(repeat_count.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (sweep.is_set || is_set(sweep.operation)) leaf_name_data.push_back(sweep.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.operation)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Input::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Input::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PingRpc::Input::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-size")
    {
        data_size = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "pattern")
    {
        pattern = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "repeat-count")
    {
        repeat_count = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "sweep")
    {
        sweep = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "verbose")
    {
        verbose = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PingRpc::Output::Output()
    :
    ping_response(std::make_shared<PingRpc::Output::PingResponse>())
{
    ping_response->parent = this;

    yang_name = "output"; yang_parent_name = "ping";
}

PingRpc::Output::~Output()
{
}

bool PingRpc::Output::has_data() const
{
    return (ping_response !=  nullptr && ping_response->has_data());
}

bool PingRpc::Output::has_operation() const
{
    return is_set(operation)
	|| (ping_response !=  nullptr && ping_response->has_operation());
}

std::string PingRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath PingRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ping-act:ping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ping-response")
    {
        if(ping_response == nullptr)
        {
            ping_response = std::make_shared<PingRpc::Output::PingResponse>();
        }
        return ping_response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ping_response != nullptr)
    {
        children["ping-response"] = ping_response;
    }

    return children;
}

void PingRpc::Output::set_value(const std::string & value_path, std::string value)
{
}

PingRpc::Output::PingResponse::PingResponse()
    :
    ipv6(std::make_shared<PingRpc::Output::PingResponse::Ipv6>())
{
    ipv6->parent = this;

    yang_name = "ping-response"; yang_parent_name = "output";
}

PingRpc::Output::PingResponse::~PingResponse()
{
}

bool PingRpc::Output::PingResponse::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return (ipv6 !=  nullptr && ipv6->has_data());
}

bool PingRpc::Output::PingResponse::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string PingRpc::Output::PingResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ping-response";

    return path_buffer.str();

}

const EntityPath PingRpc::Output::PingResponse::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ping-act:ping/output/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Output::PingResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PingRpc::Output::PingResponse::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<PingRpc::Output::PingResponse::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Output::PingResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void PingRpc::Output::PingResponse::set_value(const std::string & value_path, std::string value)
{
}

PingRpc::Output::PingResponse::Ipv4::Ipv4()
    :
    destination{YType::str, "destination"},
    data_size{YType::uint64, "data-size"},
    hits{YType::uint64, "hits"},
    interval{YType::uint32, "interval"},
    pattern{YType::str, "pattern"},
    ping_error_response{YType::str, "ping-error-response"},
    repeat_count{YType::uint64, "repeat-count"},
    rotate_pattern{YType::boolean, "rotate-pattern"},
    rtt_avg{YType::uint64, "rtt-avg"},
    rtt_max{YType::uint64, "rtt-max"},
    rtt_min{YType::uint64, "rtt-min"},
    success_rate{YType::uint64, "success-rate"},
    sweep{YType::boolean, "sweep"},
    sweep_max{YType::uint64, "sweep-max"},
    sweep_min{YType::uint32, "sweep-min"},
    timeout{YType::uint64, "timeout"},
    total{YType::uint64, "total"}
    	,
    replies(std::make_shared<PingRpc::Output::PingResponse::Ipv4::Replies>())
{
    replies->parent = this;

    yang_name = "ipv4"; yang_parent_name = "ping-response";
}

PingRpc::Output::PingResponse::Ipv4::~Ipv4()
{
}

bool PingRpc::Output::PingResponse::Ipv4::has_data() const
{
    return destination.is_set
	|| data_size.is_set
	|| hits.is_set
	|| interval.is_set
	|| pattern.is_set
	|| ping_error_response.is_set
	|| repeat_count.is_set
	|| rotate_pattern.is_set
	|| rtt_avg.is_set
	|| rtt_max.is_set
	|| rtt_min.is_set
	|| success_rate.is_set
	|| sweep.is_set
	|| sweep_max.is_set
	|| sweep_min.is_set
	|| timeout.is_set
	|| total.is_set
	|| (replies !=  nullptr && replies->has_data());
}

bool PingRpc::Output::PingResponse::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(data_size.operation)
	|| is_set(hits.operation)
	|| is_set(interval.operation)
	|| is_set(pattern.operation)
	|| is_set(ping_error_response.operation)
	|| is_set(repeat_count.operation)
	|| is_set(rotate_pattern.operation)
	|| is_set(rtt_avg.operation)
	|| is_set(rtt_max.operation)
	|| is_set(rtt_min.operation)
	|| is_set(success_rate.operation)
	|| is_set(sweep.operation)
	|| is_set(sweep_max.operation)
	|| is_set(sweep_min.operation)
	|| is_set(timeout.operation)
	|| is_set(total.operation)
	|| (replies !=  nullptr && replies->has_operation());
}

std::string PingRpc::Output::PingResponse::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[destination='" <<destination <<"']";

    return path_buffer.str();

}

const EntityPath PingRpc::Output::PingResponse::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ping-act:ping/output/ping-response/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (data_size.is_set || is_set(data_size.operation)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (hits.is_set || is_set(hits.operation)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (ping_error_response.is_set || is_set(ping_error_response.operation)) leaf_name_data.push_back(ping_error_response.get_name_leafdata());
    if (repeat_count.is_set || is_set(repeat_count.operation)) leaf_name_data.push_back(repeat_count.get_name_leafdata());
    if (rotate_pattern.is_set || is_set(rotate_pattern.operation)) leaf_name_data.push_back(rotate_pattern.get_name_leafdata());
    if (rtt_avg.is_set || is_set(rtt_avg.operation)) leaf_name_data.push_back(rtt_avg.get_name_leafdata());
    if (rtt_max.is_set || is_set(rtt_max.operation)) leaf_name_data.push_back(rtt_max.get_name_leafdata());
    if (rtt_min.is_set || is_set(rtt_min.operation)) leaf_name_data.push_back(rtt_min.get_name_leafdata());
    if (success_rate.is_set || is_set(success_rate.operation)) leaf_name_data.push_back(success_rate.get_name_leafdata());
    if (sweep.is_set || is_set(sweep.operation)) leaf_name_data.push_back(sweep.get_name_leafdata());
    if (sweep_max.is_set || is_set(sweep_max.operation)) leaf_name_data.push_back(sweep_max.get_name_leafdata());
    if (sweep_min.is_set || is_set(sweep_min.operation)) leaf_name_data.push_back(sweep_min.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Output::PingResponse::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replies")
    {
        if(replies == nullptr)
        {
            replies = std::make_shared<PingRpc::Output::PingResponse::Ipv4::Replies>();
        }
        return replies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Output::PingResponse::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(replies != nullptr)
    {
        children["replies"] = replies;
    }

    return children;
}

void PingRpc::Output::PingResponse::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "data-size")
    {
        data_size = value;
    }
    if(value_path == "hits")
    {
        hits = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "pattern")
    {
        pattern = value;
    }
    if(value_path == "ping-error-response")
    {
        ping_error_response = value;
    }
    if(value_path == "repeat-count")
    {
        repeat_count = value;
    }
    if(value_path == "rotate-pattern")
    {
        rotate_pattern = value;
    }
    if(value_path == "rtt-avg")
    {
        rtt_avg = value;
    }
    if(value_path == "rtt-max")
    {
        rtt_max = value;
    }
    if(value_path == "rtt-min")
    {
        rtt_min = value;
    }
    if(value_path == "success-rate")
    {
        success_rate = value;
    }
    if(value_path == "sweep")
    {
        sweep = value;
    }
    if(value_path == "sweep-max")
    {
        sweep_max = value;
    }
    if(value_path == "sweep-min")
    {
        sweep_min = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

PingRpc::Output::PingResponse::Ipv4::Replies::Replies()
{
    yang_name = "replies"; yang_parent_name = "ipv4";
}

PingRpc::Output::PingResponse::Ipv4::Replies::~Replies()
{
}

bool PingRpc::Output::PingResponse::Ipv4::Replies::has_data() const
{
    for (std::size_t index=0; index<reply.size(); index++)
    {
        if(reply[index]->has_data())
            return true;
    }
    return false;
}

bool PingRpc::Output::PingResponse::Ipv4::Replies::has_operation() const
{
    for (std::size_t index=0; index<reply.size(); index++)
    {
        if(reply[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PingRpc::Output::PingResponse::Ipv4::Replies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replies";

    return path_buffer.str();

}

const EntityPath PingRpc::Output::PingResponse::Ipv4::Replies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Replies' in Cisco_IOS_XR_ping_act cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Output::PingResponse::Ipv4::Replies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reply")
    {
        for(auto const & c : reply)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PingRpc::Output::PingResponse::Ipv4::Replies::Reply>();
        c->parent = this;
        reply.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Output::PingResponse::Ipv4::Replies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reply)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PingRpc::Output::PingResponse::Ipv4::Replies::set_value(const std::string & value_path, std::string value)
{
}

PingRpc::Output::PingResponse::Ipv4::Replies::Reply::Reply()
    :
    reply_index{YType::uint64, "reply-index"},
    result{YType::str, "result"}
    	,
    broadcast_reply_addresses(std::make_shared<PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses>())
{
    broadcast_reply_addresses->parent = this;

    yang_name = "reply"; yang_parent_name = "replies";
}

PingRpc::Output::PingResponse::Ipv4::Replies::Reply::~Reply()
{
}

bool PingRpc::Output::PingResponse::Ipv4::Replies::Reply::has_data() const
{
    return reply_index.is_set
	|| result.is_set
	|| (broadcast_reply_addresses !=  nullptr && broadcast_reply_addresses->has_data());
}

bool PingRpc::Output::PingResponse::Ipv4::Replies::Reply::has_operation() const
{
    return is_set(operation)
	|| is_set(reply_index.operation)
	|| is_set(result.operation)
	|| (broadcast_reply_addresses !=  nullptr && broadcast_reply_addresses->has_operation());
}

std::string PingRpc::Output::PingResponse::Ipv4::Replies::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply" <<"[reply-index='" <<reply_index <<"']";

    return path_buffer.str();

}

const EntityPath PingRpc::Output::PingResponse::Ipv4::Replies::Reply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reply' in Cisco_IOS_XR_ping_act cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reply_index.is_set || is_set(reply_index.operation)) leaf_name_data.push_back(reply_index.get_name_leafdata());
    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Output::PingResponse::Ipv4::Replies::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-reply-addresses")
    {
        if(broadcast_reply_addresses == nullptr)
        {
            broadcast_reply_addresses = std::make_shared<PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses>();
        }
        return broadcast_reply_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Output::PingResponse::Ipv4::Replies::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_reply_addresses != nullptr)
    {
        children["broadcast-reply-addresses"] = broadcast_reply_addresses;
    }

    return children;
}

void PingRpc::Output::PingResponse::Ipv4::Replies::Reply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reply-index")
    {
        reply_index = value;
    }
    if(value_path == "result")
    {
        result = value;
    }
}

PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddresses()
{
    yang_name = "broadcast-reply-addresses"; yang_parent_name = "reply";
}

PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::~BroadcastReplyAddresses()
{
}

bool PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::has_data() const
{
    for (std::size_t index=0; index<broadcast_reply_address.size(); index++)
    {
        if(broadcast_reply_address[index]->has_data())
            return true;
    }
    return false;
}

bool PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::has_operation() const
{
    for (std::size_t index=0; index<broadcast_reply_address.size(); index++)
    {
        if(broadcast_reply_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-reply-addresses";

    return path_buffer.str();

}

const EntityPath PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastReplyAddresses' in Cisco_IOS_XR_ping_act cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-reply-address")
    {
        for(auto const & c : broadcast_reply_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress>();
        c->parent = this;
        broadcast_reply_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : broadcast_reply_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::set_value(const std::string & value_path, std::string value)
{
}

PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::BroadcastReplyAddress()
    :
    reply_address{YType::str, "reply-address"},
    result{YType::str, "result"}
{
    yang_name = "broadcast-reply-address"; yang_parent_name = "broadcast-reply-addresses";
}

PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::~BroadcastReplyAddress()
{
}

bool PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::has_data() const
{
    return reply_address.is_set
	|| result.is_set;
}

bool PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(reply_address.operation)
	|| is_set(result.operation);
}

std::string PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-reply-address" <<"[reply-address='" <<reply_address <<"']";

    return path_buffer.str();

}

const EntityPath PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastReplyAddress' in Cisco_IOS_XR_ping_act cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reply_address.is_set || is_set(reply_address.operation)) leaf_name_data.push_back(reply_address.get_name_leafdata());
    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PingRpc::Output::PingResponse::Ipv4::Replies::Reply::BroadcastReplyAddresses::BroadcastReplyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reply-address")
    {
        reply_address = value;
    }
    if(value_path == "result")
    {
        result = value;
    }
}

PingRpc::Output::PingResponse::Ipv6::Ipv6()
    :
    data_size{YType::uint64, "data-size"},
    destination{YType::str, "destination"},
    hits{YType::uint64, "hits"},
    interval{YType::uint32, "interval"},
    pattern{YType::str, "pattern"},
    repeat_count{YType::uint64, "repeat-count"},
    rotate_pattern{YType::boolean, "rotate-pattern"},
    rtt_avg{YType::uint64, "rtt-avg"},
    rtt_max{YType::uint64, "rtt-max"},
    rtt_min{YType::uint64, "rtt-min"},
    success_rate{YType::uint64, "success-rate"},
    sweep{YType::boolean, "sweep"},
    sweep_max{YType::uint64, "sweep-max"},
    sweep_min{YType::uint32, "sweep-min"},
    timeout{YType::uint64, "timeout"},
    total{YType::uint64, "total"}
    	,
    replies(std::make_shared<PingRpc::Output::PingResponse::Ipv6::Replies>())
{
    replies->parent = this;

    yang_name = "ipv6"; yang_parent_name = "ping-response";
}

PingRpc::Output::PingResponse::Ipv6::~Ipv6()
{
}

bool PingRpc::Output::PingResponse::Ipv6::has_data() const
{
    return data_size.is_set
	|| destination.is_set
	|| hits.is_set
	|| interval.is_set
	|| pattern.is_set
	|| repeat_count.is_set
	|| rotate_pattern.is_set
	|| rtt_avg.is_set
	|| rtt_max.is_set
	|| rtt_min.is_set
	|| success_rate.is_set
	|| sweep.is_set
	|| sweep_max.is_set
	|| sweep_min.is_set
	|| timeout.is_set
	|| total.is_set
	|| (replies !=  nullptr && replies->has_data());
}

bool PingRpc::Output::PingResponse::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(data_size.operation)
	|| is_set(destination.operation)
	|| is_set(hits.operation)
	|| is_set(interval.operation)
	|| is_set(pattern.operation)
	|| is_set(repeat_count.operation)
	|| is_set(rotate_pattern.operation)
	|| is_set(rtt_avg.operation)
	|| is_set(rtt_max.operation)
	|| is_set(rtt_min.operation)
	|| is_set(success_rate.operation)
	|| is_set(sweep.operation)
	|| is_set(sweep_max.operation)
	|| is_set(sweep_min.operation)
	|| is_set(timeout.operation)
	|| is_set(total.operation)
	|| (replies !=  nullptr && replies->has_operation());
}

std::string PingRpc::Output::PingResponse::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath PingRpc::Output::PingResponse::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ping-act:ping/output/ping-response/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_size.is_set || is_set(data_size.operation)) leaf_name_data.push_back(data_size.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (hits.is_set || is_set(hits.operation)) leaf_name_data.push_back(hits.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.operation)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (repeat_count.is_set || is_set(repeat_count.operation)) leaf_name_data.push_back(repeat_count.get_name_leafdata());
    if (rotate_pattern.is_set || is_set(rotate_pattern.operation)) leaf_name_data.push_back(rotate_pattern.get_name_leafdata());
    if (rtt_avg.is_set || is_set(rtt_avg.operation)) leaf_name_data.push_back(rtt_avg.get_name_leafdata());
    if (rtt_max.is_set || is_set(rtt_max.operation)) leaf_name_data.push_back(rtt_max.get_name_leafdata());
    if (rtt_min.is_set || is_set(rtt_min.operation)) leaf_name_data.push_back(rtt_min.get_name_leafdata());
    if (success_rate.is_set || is_set(success_rate.operation)) leaf_name_data.push_back(success_rate.get_name_leafdata());
    if (sweep.is_set || is_set(sweep.operation)) leaf_name_data.push_back(sweep.get_name_leafdata());
    if (sweep_max.is_set || is_set(sweep_max.operation)) leaf_name_data.push_back(sweep_max.get_name_leafdata());
    if (sweep_min.is_set || is_set(sweep_min.operation)) leaf_name_data.push_back(sweep_min.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Output::PingResponse::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replies")
    {
        if(replies == nullptr)
        {
            replies = std::make_shared<PingRpc::Output::PingResponse::Ipv6::Replies>();
        }
        return replies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Output::PingResponse::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(replies != nullptr)
    {
        children["replies"] = replies;
    }

    return children;
}

void PingRpc::Output::PingResponse::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-size")
    {
        data_size = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "hits")
    {
        hits = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "pattern")
    {
        pattern = value;
    }
    if(value_path == "repeat-count")
    {
        repeat_count = value;
    }
    if(value_path == "rotate-pattern")
    {
        rotate_pattern = value;
    }
    if(value_path == "rtt-avg")
    {
        rtt_avg = value;
    }
    if(value_path == "rtt-max")
    {
        rtt_max = value;
    }
    if(value_path == "rtt-min")
    {
        rtt_min = value;
    }
    if(value_path == "success-rate")
    {
        success_rate = value;
    }
    if(value_path == "sweep")
    {
        sweep = value;
    }
    if(value_path == "sweep-max")
    {
        sweep_max = value;
    }
    if(value_path == "sweep-min")
    {
        sweep_min = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

PingRpc::Output::PingResponse::Ipv6::Replies::Replies()
{
    yang_name = "replies"; yang_parent_name = "ipv6";
}

PingRpc::Output::PingResponse::Ipv6::Replies::~Replies()
{
}

bool PingRpc::Output::PingResponse::Ipv6::Replies::has_data() const
{
    for (std::size_t index=0; index<reply.size(); index++)
    {
        if(reply[index]->has_data())
            return true;
    }
    return false;
}

bool PingRpc::Output::PingResponse::Ipv6::Replies::has_operation() const
{
    for (std::size_t index=0; index<reply.size(); index++)
    {
        if(reply[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PingRpc::Output::PingResponse::Ipv6::Replies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replies";

    return path_buffer.str();

}

const EntityPath PingRpc::Output::PingResponse::Ipv6::Replies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ping-act:ping/output/ping-response/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Output::PingResponse::Ipv6::Replies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reply")
    {
        for(auto const & c : reply)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PingRpc::Output::PingResponse::Ipv6::Replies::Reply>();
        c->parent = this;
        reply.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Output::PingResponse::Ipv6::Replies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reply)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PingRpc::Output::PingResponse::Ipv6::Replies::set_value(const std::string & value_path, std::string value)
{
}

PingRpc::Output::PingResponse::Ipv6::Replies::Reply::Reply()
    :
    reply_index{YType::uint64, "reply-index"},
    result{YType::str, "result"}
{
    yang_name = "reply"; yang_parent_name = "replies";
}

PingRpc::Output::PingResponse::Ipv6::Replies::Reply::~Reply()
{
}

bool PingRpc::Output::PingResponse::Ipv6::Replies::Reply::has_data() const
{
    return reply_index.is_set
	|| result.is_set;
}

bool PingRpc::Output::PingResponse::Ipv6::Replies::Reply::has_operation() const
{
    return is_set(operation)
	|| is_set(reply_index.operation)
	|| is_set(result.operation);
}

std::string PingRpc::Output::PingResponse::Ipv6::Replies::Reply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply" <<"[reply-index='" <<reply_index <<"']";

    return path_buffer.str();

}

const EntityPath PingRpc::Output::PingResponse::Ipv6::Replies::Reply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ping-act:ping/output/ping-response/ipv6/replies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reply_index.is_set || is_set(reply_index.operation)) leaf_name_data.push_back(reply_index.get_name_leafdata());
    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PingRpc::Output::PingResponse::Ipv6::Replies::Reply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PingRpc::Output::PingResponse::Ipv6::Replies::Reply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PingRpc::Output::PingResponse::Ipv6::Replies::Reply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reply-index")
    {
        reply_index = value;
    }
    if(value_path == "result")
    {
        result = value;
    }
}


}
}

