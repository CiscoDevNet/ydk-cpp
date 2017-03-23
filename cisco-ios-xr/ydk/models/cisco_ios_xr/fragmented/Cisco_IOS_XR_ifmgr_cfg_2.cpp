
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePorts()
{
    yang_name = "remote-ports"; yang_parent_name = "nv-satellite-fabric-link";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_data() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePorts' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-port")
    {
        for(auto const & c : remote_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort>();
        c->parent = this;
        remote_port.push_back(std::move(c));
        children[segment_path] = remote_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_children()
{
    for (auto const & c : remote_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::RemotePort()
    :
    port_type{YType::str, "port-type"},
    slot{YType::uint32, "slot"},
    sub_slot{YType::uint32, "sub-slot"},
    port_range{YType::str, "port-range"}
{
    yang_name = "remote-port"; yang_parent_name = "remote-ports";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::~RemotePort()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_data() const
{
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::has_operation() const
{
    return is_set(operation)
	|| is_set(port_type.operation)
	|| is_set(slot.operation)
	|| is_set(sub_slot.operation)
	|| is_set(port_range.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port" <<"[port-type='" <<port_type <<"']" <<"[slot='" <<slot <<"']" <<"[sub-slot='" <<sub_slot <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePort' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.operation)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.operation)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.operation)) leaf_name_data.push_back(port_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-type")
    {
        port_type = value;
    }
    if(value_path == "slot")
    {
        slot = value;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
    }
    if(value_path == "port-range")
    {
        port_range = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output>())
{
    input->parent = this;
    children["input"] = input;

    output->parent = this;
    children["output"] = output;

    yang_name = "qos"; yang_parent_name = "nv-satellite-fabric-link";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
        else
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input>();
            input->parent = this;
            children["input"] = input;
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
        else
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output>();
            output->parent = this;
            children["output"] = output;
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::Output()
{
    yang_name = "output"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::Input()
{
    yang_name = "input"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::EthernetFeatures()
    :
    cfm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm>())
{
    cfm->parent = this;
    children["cfm"] = cfm;

    yang_name = "ethernet-features"; yang_parent_name = "nv-satellite-fabric-link";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::~EthernetFeatures()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_data() const
{
    return (cfm !=  nullptr && cfm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::has_operation() const
{
    return is_set(operation)
	|| (cfm !=  nullptr && cfm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-cfm-sat-cfg:ethernet-features";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetFeatures' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cfm")
    {
        if(cfm != nullptr)
        {
            children["cfm"] = cfm;
        }
        else
        {
            cfm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm>();
            cfm->parent = this;
            children["cfm"] = cfm;
        }
        return children.at("cfm");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_children()
{
    if(children.find("cfm") == children.end())
    {
        if(cfm != nullptr)
        {
            children["cfm"] = cfm;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::Cfm()
    :
    continuity_check_interval{YType::enumeration, "continuity-check-interval"},
    enable{YType::empty, "enable"},
    level{YType::uint32, "level"}
{
    yang_name = "cfm"; yang_parent_name = "ethernet-features";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::~Cfm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_data() const
{
    return continuity_check_interval.is_set
	|| enable.is_set
	|| level.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::has_operation() const
{
    return is_set(operation)
	|| is_set(continuity_check_interval.operation)
	|| is_set(enable.operation)
	|| is_set(level.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cfm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (continuity_check_interval.is_set || is_set(continuity_check_interval.operation)) leaf_name_data.push_back(continuity_check_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "continuity-check-interval")
    {
        continuity_check_interval = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::NvSatelliteFabricNetwork()
    :
    enable{YType::empty, "enable"}
    	,
    redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy>())
	,satellites(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites>())
{
    redundancy->parent = this;
    children["redundancy"] = redundancy;

    satellites->parent = this;
    children["satellites"] = satellites;

    yang_name = "nv-satellite-fabric-network"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::~NvSatelliteFabricNetwork()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_data() const
{
    return enable.is_set
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (satellites !=  nullptr && satellites->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (satellites !=  nullptr && satellites->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-fabric-network";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvSatelliteFabricNetwork' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy;
        }
        else
        {
            redundancy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy>();
            redundancy->parent = this;
            children["redundancy"] = redundancy;
        }
        return children.at("redundancy");
    }

    if(child_yang_name == "satellites")
    {
        if(satellites != nullptr)
        {
            children["satellites"] = satellites;
        }
        else
        {
            satellites = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites>();
            satellites->parent = this;
            children["satellites"] = satellites;
        }
        return children.at("satellites");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_children()
{
    if(children.find("redundancy") == children.end())
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy;
        }
    }

    if(children.find("satellites") == children.end())
    {
        if(satellites != nullptr)
        {
            children["satellites"] = satellites;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellites()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos>())
{
    qos->parent = this;
    children["qos"] = qos;

    yang_name = "satellites"; yang_parent_name = "nv-satellite-fabric-network";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::~Satellites()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_data() const
{
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_data())
            return true;
    }
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_operation() const
{
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellites";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Satellites' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos")
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
        else
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos>();
            qos->parent = this;
            children["qos"] = qos;
        }
        return children.at("qos");
    }

    if(child_yang_name == "satellite")
    {
        for(auto const & c : satellite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite>();
        c->parent = this;
        satellite.push_back(std::move(c));
        children[segment_path] = satellite.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_children()
{
    if(children.find("qos") == children.end())
    {
        if(qos != nullptr)
        {
            children["qos"] = qos;
        }
    }

    for (auto const & c : satellite)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::Satellite()
    :
    satellite_id{YType::uint32, "satellite-id"},
    enable{YType::empty, "enable"}
    	,
    remote_ports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts>())
{
    remote_ports->parent = this;
    children["remote-ports"] = remote_ports;

    yang_name = "satellite"; yang_parent_name = "satellites";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::~Satellite()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_data() const
{
    return satellite_id.is_set
	|| enable.is_set
	|| (remote_ports !=  nullptr && remote_ports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::has_operation() const
{
    return is_set(operation)
	|| is_set(satellite_id.operation)
	|| is_set(enable.operation)
	|| (remote_ports !=  nullptr && remote_ports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satellite" <<"[satellite-id='" <<satellite_id <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Satellite' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-ports")
    {
        if(remote_ports != nullptr)
        {
            children["remote-ports"] = remote_ports;
        }
        else
        {
            remote_ports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts>();
            remote_ports->parent = this;
            children["remote-ports"] = remote_ports;
        }
        return children.at("remote-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_children()
{
    if(children.find("remote-ports") == children.end())
    {
        if(remote_ports != nullptr)
        {
            children["remote-ports"] = remote_ports;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePorts()
{
    yang_name = "remote-ports"; yang_parent_name = "satellite";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_data() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePorts' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-port")
    {
        for(auto const & c : remote_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort>();
        c->parent = this;
        remote_port.push_back(std::move(c));
        children[segment_path] = remote_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_children()
{
    for (auto const & c : remote_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::RemotePort()
    :
    port_type{YType::str, "port-type"},
    slot{YType::uint32, "slot"},
    sub_slot{YType::uint32, "sub-slot"},
    port_range{YType::str, "port-range"}
{
    yang_name = "remote-port"; yang_parent_name = "remote-ports";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::~RemotePort()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_data() const
{
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::has_operation() const
{
    return is_set(operation)
	|| is_set(port_type.operation)
	|| is_set(slot.operation)
	|| is_set(sub_slot.operation)
	|| is_set(port_range.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port" <<"[port-type='" <<port_type <<"']" <<"[slot='" <<slot <<"']" <<"[sub-slot='" <<sub_slot <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePort' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.operation)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.operation)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.operation)) leaf_name_data.push_back(port_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-type")
    {
        port_type = value;
    }
    if(value_path == "slot")
    {
        slot = value;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
    }
    if(value_path == "port-range")
    {
        port_range = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output>())
{
    input->parent = this;
    children["input"] = input;

    output->parent = this;
    children["output"] = output;

    yang_name = "qos"; yang_parent_name = "satellites";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
        else
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input>();
            input->parent = this;
            children["input"] = input;
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
        else
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output>();
            output->parent = this;
            children["output"] = output;
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::Output()
{
    yang_name = "output"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::Input()
{
    yang_name = "input"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::Redundancy()
    :
    iccp_group{YType::uint32, "iccp-group"},
    minimum_preferred_links{YType::uint32, "minimum-preferred-links"}
{
    yang_name = "redundancy"; yang_parent_name = "nv-satellite-fabric-network";
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::~Redundancy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_data() const
{
    return iccp_group.is_set
	|| minimum_preferred_links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| is_set(minimum_preferred_links.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (minimum_preferred_links.is_set || is_set(minimum_preferred_links.operation)) leaf_name_data.push_back(minimum_preferred_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
    if(value_path == "minimum-preferred-links")
    {
        minimum_preferred_links = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSessions()
{
    yang_name = "span-monitor-sessions"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanMonitorSessions' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "span-monitor-session")
    {
        for(auto const & c : span_monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(std::move(c));
        children[segment_path] = span_monitor_session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_children()
{
    for (auto const & c : span_monitor_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    acl{YType::empty, "acl"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
{
    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions";
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| acl.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_class.operation)
	|| is_set(acl.operation)
	|| is_set(mirror_first.operation)
	|| is_set(mirror_interval.operation)
	|| (attachment !=  nullptr && attachment->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanMonitorSession' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.operation)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.operation)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.operation)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attachment")
    {
        if(attachment != nullptr)
        {
            children["attachment"] = attachment;
        }
        else
        {
            attachment = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment>();
            attachment->parent = this;
            children["attachment"] = attachment;
        }
        return children.at("attachment");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_children()
{
    if(children.find("attachment") == children.end())
    {
        if(attachment != nullptr)
        {
            children["attachment"] = attachment;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-class")
    {
        session_class = value;
    }
    if(value_path == "acl")
    {
        acl = value;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"},
    session_name{YType::str, "session-name"}
{
    yang_name = "attachment"; yang_parent_name = "span-monitor-session";
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return direction.is_set
	|| port_level_enable.is_set
	|| session_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(port_level_enable.operation)
	|| is_set(session_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attachment' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.operation)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp::CiscoIosXrPppMaCfg_Ppp()
{
    yang_name = "Cisco-IOS-XR-ppp-ma-cfg_ppp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp::~CiscoIosXrPppMaCfg_Ppp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp::has_data() const
{
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp::has_operation() const
{
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-cfg:Cisco-IOS-XR-ppp-ma-cfg_ppp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXrPppMaCfg_Ppp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaCfg_Ppp::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Ipv4Network()
    :
    forwarding_enable{YType::empty, "forwarding-enable"},
    icmp_mask_reply{YType::empty, "icmp-mask-reply"},
    mtu{YType::uint32, "mtu"},
    point_to_point{YType::empty, "point-to-point"},
    tcp_mss_adjust_enable{YType::empty, "tcp-mss-adjust-enable"},
    ttl_propagate_disable{YType::empty, "ttl-propagate-disable"}
    	,
    addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>())
	,bgp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>())
	,bgp_pa(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>())
	,helper_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>())
	,verify(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>())
{
    addresses->parent = this;
    children["addresses"] = addresses;

    bgp->parent = this;
    children["bgp"] = bgp;

    bgp_pa->parent = this;
    children["bgp-pa"] = bgp_pa;

    helper_addresses->parent = this;
    children["helper-addresses"] = helper_addresses;

    verify->parent = this;
    children["verify"] = verify;

    yang_name = "ipv4-network"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::~Ipv4Network()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_data() const
{
    return forwarding_enable.is_set
	|| icmp_mask_reply.is_set
	|| mtu.is_set
	|| point_to_point.is_set
	|| tcp_mss_adjust_enable.is_set
	|| ttl_propagate_disable.is_set
	|| (addresses !=  nullptr && addresses->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (helper_addresses !=  nullptr && helper_addresses->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding_enable.operation)
	|| is_set(icmp_mask_reply.operation)
	|| is_set(mtu.operation)
	|| is_set(point_to_point.operation)
	|| is_set(tcp_mss_adjust_enable.operation)
	|| is_set(ttl_propagate_disable.operation)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (bgp_pa !=  nullptr && bgp_pa->has_operation())
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Network' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_enable.is_set || is_set(forwarding_enable.operation)) leaf_name_data.push_back(forwarding_enable.get_name_leafdata());
    if (icmp_mask_reply.is_set || is_set(icmp_mask_reply.operation)) leaf_name_data.push_back(icmp_mask_reply.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.operation)) leaf_name_data.push_back(point_to_point.get_name_leafdata());
    if (tcp_mss_adjust_enable.is_set || is_set(tcp_mss_adjust_enable.operation)) leaf_name_data.push_back(tcp_mss_adjust_enable.get_name_leafdata());
    if (ttl_propagate_disable.is_set || is_set(ttl_propagate_disable.operation)) leaf_name_data.push_back(ttl_propagate_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addresses")
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses;
        }
        else
        {
            addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>();
            addresses->parent = this;
            children["addresses"] = addresses;
        }
        return children.at("addresses");
    }

    if(child_yang_name == "bgp")
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
        else
        {
            bgp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>();
            bgp->parent = this;
            children["bgp"] = bgp;
        }
        return children.at("bgp");
    }

    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa != nullptr)
        {
            children["bgp-pa"] = bgp_pa;
        }
        else
        {
            bgp_pa = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>();
            bgp_pa->parent = this;
            children["bgp-pa"] = bgp_pa;
        }
        return children.at("bgp-pa");
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses;
        }
        else
        {
            helper_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>();
            helper_addresses->parent = this;
            children["helper-addresses"] = helper_addresses;
        }
        return children.at("helper-addresses");
    }

    if(child_yang_name == "verify")
    {
        if(verify != nullptr)
        {
            children["verify"] = verify;
        }
        else
        {
            verify = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>();
            verify->parent = this;
            children["verify"] = verify;
        }
        return children.at("verify");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_children()
{
    if(children.find("addresses") == children.end())
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses;
        }
    }

    if(children.find("bgp") == children.end())
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
    }

    if(children.find("bgp-pa") == children.end())
    {
        if(bgp_pa != nullptr)
        {
            children["bgp-pa"] = bgp_pa;
        }
    }

    if(children.find("helper-addresses") == children.end())
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses;
        }
    }

    if(children.find("verify") == children.end())
    {
        if(verify != nullptr)
        {
            children["verify"] = verify;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-enable")
    {
        forwarding_enable = value;
    }
    if(value_path == "icmp-mask-reply")
    {
        icmp_mask_reply = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable = value;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::BgpPa()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output>())
{
    input->parent = this;
    children["input"] = input;

    output->parent = this;
    children["output"] = output;

    yang_name = "bgp-pa"; yang_parent_name = "ipv4-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::~BgpPa()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpPa' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
        else
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input>();
            input->parent = this;
            children["input"] = input;
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
        else
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output>();
            output->parent = this;
            children["output"] = output;
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::Input()
    :
    destination_accounting{YType::boolean, "destination-accounting"},
    source_accounting{YType::boolean, "source-accounting"}
{
    yang_name = "input"; yang_parent_name = "bgp-pa";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_data() const
{
    return destination_accounting.is_set
	|| source_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_accounting.operation)
	|| is_set(source_accounting.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_accounting.is_set || is_set(destination_accounting.operation)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());
    if (source_accounting.is_set || is_set(source_accounting.operation)) leaf_name_data.push_back(source_accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
    }
    if(value_path == "source-accounting")
    {
        source_accounting = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::Output()
    :
    destination_accounting{YType::boolean, "destination-accounting"},
    source_accounting{YType::boolean, "source-accounting"}
{
    yang_name = "output"; yang_parent_name = "bgp-pa";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_data() const
{
    return destination_accounting.is_set
	|| source_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_accounting.operation)
	|| is_set(source_accounting.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_accounting.is_set || is_set(destination_accounting.operation)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());
    if (source_accounting.is_set || is_set(source_accounting.operation)) leaf_name_data.push_back(source_accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
    }
    if(value_path == "source-accounting")
    {
        source_accounting = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::Verify()
    :
    default_ping{YType::enumeration, "default-ping"},
    reachable{YType::enumeration, "reachable"},
    self_ping{YType::enumeration, "self-ping"}
{
    yang_name = "verify"; yang_parent_name = "ipv4-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::~Verify()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_data() const
{
    return default_ping.is_set
	|| reachable.is_set
	|| self_ping.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_operation() const
{
    return is_set(operation)
	|| is_set(default_ping.operation)
	|| is_set(reachable.operation)
	|| is_set(self_ping.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Verify' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_ping.is_set || is_set(default_ping.operation)) leaf_name_data.push_back(default_ping.get_name_leafdata());
    if (reachable.is_set || is_set(reachable.operation)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (self_ping.is_set || is_set(self_ping.operation)) leaf_name_data.push_back(self_ping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-ping")
    {
        default_ping = value;
    }
    if(value_path == "reachable")
    {
        reachable = value;
    }
    if(value_path == "self-ping")
    {
        self_ping = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Bgp()
    :
    flow_tag(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>())
	,qppb(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>())
{
    flow_tag->parent = this;
    children["flow-tag"] = flow_tag;

    qppb->parent = this;
    children["qppb"] = qppb;

    yang_name = "bgp"; yang_parent_name = "ipv4-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::~Bgp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_data() const
{
    return (flow_tag !=  nullptr && flow_tag->has_data())
	|| (qppb !=  nullptr && qppb->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_operation() const
{
    return is_set(operation)
	|| (flow_tag !=  nullptr && flow_tag->has_operation())
	|| (qppb !=  nullptr && qppb->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-tag")
    {
        if(flow_tag != nullptr)
        {
            children["flow-tag"] = flow_tag;
        }
        else
        {
            flow_tag = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>();
            flow_tag->parent = this;
            children["flow-tag"] = flow_tag;
        }
        return children.at("flow-tag");
    }

    if(child_yang_name == "qppb")
    {
        if(qppb != nullptr)
        {
            children["qppb"] = qppb;
        }
        else
        {
            qppb = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>();
            qppb->parent = this;
            children["qppb"] = qppb;
        }
        return children.at("qppb");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_children()
{
    if(children.find("flow-tag") == children.end())
    {
        if(flow_tag != nullptr)
        {
            children["flow-tag"] = flow_tag;
        }
    }

    if(children.find("qppb") == children.end())
    {
        if(qppb != nullptr)
        {
            children["qppb"] = qppb;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Qppb()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input>())
{
    input->parent = this;
    children["input"] = input;

    yang_name = "qppb"; yang_parent_name = "bgp";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::~Qppb()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qppb";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qppb' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
        else
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input>();
            input->parent = this;
            children["input"] = input;
        }
        return children.at("input");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::Input()
    :
    destination{YType::enumeration, "destination"},
    source{YType::enumeration, "source"}
{
    yang_name = "input"; yang_parent_name = "qppb";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(source.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTag()
    :
    flow_tag_input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput>())
{
    flow_tag_input->parent = this;
    children["flow-tag-input"] = flow_tag_input;

    yang_name = "flow-tag"; yang_parent_name = "bgp";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::~FlowTag()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_data() const
{
    return (flow_tag_input !=  nullptr && flow_tag_input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_operation() const
{
    return is_set(operation)
	|| (flow_tag_input !=  nullptr && flow_tag_input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowTag' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-tag-input")
    {
        if(flow_tag_input != nullptr)
        {
            children["flow-tag-input"] = flow_tag_input;
        }
        else
        {
            flow_tag_input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput>();
            flow_tag_input->parent = this;
            children["flow-tag-input"] = flow_tag_input;
        }
        return children.at("flow-tag-input");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_children()
{
    if(children.find("flow-tag-input") == children.end())
    {
        if(flow_tag_input != nullptr)
        {
            children["flow-tag-input"] = flow_tag_input;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::FlowTagInput()
    :
    destination{YType::boolean, "destination"},
    source{YType::boolean, "source"}
{
    yang_name = "flow-tag-input"; yang_parent_name = "flow-tag";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::~FlowTagInput()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(source.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag-input";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowTagInput' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Addresses()
    :
    dhcp{YType::empty, "dhcp"},
    unnumbered{YType::str, "unnumbered"}
    	,
    primary(nullptr) // presence node
	,secondaries(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>())
{
    secondaries->parent = this;
    children["secondaries"] = secondaries;

    yang_name = "addresses"; yang_parent_name = "ipv4-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::~Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_data() const
{
    return dhcp.is_set
	|| unnumbered.is_set
	|| (primary !=  nullptr && primary->has_data())
	|| (secondaries !=  nullptr && secondaries->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp.operation)
	|| is_set(unnumbered.operation)
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondaries !=  nullptr && secondaries->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "primary")
    {
        if(primary != nullptr)
        {
            children["primary"] = primary;
        }
        else
        {
            primary = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary>();
            primary->parent = this;
            children["primary"] = primary;
        }
        return children.at("primary");
    }

    if(child_yang_name == "secondaries")
    {
        if(secondaries != nullptr)
        {
            children["secondaries"] = secondaries;
        }
        else
        {
            secondaries = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>();
            secondaries->parent = this;
            children["secondaries"] = secondaries;
        }
        return children.at("secondaries");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_children()
{
    if(children.find("primary") == children.end())
    {
        if(primary != nullptr)
        {
            children["primary"] = primary;
        }
    }

    if(children.find("secondaries") == children.end())
    {
        if(secondaries != nullptr)
        {
            children["secondaries"] = secondaries;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondaries()
{
    yang_name = "secondaries"; yang_parent_name = "addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::~Secondaries()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_data() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_operation() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondaries";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secondaries' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "secondary")
    {
        for(auto const & c : secondary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary>();
        c->parent = this;
        secondary.push_back(std::move(c));
        children[segment_path] = secondary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_children()
{
    for (auto const & c : secondary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::Secondary()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    route_tag{YType::uint32, "route-tag"}
{
    yang_name = "secondary"; yang_parent_name = "secondaries";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::~Secondary()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation)
	|| is_set(route_tag.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secondary' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::Primary()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    route_tag{YType::uint32, "route-tag"}
{
    yang_name = "primary"; yang_parent_name = "addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::~Primary()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation)
	|| is_set(route_tag.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Primary' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddresses()
{
    yang_name = "helper-addresses"; yang_parent_name = "ipv4-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::~HelperAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddresses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(std::move(c));
        children[segment_path] = helper_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_children()
{
    for (auto const & c : helper_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "helper-address"; yang_parent_name = "helper-addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_data() const
{
    return address.is_set
	|| vrf_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(vrf_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::Ipv4NetworkForwarding()
    :
    directed_broadcast{YType::empty, "directed-broadcast"},
    redirects{YType::empty, "redirects"},
    unreachables{YType::empty, "unreachables"}
{
    yang_name = "ipv4-network-forwarding"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::~Ipv4NetworkForwarding()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_data() const
{
    return directed_broadcast.is_set
	|| redirects.is_set
	|| unreachables.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_operation() const
{
    return is_set(operation)
	|| is_set(directed_broadcast.operation)
	|| is_set(redirects.operation)
	|| is_set(unreachables.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network-forwarding";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4NetworkForwarding' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directed_broadcast.is_set || is_set(directed_broadcast.operation)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.operation)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
    }
    if(value_path == "redirects")
    {
        redirects = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::PerformanceManagement()
    :
    ethernet_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24>())
	,ethernet_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15>())
	,ethernet_second30(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30>())
	,ho_vc_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24>())
	,ho_vc_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15>())
	,hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24>())
	,hour24_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp>())
	,hour24_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path>())
	,hour24otn_tcms(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms>())
	,minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15>())
	,minute15_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp>())
	,minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path>())
	,minute15otn_tcms(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms>())
	,oc_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24>())
	,oc_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15>())
	,second30(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30>())
	,sonet_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24>())
	,sonet_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15>())
	,stm_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24>())
	,stm_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15>())
	,sts_hour24(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24>())
	,sts_minute15(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15>())
{
    ethernet_hour24->parent = this;
    children["ethernet-hour24"] = ethernet_hour24;

    ethernet_minute15->parent = this;
    children["ethernet-minute15"] = ethernet_minute15;

    ethernet_second30->parent = this;
    children["ethernet-second30"] = ethernet_second30;

    ho_vc_hour24->parent = this;
    children["ho-vc-hour24"] = ho_vc_hour24;

    ho_vc_minute15->parent = this;
    children["ho-vc-minute15"] = ho_vc_minute15;

    hour24->parent = this;
    children["hour24"] = hour24;

    hour24_gfp->parent = this;
    children["hour24-gfp"] = hour24_gfp;

    hour24_path->parent = this;
    children["hour24-path"] = hour24_path;

    hour24otn_tcms->parent = this;
    children["hour24otn-tcms"] = hour24otn_tcms;

    minute15->parent = this;
    children["minute15"] = minute15;

    minute15_gfp->parent = this;
    children["minute15-gfp"] = minute15_gfp;

    minute15_path->parent = this;
    children["minute15-path"] = minute15_path;

    minute15otn_tcms->parent = this;
    children["minute15otn-tcms"] = minute15otn_tcms;

    oc_hour24->parent = this;
    children["oc-hour24"] = oc_hour24;

    oc_minute15->parent = this;
    children["oc-minute15"] = oc_minute15;

    second30->parent = this;
    children["second30"] = second30;

    sonet_hour24->parent = this;
    children["sonet-hour24"] = sonet_hour24;

    sonet_minute15->parent = this;
    children["sonet-minute15"] = sonet_minute15;

    stm_hour24->parent = this;
    children["stm-hour24"] = stm_hour24;

    stm_minute15->parent = this;
    children["stm-minute15"] = stm_minute15;

    sts_hour24->parent = this;
    children["sts-hour24"] = sts_hour24;

    sts_minute15->parent = this;
    children["sts-minute15"] = sts_minute15;

    yang_name = "performance-management"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::~PerformanceManagement()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_data() const
{
    return (ethernet_hour24 !=  nullptr && ethernet_hour24->has_data())
	|| (ethernet_minute15 !=  nullptr && ethernet_minute15->has_data())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_data())
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_data())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_data())
	|| (hour24 !=  nullptr && hour24->has_data())
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_data())
	|| (hour24_path !=  nullptr && hour24_path->has_data())
	|| (hour24otn_tcms !=  nullptr && hour24otn_tcms->has_data())
	|| (minute15 !=  nullptr && minute15->has_data())
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_data())
	|| (minute15_path !=  nullptr && minute15_path->has_data())
	|| (minute15otn_tcms !=  nullptr && minute15otn_tcms->has_data())
	|| (oc_hour24 !=  nullptr && oc_hour24->has_data())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_data())
	|| (second30 !=  nullptr && second30->has_data())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_data())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_data())
	|| (stm_hour24 !=  nullptr && stm_hour24->has_data())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_data())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_data())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::has_operation() const
{
    return is_set(operation)
	|| (ethernet_hour24 !=  nullptr && ethernet_hour24->has_operation())
	|| (ethernet_minute15 !=  nullptr && ethernet_minute15->has_operation())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_operation())
	|| (ho_vc_hour24 !=  nullptr && ho_vc_hour24->has_operation())
	|| (ho_vc_minute15 !=  nullptr && ho_vc_minute15->has_operation())
	|| (hour24 !=  nullptr && hour24->has_operation())
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_operation())
	|| (hour24_path !=  nullptr && hour24_path->has_operation())
	|| (hour24otn_tcms !=  nullptr && hour24otn_tcms->has_operation())
	|| (minute15 !=  nullptr && minute15->has_operation())
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_operation())
	|| (minute15_path !=  nullptr && minute15_path->has_operation())
	|| (minute15otn_tcms !=  nullptr && minute15otn_tcms->has_operation())
	|| (oc_hour24 !=  nullptr && oc_hour24->has_operation())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_operation())
	|| (second30 !=  nullptr && second30->has_operation())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_operation())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_operation())
	|| (stm_hour24 !=  nullptr && stm_hour24->has_operation())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_operation())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_operation())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-cfg:performance-management";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceManagement' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-hour24")
    {
        if(ethernet_hour24 != nullptr)
        {
            children["ethernet-hour24"] = ethernet_hour24;
        }
        else
        {
            ethernet_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24>();
            ethernet_hour24->parent = this;
            children["ethernet-hour24"] = ethernet_hour24;
        }
        return children.at("ethernet-hour24");
    }

    if(child_yang_name == "ethernet-minute15")
    {
        if(ethernet_minute15 != nullptr)
        {
            children["ethernet-minute15"] = ethernet_minute15;
        }
        else
        {
            ethernet_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15>();
            ethernet_minute15->parent = this;
            children["ethernet-minute15"] = ethernet_minute15;
        }
        return children.at("ethernet-minute15");
    }

    if(child_yang_name == "ethernet-second30")
    {
        if(ethernet_second30 != nullptr)
        {
            children["ethernet-second30"] = ethernet_second30;
        }
        else
        {
            ethernet_second30 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30>();
            ethernet_second30->parent = this;
            children["ethernet-second30"] = ethernet_second30;
        }
        return children.at("ethernet-second30");
    }

    if(child_yang_name == "ho-vc-hour24")
    {
        if(ho_vc_hour24 != nullptr)
        {
            children["ho-vc-hour24"] = ho_vc_hour24;
        }
        else
        {
            ho_vc_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24>();
            ho_vc_hour24->parent = this;
            children["ho-vc-hour24"] = ho_vc_hour24;
        }
        return children.at("ho-vc-hour24");
    }

    if(child_yang_name == "ho-vc-minute15")
    {
        if(ho_vc_minute15 != nullptr)
        {
            children["ho-vc-minute15"] = ho_vc_minute15;
        }
        else
        {
            ho_vc_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15>();
            ho_vc_minute15->parent = this;
            children["ho-vc-minute15"] = ho_vc_minute15;
        }
        return children.at("ho-vc-minute15");
    }

    if(child_yang_name == "hour24")
    {
        if(hour24 != nullptr)
        {
            children["hour24"] = hour24;
        }
        else
        {
            hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24>();
            hour24->parent = this;
            children["hour24"] = hour24;
        }
        return children.at("hour24");
    }

    if(child_yang_name == "hour24-gfp")
    {
        if(hour24_gfp != nullptr)
        {
            children["hour24-gfp"] = hour24_gfp;
        }
        else
        {
            hour24_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp>();
            hour24_gfp->parent = this;
            children["hour24-gfp"] = hour24_gfp;
        }
        return children.at("hour24-gfp");
    }

    if(child_yang_name == "hour24-path")
    {
        if(hour24_path != nullptr)
        {
            children["hour24-path"] = hour24_path;
        }
        else
        {
            hour24_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path>();
            hour24_path->parent = this;
            children["hour24-path"] = hour24_path;
        }
        return children.at("hour24-path");
    }

    if(child_yang_name == "hour24otn-tcms")
    {
        if(hour24otn_tcms != nullptr)
        {
            children["hour24otn-tcms"] = hour24otn_tcms;
        }
        else
        {
            hour24otn_tcms = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms>();
            hour24otn_tcms->parent = this;
            children["hour24otn-tcms"] = hour24otn_tcms;
        }
        return children.at("hour24otn-tcms");
    }

    if(child_yang_name == "minute15")
    {
        if(minute15 != nullptr)
        {
            children["minute15"] = minute15;
        }
        else
        {
            minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15>();
            minute15->parent = this;
            children["minute15"] = minute15;
        }
        return children.at("minute15");
    }

    if(child_yang_name == "minute15-gfp")
    {
        if(minute15_gfp != nullptr)
        {
            children["minute15-gfp"] = minute15_gfp;
        }
        else
        {
            minute15_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp>();
            minute15_gfp->parent = this;
            children["minute15-gfp"] = minute15_gfp;
        }
        return children.at("minute15-gfp");
    }

    if(child_yang_name == "minute15-path")
    {
        if(minute15_path != nullptr)
        {
            children["minute15-path"] = minute15_path;
        }
        else
        {
            minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path>();
            minute15_path->parent = this;
            children["minute15-path"] = minute15_path;
        }
        return children.at("minute15-path");
    }

    if(child_yang_name == "minute15otn-tcms")
    {
        if(minute15otn_tcms != nullptr)
        {
            children["minute15otn-tcms"] = minute15otn_tcms;
        }
        else
        {
            minute15otn_tcms = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms>();
            minute15otn_tcms->parent = this;
            children["minute15otn-tcms"] = minute15otn_tcms;
        }
        return children.at("minute15otn-tcms");
    }

    if(child_yang_name == "oc-hour24")
    {
        if(oc_hour24 != nullptr)
        {
            children["oc-hour24"] = oc_hour24;
        }
        else
        {
            oc_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24>();
            oc_hour24->parent = this;
            children["oc-hour24"] = oc_hour24;
        }
        return children.at("oc-hour24");
    }

    if(child_yang_name == "oc-minute15")
    {
        if(oc_minute15 != nullptr)
        {
            children["oc-minute15"] = oc_minute15;
        }
        else
        {
            oc_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15>();
            oc_minute15->parent = this;
            children["oc-minute15"] = oc_minute15;
        }
        return children.at("oc-minute15");
    }

    if(child_yang_name == "second30")
    {
        if(second30 != nullptr)
        {
            children["second30"] = second30;
        }
        else
        {
            second30 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30>();
            second30->parent = this;
            children["second30"] = second30;
        }
        return children.at("second30");
    }

    if(child_yang_name == "sonet-hour24")
    {
        if(sonet_hour24 != nullptr)
        {
            children["sonet-hour24"] = sonet_hour24;
        }
        else
        {
            sonet_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24>();
            sonet_hour24->parent = this;
            children["sonet-hour24"] = sonet_hour24;
        }
        return children.at("sonet-hour24");
    }

    if(child_yang_name == "sonet-minute15")
    {
        if(sonet_minute15 != nullptr)
        {
            children["sonet-minute15"] = sonet_minute15;
        }
        else
        {
            sonet_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15>();
            sonet_minute15->parent = this;
            children["sonet-minute15"] = sonet_minute15;
        }
        return children.at("sonet-minute15");
    }

    if(child_yang_name == "stm-hour24")
    {
        if(stm_hour24 != nullptr)
        {
            children["stm-hour24"] = stm_hour24;
        }
        else
        {
            stm_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24>();
            stm_hour24->parent = this;
            children["stm-hour24"] = stm_hour24;
        }
        return children.at("stm-hour24");
    }

    if(child_yang_name == "stm-minute15")
    {
        if(stm_minute15 != nullptr)
        {
            children["stm-minute15"] = stm_minute15;
        }
        else
        {
            stm_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15>();
            stm_minute15->parent = this;
            children["stm-minute15"] = stm_minute15;
        }
        return children.at("stm-minute15");
    }

    if(child_yang_name == "sts-hour24")
    {
        if(sts_hour24 != nullptr)
        {
            children["sts-hour24"] = sts_hour24;
        }
        else
        {
            sts_hour24 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24>();
            sts_hour24->parent = this;
            children["sts-hour24"] = sts_hour24;
        }
        return children.at("sts-hour24");
    }

    if(child_yang_name == "sts-minute15")
    {
        if(sts_minute15 != nullptr)
        {
            children["sts-minute15"] = sts_minute15;
        }
        else
        {
            sts_minute15 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15>();
            sts_minute15->parent = this;
            children["sts-minute15"] = sts_minute15;
        }
        return children.at("sts-minute15");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::get_children()
{
    if(children.find("ethernet-hour24") == children.end())
    {
        if(ethernet_hour24 != nullptr)
        {
            children["ethernet-hour24"] = ethernet_hour24;
        }
    }

    if(children.find("ethernet-minute15") == children.end())
    {
        if(ethernet_minute15 != nullptr)
        {
            children["ethernet-minute15"] = ethernet_minute15;
        }
    }

    if(children.find("ethernet-second30") == children.end())
    {
        if(ethernet_second30 != nullptr)
        {
            children["ethernet-second30"] = ethernet_second30;
        }
    }

    if(children.find("ho-vc-hour24") == children.end())
    {
        if(ho_vc_hour24 != nullptr)
        {
            children["ho-vc-hour24"] = ho_vc_hour24;
        }
    }

    if(children.find("ho-vc-minute15") == children.end())
    {
        if(ho_vc_minute15 != nullptr)
        {
            children["ho-vc-minute15"] = ho_vc_minute15;
        }
    }

    if(children.find("hour24") == children.end())
    {
        if(hour24 != nullptr)
        {
            children["hour24"] = hour24;
        }
    }

    if(children.find("hour24-gfp") == children.end())
    {
        if(hour24_gfp != nullptr)
        {
            children["hour24-gfp"] = hour24_gfp;
        }
    }

    if(children.find("hour24-path") == children.end())
    {
        if(hour24_path != nullptr)
        {
            children["hour24-path"] = hour24_path;
        }
    }

    if(children.find("hour24otn-tcms") == children.end())
    {
        if(hour24otn_tcms != nullptr)
        {
            children["hour24otn-tcms"] = hour24otn_tcms;
        }
    }

    if(children.find("minute15") == children.end())
    {
        if(minute15 != nullptr)
        {
            children["minute15"] = minute15;
        }
    }

    if(children.find("minute15-gfp") == children.end())
    {
        if(minute15_gfp != nullptr)
        {
            children["minute15-gfp"] = minute15_gfp;
        }
    }

    if(children.find("minute15-path") == children.end())
    {
        if(minute15_path != nullptr)
        {
            children["minute15-path"] = minute15_path;
        }
    }

    if(children.find("minute15otn-tcms") == children.end())
    {
        if(minute15otn_tcms != nullptr)
        {
            children["minute15otn-tcms"] = minute15otn_tcms;
        }
    }

    if(children.find("oc-hour24") == children.end())
    {
        if(oc_hour24 != nullptr)
        {
            children["oc-hour24"] = oc_hour24;
        }
    }

    if(children.find("oc-minute15") == children.end())
    {
        if(oc_minute15 != nullptr)
        {
            children["oc-minute15"] = oc_minute15;
        }
    }

    if(children.find("second30") == children.end())
    {
        if(second30 != nullptr)
        {
            children["second30"] = second30;
        }
    }

    if(children.find("sonet-hour24") == children.end())
    {
        if(sonet_hour24 != nullptr)
        {
            children["sonet-hour24"] = sonet_hour24;
        }
    }

    if(children.find("sonet-minute15") == children.end())
    {
        if(sonet_minute15 != nullptr)
        {
            children["sonet-minute15"] = sonet_minute15;
        }
    }

    if(children.find("stm-hour24") == children.end())
    {
        if(stm_hour24 != nullptr)
        {
            children["stm-hour24"] = stm_hour24;
        }
    }

    if(children.find("stm-minute15") == children.end())
    {
        if(stm_minute15 != nullptr)
        {
            children["stm-minute15"] = stm_minute15;
        }
    }

    if(children.find("sts-hour24") == children.end())
    {
        if(sts_hour24 != nullptr)
        {
            children["sts-hour24"] = sts_hour24;
        }
    }

    if(children.find("sts-minute15") == children.end())
    {
        if(sts_minute15 != nullptr)
        {
            children["sts-minute15"] = sts_minute15;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24()
    :
    stm_hour24_stm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm>())
{
    stm_hour24_stm->parent = this;
    children["stm-hour24-stm"] = stm_hour24_stm;

    yang_name = "stm-hour24"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::~StmHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_data() const
{
    return (stm_hour24_stm !=  nullptr && stm_hour24_stm->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::has_operation() const
{
    return is_set(operation)
	|| (stm_hour24_stm !=  nullptr && stm_hour24_stm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmHour24' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-hour24-stm")
    {
        if(stm_hour24_stm != nullptr)
        {
            children["stm-hour24-stm"] = stm_hour24_stm;
        }
        else
        {
            stm_hour24_stm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm>();
            stm_hour24_stm->parent = this;
            children["stm-hour24-stm"] = stm_hour24_stm;
        }
        return children.at("stm-hour24-stm");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::get_children()
{
    if(children.find("stm-hour24-stm") == children.end())
    {
        if(stm_hour24_stm != nullptr)
        {
            children["stm-hour24-stm"] = stm_hour24_stm;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24Stm()
    :
    stm_hour24_stm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports>())
	,stm_hour24_stm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds>())
{
    stm_hour24_stm_reports->parent = this;
    children["stm-hour24-stm-reports"] = stm_hour24_stm_reports;

    stm_hour24_stm_thresholds->parent = this;
    children["stm-hour24-stm-thresholds"] = stm_hour24_stm_thresholds;

    yang_name = "stm-hour24-stm"; yang_parent_name = "stm-hour24";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::~StmHour24Stm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_data() const
{
    return (stm_hour24_stm_reports !=  nullptr && stm_hour24_stm_reports->has_data())
	|| (stm_hour24_stm_thresholds !=  nullptr && stm_hour24_stm_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::has_operation() const
{
    return is_set(operation)
	|| (stm_hour24_stm_reports !=  nullptr && stm_hour24_stm_reports->has_operation())
	|| (stm_hour24_stm_thresholds !=  nullptr && stm_hour24_stm_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmHour24Stm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-hour24-stm-reports")
    {
        if(stm_hour24_stm_reports != nullptr)
        {
            children["stm-hour24-stm-reports"] = stm_hour24_stm_reports;
        }
        else
        {
            stm_hour24_stm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports>();
            stm_hour24_stm_reports->parent = this;
            children["stm-hour24-stm-reports"] = stm_hour24_stm_reports;
        }
        return children.at("stm-hour24-stm-reports");
    }

    if(child_yang_name == "stm-hour24-stm-thresholds")
    {
        if(stm_hour24_stm_thresholds != nullptr)
        {
            children["stm-hour24-stm-thresholds"] = stm_hour24_stm_thresholds;
        }
        else
        {
            stm_hour24_stm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds>();
            stm_hour24_stm_thresholds->parent = this;
            children["stm-hour24-stm-thresholds"] = stm_hour24_stm_thresholds;
        }
        return children.at("stm-hour24-stm-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::get_children()
{
    if(children.find("stm-hour24-stm-reports") == children.end())
    {
        if(stm_hour24_stm_reports != nullptr)
        {
            children["stm-hour24-stm-reports"] = stm_hour24_stm_reports;
        }
    }

    if(children.find("stm-hour24-stm-thresholds") == children.end())
    {
        if(stm_hour24_stm_thresholds != nullptr)
        {
            children["stm-hour24-stm-thresholds"] = stm_hour24_stm_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReports()
{
    yang_name = "stm-hour24-stm-reports"; yang_parent_name = "stm-hour24-stm";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::~StmHour24StmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_data() const
{
    for (std::size_t index=0; index<stm_hour24_stm_report.size(); index++)
    {
        if(stm_hour24_stm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24_stm_report.size(); index++)
    {
        if(stm_hour24_stm_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmHour24StmReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-hour24-stm-report")
    {
        for(auto const & c : stm_hour24_stm_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport>();
        c->parent = this;
        stm_hour24_stm_report.push_back(std::move(c));
        children[segment_path] = stm_hour24_stm_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::get_children()
{
    for (auto const & c : stm_hour24_stm_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::StmHour24StmReport()
    :
    stm_report{YType::enumeration, "stm-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "stm-hour24-stm-report"; yang_parent_name = "stm-hour24-stm-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::~StmHour24StmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_data() const
{
    return stm_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::has_operation() const
{
    return is_set(operation)
	|| is_set(stm_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-report" <<"[stm-report='" <<stm_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmHour24StmReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_report.is_set || is_set(stm_report.operation)) leaf_name_data.push_back(stm_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmReports::StmHour24StmReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stm-report")
    {
        stm_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThresholds()
{
    yang_name = "stm-hour24-stm-thresholds"; yang_parent_name = "stm-hour24-stm";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::~StmHour24StmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_data() const
{
    for (std::size_t index=0; index<stm_hour24_stm_threshold.size(); index++)
    {
        if(stm_hour24_stm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24_stm_threshold.size(); index++)
    {
        if(stm_hour24_stm_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmHour24StmThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-hour24-stm-threshold")
    {
        for(auto const & c : stm_hour24_stm_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold>();
        c->parent = this;
        stm_hour24_stm_threshold.push_back(std::move(c));
        children[segment_path] = stm_hour24_stm_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::get_children()
{
    for (auto const & c : stm_hour24_stm_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::StmHour24StmThreshold()
    :
    stm_threshold{YType::enumeration, "stm-threshold"},
    stm_threshold_value{YType::int32, "stm-threshold-value"}
{
    yang_name = "stm-hour24-stm-threshold"; yang_parent_name = "stm-hour24-stm-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::~StmHour24StmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_data() const
{
    return stm_threshold.is_set
	|| stm_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(stm_threshold.operation)
	|| is_set(stm_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-stm-threshold" <<"[stm-threshold='" <<stm_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmHour24StmThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_threshold.is_set || is_set(stm_threshold.operation)) leaf_name_data.push_back(stm_threshold.get_name_leafdata());
    if (stm_threshold_value.is_set || is_set(stm_threshold_value.operation)) leaf_name_data.push_back(stm_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmHour24::StmHour24Stm::StmHour24StmThresholds::StmHour24StmThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold = value;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp()
    :
    minute15_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_>())
{
    minute15_gfp->parent = this;
    children["minute15-gfp"] = minute15_gfp;

    yang_name = "minute15-gfp"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::~Minute15Gfp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_data() const
{
    return (minute15_gfp !=  nullptr && minute15_gfp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::has_operation() const
{
    return is_set(operation)
	|| (minute15_gfp !=  nullptr && minute15_gfp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15Gfp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-gfp")
    {
        if(minute15_gfp != nullptr)
        {
            children["minute15-gfp"] = minute15_gfp;
        }
        else
        {
            minute15_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_>();
            minute15_gfp->parent = this;
            children["minute15-gfp"] = minute15_gfp;
        }
        return children.at("minute15-gfp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::get_children()
{
    if(children.find("minute15-gfp") == children.end())
    {
        if(minute15_gfp != nullptr)
        {
            children["minute15-gfp"] = minute15_gfp;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15Gfp_()
    :
    minute15_gfp_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports>())
	,minute15_gfp_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds>())
{
    minute15_gfp_reports->parent = this;
    children["minute15-gfp-reports"] = minute15_gfp_reports;

    minute15_gfp_thresholds->parent = this;
    children["minute15-gfp-thresholds"] = minute15_gfp_thresholds;

    yang_name = "minute15-gfp"; yang_parent_name = "minute15-gfp";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::~Minute15Gfp_()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_data() const
{
    return (minute15_gfp_reports !=  nullptr && minute15_gfp_reports->has_data())
	|| (minute15_gfp_thresholds !=  nullptr && minute15_gfp_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::has_operation() const
{
    return is_set(operation)
	|| (minute15_gfp_reports !=  nullptr && minute15_gfp_reports->has_operation())
	|| (minute15_gfp_thresholds !=  nullptr && minute15_gfp_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15Gfp_' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-gfp-reports")
    {
        if(minute15_gfp_reports != nullptr)
        {
            children["minute15-gfp-reports"] = minute15_gfp_reports;
        }
        else
        {
            minute15_gfp_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports>();
            minute15_gfp_reports->parent = this;
            children["minute15-gfp-reports"] = minute15_gfp_reports;
        }
        return children.at("minute15-gfp-reports");
    }

    if(child_yang_name == "minute15-gfp-thresholds")
    {
        if(minute15_gfp_thresholds != nullptr)
        {
            children["minute15-gfp-thresholds"] = minute15_gfp_thresholds;
        }
        else
        {
            minute15_gfp_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds>();
            minute15_gfp_thresholds->parent = this;
            children["minute15-gfp-thresholds"] = minute15_gfp_thresholds;
        }
        return children.at("minute15-gfp-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::get_children()
{
    if(children.find("minute15-gfp-reports") == children.end())
    {
        if(minute15_gfp_reports != nullptr)
        {
            children["minute15-gfp-reports"] = minute15_gfp_reports;
        }
    }

    if(children.find("minute15-gfp-thresholds") == children.end())
    {
        if(minute15_gfp_thresholds != nullptr)
        {
            children["minute15-gfp-thresholds"] = minute15_gfp_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReports()
{
    yang_name = "minute15-gfp-reports"; yang_parent_name = "minute15-gfp";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::~Minute15GfpReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_data() const
{
    for (std::size_t index=0; index<minute15_gfp_report.size(); index++)
    {
        if(minute15_gfp_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_gfp_report.size(); index++)
    {
        if(minute15_gfp_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15GfpReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-gfp-report")
    {
        for(auto const & c : minute15_gfp_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport>();
        c->parent = this;
        minute15_gfp_report.push_back(std::move(c));
        children[segment_path] = minute15_gfp_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::get_children()
{
    for (auto const & c : minute15_gfp_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::Minute15GfpReport()
    :
    gfp_report{YType::enumeration, "gfp-report"}
{
    yang_name = "minute15-gfp-report"; yang_parent_name = "minute15-gfp-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::~Minute15GfpReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_data() const
{
    return gfp_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::has_operation() const
{
    return is_set(operation)
	|| is_set(gfp_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-report" <<"[gfp-report='" <<gfp_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15GfpReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_report.is_set || is_set(gfp_report.operation)) leaf_name_data.push_back(gfp_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpReports::Minute15GfpReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gfp-report")
    {
        gfp_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThresholds()
{
    yang_name = "minute15-gfp-thresholds"; yang_parent_name = "minute15-gfp";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::~Minute15GfpThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15_gfp_threshold.size(); index++)
    {
        if(minute15_gfp_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_gfp_threshold.size(); index++)
    {
        if(minute15_gfp_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15GfpThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-gfp-threshold")
    {
        for(auto const & c : minute15_gfp_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold>();
        c->parent = this;
        minute15_gfp_threshold.push_back(std::move(c));
        children[segment_path] = minute15_gfp_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::get_children()
{
    for (auto const & c : minute15_gfp_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::Minute15GfpThreshold()
    :
    gfp_threshold{YType::enumeration, "gfp-threshold"},
    gfp_threshold_value{YType::int32, "gfp-threshold-value"}
{
    yang_name = "minute15-gfp-threshold"; yang_parent_name = "minute15-gfp-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::~Minute15GfpThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_data() const
{
    return gfp_threshold.is_set
	|| gfp_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(gfp_threshold.operation)
	|| is_set(gfp_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-gfp-threshold" <<"[gfp-threshold='" <<gfp_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15GfpThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_threshold.is_set || is_set(gfp_threshold.operation)) leaf_name_data.push_back(gfp_threshold.get_name_leafdata());
    if (gfp_threshold_value.is_set || is_set(gfp_threshold_value.operation)) leaf_name_data.push_back(gfp_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Gfp::Minute15Gfp_::Minute15GfpThresholds::Minute15GfpThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold = value;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15()
    :
    sonet_minute15_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn>())
	,sonet_minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path>())
{
    sonet_minute15_ocn->parent = this;
    children["sonet-minute15-ocn"] = sonet_minute15_ocn;

    sonet_minute15_path->parent = this;
    children["sonet-minute15-path"] = sonet_minute15_path;

    yang_name = "sonet-minute15"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::~SonetMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_data() const
{
    return (sonet_minute15_ocn !=  nullptr && sonet_minute15_ocn->has_data())
	|| (sonet_minute15_path !=  nullptr && sonet_minute15_path->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::has_operation() const
{
    return is_set(operation)
	|| (sonet_minute15_ocn !=  nullptr && sonet_minute15_ocn->has_operation())
	|| (sonet_minute15_path !=  nullptr && sonet_minute15_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-minute15-ocn")
    {
        if(sonet_minute15_ocn != nullptr)
        {
            children["sonet-minute15-ocn"] = sonet_minute15_ocn;
        }
        else
        {
            sonet_minute15_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn>();
            sonet_minute15_ocn->parent = this;
            children["sonet-minute15-ocn"] = sonet_minute15_ocn;
        }
        return children.at("sonet-minute15-ocn");
    }

    if(child_yang_name == "sonet-minute15-path")
    {
        if(sonet_minute15_path != nullptr)
        {
            children["sonet-minute15-path"] = sonet_minute15_path;
        }
        else
        {
            sonet_minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path>();
            sonet_minute15_path->parent = this;
            children["sonet-minute15-path"] = sonet_minute15_path;
        }
        return children.at("sonet-minute15-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::get_children()
{
    if(children.find("sonet-minute15-ocn") == children.end())
    {
        if(sonet_minute15_ocn != nullptr)
        {
            children["sonet-minute15-ocn"] = sonet_minute15_ocn;
        }
    }

    if(children.find("sonet-minute15-path") == children.end())
    {
        if(sonet_minute15_path != nullptr)
        {
            children["sonet-minute15-path"] = sonet_minute15_path;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15Path()
    :
    sonet_minute15_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports>())
	,sonet_minute15_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds>())
{
    sonet_minute15_path_reports->parent = this;
    children["sonet-minute15-path-reports"] = sonet_minute15_path_reports;

    sonet_minute15_path_thresholds->parent = this;
    children["sonet-minute15-path-thresholds"] = sonet_minute15_path_thresholds;

    yang_name = "sonet-minute15-path"; yang_parent_name = "sonet-minute15";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::~SonetMinute15Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_data() const
{
    return (sonet_minute15_path_reports !=  nullptr && sonet_minute15_path_reports->has_data())
	|| (sonet_minute15_path_thresholds !=  nullptr && sonet_minute15_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::has_operation() const
{
    return is_set(operation)
	|| (sonet_minute15_path_reports !=  nullptr && sonet_minute15_path_reports->has_operation())
	|| (sonet_minute15_path_thresholds !=  nullptr && sonet_minute15_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15Path' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-minute15-path-reports")
    {
        if(sonet_minute15_path_reports != nullptr)
        {
            children["sonet-minute15-path-reports"] = sonet_minute15_path_reports;
        }
        else
        {
            sonet_minute15_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports>();
            sonet_minute15_path_reports->parent = this;
            children["sonet-minute15-path-reports"] = sonet_minute15_path_reports;
        }
        return children.at("sonet-minute15-path-reports");
    }

    if(child_yang_name == "sonet-minute15-path-thresholds")
    {
        if(sonet_minute15_path_thresholds != nullptr)
        {
            children["sonet-minute15-path-thresholds"] = sonet_minute15_path_thresholds;
        }
        else
        {
            sonet_minute15_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds>();
            sonet_minute15_path_thresholds->parent = this;
            children["sonet-minute15-path-thresholds"] = sonet_minute15_path_thresholds;
        }
        return children.at("sonet-minute15-path-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::get_children()
{
    if(children.find("sonet-minute15-path-reports") == children.end())
    {
        if(sonet_minute15_path_reports != nullptr)
        {
            children["sonet-minute15-path-reports"] = sonet_minute15_path_reports;
        }
    }

    if(children.find("sonet-minute15-path-thresholds") == children.end())
    {
        if(sonet_minute15_path_thresholds != nullptr)
        {
            children["sonet-minute15-path-thresholds"] = sonet_minute15_path_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReports()
{
    yang_name = "sonet-minute15-path-reports"; yang_parent_name = "sonet-minute15-path";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::~SonetMinute15PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_path_report.size(); index++)
    {
        if(sonet_minute15_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_report.size(); index++)
    {
        if(sonet_minute15_path_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15PathReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-minute15-path-report")
    {
        for(auto const & c : sonet_minute15_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport>();
        c->parent = this;
        sonet_minute15_path_report.push_back(std::move(c));
        children[segment_path] = sonet_minute15_path_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::get_children()
{
    for (auto const & c : sonet_minute15_path_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::SonetMinute15PathReport()
    :
    path_report{YType::enumeration, "path-report"}
{
    yang_name = "sonet-minute15-path-report"; yang_parent_name = "sonet-minute15-path-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::~SonetMinute15PathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_data() const
{
    return path_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::has_operation() const
{
    return is_set(operation)
	|| is_set(path_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-report" <<"[path-report='" <<path_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15PathReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.operation)) leaf_name_data.push_back(path_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathReports::SonetMinute15PathReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-report")
    {
        path_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThresholds()
{
    yang_name = "sonet-minute15-path-thresholds"; yang_parent_name = "sonet-minute15-path";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::~SonetMinute15PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_path_threshold.size(); index++)
    {
        if(sonet_minute15_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_threshold.size(); index++)
    {
        if(sonet_minute15_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15PathThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-minute15-path-threshold")
    {
        for(auto const & c : sonet_minute15_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold>();
        c->parent = this;
        sonet_minute15_path_threshold.push_back(std::move(c));
        children[segment_path] = sonet_minute15_path_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::get_children()
{
    for (auto const & c : sonet_minute15_path_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::SonetMinute15PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::int32, "path-threshold-value"}
{
    yang_name = "sonet-minute15-path-threshold"; yang_parent_name = "sonet-minute15-path-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::~SonetMinute15PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_data() const
{
    return path_threshold.is_set
	|| path_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(path_threshold.operation)
	|| is_set(path_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-threshold" <<"[path-threshold='" <<path_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15PathThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.operation)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.operation)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Path::SonetMinute15PathThresholds::SonetMinute15PathThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15Ocn()
    :
    sonet_minute15_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports>())
	,sonet_minute15_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds>())
{
    sonet_minute15_ocn_reports->parent = this;
    children["sonet-minute15-ocn-reports"] = sonet_minute15_ocn_reports;

    sonet_minute15_ocn_thresholds->parent = this;
    children["sonet-minute15-ocn-thresholds"] = sonet_minute15_ocn_thresholds;

    yang_name = "sonet-minute15-ocn"; yang_parent_name = "sonet-minute15";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::~SonetMinute15Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_data() const
{
    return (sonet_minute15_ocn_reports !=  nullptr && sonet_minute15_ocn_reports->has_data())
	|| (sonet_minute15_ocn_thresholds !=  nullptr && sonet_minute15_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::has_operation() const
{
    return is_set(operation)
	|| (sonet_minute15_ocn_reports !=  nullptr && sonet_minute15_ocn_reports->has_operation())
	|| (sonet_minute15_ocn_thresholds !=  nullptr && sonet_minute15_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15Ocn' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-minute15-ocn-reports")
    {
        if(sonet_minute15_ocn_reports != nullptr)
        {
            children["sonet-minute15-ocn-reports"] = sonet_minute15_ocn_reports;
        }
        else
        {
            sonet_minute15_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports>();
            sonet_minute15_ocn_reports->parent = this;
            children["sonet-minute15-ocn-reports"] = sonet_minute15_ocn_reports;
        }
        return children.at("sonet-minute15-ocn-reports");
    }

    if(child_yang_name == "sonet-minute15-ocn-thresholds")
    {
        if(sonet_minute15_ocn_thresholds != nullptr)
        {
            children["sonet-minute15-ocn-thresholds"] = sonet_minute15_ocn_thresholds;
        }
        else
        {
            sonet_minute15_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds>();
            sonet_minute15_ocn_thresholds->parent = this;
            children["sonet-minute15-ocn-thresholds"] = sonet_minute15_ocn_thresholds;
        }
        return children.at("sonet-minute15-ocn-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::get_children()
{
    if(children.find("sonet-minute15-ocn-reports") == children.end())
    {
        if(sonet_minute15_ocn_reports != nullptr)
        {
            children["sonet-minute15-ocn-reports"] = sonet_minute15_ocn_reports;
        }
    }

    if(children.find("sonet-minute15-ocn-thresholds") == children.end())
    {
        if(sonet_minute15_ocn_thresholds != nullptr)
        {
            children["sonet-minute15-ocn-thresholds"] = sonet_minute15_ocn_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReports()
{
    yang_name = "sonet-minute15-ocn-reports"; yang_parent_name = "sonet-minute15-ocn";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::~SonetMinute15OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_report.size(); index++)
    {
        if(sonet_minute15_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_report.size(); index++)
    {
        if(sonet_minute15_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15OcnReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-minute15-ocn-report")
    {
        for(auto const & c : sonet_minute15_ocn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport>();
        c->parent = this;
        sonet_minute15_ocn_report.push_back(std::move(c));
        children[segment_path] = sonet_minute15_ocn_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::get_children()
{
    for (auto const & c : sonet_minute15_ocn_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::SonetMinute15OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"}
{
    yang_name = "sonet-minute15-ocn-report"; yang_parent_name = "sonet-minute15-ocn-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::~SonetMinute15OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_data() const
{
    return ocn_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::has_operation() const
{
    return is_set(operation)
	|| is_set(ocn_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-report" <<"[ocn-report='" <<ocn_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15OcnReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.operation)) leaf_name_data.push_back(ocn_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnReports::SonetMinute15OcnReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThresholds()
{
    yang_name = "sonet-minute15-ocn-thresholds"; yang_parent_name = "sonet-minute15-ocn";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::~SonetMinute15OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_threshold.size(); index++)
    {
        if(sonet_minute15_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_ocn_threshold.size(); index++)
    {
        if(sonet_minute15_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15OcnThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-minute15-ocn-threshold")
    {
        for(auto const & c : sonet_minute15_ocn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold>();
        c->parent = this;
        sonet_minute15_ocn_threshold.push_back(std::move(c));
        children[segment_path] = sonet_minute15_ocn_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::get_children()
{
    for (auto const & c : sonet_minute15_ocn_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::SonetMinute15OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::int32, "ocn-threshold-value"}
{
    yang_name = "sonet-minute15-ocn-threshold"; yang_parent_name = "sonet-minute15-ocn-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::~SonetMinute15OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_data() const
{
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(ocn_threshold.operation)
	|| is_set(ocn_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-ocn-threshold" <<"[ocn-threshold='" <<ocn_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15OcnThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.operation)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.operation)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetMinute15::SonetMinute15Ocn::SonetMinute15OcnThresholds::SonetMinute15OcnThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp()
    :
    hour24_gfp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_>())
{
    hour24_gfp->parent = this;
    children["hour24-gfp"] = hour24_gfp;

    yang_name = "hour24-gfp"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::~Hour24Gfp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_data() const
{
    return (hour24_gfp !=  nullptr && hour24_gfp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::has_operation() const
{
    return is_set(operation)
	|| (hour24_gfp !=  nullptr && hour24_gfp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24Gfp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-gfp")
    {
        if(hour24_gfp != nullptr)
        {
            children["hour24-gfp"] = hour24_gfp;
        }
        else
        {
            hour24_gfp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_>();
            hour24_gfp->parent = this;
            children["hour24-gfp"] = hour24_gfp;
        }
        return children.at("hour24-gfp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::get_children()
{
    if(children.find("hour24-gfp") == children.end())
    {
        if(hour24_gfp != nullptr)
        {
            children["hour24-gfp"] = hour24_gfp;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24Gfp_()
    :
    hour24_gfp_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports>())
	,hour24_gfp_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds>())
{
    hour24_gfp_reports->parent = this;
    children["hour24-gfp-reports"] = hour24_gfp_reports;

    hour24_gfp_thresholds->parent = this;
    children["hour24-gfp-thresholds"] = hour24_gfp_thresholds;

    yang_name = "hour24-gfp"; yang_parent_name = "hour24-gfp";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::~Hour24Gfp_()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_data() const
{
    return (hour24_gfp_reports !=  nullptr && hour24_gfp_reports->has_data())
	|| (hour24_gfp_thresholds !=  nullptr && hour24_gfp_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::has_operation() const
{
    return is_set(operation)
	|| (hour24_gfp_reports !=  nullptr && hour24_gfp_reports->has_operation())
	|| (hour24_gfp_thresholds !=  nullptr && hour24_gfp_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24Gfp_' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-gfp-reports")
    {
        if(hour24_gfp_reports != nullptr)
        {
            children["hour24-gfp-reports"] = hour24_gfp_reports;
        }
        else
        {
            hour24_gfp_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports>();
            hour24_gfp_reports->parent = this;
            children["hour24-gfp-reports"] = hour24_gfp_reports;
        }
        return children.at("hour24-gfp-reports");
    }

    if(child_yang_name == "hour24-gfp-thresholds")
    {
        if(hour24_gfp_thresholds != nullptr)
        {
            children["hour24-gfp-thresholds"] = hour24_gfp_thresholds;
        }
        else
        {
            hour24_gfp_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds>();
            hour24_gfp_thresholds->parent = this;
            children["hour24-gfp-thresholds"] = hour24_gfp_thresholds;
        }
        return children.at("hour24-gfp-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::get_children()
{
    if(children.find("hour24-gfp-reports") == children.end())
    {
        if(hour24_gfp_reports != nullptr)
        {
            children["hour24-gfp-reports"] = hour24_gfp_reports;
        }
    }

    if(children.find("hour24-gfp-thresholds") == children.end())
    {
        if(hour24_gfp_thresholds != nullptr)
        {
            children["hour24-gfp-thresholds"] = hour24_gfp_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReports()
{
    yang_name = "hour24-gfp-reports"; yang_parent_name = "hour24-gfp";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::~Hour24GfpReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_data() const
{
    for (std::size_t index=0; index<hour24_gfp_report.size(); index++)
    {
        if(hour24_gfp_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_gfp_report.size(); index++)
    {
        if(hour24_gfp_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24GfpReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-gfp-report")
    {
        for(auto const & c : hour24_gfp_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport>();
        c->parent = this;
        hour24_gfp_report.push_back(std::move(c));
        children[segment_path] = hour24_gfp_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::get_children()
{
    for (auto const & c : hour24_gfp_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::Hour24GfpReport()
    :
    gfp_report{YType::enumeration, "gfp-report"}
{
    yang_name = "hour24-gfp-report"; yang_parent_name = "hour24-gfp-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::~Hour24GfpReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_data() const
{
    return gfp_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::has_operation() const
{
    return is_set(operation)
	|| is_set(gfp_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-report" <<"[gfp-report='" <<gfp_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24GfpReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_report.is_set || is_set(gfp_report.operation)) leaf_name_data.push_back(gfp_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpReports::Hour24GfpReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gfp-report")
    {
        gfp_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThresholds()
{
    yang_name = "hour24-gfp-thresholds"; yang_parent_name = "hour24-gfp";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::~Hour24GfpThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24_gfp_threshold.size(); index++)
    {
        if(hour24_gfp_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_gfp_threshold.size(); index++)
    {
        if(hour24_gfp_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24GfpThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-gfp-threshold")
    {
        for(auto const & c : hour24_gfp_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold>();
        c->parent = this;
        hour24_gfp_threshold.push_back(std::move(c));
        children[segment_path] = hour24_gfp_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::get_children()
{
    for (auto const & c : hour24_gfp_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::Hour24GfpThreshold()
    :
    gfp_threshold{YType::enumeration, "gfp-threshold"},
    gfp_threshold_value{YType::int32, "gfp-threshold-value"}
{
    yang_name = "hour24-gfp-threshold"; yang_parent_name = "hour24-gfp-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::~Hour24GfpThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_data() const
{
    return gfp_threshold.is_set
	|| gfp_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(gfp_threshold.operation)
	|| is_set(gfp_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-gfp-threshold" <<"[gfp-threshold='" <<gfp_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24GfpThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gfp_threshold.is_set || is_set(gfp_threshold.operation)) leaf_name_data.push_back(gfp_threshold.get_name_leafdata());
    if (gfp_threshold_value.is_set || is_set(gfp_threshold_value.operation)) leaf_name_data.push_back(gfp_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Gfp::Hour24Gfp_::Hour24GfpThresholds::Hour24GfpThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gfp-threshold")
    {
        gfp_threshold = value;
    }
    if(value_path == "gfp-threshold-value")
    {
        gfp_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::EthernetHour24()
    :
    hour24_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether>())
{
    hour24_ether->parent = this;
    children["hour24-ether"] = hour24_ether;

    yang_name = "ethernet-hour24"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::~EthernetHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_data() const
{
    return (hour24_ether !=  nullptr && hour24_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::has_operation() const
{
    return is_set(operation)
	|| (hour24_ether !=  nullptr && hour24_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetHour24' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-ether")
    {
        if(hour24_ether != nullptr)
        {
            children["hour24-ether"] = hour24_ether;
        }
        else
        {
            hour24_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether>();
            hour24_ether->parent = this;
            children["hour24-ether"] = hour24_ether;
        }
        return children.at("hour24-ether");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::get_children()
{
    if(children.find("hour24-ether") == children.end())
    {
        if(hour24_ether != nullptr)
        {
            children["hour24-ether"] = hour24_ether;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24Ether()
    :
    hour24_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports>())
	,hour24_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds>())
{
    hour24_ether_reports->parent = this;
    children["hour24-ether-reports"] = hour24_ether_reports;

    hour24_ether_thresholds->parent = this;
    children["hour24-ether-thresholds"] = hour24_ether_thresholds;

    yang_name = "hour24-ether"; yang_parent_name = "ethernet-hour24";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::~Hour24Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_data() const
{
    return (hour24_ether_reports !=  nullptr && hour24_ether_reports->has_data())
	|| (hour24_ether_thresholds !=  nullptr && hour24_ether_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::has_operation() const
{
    return is_set(operation)
	|| (hour24_ether_reports !=  nullptr && hour24_ether_reports->has_operation())
	|| (hour24_ether_thresholds !=  nullptr && hour24_ether_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24Ether' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-ether-reports")
    {
        if(hour24_ether_reports != nullptr)
        {
            children["hour24-ether-reports"] = hour24_ether_reports;
        }
        else
        {
            hour24_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports>();
            hour24_ether_reports->parent = this;
            children["hour24-ether-reports"] = hour24_ether_reports;
        }
        return children.at("hour24-ether-reports");
    }

    if(child_yang_name == "hour24-ether-thresholds")
    {
        if(hour24_ether_thresholds != nullptr)
        {
            children["hour24-ether-thresholds"] = hour24_ether_thresholds;
        }
        else
        {
            hour24_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds>();
            hour24_ether_thresholds->parent = this;
            children["hour24-ether-thresholds"] = hour24_ether_thresholds;
        }
        return children.at("hour24-ether-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::get_children()
{
    if(children.find("hour24-ether-reports") == children.end())
    {
        if(hour24_ether_reports != nullptr)
        {
            children["hour24-ether-reports"] = hour24_ether_reports;
        }
    }

    if(children.find("hour24-ether-thresholds") == children.end())
    {
        if(hour24_ether_thresholds != nullptr)
        {
            children["hour24-ether-thresholds"] = hour24_ether_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThresholds()
{
    yang_name = "hour24-ether-thresholds"; yang_parent_name = "hour24-ether";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::~Hour24EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24_ether_threshold.size(); index++)
    {
        if(hour24_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_ether_threshold.size(); index++)
    {
        if(hour24_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24EtherThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-ether-threshold")
    {
        for(auto const & c : hour24_ether_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold>();
        c->parent = this;
        hour24_ether_threshold.push_back(std::move(c));
        children[segment_path] = hour24_ether_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::get_children()
{
    for (auto const & c : hour24_ether_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::Hour24EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::int32, "ether-threshold-value"}
{
    yang_name = "hour24-ether-threshold"; yang_parent_name = "hour24-ether-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::~Hour24EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_data() const
{
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(ether_threshold.operation)
	|| is_set(ether_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-threshold" <<"[ether-threshold='" <<ether_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24EtherThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.operation)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.operation)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherThresholds::Hour24EtherThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReports()
{
    yang_name = "hour24-ether-reports"; yang_parent_name = "hour24-ether";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::~Hour24EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_data() const
{
    for (std::size_t index=0; index<hour24_ether_report.size(); index++)
    {
        if(hour24_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_ether_report.size(); index++)
    {
        if(hour24_ether_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24EtherReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-ether-report")
    {
        for(auto const & c : hour24_ether_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport>();
        c->parent = this;
        hour24_ether_report.push_back(std::move(c));
        children[segment_path] = hour24_ether_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::get_children()
{
    for (auto const & c : hour24_ether_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::Hour24EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{
    yang_name = "hour24-ether-report"; yang_parent_name = "hour24-ether-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::~Hour24EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_data() const
{
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::has_operation() const
{
    return is_set(operation)
	|| is_set(ether_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-ether-report" <<"[ether-report='" <<ether_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24EtherReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.operation)) leaf_name_data.push_back(ether_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetHour24::Hour24Ether::Hour24EtherReports::Hour24EtherReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcms()
{
    yang_name = "minute15otn-tcms"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::~Minute15OtnTcms()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::has_data() const
{
    for (std::size_t index=0; index<minute15otn_tcm.size(); index++)
    {
        if(minute15otn_tcm[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_tcm.size(); index++)
    {
        if(minute15otn_tcm[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcms";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OtnTcms' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15otn-tcm")
    {
        for(auto const & c : minute15otn_tcm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm>();
        c->parent = this;
        minute15otn_tcm.push_back(std::move(c));
        children[segment_path] = minute15otn_tcm.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::get_children()
{
    for (auto const & c : minute15otn_tcm)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcm()
    :
    tcm_number{YType::int32, "tcm-number"}
    	,
    min15_otn_tcm_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes>())
	,minute15otn_tcm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports>())
{
    min15_otn_tcm_threshes->parent = this;
    children["min15-otn-tcm-threshes"] = min15_otn_tcm_threshes;

    minute15otn_tcm_reports->parent = this;
    children["minute15otn-tcm-reports"] = minute15otn_tcm_reports;

    yang_name = "minute15otn-tcm"; yang_parent_name = "minute15otn-tcms";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::~Minute15OtnTcm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::has_data() const
{
    return tcm_number.is_set
	|| (min15_otn_tcm_threshes !=  nullptr && min15_otn_tcm_threshes->has_data())
	|| (minute15otn_tcm_reports !=  nullptr && minute15otn_tcm_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::has_operation() const
{
    return is_set(operation)
	|| is_set(tcm_number.operation)
	|| (min15_otn_tcm_threshes !=  nullptr && min15_otn_tcm_threshes->has_operation())
	|| (minute15otn_tcm_reports !=  nullptr && minute15otn_tcm_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm" <<"[tcm-number='" <<tcm_number <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OtnTcm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcm_number.is_set || is_set(tcm_number.operation)) leaf_name_data.push_back(tcm_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "min15-otn-tcm-threshes")
    {
        if(min15_otn_tcm_threshes != nullptr)
        {
            children["min15-otn-tcm-threshes"] = min15_otn_tcm_threshes;
        }
        else
        {
            min15_otn_tcm_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes>();
            min15_otn_tcm_threshes->parent = this;
            children["min15-otn-tcm-threshes"] = min15_otn_tcm_threshes;
        }
        return children.at("min15-otn-tcm-threshes");
    }

    if(child_yang_name == "minute15otn-tcm-reports")
    {
        if(minute15otn_tcm_reports != nullptr)
        {
            children["minute15otn-tcm-reports"] = minute15otn_tcm_reports;
        }
        else
        {
            minute15otn_tcm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports>();
            minute15otn_tcm_reports->parent = this;
            children["minute15otn-tcm-reports"] = minute15otn_tcm_reports;
        }
        return children.at("minute15otn-tcm-reports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::get_children()
{
    if(children.find("min15-otn-tcm-threshes") == children.end())
    {
        if(min15_otn_tcm_threshes != nullptr)
        {
            children["min15-otn-tcm-threshes"] = min15_otn_tcm_threshes;
        }
    }

    if(children.find("minute15otn-tcm-reports") == children.end())
    {
        if(minute15otn_tcm_reports != nullptr)
        {
            children["minute15otn-tcm-reports"] = minute15otn_tcm_reports;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcm-number")
    {
        tcm_number = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThreshes()
{
    yang_name = "min15-otn-tcm-threshes"; yang_parent_name = "minute15otn-tcm";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::~Min15OtnTcmThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::has_data() const
{
    for (std::size_t index=0; index<min15_otn_tcm_thresh.size(); index++)
    {
        if(min15_otn_tcm_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::has_operation() const
{
    for (std::size_t index=0; index<min15_otn_tcm_thresh.size(); index++)
    {
        if(min15_otn_tcm_thresh[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-tcm-threshes";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Min15OtnTcmThreshes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "min15-otn-tcm-thresh")
    {
        for(auto const & c : min15_otn_tcm_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh>();
        c->parent = this;
        min15_otn_tcm_thresh.push_back(std::move(c));
        children[segment_path] = min15_otn_tcm_thresh.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::get_children()
{
    for (auto const & c : min15_otn_tcm_thresh)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::Min15OtnTcmThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{
    yang_name = "min15-otn-tcm-thresh"; yang_parent_name = "min15-otn-tcm-threshes";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::~Min15OtnTcmThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::has_operation() const
{
    return is_set(operation)
	|| is_set(otn_threshold.operation)
	|| is_set(otn_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-tcm-thresh" <<"[otn-threshold='" <<otn_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Min15OtnTcmThresh' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.operation)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.operation)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Min15OtnTcmThreshes::Min15OtnTcmThresh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReports()
{
    yang_name = "minute15otn-tcm-reports"; yang_parent_name = "minute15otn-tcm";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::~Minute15OtnTcmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::has_data() const
{
    for (std::size_t index=0; index<minute15otn_tcm_report.size(); index++)
    {
        if(minute15otn_tcm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_tcm_report.size(); index++)
    {
        if(minute15otn_tcm_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OtnTcmReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15otn-tcm-report")
    {
        for(auto const & c : minute15otn_tcm_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport>();
        c->parent = this;
        minute15otn_tcm_report.push_back(std::move(c));
        children[segment_path] = minute15otn_tcm_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::get_children()
{
    for (auto const & c : minute15otn_tcm_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::Minute15OtnTcmReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "minute15otn-tcm-report"; yang_parent_name = "minute15otn-tcm-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::~Minute15OtnTcmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::has_operation() const
{
    return is_set(operation)
	|| is_set(otn_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-tcm-report" <<"[otn-report='" <<otn_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OtnTcmReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.operation)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15OtnTcms::Minute15OtnTcm::Minute15OtnTcmReports::Minute15OtnTcmReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24()
    :
    oc_hour24_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn>())
{
    oc_hour24_ocn->parent = this;
    children["oc-hour24-ocn"] = oc_hour24_ocn;

    yang_name = "oc-hour24"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::~OcHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_data() const
{
    return (oc_hour24_ocn !=  nullptr && oc_hour24_ocn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::has_operation() const
{
    return is_set(operation)
	|| (oc_hour24_ocn !=  nullptr && oc_hour24_ocn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24-ocn")
    {
        if(oc_hour24_ocn != nullptr)
        {
            children["oc-hour24-ocn"] = oc_hour24_ocn;
        }
        else
        {
            oc_hour24_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn>();
            oc_hour24_ocn->parent = this;
            children["oc-hour24-ocn"] = oc_hour24_ocn;
        }
        return children.at("oc-hour24-ocn");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::get_children()
{
    if(children.find("oc-hour24-ocn") == children.end())
    {
        if(oc_hour24_ocn != nullptr)
        {
            children["oc-hour24-ocn"] = oc_hour24_ocn;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24Ocn()
    :
    oc_hour24_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports>())
	,oc_hour24_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds>())
{
    oc_hour24_ocn_reports->parent = this;
    children["oc-hour24-ocn-reports"] = oc_hour24_ocn_reports;

    oc_hour24_ocn_thresholds->parent = this;
    children["oc-hour24-ocn-thresholds"] = oc_hour24_ocn_thresholds;

    yang_name = "oc-hour24-ocn"; yang_parent_name = "oc-hour24";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::~OcHour24Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_data() const
{
    return (oc_hour24_ocn_reports !=  nullptr && oc_hour24_ocn_reports->has_data())
	|| (oc_hour24_ocn_thresholds !=  nullptr && oc_hour24_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::has_operation() const
{
    return is_set(operation)
	|| (oc_hour24_ocn_reports !=  nullptr && oc_hour24_ocn_reports->has_operation())
	|| (oc_hour24_ocn_thresholds !=  nullptr && oc_hour24_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24Ocn' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24-ocn-reports")
    {
        if(oc_hour24_ocn_reports != nullptr)
        {
            children["oc-hour24-ocn-reports"] = oc_hour24_ocn_reports;
        }
        else
        {
            oc_hour24_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports>();
            oc_hour24_ocn_reports->parent = this;
            children["oc-hour24-ocn-reports"] = oc_hour24_ocn_reports;
        }
        return children.at("oc-hour24-ocn-reports");
    }

    if(child_yang_name == "oc-hour24-ocn-thresholds")
    {
        if(oc_hour24_ocn_thresholds != nullptr)
        {
            children["oc-hour24-ocn-thresholds"] = oc_hour24_ocn_thresholds;
        }
        else
        {
            oc_hour24_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds>();
            oc_hour24_ocn_thresholds->parent = this;
            children["oc-hour24-ocn-thresholds"] = oc_hour24_ocn_thresholds;
        }
        return children.at("oc-hour24-ocn-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::get_children()
{
    if(children.find("oc-hour24-ocn-reports") == children.end())
    {
        if(oc_hour24_ocn_reports != nullptr)
        {
            children["oc-hour24-ocn-reports"] = oc_hour24_ocn_reports;
        }
    }

    if(children.find("oc-hour24-ocn-thresholds") == children.end())
    {
        if(oc_hour24_ocn_thresholds != nullptr)
        {
            children["oc-hour24-ocn-thresholds"] = oc_hour24_ocn_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReports()
{
    yang_name = "oc-hour24-ocn-reports"; yang_parent_name = "oc-hour24-ocn";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::~OcHour24OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_data() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_report.size(); index++)
    {
        if(oc_hour24_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_report.size(); index++)
    {
        if(oc_hour24_ocn_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24OcnReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24-ocn-report")
    {
        for(auto const & c : oc_hour24_ocn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport>();
        c->parent = this;
        oc_hour24_ocn_report.push_back(std::move(c));
        children[segment_path] = oc_hour24_ocn_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_children()
{
    for (auto const & c : oc_hour24_ocn_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::OcHour24OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "oc-hour24-ocn-report"; yang_parent_name = "oc-hour24-ocn-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::~OcHour24OcnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_data() const
{
    return ocn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::has_operation() const
{
    return is_set(operation)
	|| is_set(ocn_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-report" <<"[ocn-report='" <<ocn_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24OcnReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.operation)) leaf_name_data.push_back(ocn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThresholds()
{
    yang_name = "oc-hour24-ocn-thresholds"; yang_parent_name = "oc-hour24-ocn";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::~OcHour24OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_data() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.size(); index++)
    {
        if(oc_hour24_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.size(); index++)
    {
        if(oc_hour24_ocn_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24OcnThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24-ocn-threshold")
    {
        for(auto const & c : oc_hour24_ocn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold>();
        c->parent = this;
        oc_hour24_ocn_threshold.push_back(std::move(c));
        children[segment_path] = oc_hour24_ocn_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_children()
{
    for (auto const & c : oc_hour24_ocn_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::OcHour24OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::int32, "ocn-threshold-value"}
{
    yang_name = "oc-hour24-ocn-threshold"; yang_parent_name = "oc-hour24-ocn-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::~OcHour24OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_data() const
{
    return ocn_threshold.is_set
	|| ocn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(ocn_threshold.operation)
	|| is_set(ocn_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24-ocn-threshold" <<"[ocn-threshold='" <<ocn_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24OcnThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.operation)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.operation)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::EthernetMinute15()
    :
    minute15_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>())
{
    minute15_ether->parent = this;
    children["minute15-ether"] = minute15_ether;

    yang_name = "ethernet-minute15"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::~EthernetMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_data() const
{
    return (minute15_ether !=  nullptr && minute15_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_operation() const
{
    return is_set(operation)
	|| (minute15_ether !=  nullptr && minute15_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-minute15";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetMinute15' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-ether")
    {
        if(minute15_ether != nullptr)
        {
            children["minute15-ether"] = minute15_ether;
        }
        else
        {
            minute15_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>();
            minute15_ether->parent = this;
            children["minute15-ether"] = minute15_ether;
        }
        return children.at("minute15-ether");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_children()
{
    if(children.find("minute15-ether") == children.end())
    {
        if(minute15_ether != nullptr)
        {
            children["minute15-ether"] = minute15_ether;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15Ether()
    :
    minute15_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>())
	,minute15_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>())
{
    minute15_ether_reports->parent = this;
    children["minute15-ether-reports"] = minute15_ether_reports;

    minute15_ether_thresholds->parent = this;
    children["minute15-ether-thresholds"] = minute15_ether_thresholds;

    yang_name = "minute15-ether"; yang_parent_name = "ethernet-minute15";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::~Minute15Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_data() const
{
    return (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_data())
	|| (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_operation() const
{
    return is_set(operation)
	|| (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_operation())
	|| (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15Ether' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-ether-reports")
    {
        if(minute15_ether_reports != nullptr)
        {
            children["minute15-ether-reports"] = minute15_ether_reports;
        }
        else
        {
            minute15_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>();
            minute15_ether_reports->parent = this;
            children["minute15-ether-reports"] = minute15_ether_reports;
        }
        return children.at("minute15-ether-reports");
    }

    if(child_yang_name == "minute15-ether-thresholds")
    {
        if(minute15_ether_thresholds != nullptr)
        {
            children["minute15-ether-thresholds"] = minute15_ether_thresholds;
        }
        else
        {
            minute15_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>();
            minute15_ether_thresholds->parent = this;
            children["minute15-ether-thresholds"] = minute15_ether_thresholds;
        }
        return children.at("minute15-ether-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_children()
{
    if(children.find("minute15-ether-reports") == children.end())
    {
        if(minute15_ether_reports != nullptr)
        {
            children["minute15-ether-reports"] = minute15_ether_reports;
        }
    }

    if(children.find("minute15-ether-thresholds") == children.end())
    {
        if(minute15_ether_thresholds != nullptr)
        {
            children["minute15-ether-thresholds"] = minute15_ether_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThresholds()
{
    yang_name = "minute15-ether-thresholds"; yang_parent_name = "minute15-ether";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::~Minute15EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_data() const
{
    for (std::size_t index=0; index<minute15_ether_threshold.size(); index++)
    {
        if(minute15_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_threshold.size(); index++)
    {
        if(minute15_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15EtherThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-ether-threshold")
    {
        for(auto const & c : minute15_ether_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold>();
        c->parent = this;
        minute15_ether_threshold.push_back(std::move(c));
        children[segment_path] = minute15_ether_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_children()
{
    for (auto const & c : minute15_ether_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::Minute15EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::int32, "ether-threshold-value"}
{
    yang_name = "minute15-ether-threshold"; yang_parent_name = "minute15-ether-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::~Minute15EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_data() const
{
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(ether_threshold.operation)
	|| is_set(ether_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-threshold" <<"[ether-threshold='" <<ether_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15EtherThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.operation)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.operation)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReports()
{
    yang_name = "minute15-ether-reports"; yang_parent_name = "minute15-ether";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::~Minute15EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_data() const
{
    for (std::size_t index=0; index<minute15_ether_report.size(); index++)
    {
        if(minute15_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_report.size(); index++)
    {
        if(minute15_ether_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15EtherReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-ether-report")
    {
        for(auto const & c : minute15_ether_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport>();
        c->parent = this;
        minute15_ether_report.push_back(std::move(c));
        children[segment_path] = minute15_ether_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_children()
{
    for (auto const & c : minute15_ether_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::Minute15EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{
    yang_name = "minute15-ether-report"; yang_parent_name = "minute15-ether-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::~Minute15EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_data() const
{
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_operation() const
{
    return is_set(operation)
	|| is_set(ether_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-report" <<"[ether-report='" <<ether_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15EtherReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.operation)) leaf_name_data.push_back(ether_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24()
    :
    ho_vc_hour24ho_vc(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc>())
{
    ho_vc_hour24ho_vc->parent = this;
    children["ho-vc-hour24ho-vc"] = ho_vc_hour24ho_vc;

    yang_name = "ho-vc-hour24"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::~HoVcHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_data() const
{
    return (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_operation() const
{
    return is_set(operation)
	|| (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcHour24' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-hour24ho-vc")
    {
        if(ho_vc_hour24ho_vc != nullptr)
        {
            children["ho-vc-hour24ho-vc"] = ho_vc_hour24ho_vc;
        }
        else
        {
            ho_vc_hour24ho_vc = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc>();
            ho_vc_hour24ho_vc->parent = this;
            children["ho-vc-hour24ho-vc"] = ho_vc_hour24ho_vc;
        }
        return children.at("ho-vc-hour24ho-vc");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_children()
{
    if(children.find("ho-vc-hour24ho-vc") == children.end())
    {
        if(ho_vc_hour24ho_vc != nullptr)
        {
            children["ho-vc-hour24ho-vc"] = ho_vc_hour24ho_vc;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVc()
    :
    ho_vc_hour24ho_vc_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports>())
	,ho_vc_hour24ho_vc_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds>())
{
    ho_vc_hour24ho_vc_reports->parent = this;
    children["ho-vc-hour24ho-vc-reports"] = ho_vc_hour24ho_vc_reports;

    ho_vc_hour24ho_vc_thresholds->parent = this;
    children["ho-vc-hour24ho-vc-thresholds"] = ho_vc_hour24ho_vc_thresholds;

    yang_name = "ho-vc-hour24ho-vc"; yang_parent_name = "ho-vc-hour24";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::~HoVcHour24HoVc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::has_data() const
{
    return (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_data())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::has_operation() const
{
    return is_set(operation)
	|| (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_operation())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcHour24HoVc' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-hour24ho-vc-reports")
    {
        if(ho_vc_hour24ho_vc_reports != nullptr)
        {
            children["ho-vc-hour24ho-vc-reports"] = ho_vc_hour24ho_vc_reports;
        }
        else
        {
            ho_vc_hour24ho_vc_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports>();
            ho_vc_hour24ho_vc_reports->parent = this;
            children["ho-vc-hour24ho-vc-reports"] = ho_vc_hour24ho_vc_reports;
        }
        return children.at("ho-vc-hour24ho-vc-reports");
    }

    if(child_yang_name == "ho-vc-hour24ho-vc-thresholds")
    {
        if(ho_vc_hour24ho_vc_thresholds != nullptr)
        {
            children["ho-vc-hour24ho-vc-thresholds"] = ho_vc_hour24ho_vc_thresholds;
        }
        else
        {
            ho_vc_hour24ho_vc_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds>();
            ho_vc_hour24ho_vc_thresholds->parent = this;
            children["ho-vc-hour24ho-vc-thresholds"] = ho_vc_hour24ho_vc_thresholds;
        }
        return children.at("ho-vc-hour24ho-vc-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::get_children()
{
    if(children.find("ho-vc-hour24ho-vc-reports") == children.end())
    {
        if(ho_vc_hour24ho_vc_reports != nullptr)
        {
            children["ho-vc-hour24ho-vc-reports"] = ho_vc_hour24ho_vc_reports;
        }
    }

    if(children.find("ho-vc-hour24ho-vc-thresholds") == children.end())
    {
        if(ho_vc_hour24ho_vc_thresholds != nullptr)
        {
            children["ho-vc-hour24ho-vc-thresholds"] = ho_vc_hour24ho_vc_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReports()
{
    yang_name = "ho-vc-hour24ho-vc-reports"; yang_parent_name = "ho-vc-hour24ho-vc";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::~HoVcHour24HoVcReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.size(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.size(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcHour24HoVcReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-hour24ho-vc-report")
    {
        for(auto const & c : ho_vc_hour24ho_vc_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport>();
        c->parent = this;
        ho_vc_hour24ho_vc_report.push_back(std::move(c));
        children[segment_path] = ho_vc_hour24ho_vc_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::get_children()
{
    for (auto const & c : ho_vc_hour24ho_vc_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::HoVcHour24HoVcReport()
    :
    ho_vc_report{YType::enumeration, "ho-vc-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "ho-vc-hour24ho-vc-report"; yang_parent_name = "ho-vc-hour24ho-vc-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::~HoVcHour24HoVcReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::has_data() const
{
    return ho_vc_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::has_operation() const
{
    return is_set(operation)
	|| is_set(ho_vc_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-report" <<"[ho-vc-report='" <<ho_vc_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcHour24HoVcReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_report.is_set || is_set(ho_vc_report.operation)) leaf_name_data.push_back(ho_vc_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcReports::HoVcHour24HoVcReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThresholds()
{
    yang_name = "ho-vc-hour24ho-vc-thresholds"; yang_parent_name = "ho-vc-hour24ho-vc";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::~HoVcHour24HoVcThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.size(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.size(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcHour24HoVcThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-hour24ho-vc-threshold")
    {
        for(auto const & c : ho_vc_hour24ho_vc_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold>();
        c->parent = this;
        ho_vc_hour24ho_vc_threshold.push_back(std::move(c));
        children[segment_path] = ho_vc_hour24ho_vc_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::get_children()
{
    for (auto const & c : ho_vc_hour24ho_vc_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::HoVcHour24HoVcThreshold()
    :
    ho_vc_threshold{YType::enumeration, "ho-vc-threshold"},
    ho_vc_threshold_value{YType::int32, "ho-vc-threshold-value"}
{
    yang_name = "ho-vc-hour24ho-vc-threshold"; yang_parent_name = "ho-vc-hour24ho-vc-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::~HoVcHour24HoVcThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::has_data() const
{
    return ho_vc_threshold.is_set
	|| ho_vc_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(ho_vc_threshold.operation)
	|| is_set(ho_vc_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-threshold" <<"[ho-vc-threshold='" <<ho_vc_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcHour24HoVcThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_threshold.is_set || is_set(ho_vc_threshold.operation)) leaf_name_data.push_back(ho_vc_threshold.get_name_leafdata());
    if (ho_vc_threshold_value.is_set || is_set(ho_vc_threshold_value.operation)) leaf_name_data.push_back(ho_vc_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24HoVc::HoVcHour24HoVcThresholds::HoVcHour24HoVcThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold = value;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30()
    :
    second30_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics>())
	,second30fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec>())
	,second30otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn>())
{
    second30_optics->parent = this;
    children["second30-optics"] = second30_optics;

    second30fec->parent = this;
    children["second30fec"] = second30fec;

    second30otn->parent = this;
    children["second30otn"] = second30otn;

    yang_name = "second30"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::~Second30()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_data() const
{
    return (second30_optics !=  nullptr && second30_optics->has_data())
	|| (second30fec !=  nullptr && second30fec->has_data())
	|| (second30otn !=  nullptr && second30otn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_operation() const
{
    return is_set(operation)
	|| (second30_optics !=  nullptr && second30_optics->has_operation())
	|| (second30fec !=  nullptr && second30fec->has_operation())
	|| (second30otn !=  nullptr && second30otn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30-optics")
    {
        if(second30_optics != nullptr)
        {
            children["second30-optics"] = second30_optics;
        }
        else
        {
            second30_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics>();
            second30_optics->parent = this;
            children["second30-optics"] = second30_optics;
        }
        return children.at("second30-optics");
    }

    if(child_yang_name == "second30fec")
    {
        if(second30fec != nullptr)
        {
            children["second30fec"] = second30fec;
        }
        else
        {
            second30fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec>();
            second30fec->parent = this;
            children["second30fec"] = second30fec;
        }
        return children.at("second30fec");
    }

    if(child_yang_name == "second30otn")
    {
        if(second30otn != nullptr)
        {
            children["second30otn"] = second30otn;
        }
        else
        {
            second30otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn>();
            second30otn->parent = this;
            children["second30otn"] = second30otn;
        }
        return children.at("second30otn");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_children()
{
    if(children.find("second30-optics") == children.end())
    {
        if(second30_optics != nullptr)
        {
            children["second30-optics"] = second30_optics;
        }
    }

    if(children.find("second30fec") == children.end())
    {
        if(second30fec != nullptr)
        {
            children["second30fec"] = second30fec;
        }
    }

    if(children.find("second30otn") == children.end())
    {
        if(second30otn != nullptr)
        {
            children["second30otn"] = second30otn;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30Fec()
    :
    second30fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports>())
	,second30fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds>())
{
    second30fec_reports->parent = this;
    children["second30fec-reports"] = second30fec_reports;

    second30fec_thresholds->parent = this;
    children["second30fec-thresholds"] = second30fec_thresholds;

    yang_name = "second30fec"; yang_parent_name = "second30";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::~Second30Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::has_data() const
{
    return (second30fec_reports !=  nullptr && second30fec_reports->has_data())
	|| (second30fec_thresholds !=  nullptr && second30fec_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::has_operation() const
{
    return is_set(operation)
	|| (second30fec_reports !=  nullptr && second30fec_reports->has_operation())
	|| (second30fec_thresholds !=  nullptr && second30fec_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30Fec' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30fec-reports")
    {
        if(second30fec_reports != nullptr)
        {
            children["second30fec-reports"] = second30fec_reports;
        }
        else
        {
            second30fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports>();
            second30fec_reports->parent = this;
            children["second30fec-reports"] = second30fec_reports;
        }
        return children.at("second30fec-reports");
    }

    if(child_yang_name == "second30fec-thresholds")
    {
        if(second30fec_thresholds != nullptr)
        {
            children["second30fec-thresholds"] = second30fec_thresholds;
        }
        else
        {
            second30fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds>();
            second30fec_thresholds->parent = this;
            children["second30fec-thresholds"] = second30fec_thresholds;
        }
        return children.at("second30fec-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::get_children()
{
    if(children.find("second30fec-reports") == children.end())
    {
        if(second30fec_reports != nullptr)
        {
            children["second30fec-reports"] = second30fec_reports;
        }
    }

    if(children.find("second30fec-thresholds") == children.end())
    {
        if(second30fec_thresholds != nullptr)
        {
            children["second30fec-thresholds"] = second30fec_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThresholds()
{
    yang_name = "second30fec-thresholds"; yang_parent_name = "second30fec";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::~Second30FecThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::has_data() const
{
    for (std::size_t index=0; index<second30fec_threshold.size(); index++)
    {
        if(second30fec_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30fec_threshold.size(); index++)
    {
        if(second30fec_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30FecThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30fec-threshold")
    {
        for(auto const & c : second30fec_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold>();
        c->parent = this;
        second30fec_threshold.push_back(std::move(c));
        children[segment_path] = second30fec_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::get_children()
{
    for (auto const & c : second30fec_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::Second30FecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{
    yang_name = "second30fec-threshold"; yang_parent_name = "second30fec-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::~Second30FecThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::has_data() const
{
    return fec_threshold.is_set
	|| fec_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_threshold.operation)
	|| is_set(fec_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-threshold" <<"[fec-threshold='" <<fec_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30FecThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.operation)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.operation)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecThresholds::Second30FecThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-threshold")
    {
        fec_threshold = value;
    }
    if(value_path == "fec-threshold-value")
    {
        fec_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReports()
{
    yang_name = "second30fec-reports"; yang_parent_name = "second30fec";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::~Second30FecReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::has_data() const
{
    for (std::size_t index=0; index<second30fec_report.size(); index++)
    {
        if(second30fec_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::has_operation() const
{
    for (std::size_t index=0; index<second30fec_report.size(); index++)
    {
        if(second30fec_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30FecReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30fec-report")
    {
        for(auto const & c : second30fec_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport>();
        c->parent = this;
        second30fec_report.push_back(std::move(c));
        children[segment_path] = second30fec_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::get_children()
{
    for (auto const & c : second30fec_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::Second30FecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "second30fec-report"; yang_parent_name = "second30fec-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::~Second30FecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::has_data() const
{
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-report" <<"[fec-report='" <<fec_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30FecReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.operation)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Fec::Second30FecReports::Second30FecReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-report")
    {
        fec_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30Optics()
    :
    second30_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports>())
	,second30_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds>())
{
    second30_optics_reports->parent = this;
    children["second30-optics-reports"] = second30_optics_reports;

    second30_optics_thresholds->parent = this;
    children["second30-optics-thresholds"] = second30_optics_thresholds;

    yang_name = "second30-optics"; yang_parent_name = "second30";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::~Second30Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::has_data() const
{
    return (second30_optics_reports !=  nullptr && second30_optics_reports->has_data())
	|| (second30_optics_thresholds !=  nullptr && second30_optics_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::has_operation() const
{
    return is_set(operation)
	|| (second30_optics_reports !=  nullptr && second30_optics_reports->has_operation())
	|| (second30_optics_thresholds !=  nullptr && second30_optics_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30Optics' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30-optics-reports")
    {
        if(second30_optics_reports != nullptr)
        {
            children["second30-optics-reports"] = second30_optics_reports;
        }
        else
        {
            second30_optics_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports>();
            second30_optics_reports->parent = this;
            children["second30-optics-reports"] = second30_optics_reports;
        }
        return children.at("second30-optics-reports");
    }

    if(child_yang_name == "second30-optics-thresholds")
    {
        if(second30_optics_thresholds != nullptr)
        {
            children["second30-optics-thresholds"] = second30_optics_thresholds;
        }
        else
        {
            second30_optics_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds>();
            second30_optics_thresholds->parent = this;
            children["second30-optics-thresholds"] = second30_optics_thresholds;
        }
        return children.at("second30-optics-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_children()
{
    if(children.find("second30-optics-reports") == children.end())
    {
        if(second30_optics_reports != nullptr)
        {
            children["second30-optics-reports"] = second30_optics_reports;
        }
    }

    if(children.find("second30-optics-thresholds") == children.end())
    {
        if(second30_optics_thresholds != nullptr)
        {
            children["second30-optics-thresholds"] = second30_optics_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReports()
{
    yang_name = "second30-optics-reports"; yang_parent_name = "second30-optics";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::~Second30OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::has_data() const
{
    for (std::size_t index=0; index<second30_optics_report.size(); index++)
    {
        if(second30_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<second30_optics_report.size(); index++)
    {
        if(second30_optics_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30OpticsReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30-optics-report")
    {
        for(auto const & c : second30_optics_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport>();
        c->parent = this;
        second30_optics_report.push_back(std::move(c));
        children[segment_path] = second30_optics_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_children()
{
    for (auto const & c : second30_optics_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::Second30OpticsReport()
    :
    optics_report{YType::enumeration, "optics-report"}
{
    yang_name = "second30-optics-report"; yang_parent_name = "second30-optics-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::~Second30OpticsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::has_data() const
{
    return optics_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::has_operation() const
{
    return is_set(operation)
	|| is_set(optics_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-report" <<"[optics-report='" <<optics_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30OpticsReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.operation)) leaf_name_data.push_back(optics_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "optics-report")
    {
        optics_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThresholds()
{
    yang_name = "second30-optics-thresholds"; yang_parent_name = "second30-optics";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::~Second30OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::has_data() const
{
    for (std::size_t index=0; index<second30_optics_threshold.size(); index++)
    {
        if(second30_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30_optics_threshold.size(); index++)
    {
        if(second30_optics_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30OpticsThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30-optics-threshold")
    {
        for(auto const & c : second30_optics_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold>();
        c->parent = this;
        second30_optics_threshold.push_back(std::move(c));
        children[segment_path] = second30_optics_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_children()
{
    for (auto const & c : second30_optics_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::Second30OpticsThreshold()
    :
    optics_threshold{YType::enumeration, "optics-threshold"},
    optics_threshold_value{YType::int32, "optics-threshold-value"}
{
    yang_name = "second30-optics-threshold"; yang_parent_name = "second30-optics-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::~Second30OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_data() const
{
    return optics_threshold.is_set
	|| optics_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(optics_threshold.operation)
	|| is_set(optics_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-optics-threshold" <<"[optics-threshold='" <<optics_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30OpticsThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_threshold.is_set || is_set(optics_threshold.operation)) leaf_name_data.push_back(optics_threshold.get_name_leafdata());
    if (optics_threshold_value.is_set || is_set(optics_threshold_value.operation)) leaf_name_data.push_back(optics_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold = value;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30Otn()
    :
    second30_otn_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes>())
	,second30otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports>())
{
    second30_otn_threshes->parent = this;
    children["second30-otn-threshes"] = second30_otn_threshes;

    second30otn_reports->parent = this;
    children["second30otn-reports"] = second30otn_reports;

    yang_name = "second30otn"; yang_parent_name = "second30";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::~Second30Otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::has_data() const
{
    return (second30_otn_threshes !=  nullptr && second30_otn_threshes->has_data())
	|| (second30otn_reports !=  nullptr && second30otn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::has_operation() const
{
    return is_set(operation)
	|| (second30_otn_threshes !=  nullptr && second30_otn_threshes->has_operation())
	|| (second30otn_reports !=  nullptr && second30otn_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30Otn' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30-otn-threshes")
    {
        if(second30_otn_threshes != nullptr)
        {
            children["second30-otn-threshes"] = second30_otn_threshes;
        }
        else
        {
            second30_otn_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes>();
            second30_otn_threshes->parent = this;
            children["second30-otn-threshes"] = second30_otn_threshes;
        }
        return children.at("second30-otn-threshes");
    }

    if(child_yang_name == "second30otn-reports")
    {
        if(second30otn_reports != nullptr)
        {
            children["second30otn-reports"] = second30otn_reports;
        }
        else
        {
            second30otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports>();
            second30otn_reports->parent = this;
            children["second30otn-reports"] = second30otn_reports;
        }
        return children.at("second30otn-reports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::get_children()
{
    if(children.find("second30-otn-threshes") == children.end())
    {
        if(second30_otn_threshes != nullptr)
        {
            children["second30-otn-threshes"] = second30_otn_threshes;
        }
    }

    if(children.find("second30otn-reports") == children.end())
    {
        if(second30otn_reports != nullptr)
        {
            children["second30otn-reports"] = second30otn_reports;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThreshes()
{
    yang_name = "second30-otn-threshes"; yang_parent_name = "second30otn";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::~Second30OtnThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::has_data() const
{
    for (std::size_t index=0; index<second30_otn_thresh.size(); index++)
    {
        if(second30_otn_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::has_operation() const
{
    for (std::size_t index=0; index<second30_otn_thresh.size(); index++)
    {
        if(second30_otn_thresh[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-otn-threshes";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30OtnThreshes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30-otn-thresh")
    {
        for(auto const & c : second30_otn_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh>();
        c->parent = this;
        second30_otn_thresh.push_back(std::move(c));
        children[segment_path] = second30_otn_thresh.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::get_children()
{
    for (auto const & c : second30_otn_thresh)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::Second30OtnThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{
    yang_name = "second30-otn-thresh"; yang_parent_name = "second30-otn-threshes";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::~Second30OtnThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::has_operation() const
{
    return is_set(operation)
	|| is_set(otn_threshold.operation)
	|| is_set(otn_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-otn-thresh" <<"[otn-threshold='" <<otn_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30OtnThresh' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.operation)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.operation)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnThreshes::Second30OtnThresh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReports()
{
    yang_name = "second30otn-reports"; yang_parent_name = "second30otn";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::~Second30OtnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::has_data() const
{
    for (std::size_t index=0; index<second30otn_report.size(); index++)
    {
        if(second30otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::has_operation() const
{
    for (std::size_t index=0; index<second30otn_report.size(); index++)
    {
        if(second30otn_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30OtnReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30otn-report")
    {
        for(auto const & c : second30otn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport>();
        c->parent = this;
        second30otn_report.push_back(std::move(c));
        children[segment_path] = second30otn_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::get_children()
{
    for (auto const & c : second30otn_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::Second30OtnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "second30otn-report"; yang_parent_name = "second30otn-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::~Second30OtnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::has_operation() const
{
    return is_set(operation)
	|| is_set(otn_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn-report" <<"[otn-report='" <<otn_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30OtnReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.operation)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Otn::Second30OtnReports::Second30OtnReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcms()
{
    yang_name = "hour24otn-tcms"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::~Hour24OtnTcms()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::has_data() const
{
    for (std::size_t index=0; index<hour24otn_tcm.size(); index++)
    {
        if(hour24otn_tcm[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm.size(); index++)
    {
        if(hour24otn_tcm[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcms";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnTcms' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24otn-tcm")
    {
        for(auto const & c : hour24otn_tcm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm>();
        c->parent = this;
        hour24otn_tcm.push_back(std::move(c));
        children[segment_path] = hour24otn_tcm.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::get_children()
{
    for (auto const & c : hour24otn_tcm)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcm()
    :
    tcm_number{YType::int32, "tcm-number"}
    	,
    hour24otn_tcm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports>())
	,hour24otn_tcm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds>())
{
    hour24otn_tcm_reports->parent = this;
    children["hour24otn-tcm-reports"] = hour24otn_tcm_reports;

    hour24otn_tcm_thresholds->parent = this;
    children["hour24otn-tcm-thresholds"] = hour24otn_tcm_thresholds;

    yang_name = "hour24otn-tcm"; yang_parent_name = "hour24otn-tcms";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::~Hour24OtnTcm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::has_data() const
{
    return tcm_number.is_set
	|| (hour24otn_tcm_reports !=  nullptr && hour24otn_tcm_reports->has_data())
	|| (hour24otn_tcm_thresholds !=  nullptr && hour24otn_tcm_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::has_operation() const
{
    return is_set(operation)
	|| is_set(tcm_number.operation)
	|| (hour24otn_tcm_reports !=  nullptr && hour24otn_tcm_reports->has_operation())
	|| (hour24otn_tcm_thresholds !=  nullptr && hour24otn_tcm_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm" <<"[tcm-number='" <<tcm_number <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnTcm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcm_number.is_set || is_set(tcm_number.operation)) leaf_name_data.push_back(tcm_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24otn-tcm-reports")
    {
        if(hour24otn_tcm_reports != nullptr)
        {
            children["hour24otn-tcm-reports"] = hour24otn_tcm_reports;
        }
        else
        {
            hour24otn_tcm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports>();
            hour24otn_tcm_reports->parent = this;
            children["hour24otn-tcm-reports"] = hour24otn_tcm_reports;
        }
        return children.at("hour24otn-tcm-reports");
    }

    if(child_yang_name == "hour24otn-tcm-thresholds")
    {
        if(hour24otn_tcm_thresholds != nullptr)
        {
            children["hour24otn-tcm-thresholds"] = hour24otn_tcm_thresholds;
        }
        else
        {
            hour24otn_tcm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds>();
            hour24otn_tcm_thresholds->parent = this;
            children["hour24otn-tcm-thresholds"] = hour24otn_tcm_thresholds;
        }
        return children.at("hour24otn-tcm-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::get_children()
{
    if(children.find("hour24otn-tcm-reports") == children.end())
    {
        if(hour24otn_tcm_reports != nullptr)
        {
            children["hour24otn-tcm-reports"] = hour24otn_tcm_reports;
        }
    }

    if(children.find("hour24otn-tcm-thresholds") == children.end())
    {
        if(hour24otn_tcm_thresholds != nullptr)
        {
            children["hour24otn-tcm-thresholds"] = hour24otn_tcm_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcm-number")
    {
        tcm_number = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThresholds()
{
    yang_name = "hour24otn-tcm-thresholds"; yang_parent_name = "hour24otn-tcm";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::~Hour24OtnTcmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24otn_tcm_threshold.size(); index++)
    {
        if(hour24otn_tcm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm_threshold.size(); index++)
    {
        if(hour24otn_tcm_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnTcmThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24otn-tcm-threshold")
    {
        for(auto const & c : hour24otn_tcm_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold>();
        c->parent = this;
        hour24otn_tcm_threshold.push_back(std::move(c));
        children[segment_path] = hour24otn_tcm_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::get_children()
{
    for (auto const & c : hour24otn_tcm_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::Hour24OtnTcmThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{
    yang_name = "hour24otn-tcm-threshold"; yang_parent_name = "hour24otn-tcm-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::~Hour24OtnTcmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(otn_threshold.operation)
	|| is_set(otn_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-threshold" <<"[otn-threshold='" <<otn_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnTcmThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.operation)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.operation)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmThresholds::Hour24OtnTcmThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReports()
{
    yang_name = "hour24otn-tcm-reports"; yang_parent_name = "hour24otn-tcm";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::~Hour24OtnTcmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::has_data() const
{
    for (std::size_t index=0; index<hour24otn_tcm_report.size(); index++)
    {
        if(hour24otn_tcm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm_report.size(); index++)
    {
        if(hour24otn_tcm_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnTcmReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24otn-tcm-report")
    {
        for(auto const & c : hour24otn_tcm_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport>();
        c->parent = this;
        hour24otn_tcm_report.push_back(std::move(c));
        children[segment_path] = hour24otn_tcm_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::get_children()
{
    for (auto const & c : hour24otn_tcm_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::Hour24OtnTcmReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "hour24otn-tcm-report"; yang_parent_name = "hour24otn-tcm-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::~Hour24OtnTcmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::has_operation() const
{
    return is_set(operation)
	|| is_set(otn_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-report" <<"[otn-report='" <<otn_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnTcmReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.operation)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24OtnTcms::Hour24OtnTcm::Hour24OtnTcmReports::Hour24OtnTcmReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15()
    :
    sts_minute15_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path>())
{
    sts_minute15_path->parent = this;
    children["sts-minute15-path"] = sts_minute15_path;

    yang_name = "sts-minute15"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::~StsMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::has_data() const
{
    return (sts_minute15_path !=  nullptr && sts_minute15_path->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::has_operation() const
{
    return is_set(operation)
	|| (sts_minute15_path !=  nullptr && sts_minute15_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsMinute15' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-minute15-path")
    {
        if(sts_minute15_path != nullptr)
        {
            children["sts-minute15-path"] = sts_minute15_path;
        }
        else
        {
            sts_minute15_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path>();
            sts_minute15_path->parent = this;
            children["sts-minute15-path"] = sts_minute15_path;
        }
        return children.at("sts-minute15-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_children()
{
    if(children.find("sts-minute15-path") == children.end())
    {
        if(sts_minute15_path != nullptr)
        {
            children["sts-minute15-path"] = sts_minute15_path;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15Path()
    :
    sts_minute15_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports>())
	,sts_minute15_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds>())
{
    sts_minute15_path_reports->parent = this;
    children["sts-minute15-path-reports"] = sts_minute15_path_reports;

    sts_minute15_path_thresholds->parent = this;
    children["sts-minute15-path-thresholds"] = sts_minute15_path_thresholds;

    yang_name = "sts-minute15-path"; yang_parent_name = "sts-minute15";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::~StsMinute15Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::has_data() const
{
    return (sts_minute15_path_reports !=  nullptr && sts_minute15_path_reports->has_data())
	|| (sts_minute15_path_thresholds !=  nullptr && sts_minute15_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::has_operation() const
{
    return is_set(operation)
	|| (sts_minute15_path_reports !=  nullptr && sts_minute15_path_reports->has_operation())
	|| (sts_minute15_path_thresholds !=  nullptr && sts_minute15_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsMinute15Path' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-minute15-path-reports")
    {
        if(sts_minute15_path_reports != nullptr)
        {
            children["sts-minute15-path-reports"] = sts_minute15_path_reports;
        }
        else
        {
            sts_minute15_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports>();
            sts_minute15_path_reports->parent = this;
            children["sts-minute15-path-reports"] = sts_minute15_path_reports;
        }
        return children.at("sts-minute15-path-reports");
    }

    if(child_yang_name == "sts-minute15-path-thresholds")
    {
        if(sts_minute15_path_thresholds != nullptr)
        {
            children["sts-minute15-path-thresholds"] = sts_minute15_path_thresholds;
        }
        else
        {
            sts_minute15_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds>();
            sts_minute15_path_thresholds->parent = this;
            children["sts-minute15-path-thresholds"] = sts_minute15_path_thresholds;
        }
        return children.at("sts-minute15-path-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_children()
{
    if(children.find("sts-minute15-path-reports") == children.end())
    {
        if(sts_minute15_path_reports != nullptr)
        {
            children["sts-minute15-path-reports"] = sts_minute15_path_reports;
        }
    }

    if(children.find("sts-minute15-path-thresholds") == children.end())
    {
        if(sts_minute15_path_thresholds != nullptr)
        {
            children["sts-minute15-path-thresholds"] = sts_minute15_path_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReports()
{
    yang_name = "sts-minute15-path-reports"; yang_parent_name = "sts-minute15-path";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::~StsMinute15PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::has_data() const
{
    for (std::size_t index=0; index<sts_minute15_path_report.size(); index++)
    {
        if(sts_minute15_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_report.size(); index++)
    {
        if(sts_minute15_path_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsMinute15PathReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-minute15-path-report")
    {
        for(auto const & c : sts_minute15_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport>();
        c->parent = this;
        sts_minute15_path_report.push_back(std::move(c));
        children[segment_path] = sts_minute15_path_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_children()
{
    for (auto const & c : sts_minute15_path_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::StsMinute15PathReport()
    :
    path_report{YType::enumeration, "path-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "sts-minute15-path-report"; yang_parent_name = "sts-minute15-path-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::~StsMinute15PathReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::has_data() const
{
    return path_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::has_operation() const
{
    return is_set(operation)
	|| is_set(path_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-report" <<"[path-report='" <<path_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsMinute15PathReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.operation)) leaf_name_data.push_back(path_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-report")
    {
        path_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThresholds()
{
    yang_name = "sts-minute15-path-thresholds"; yang_parent_name = "sts-minute15-path";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::~StsMinute15PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::has_data() const
{
    for (std::size_t index=0; index<sts_minute15_path_threshold.size(); index++)
    {
        if(sts_minute15_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_threshold.size(); index++)
    {
        if(sts_minute15_path_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsMinute15PathThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-minute15-path-threshold")
    {
        for(auto const & c : sts_minute15_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold>();
        c->parent = this;
        sts_minute15_path_threshold.push_back(std::move(c));
        children[segment_path] = sts_minute15_path_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_children()
{
    for (auto const & c : sts_minute15_path_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::StsMinute15PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::int32, "path-threshold-value"}
{
    yang_name = "sts-minute15-path-threshold"; yang_parent_name = "sts-minute15-path-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::~StsMinute15PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::has_data() const
{
    return path_threshold.is_set
	|| path_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(path_threshold.operation)
	|| is_set(path_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-threshold" <<"[path-threshold='" <<path_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsMinute15PathThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.operation)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.operation)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24()
    :
    hour24_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics>())
	,hour24fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec>())
	,hour24otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn>())
{
    hour24_optics->parent = this;
    children["hour24-optics"] = hour24_optics;

    hour24fec->parent = this;
    children["hour24fec"] = hour24fec;

    hour24otn->parent = this;
    children["hour24otn"] = hour24otn;

    yang_name = "hour24"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::~Hour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_data() const
{
    return (hour24_optics !=  nullptr && hour24_optics->has_data())
	|| (hour24fec !=  nullptr && hour24fec->has_data())
	|| (hour24otn !=  nullptr && hour24otn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_operation() const
{
    return is_set(operation)
	|| (hour24_optics !=  nullptr && hour24_optics->has_operation())
	|| (hour24fec !=  nullptr && hour24fec->has_operation())
	|| (hour24otn !=  nullptr && hour24otn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-optics")
    {
        if(hour24_optics != nullptr)
        {
            children["hour24-optics"] = hour24_optics;
        }
        else
        {
            hour24_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics>();
            hour24_optics->parent = this;
            children["hour24-optics"] = hour24_optics;
        }
        return children.at("hour24-optics");
    }

    if(child_yang_name == "hour24fec")
    {
        if(hour24fec != nullptr)
        {
            children["hour24fec"] = hour24fec;
        }
        else
        {
            hour24fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec>();
            hour24fec->parent = this;
            children["hour24fec"] = hour24fec;
        }
        return children.at("hour24fec");
    }

    if(child_yang_name == "hour24otn")
    {
        if(hour24otn != nullptr)
        {
            children["hour24otn"] = hour24otn;
        }
        else
        {
            hour24otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn>();
            hour24otn->parent = this;
            children["hour24otn"] = hour24otn;
        }
        return children.at("hour24otn");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_children()
{
    if(children.find("hour24-optics") == children.end())
    {
        if(hour24_optics != nullptr)
        {
            children["hour24-optics"] = hour24_optics;
        }
    }

    if(children.find("hour24fec") == children.end())
    {
        if(hour24fec != nullptr)
        {
            children["hour24fec"] = hour24fec;
        }
    }

    if(children.find("hour24otn") == children.end())
    {
        if(hour24otn != nullptr)
        {
            children["hour24otn"] = hour24otn;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24Otn()
    :
    hour24otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports>())
	,hour24otn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds>())
{
    hour24otn_reports->parent = this;
    children["hour24otn-reports"] = hour24otn_reports;

    hour24otn_thresholds->parent = this;
    children["hour24otn-thresholds"] = hour24otn_thresholds;

    yang_name = "hour24otn"; yang_parent_name = "hour24";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::~Hour24Otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::has_data() const
{
    return (hour24otn_reports !=  nullptr && hour24otn_reports->has_data())
	|| (hour24otn_thresholds !=  nullptr && hour24otn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::has_operation() const
{
    return is_set(operation)
	|| (hour24otn_reports !=  nullptr && hour24otn_reports->has_operation())
	|| (hour24otn_thresholds !=  nullptr && hour24otn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24Otn' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24otn-reports")
    {
        if(hour24otn_reports != nullptr)
        {
            children["hour24otn-reports"] = hour24otn_reports;
        }
        else
        {
            hour24otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports>();
            hour24otn_reports->parent = this;
            children["hour24otn-reports"] = hour24otn_reports;
        }
        return children.at("hour24otn-reports");
    }

    if(child_yang_name == "hour24otn-thresholds")
    {
        if(hour24otn_thresholds != nullptr)
        {
            children["hour24otn-thresholds"] = hour24otn_thresholds;
        }
        else
        {
            hour24otn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds>();
            hour24otn_thresholds->parent = this;
            children["hour24otn-thresholds"] = hour24otn_thresholds;
        }
        return children.at("hour24otn-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::get_children()
{
    if(children.find("hour24otn-reports") == children.end())
    {
        if(hour24otn_reports != nullptr)
        {
            children["hour24otn-reports"] = hour24otn_reports;
        }
    }

    if(children.find("hour24otn-thresholds") == children.end())
    {
        if(hour24otn_thresholds != nullptr)
        {
            children["hour24otn-thresholds"] = hour24otn_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThresholds()
{
    yang_name = "hour24otn-thresholds"; yang_parent_name = "hour24otn";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::~Hour24OtnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24otn_threshold.size(); index++)
    {
        if(hour24otn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_threshold.size(); index++)
    {
        if(hour24otn_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24otn-threshold")
    {
        for(auto const & c : hour24otn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold>();
        c->parent = this;
        hour24otn_threshold.push_back(std::move(c));
        children[segment_path] = hour24otn_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::get_children()
{
    for (auto const & c : hour24otn_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::Hour24OtnThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{
    yang_name = "hour24otn-threshold"; yang_parent_name = "hour24otn-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::~Hour24OtnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(otn_threshold.operation)
	|| is_set(otn_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-threshold" <<"[otn-threshold='" <<otn_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.operation)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.operation)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnThresholds::Hour24OtnThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReports()
{
    yang_name = "hour24otn-reports"; yang_parent_name = "hour24otn";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::~Hour24OtnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::has_data() const
{
    for (std::size_t index=0; index<hour24otn_report.size(); index++)
    {
        if(hour24otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_report.size(); index++)
    {
        if(hour24otn_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24otn-report")
    {
        for(auto const & c : hour24otn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport>();
        c->parent = this;
        hour24otn_report.push_back(std::move(c));
        children[segment_path] = hour24otn_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::get_children()
{
    for (auto const & c : hour24otn_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::Hour24OtnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "hour24otn-report"; yang_parent_name = "hour24otn-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::~Hour24OtnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::has_operation() const
{
    return is_set(operation)
	|| is_set(otn_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-report" <<"[otn-report='" <<otn_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.operation)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Otn::Hour24OtnReports::Hour24OtnReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24Optics()
    :
    hour24_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports>())
	,hour24_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds>())
{
    hour24_optics_reports->parent = this;
    children["hour24-optics-reports"] = hour24_optics_reports;

    hour24_optics_thresholds->parent = this;
    children["hour24-optics-thresholds"] = hour24_optics_thresholds;

    yang_name = "hour24-optics"; yang_parent_name = "hour24";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::~Hour24Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::has_data() const
{
    return (hour24_optics_reports !=  nullptr && hour24_optics_reports->has_data())
	|| (hour24_optics_thresholds !=  nullptr && hour24_optics_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::has_operation() const
{
    return is_set(operation)
	|| (hour24_optics_reports !=  nullptr && hour24_optics_reports->has_operation())
	|| (hour24_optics_thresholds !=  nullptr && hour24_optics_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24Optics' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-optics-reports")
    {
        if(hour24_optics_reports != nullptr)
        {
            children["hour24-optics-reports"] = hour24_optics_reports;
        }
        else
        {
            hour24_optics_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports>();
            hour24_optics_reports->parent = this;
            children["hour24-optics-reports"] = hour24_optics_reports;
        }
        return children.at("hour24-optics-reports");
    }

    if(child_yang_name == "hour24-optics-thresholds")
    {
        if(hour24_optics_thresholds != nullptr)
        {
            children["hour24-optics-thresholds"] = hour24_optics_thresholds;
        }
        else
        {
            hour24_optics_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds>();
            hour24_optics_thresholds->parent = this;
            children["hour24-optics-thresholds"] = hour24_optics_thresholds;
        }
        return children.at("hour24-optics-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_children()
{
    if(children.find("hour24-optics-reports") == children.end())
    {
        if(hour24_optics_reports != nullptr)
        {
            children["hour24-optics-reports"] = hour24_optics_reports;
        }
    }

    if(children.find("hour24-optics-thresholds") == children.end())
    {
        if(hour24_optics_thresholds != nullptr)
        {
            children["hour24-optics-thresholds"] = hour24_optics_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThresholds()
{
    yang_name = "hour24-optics-thresholds"; yang_parent_name = "hour24-optics";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::~Hour24OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24_optics_threshold.size(); index++)
    {
        if(hour24_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_optics_threshold.size(); index++)
    {
        if(hour24_optics_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OpticsThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-optics-threshold")
    {
        for(auto const & c : hour24_optics_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold>();
        c->parent = this;
        hour24_optics_threshold.push_back(std::move(c));
        children[segment_path] = hour24_optics_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_children()
{
    for (auto const & c : hour24_optics_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::Hour24OpticsThreshold()
    :
    optics_threshold{YType::enumeration, "optics-threshold"},
    dbm{YType::int32, "dbm"},
    optics_threshold_value{YType::int32, "optics-threshold-value"}
{
    yang_name = "hour24-optics-threshold"; yang_parent_name = "hour24-optics-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::~Hour24OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_data() const
{
    return optics_threshold.is_set
	|| dbm.is_set
	|| optics_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(optics_threshold.operation)
	|| is_set(dbm.operation)
	|| is_set(optics_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-threshold" <<"[optics-threshold='" <<optics_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OpticsThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_threshold.is_set || is_set(optics_threshold.operation)) leaf_name_data.push_back(optics_threshold.get_name_leafdata());
    if (dbm.is_set || is_set(dbm.operation)) leaf_name_data.push_back(dbm.get_name_leafdata());
    if (optics_threshold_value.is_set || is_set(optics_threshold_value.operation)) leaf_name_data.push_back(optics_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold = value;
    }
    if(value_path == "dbm")
    {
        dbm = value;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReports()
{
    yang_name = "hour24-optics-reports"; yang_parent_name = "hour24-optics";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::~Hour24OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_data() const
{
    for (std::size_t index=0; index<hour24_optics_report.size(); index++)
    {
        if(hour24_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_optics_report.size(); index++)
    {
        if(hour24_optics_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OpticsReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24-optics-report")
    {
        for(auto const & c : hour24_optics_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport>();
        c->parent = this;
        hour24_optics_report.push_back(std::move(c));
        children[segment_path] = hour24_optics_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_children()
{
    for (auto const & c : hour24_optics_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::Hour24OpticsReport()
    :
    optics_report{YType::enumeration, "optics-report"}
{
    yang_name = "hour24-optics-report"; yang_parent_name = "hour24-optics-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::~Hour24OpticsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::has_data() const
{
    return optics_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::has_operation() const
{
    return is_set(operation)
	|| is_set(optics_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-optics-report" <<"[optics-report='" <<optics_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OpticsReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.operation)) leaf_name_data.push_back(optics_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "optics-report")
    {
        optics_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24Fec()
    :
    hour24fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports>())
	,hour24fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds>())
{
    hour24fec_reports->parent = this;
    children["hour24fec-reports"] = hour24fec_reports;

    hour24fec_thresholds->parent = this;
    children["hour24fec-thresholds"] = hour24fec_thresholds;

    yang_name = "hour24fec"; yang_parent_name = "hour24";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::~Hour24Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::has_data() const
{
    return (hour24fec_reports !=  nullptr && hour24fec_reports->has_data())
	|| (hour24fec_thresholds !=  nullptr && hour24fec_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::has_operation() const
{
    return is_set(operation)
	|| (hour24fec_reports !=  nullptr && hour24fec_reports->has_operation())
	|| (hour24fec_thresholds !=  nullptr && hour24fec_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24Fec' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24fec-reports")
    {
        if(hour24fec_reports != nullptr)
        {
            children["hour24fec-reports"] = hour24fec_reports;
        }
        else
        {
            hour24fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports>();
            hour24fec_reports->parent = this;
            children["hour24fec-reports"] = hour24fec_reports;
        }
        return children.at("hour24fec-reports");
    }

    if(child_yang_name == "hour24fec-thresholds")
    {
        if(hour24fec_thresholds != nullptr)
        {
            children["hour24fec-thresholds"] = hour24fec_thresholds;
        }
        else
        {
            hour24fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds>();
            hour24fec_thresholds->parent = this;
            children["hour24fec-thresholds"] = hour24fec_thresholds;
        }
        return children.at("hour24fec-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::get_children()
{
    if(children.find("hour24fec-reports") == children.end())
    {
        if(hour24fec_reports != nullptr)
        {
            children["hour24fec-reports"] = hour24fec_reports;
        }
    }

    if(children.find("hour24fec-thresholds") == children.end())
    {
        if(hour24fec_thresholds != nullptr)
        {
            children["hour24fec-thresholds"] = hour24fec_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThresholds()
{
    yang_name = "hour24fec-thresholds"; yang_parent_name = "hour24fec";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::~Hour24FecThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::has_data() const
{
    for (std::size_t index=0; index<hour24fec_threshold.size(); index++)
    {
        if(hour24fec_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24fec_threshold.size(); index++)
    {
        if(hour24fec_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24FecThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24fec-threshold")
    {
        for(auto const & c : hour24fec_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold>();
        c->parent = this;
        hour24fec_threshold.push_back(std::move(c));
        children[segment_path] = hour24fec_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::get_children()
{
    for (auto const & c : hour24fec_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::Hour24FecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{
    yang_name = "hour24fec-threshold"; yang_parent_name = "hour24fec-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::~Hour24FecThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::has_data() const
{
    return fec_threshold.is_set
	|| fec_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_threshold.operation)
	|| is_set(fec_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-threshold" <<"[fec-threshold='" <<fec_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24FecThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.operation)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.operation)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecThresholds::Hour24FecThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-threshold")
    {
        fec_threshold = value;
    }
    if(value_path == "fec-threshold-value")
    {
        fec_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReports()
{
    yang_name = "hour24fec-reports"; yang_parent_name = "hour24fec";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::~Hour24FecReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::has_data() const
{
    for (std::size_t index=0; index<hour24fec_report.size(); index++)
    {
        if(hour24fec_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::has_operation() const
{
    for (std::size_t index=0; index<hour24fec_report.size(); index++)
    {
        if(hour24fec_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24FecReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24fec-report")
    {
        for(auto const & c : hour24fec_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport>();
        c->parent = this;
        hour24fec_report.push_back(std::move(c));
        children[segment_path] = hour24fec_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::get_children()
{
    for (auto const & c : hour24fec_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::Hour24FecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "hour24fec-report"; yang_parent_name = "hour24fec-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::~Hour24FecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::has_data() const
{
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24fec-report" <<"[fec-report='" <<fec_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24FecReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.operation)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Fec::Hour24FecReports::Hour24FecReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-report")
    {
        fec_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15()
    :
    ho_vc_minute15ho_vc(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc>())
{
    ho_vc_minute15ho_vc->parent = this;
    children["ho-vc-minute15ho-vc"] = ho_vc_minute15ho_vc;

    yang_name = "ho-vc-minute15"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::~HoVcMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::has_data() const
{
    return (ho_vc_minute15ho_vc !=  nullptr && ho_vc_minute15ho_vc->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::has_operation() const
{
    return is_set(operation)
	|| (ho_vc_minute15ho_vc !=  nullptr && ho_vc_minute15ho_vc->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcMinute15' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-minute15ho-vc")
    {
        if(ho_vc_minute15ho_vc != nullptr)
        {
            children["ho-vc-minute15ho-vc"] = ho_vc_minute15ho_vc;
        }
        else
        {
            ho_vc_minute15ho_vc = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc>();
            ho_vc_minute15ho_vc->parent = this;
            children["ho-vc-minute15ho-vc"] = ho_vc_minute15ho_vc;
        }
        return children.at("ho-vc-minute15ho-vc");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_children()
{
    if(children.find("ho-vc-minute15ho-vc") == children.end())
    {
        if(ho_vc_minute15ho_vc != nullptr)
        {
            children["ho-vc-minute15ho-vc"] = ho_vc_minute15ho_vc;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVc()
    :
    ho_vc_minute15ho_vc_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports>())
	,ho_vc_minute15ho_vc_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds>())
{
    ho_vc_minute15ho_vc_reports->parent = this;
    children["ho-vc-minute15ho-vc-reports"] = ho_vc_minute15ho_vc_reports;

    ho_vc_minute15ho_vc_thresholds->parent = this;
    children["ho-vc-minute15ho-vc-thresholds"] = ho_vc_minute15ho_vc_thresholds;

    yang_name = "ho-vc-minute15ho-vc"; yang_parent_name = "ho-vc-minute15";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::~HoVcMinute15HoVc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::has_data() const
{
    return (ho_vc_minute15ho_vc_reports !=  nullptr && ho_vc_minute15ho_vc_reports->has_data())
	|| (ho_vc_minute15ho_vc_thresholds !=  nullptr && ho_vc_minute15ho_vc_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::has_operation() const
{
    return is_set(operation)
	|| (ho_vc_minute15ho_vc_reports !=  nullptr && ho_vc_minute15ho_vc_reports->has_operation())
	|| (ho_vc_minute15ho_vc_thresholds !=  nullptr && ho_vc_minute15ho_vc_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcMinute15HoVc' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-minute15ho-vc-reports")
    {
        if(ho_vc_minute15ho_vc_reports != nullptr)
        {
            children["ho-vc-minute15ho-vc-reports"] = ho_vc_minute15ho_vc_reports;
        }
        else
        {
            ho_vc_minute15ho_vc_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports>();
            ho_vc_minute15ho_vc_reports->parent = this;
            children["ho-vc-minute15ho-vc-reports"] = ho_vc_minute15ho_vc_reports;
        }
        return children.at("ho-vc-minute15ho-vc-reports");
    }

    if(child_yang_name == "ho-vc-minute15ho-vc-thresholds")
    {
        if(ho_vc_minute15ho_vc_thresholds != nullptr)
        {
            children["ho-vc-minute15ho-vc-thresholds"] = ho_vc_minute15ho_vc_thresholds;
        }
        else
        {
            ho_vc_minute15ho_vc_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds>();
            ho_vc_minute15ho_vc_thresholds->parent = this;
            children["ho-vc-minute15ho-vc-thresholds"] = ho_vc_minute15ho_vc_thresholds;
        }
        return children.at("ho-vc-minute15ho-vc-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::get_children()
{
    if(children.find("ho-vc-minute15ho-vc-reports") == children.end())
    {
        if(ho_vc_minute15ho_vc_reports != nullptr)
        {
            children["ho-vc-minute15ho-vc-reports"] = ho_vc_minute15ho_vc_reports;
        }
    }

    if(children.find("ho-vc-minute15ho-vc-thresholds") == children.end())
    {
        if(ho_vc_minute15ho_vc_thresholds != nullptr)
        {
            children["ho-vc-minute15ho-vc-thresholds"] = ho_vc_minute15ho_vc_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReports()
{
    yang_name = "ho-vc-minute15ho-vc-reports"; yang_parent_name = "ho-vc-minute15ho-vc";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::~HoVcMinute15HoVcReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::has_data() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_report.size(); index++)
    {
        if(ho_vc_minute15ho_vc_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_report.size(); index++)
    {
        if(ho_vc_minute15ho_vc_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcMinute15HoVcReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-minute15ho-vc-report")
    {
        for(auto const & c : ho_vc_minute15ho_vc_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport>();
        c->parent = this;
        ho_vc_minute15ho_vc_report.push_back(std::move(c));
        children[segment_path] = ho_vc_minute15ho_vc_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::get_children()
{
    for (auto const & c : ho_vc_minute15ho_vc_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::HoVcMinute15HoVcReport()
    :
    ho_vc_report{YType::enumeration, "ho-vc-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "ho-vc-minute15ho-vc-report"; yang_parent_name = "ho-vc-minute15ho-vc-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::~HoVcMinute15HoVcReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::has_data() const
{
    return ho_vc_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::has_operation() const
{
    return is_set(operation)
	|| is_set(ho_vc_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-report" <<"[ho-vc-report='" <<ho_vc_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcMinute15HoVcReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_report.is_set || is_set(ho_vc_report.operation)) leaf_name_data.push_back(ho_vc_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcReports::HoVcMinute15HoVcReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ho-vc-report")
    {
        ho_vc_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThresholds()
{
    yang_name = "ho-vc-minute15ho-vc-thresholds"; yang_parent_name = "ho-vc-minute15ho-vc";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::~HoVcMinute15HoVcThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::has_data() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_threshold.size(); index++)
    {
        if(ho_vc_minute15ho_vc_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_minute15ho_vc_threshold.size(); index++)
    {
        if(ho_vc_minute15ho_vc_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcMinute15HoVcThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ho-vc-minute15ho-vc-threshold")
    {
        for(auto const & c : ho_vc_minute15ho_vc_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold>();
        c->parent = this;
        ho_vc_minute15ho_vc_threshold.push_back(std::move(c));
        children[segment_path] = ho_vc_minute15ho_vc_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::get_children()
{
    for (auto const & c : ho_vc_minute15ho_vc_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::set_value(const std::string & value_path, std::string value)
{
}


}
}

