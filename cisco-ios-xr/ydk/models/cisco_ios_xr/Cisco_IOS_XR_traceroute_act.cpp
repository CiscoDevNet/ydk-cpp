
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_traceroute_act.hpp"

namespace ydk {
namespace Cisco_IOS_XR_traceroute_act {

TracerouteRpc::TracerouteRpc()
    :
    input(std::make_shared<TracerouteRpc::Input>())
	,output(std::make_shared<TracerouteRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "traceroute"; yang_parent_name = "Cisco-IOS-XR-traceroute-act";
}

TracerouteRpc::~TracerouteRpc()
{
}

bool TracerouteRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool TracerouteRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string TracerouteRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> TracerouteRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<TracerouteRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<TracerouteRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::get_children() const
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

void TracerouteRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> TracerouteRpc::clone_ptr() const
{
    return std::make_shared<TracerouteRpc>();
}

std::string TracerouteRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string TracerouteRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function TracerouteRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

TracerouteRpc::Input::Input()
    :
    destination(std::make_shared<TracerouteRpc::Input::Destination>())
	,ipv4(std::make_shared<TracerouteRpc::Input::Ipv4>())
	,ipv6(std::make_shared<TracerouteRpc::Input::Ipv6>())
{
    destination->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "input"; yang_parent_name = "traceroute";
}

TracerouteRpc::Input::~Input()
{
}

bool TracerouteRpc::Input::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool TracerouteRpc::Input::has_operation() const
{
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string TracerouteRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<TracerouteRpc::Input::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<TracerouteRpc::Input::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<TracerouteRpc::Input::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void TracerouteRpc::Input::set_value(const std::string & value_path, std::string value)
{
}

TracerouteRpc::Input::Destination::Destination()
    :
    destination{YType::str, "destination"},
    max_ttl{YType::uint16, "max-ttl"},
    min_ttl{YType::uint16, "min-ttl"},
    numeric{YType::boolean, "numeric"},
    outgoing_interface{YType::str, "outgoing-interface"},
    port{YType::uint32, "port"},
    priority{YType::uint16, "priority"},
    probe{YType::uint16, "probe"},
    source{YType::str, "source"},
    timeout{YType::uint32, "timeout"},
    verbose{YType::boolean, "verbose"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "destination"; yang_parent_name = "input";
}

TracerouteRpc::Input::Destination::~Destination()
{
}

bool TracerouteRpc::Input::Destination::has_data() const
{
    return destination.is_set
	|| max_ttl.is_set
	|| min_ttl.is_set
	|| numeric.is_set
	|| outgoing_interface.is_set
	|| port.is_set
	|| priority.is_set
	|| probe.is_set
	|| source.is_set
	|| timeout.is_set
	|| verbose.is_set
	|| vrf_name.is_set;
}

bool TracerouteRpc::Input::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(max_ttl.operation)
	|| is_set(min_ttl.operation)
	|| is_set(numeric.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(port.operation)
	|| is_set(priority.operation)
	|| is_set(probe.operation)
	|| is_set(source.operation)
	|| is_set(timeout.operation)
	|| is_set(verbose.operation)
	|| is_set(vrf_name.operation);
}

std::string TracerouteRpc::Input::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Input::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (max_ttl.is_set || is_set(max_ttl.operation)) leaf_name_data.push_back(max_ttl.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.operation)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (numeric.is_set || is_set(numeric.operation)) leaf_name_data.push_back(numeric.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (probe.is_set || is_set(probe.operation)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.operation)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Input::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Input::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TracerouteRpc::Input::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "max-ttl")
    {
        max_ttl = value;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
    }
    if(value_path == "numeric")
    {
        numeric = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "probe")
    {
        probe = value;
    }
    if(value_path == "source")
    {
        source = value;
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

TracerouteRpc::Input::Ipv4::Ipv4()
    :
    destination{YType::str, "destination"},
    max_ttl{YType::uint16, "max-ttl"},
    min_ttl{YType::uint16, "min-ttl"},
    numeric{YType::boolean, "numeric"},
    port{YType::uint32, "port"},
    probe{YType::uint16, "probe"},
    source{YType::str, "source"},
    timeout{YType::uint32, "timeout"},
    verbose{YType::boolean, "verbose"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4"; yang_parent_name = "input";
}

TracerouteRpc::Input::Ipv4::~Ipv4()
{
}

bool TracerouteRpc::Input::Ipv4::has_data() const
{
    return destination.is_set
	|| max_ttl.is_set
	|| min_ttl.is_set
	|| numeric.is_set
	|| port.is_set
	|| probe.is_set
	|| source.is_set
	|| timeout.is_set
	|| verbose.is_set
	|| vrf_name.is_set;
}

bool TracerouteRpc::Input::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(max_ttl.operation)
	|| is_set(min_ttl.operation)
	|| is_set(numeric.operation)
	|| is_set(port.operation)
	|| is_set(probe.operation)
	|| is_set(source.operation)
	|| is_set(timeout.operation)
	|| is_set(verbose.operation)
	|| is_set(vrf_name.operation);
}

std::string TracerouteRpc::Input::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Input::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (max_ttl.is_set || is_set(max_ttl.operation)) leaf_name_data.push_back(max_ttl.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.operation)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (numeric.is_set || is_set(numeric.operation)) leaf_name_data.push_back(numeric.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (probe.is_set || is_set(probe.operation)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.operation)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Input::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Input::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TracerouteRpc::Input::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "max-ttl")
    {
        max_ttl = value;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
    }
    if(value_path == "numeric")
    {
        numeric = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "probe")
    {
        probe = value;
    }
    if(value_path == "source")
    {
        source = value;
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

TracerouteRpc::Input::Ipv6::Ipv6()
    :
    destination{YType::str, "destination"},
    max_ttl{YType::uint16, "max-ttl"},
    min_ttl{YType::uint16, "min-ttl"},
    numeric{YType::boolean, "numeric"},
    outgoing_interface{YType::str, "outgoing-interface"},
    port{YType::uint32, "port"},
    priority{YType::uint16, "priority"},
    probe{YType::uint16, "probe"},
    source{YType::str, "source"},
    timeout{YType::uint32, "timeout"},
    verbose{YType::boolean, "verbose"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv6"; yang_parent_name = "input";
}

TracerouteRpc::Input::Ipv6::~Ipv6()
{
}

bool TracerouteRpc::Input::Ipv6::has_data() const
{
    return destination.is_set
	|| max_ttl.is_set
	|| min_ttl.is_set
	|| numeric.is_set
	|| outgoing_interface.is_set
	|| port.is_set
	|| priority.is_set
	|| probe.is_set
	|| source.is_set
	|| timeout.is_set
	|| verbose.is_set
	|| vrf_name.is_set;
}

bool TracerouteRpc::Input::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(max_ttl.operation)
	|| is_set(min_ttl.operation)
	|| is_set(numeric.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(port.operation)
	|| is_set(priority.operation)
	|| is_set(probe.operation)
	|| is_set(source.operation)
	|| is_set(timeout.operation)
	|| is_set(verbose.operation)
	|| is_set(vrf_name.operation);
}

std::string TracerouteRpc::Input::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Input::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (max_ttl.is_set || is_set(max_ttl.operation)) leaf_name_data.push_back(max_ttl.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.operation)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (numeric.is_set || is_set(numeric.operation)) leaf_name_data.push_back(numeric.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (probe.is_set || is_set(probe.operation)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (verbose.is_set || is_set(verbose.operation)) leaf_name_data.push_back(verbose.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Input::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Input::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TracerouteRpc::Input::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "max-ttl")
    {
        max_ttl = value;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
    }
    if(value_path == "numeric")
    {
        numeric = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "probe")
    {
        probe = value;
    }
    if(value_path == "source")
    {
        source = value;
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

TracerouteRpc::Output::Output()
    :
    traceroute_response(std::make_shared<TracerouteRpc::Output::TracerouteResponse>())
{
    traceroute_response->parent = this;

    yang_name = "output"; yang_parent_name = "traceroute";
}

TracerouteRpc::Output::~Output()
{
}

bool TracerouteRpc::Output::has_data() const
{
    return (traceroute_response !=  nullptr && traceroute_response->has_data());
}

bool TracerouteRpc::Output::has_operation() const
{
    return is_set(operation)
	|| (traceroute_response !=  nullptr && traceroute_response->has_operation());
}

std::string TracerouteRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traceroute-response")
    {
        if(traceroute_response == nullptr)
        {
            traceroute_response = std::make_shared<TracerouteRpc::Output::TracerouteResponse>();
        }
        return traceroute_response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(traceroute_response != nullptr)
    {
        children["traceroute-response"] = traceroute_response;
    }

    return children;
}

void TracerouteRpc::Output::set_value(const std::string & value_path, std::string value)
{
}

TracerouteRpc::Output::TracerouteResponse::TracerouteResponse()
    :
    ipv4(std::make_shared<TracerouteRpc::Output::TracerouteResponse::Ipv4>())
	,ipv6(std::make_shared<TracerouteRpc::Output::TracerouteResponse::Ipv6>())
{
    ipv4->parent = this;

    ipv6->parent = this;

    yang_name = "traceroute-response"; yang_parent_name = "output";
}

TracerouteRpc::Output::TracerouteResponse::~TracerouteResponse()
{
}

bool TracerouteRpc::Output::TracerouteResponse::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool TracerouteRpc::Output::TracerouteResponse::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string TracerouteRpc::Output::TracerouteResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute-response";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Output::TracerouteResponse::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Output::TracerouteResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<TracerouteRpc::Output::TracerouteResponse::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<TracerouteRpc::Output::TracerouteResponse::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Output::TracerouteResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void TracerouteRpc::Output::TracerouteResponse::set_value(const std::string & value_path, std::string value)
{
}

TracerouteRpc::Output::TracerouteResponse::Ipv4::Ipv4()
    :
    destination{YType::str, "destination"},
    verbose_output{YType::str, "verbose-output"}
{
    yang_name = "ipv4"; yang_parent_name = "traceroute-response";
}

TracerouteRpc::Output::TracerouteResponse::Ipv4::~Ipv4()
{
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv4::has_data() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_data())
            return true;
    }
    return destination.is_set
	|| verbose_output.is_set;
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(verbose_output.operation);
}

std::string TracerouteRpc::Output::TracerouteResponse::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Output::TracerouteResponse::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/traceroute-response/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (verbose_output.is_set || is_set(verbose_output.operation)) leaf_name_data.push_back(verbose_output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Output::TracerouteResponse::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hops")
    {
        for(auto const & c : hops)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops>();
        c->parent = this;
        hops.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Output::TracerouteResponse::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hops)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TracerouteRpc::Output::TracerouteResponse::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "verbose-output")
    {
        verbose_output = value;
    }
}

TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Hops()
    :
    hop_index{YType::uint32, "hop-index"},
    hop_address{YType::str, "hop-address"},
    hop_hostname{YType::str, "hop-hostname"}
{
    yang_name = "hops"; yang_parent_name = "ipv4";
}

TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::~Hops()
{
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::has_data() const
{
    for (std::size_t index=0; index<probes.size(); index++)
    {
        if(probes[index]->has_data())
            return true;
    }
    return hop_index.is_set
	|| hop_address.is_set
	|| hop_hostname.is_set;
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::has_operation() const
{
    for (std::size_t index=0; index<probes.size(); index++)
    {
        if(probes[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(hop_index.operation)
	|| is_set(hop_address.operation)
	|| is_set(hop_hostname.operation);
}

std::string TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops" <<"[hop-index='" <<hop_index <<"']";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/traceroute-response/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_index.is_set || is_set(hop_index.operation)) leaf_name_data.push_back(hop_index.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.operation)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_hostname.is_set || is_set(hop_hostname.operation)) leaf_name_data.push_back(hop_hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probes")
    {
        for(auto const & c : probes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes>();
        c->parent = this;
        probes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : probes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hop-index")
    {
        hop_index = value;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname = value;
    }
}

TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes::Probes()
    :
    probe_index{YType::uint32, "probe-index"},
    delta_time{YType::uint32, "delta-time"},
    hop_address{YType::str, "hop-address"},
    hop_hostname{YType::str, "hop-hostname"},
    result{YType::str, "result"}
{
    yang_name = "probes"; yang_parent_name = "hops";
}

TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes::~Probes()
{
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes::has_data() const
{
    return probe_index.is_set
	|| delta_time.is_set
	|| hop_address.is_set
	|| hop_hostname.is_set
	|| result.is_set;
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes::has_operation() const
{
    return is_set(operation)
	|| is_set(probe_index.operation)
	|| is_set(delta_time.operation)
	|| is_set(hop_address.operation)
	|| is_set(hop_hostname.operation)
	|| is_set(result.operation);
}

std::string TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probes" <<"[probe-index='" <<probe_index <<"']";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Probes' in Cisco_IOS_XR_traceroute_act cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_index.is_set || is_set(probe_index.operation)) leaf_name_data.push_back(probe_index.get_name_leafdata());
    if (delta_time.is_set || is_set(delta_time.operation)) leaf_name_data.push_back(delta_time.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.operation)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_hostname.is_set || is_set(hop_hostname.operation)) leaf_name_data.push_back(hop_hostname.get_name_leafdata());
    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TracerouteRpc::Output::TracerouteResponse::Ipv4::Hops::Probes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "probe-index")
    {
        probe_index = value;
    }
    if(value_path == "delta-time")
    {
        delta_time = value;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname = value;
    }
    if(value_path == "result")
    {
        result = value;
    }
}

TracerouteRpc::Output::TracerouteResponse::Ipv6::Ipv6()
    :
    destination{YType::str, "destination"},
    verbose_output{YType::str, "verbose-output"}
{
    yang_name = "ipv6"; yang_parent_name = "traceroute-response";
}

TracerouteRpc::Output::TracerouteResponse::Ipv6::~Ipv6()
{
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv6::has_data() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_data())
            return true;
    }
    return destination.is_set
	|| verbose_output.is_set;
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(verbose_output.operation);
}

std::string TracerouteRpc::Output::TracerouteResponse::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Output::TracerouteResponse::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/traceroute-response/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (verbose_output.is_set || is_set(verbose_output.operation)) leaf_name_data.push_back(verbose_output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Output::TracerouteResponse::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hops")
    {
        for(auto const & c : hops)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops>();
        c->parent = this;
        hops.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Output::TracerouteResponse::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hops)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TracerouteRpc::Output::TracerouteResponse::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "verbose-output")
    {
        verbose_output = value;
    }
}

TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Hops()
    :
    hop_index{YType::uint32, "hop-index"},
    hop_address{YType::str, "hop-address"},
    hop_hostname{YType::str, "hop-hostname"}
{
    yang_name = "hops"; yang_parent_name = "ipv6";
}

TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::~Hops()
{
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::has_data() const
{
    for (std::size_t index=0; index<probes.size(); index++)
    {
        if(probes[index]->has_data())
            return true;
    }
    return hop_index.is_set
	|| hop_address.is_set
	|| hop_hostname.is_set;
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::has_operation() const
{
    for (std::size_t index=0; index<probes.size(); index++)
    {
        if(probes[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(hop_index.operation)
	|| is_set(hop_address.operation)
	|| is_set(hop_hostname.operation);
}

std::string TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops" <<"[hop-index='" <<hop_index <<"']";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-traceroute-act:traceroute/output/traceroute-response/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_index.is_set || is_set(hop_index.operation)) leaf_name_data.push_back(hop_index.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.operation)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_hostname.is_set || is_set(hop_hostname.operation)) leaf_name_data.push_back(hop_hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probes")
    {
        for(auto const & c : probes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes>();
        c->parent = this;
        probes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : probes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hop-index")
    {
        hop_index = value;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname = value;
    }
}

TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes::Probes()
    :
    probe_index{YType::uint32, "probe-index"},
    delta_time{YType::uint32, "delta-time"},
    hop_address{YType::str, "hop-address"},
    hop_hostname{YType::str, "hop-hostname"},
    result{YType::str, "result"}
{
    yang_name = "probes"; yang_parent_name = "hops";
}

TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes::~Probes()
{
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes::has_data() const
{
    return probe_index.is_set
	|| delta_time.is_set
	|| hop_address.is_set
	|| hop_hostname.is_set
	|| result.is_set;
}

bool TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes::has_operation() const
{
    return is_set(operation)
	|| is_set(probe_index.operation)
	|| is_set(delta_time.operation)
	|| is_set(hop_address.operation)
	|| is_set(hop_hostname.operation)
	|| is_set(result.operation);
}

std::string TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probes" <<"[probe-index='" <<probe_index <<"']";

    return path_buffer.str();

}

const EntityPath TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Probes' in Cisco_IOS_XR_traceroute_act cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_index.is_set || is_set(probe_index.operation)) leaf_name_data.push_back(probe_index.get_name_leafdata());
    if (delta_time.is_set || is_set(delta_time.operation)) leaf_name_data.push_back(delta_time.get_name_leafdata());
    if (hop_address.is_set || is_set(hop_address.operation)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_hostname.is_set || is_set(hop_hostname.operation)) leaf_name_data.push_back(hop_hostname.get_name_leafdata());
    if (result.is_set || is_set(result.operation)) leaf_name_data.push_back(result.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TracerouteRpc::Output::TracerouteResponse::Ipv6::Hops::Probes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "probe-index")
    {
        probe_index = value;
    }
    if(value_path == "delta-time")
    {
        delta_time = value;
    }
    if(value_path == "hop-address")
    {
        hop_address = value;
    }
    if(value_path == "hop-hostname")
    {
        hop_hostname = value;
    }
    if(value_path == "result")
    {
        result = value;
    }
}


}
}

