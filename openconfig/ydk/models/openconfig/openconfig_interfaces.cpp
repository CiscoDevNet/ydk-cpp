
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_interfaces.hpp"

namespace ydk {
namespace openconfig_interfaces {

Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "openconfig-interfaces";
}

Interfaces::~Interfaces()
{
}

bool Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-interfaces:interfaces";

    return path_buffer.str();

}

EntityPath Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Interfaces::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Interfaces::clone_ptr() const
{
    return std::make_shared<Interfaces>();
}

std::string Interfaces::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string Interfaces::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Interfaces::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

Interfaces::Interface::Interface()
    :
    name{YType::str, "name"}
    	,
    aggregation(nullptr) // presence node
	,config(std::make_shared<Interfaces::Interface::Config>())
	,ethernet(std::make_shared<Interfaces::Interface::Ethernet>())
	,hold_time(std::make_shared<Interfaces::Interface::HoldTime>())
	,routed_vlan(std::make_shared<Interfaces::Interface::RoutedVlan>())
	,state(std::make_shared<Interfaces::Interface::State>())
	,subinterfaces(std::make_shared<Interfaces::Interface::Subinterfaces>())
{
    config->parent = this;
    children["config"] = config;

    ethernet->parent = this;
    children["ethernet"] = ethernet;

    hold_time->parent = this;
    children["hold-time"] = hold_time;

    routed_vlan->parent = this;
    children["routed-vlan"] = routed_vlan;

    state->parent = this;
    children["state"] = state;

    subinterfaces->parent = this;
    children["subinterfaces"] = subinterfaces;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Interfaces::Interface::~Interface()
{
}

bool Interfaces::Interface::has_data() const
{
    return name.is_set
	|| (aggregation !=  nullptr && aggregation->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (routed_vlan !=  nullptr && routed_vlan->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (subinterfaces !=  nullptr && subinterfaces->has_data());
}

bool Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (aggregation !=  nullptr && aggregation->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (routed_vlan !=  nullptr && routed_vlan->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (subinterfaces !=  nullptr && subinterfaces->has_operation());
}

std::string Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "openconfig-interfaces:interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aggregation")
    {
        if(aggregation != nullptr)
        {
            children["aggregation"] = aggregation;
        }
        else
        {
            aggregation = std::make_shared<Interfaces::Interface::Aggregation>();
            aggregation->parent = this;
            children["aggregation"] = aggregation;
        }
        return children.at("aggregation");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
        else
        {
            ethernet = std::make_shared<Interfaces::Interface::Ethernet>();
            ethernet->parent = this;
            children["ethernet"] = ethernet;
        }
        return children.at("ethernet");
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time != nullptr)
        {
            children["hold-time"] = hold_time;
        }
        else
        {
            hold_time = std::make_shared<Interfaces::Interface::HoldTime>();
            hold_time->parent = this;
            children["hold-time"] = hold_time;
        }
        return children.at("hold-time");
    }

    if(child_yang_name == "routed-vlan")
    {
        if(routed_vlan != nullptr)
        {
            children["routed-vlan"] = routed_vlan;
        }
        else
        {
            routed_vlan = std::make_shared<Interfaces::Interface::RoutedVlan>();
            routed_vlan->parent = this;
            children["routed-vlan"] = routed_vlan;
        }
        return children.at("routed-vlan");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "subinterfaces")
    {
        if(subinterfaces != nullptr)
        {
            children["subinterfaces"] = subinterfaces;
        }
        else
        {
            subinterfaces = std::make_shared<Interfaces::Interface::Subinterfaces>();
            subinterfaces->parent = this;
            children["subinterfaces"] = subinterfaces;
        }
        return children.at("subinterfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::get_children()
{
    if(children.find("aggregation") == children.end())
    {
        if(aggregation != nullptr)
        {
            children["aggregation"] = aggregation;
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("ethernet") == children.end())
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
    }

    if(children.find("hold-time") == children.end())
    {
        if(hold_time != nullptr)
        {
            children["hold-time"] = hold_time;
        }
    }

    if(children.find("routed-vlan") == children.end())
    {
        if(routed_vlan != nullptr)
        {
            children["routed-vlan"] = routed_vlan;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("subinterfaces") == children.end())
    {
        if(subinterfaces != nullptr)
        {
            children["subinterfaces"] = subinterfaces;
        }
    }

    return children;
}

void Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Interfaces::Interface::Config::Config()
    :
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint16, "mtu"},
    name{YType::str, "name"},
    type{YType::identityref, "type"}
{
    yang_name = "config"; yang_parent_name = "interface";
}

Interfaces::Interface::Config::~Config()
{
}

bool Interfaces::Interface::Config::has_data() const
{
    return description.is_set
	|| enabled.is_set
	|| mtu.is_set
	|| name.is_set
	|| type.is_set;
}

bool Interfaces::Interface::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(enabled.operation)
	|| is_set(mtu.operation)
	|| is_set(name.operation)
	|| is_set(type.operation);
}

std::string Interfaces::Interface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Interfaces::Interface::State::State()
    :
    admin_status{YType::enumeration, "admin-status"},
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    hardware_port{YType::str, "openconfig-platform:hardware-port"},
    ifindex{YType::uint32, "ifindex"},
    last_change{YType::uint32, "last-change"},
    mtu{YType::uint16, "mtu"},
    name{YType::str, "name"},
    oper_status{YType::enumeration, "oper-status"},
    type{YType::identityref, "type"}
    	,
    counters(std::make_shared<Interfaces::Interface::State::Counters>())
{
    counters->parent = this;
    children["counters"] = counters;

    yang_name = "state"; yang_parent_name = "interface";
}

Interfaces::Interface::State::~State()
{
}

bool Interfaces::Interface::State::has_data() const
{
    return admin_status.is_set
	|| description.is_set
	|| enabled.is_set
	|| hardware_port.is_set
	|| ifindex.is_set
	|| last_change.is_set
	|| mtu.is_set
	|| name.is_set
	|| oper_status.is_set
	|| type.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Interfaces::Interface::State::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_status.operation)
	|| is_set(description.operation)
	|| is_set(enabled.operation)
	|| is_set(hardware_port.operation)
	|| is_set(ifindex.operation)
	|| is_set(last_change.operation)
	|| is_set(mtu.operation)
	|| is_set(name.operation)
	|| is_set(oper_status.operation)
	|| is_set(type.operation)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (hardware_port.is_set || is_set(hardware_port.operation)) leaf_name_data.push_back(hardware_port.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (last_change.is_set || is_set(last_change.operation)) leaf_name_data.push_back(last_change.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.operation)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<Interfaces::Interface::State::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::State::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    return children;
}

void Interfaces::Interface::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "hardware-port")
    {
        hardware_port = value;
    }
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
    if(value_path == "last-change")
    {
        last_change = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Interfaces::Interface::State::Counters::Counters()
    :
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    in_discards{YType::uint64, "in-discards"},
    in_errors{YType::uint64, "in-errors"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_octets{YType::uint64, "in-octets"},
    in_unicast_pkts{YType::uint64, "in-unicast-pkts"},
    in_unknown_protos{YType::uint32, "in-unknown-protos"},
    last_clear{YType::str, "last-clear"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    out_discards{YType::uint64, "out-discards"},
    out_errors{YType::uint64, "out-errors"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_octets{YType::uint64, "out-octets"},
    out_unicast_pkts{YType::uint64, "out-unicast-pkts"}
{
    yang_name = "counters"; yang_parent_name = "state";
}

Interfaces::Interface::State::Counters::~Counters()
{
}

bool Interfaces::Interface::State::Counters::has_data() const
{
    return in_broadcast_pkts.is_set
	|| in_discards.is_set
	|| in_errors.is_set
	|| in_multicast_pkts.is_set
	|| in_octets.is_set
	|| in_unicast_pkts.is_set
	|| in_unknown_protos.is_set
	|| last_clear.is_set
	|| out_broadcast_pkts.is_set
	|| out_discards.is_set
	|| out_errors.is_set
	|| out_multicast_pkts.is_set
	|| out_octets.is_set
	|| out_unicast_pkts.is_set;
}

bool Interfaces::Interface::State::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(in_broadcast_pkts.operation)
	|| is_set(in_discards.operation)
	|| is_set(in_errors.operation)
	|| is_set(in_multicast_pkts.operation)
	|| is_set(in_octets.operation)
	|| is_set(in_unicast_pkts.operation)
	|| is_set(in_unknown_protos.operation)
	|| is_set(last_clear.operation)
	|| is_set(out_broadcast_pkts.operation)
	|| is_set(out_discards.operation)
	|| is_set(out_errors.operation)
	|| is_set(out_multicast_pkts.operation)
	|| is_set(out_octets.operation)
	|| is_set(out_unicast_pkts.operation);
}

std::string Interfaces::Interface::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::State::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.operation)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (in_discards.is_set || is_set(in_discards.operation)) leaf_name_data.push_back(in_discards.get_name_leafdata());
    if (in_errors.is_set || is_set(in_errors.operation)) leaf_name_data.push_back(in_errors.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.operation)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.operation)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_unicast_pkts.is_set || is_set(in_unicast_pkts.operation)) leaf_name_data.push_back(in_unicast_pkts.get_name_leafdata());
    if (in_unknown_protos.is_set || is_set(in_unknown_protos.operation)) leaf_name_data.push_back(in_unknown_protos.get_name_leafdata());
    if (last_clear.is_set || is_set(last_clear.operation)) leaf_name_data.push_back(last_clear.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.operation)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (out_discards.is_set || is_set(out_discards.operation)) leaf_name_data.push_back(out_discards.get_name_leafdata());
    if (out_errors.is_set || is_set(out_errors.operation)) leaf_name_data.push_back(out_errors.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.operation)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.operation)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_unicast_pkts.is_set || is_set(out_unicast_pkts.operation)) leaf_name_data.push_back(out_unicast_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::State::Counters::get_children()
{
    return children;
}

void Interfaces::Interface::State::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
    }
    if(value_path == "in-discards")
    {
        in_discards = value;
    }
    if(value_path == "in-errors")
    {
        in_errors = value;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts = value;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos = value;
    }
    if(value_path == "last-clear")
    {
        last_clear = value;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
    }
    if(value_path == "out-discards")
    {
        out_discards = value;
    }
    if(value_path == "out-errors")
    {
        out_errors = value;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts = value;
    }
}

Interfaces::Interface::HoldTime::HoldTime()
    :
    config(std::make_shared<Interfaces::Interface::HoldTime::Config>())
	,state(std::make_shared<Interfaces::Interface::HoldTime::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "hold-time"; yang_parent_name = "interface";
}

Interfaces::Interface::HoldTime::~HoldTime()
{
}

bool Interfaces::Interface::HoldTime::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::HoldTime::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::HoldTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoldTime' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::HoldTime::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::HoldTime::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::HoldTime::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::HoldTime::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::HoldTime::Config::Config()
    :
    down{YType::uint32, "down"},
    up{YType::uint32, "up"}
{
    yang_name = "config"; yang_parent_name = "hold-time";
}

Interfaces::Interface::HoldTime::Config::~Config()
{
}

bool Interfaces::Interface::HoldTime::Config::has_data() const
{
    return down.is_set
	|| up.is_set;
}

bool Interfaces::Interface::HoldTime::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(up.operation);
}

std::string Interfaces::Interface::HoldTime::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::HoldTime::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::HoldTime::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::HoldTime::Config::get_children()
{
    return children;
}

void Interfaces::Interface::HoldTime::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
}

Interfaces::Interface::HoldTime::State::State()
    :
    down{YType::uint32, "down"},
    up{YType::uint32, "up"}
{
    yang_name = "state"; yang_parent_name = "hold-time";
}

Interfaces::Interface::HoldTime::State::~State()
{
}

bool Interfaces::Interface::HoldTime::State::has_data() const
{
    return down.is_set
	|| up.is_set;
}

bool Interfaces::Interface::HoldTime::State::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(up.operation);
}

std::string Interfaces::Interface::HoldTime::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::HoldTime::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::HoldTime::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::HoldTime::State::get_children()
{
    return children;
}

void Interfaces::Interface::HoldTime::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterfaces()
{
    yang_name = "subinterfaces"; yang_parent_name = "interface";
}

Interfaces::Interface::Subinterfaces::~Subinterfaces()
{
}

bool Interfaces::Interface::Subinterfaces::has_data() const
{
    for (std::size_t index=0; index<subinterface.size(); index++)
    {
        if(subinterface[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Subinterfaces::has_operation() const
{
    for (std::size_t index=0; index<subinterface.size(); index++)
    {
        if(subinterface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Interfaces::Interface::Subinterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subinterfaces";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subinterfaces' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subinterface")
    {
        for(auto const & c : subinterface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface>();
        c->parent = this;
        subinterface.push_back(std::move(c));
        children[segment_path] = subinterface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::get_children()
{
    for (auto const & c : subinterface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Subinterfaces::Subinterface::Subinterface()
    :
    index_{YType::str, "index"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Config>())
	,ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::State>())
	,vlan(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    vlan->parent = this;
    children["vlan"] = vlan;

    yang_name = "subinterface"; yang_parent_name = "subinterfaces";
}

Interfaces::Interface::Subinterfaces::Subinterface::~Subinterface()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::has_data() const
{
    return index_.is_set
	|| (config !=  nullptr && config->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subinterface" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subinterface' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "vlan")
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
        else
        {
            vlan = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan>();
            vlan->parent = this;
            children["vlan"] = vlan;
        }
        return children.at("vlan");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("vlan") == children.end())
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Config::Config()
    :
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    index_{YType::uint32, "index"},
    name{YType::str, "name"},
    unnumbered{YType::str, "unnumbered"}
{
    yang_name = "config"; yang_parent_name = "subinterface";
}

Interfaces::Interface::Subinterfaces::Subinterface::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Config::has_data() const
{
    return description.is_set
	|| enabled.is_set
	|| index_.is_set
	|| name.is_set
	|| unnumbered.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(enabled.operation)
	|| is_set(index_.operation)
	|| is_set(name.operation)
	|| is_set(unnumbered.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::State::State()
    :
    admin_status{YType::enumeration, "admin-status"},
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    ifindex{YType::uint32, "ifindex"},
    index_{YType::uint32, "index"},
    last_change{YType::uint32, "last-change"},
    name{YType::str, "name"},
    oper_status{YType::enumeration, "oper-status"},
    unnumbered{YType::str, "unnumbered"}
    	,
    counters(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::State::Counters>())
{
    counters->parent = this;
    children["counters"] = counters;

    yang_name = "state"; yang_parent_name = "subinterface";
}

Interfaces::Interface::Subinterfaces::Subinterface::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::State::has_data() const
{
    return admin_status.is_set
	|| description.is_set
	|| enabled.is_set
	|| ifindex.is_set
	|| index_.is_set
	|| last_change.is_set
	|| name.is_set
	|| oper_status.is_set
	|| unnumbered.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::State::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_status.operation)
	|| is_set(description.operation)
	|| is_set(enabled.operation)
	|| is_set(ifindex.operation)
	|| is_set(index_.operation)
	|| is_set(last_change.operation)
	|| is_set(name.operation)
	|| is_set(oper_status.operation)
	|| is_set(unnumbered.operation)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_change.is_set || is_set(last_change.operation)) leaf_name_data.push_back(last_change.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.operation)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::State::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::State::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "ifindex")
    {
        ifindex = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-change")
    {
        last_change = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::Counters()
    :
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    in_discards{YType::uint64, "in-discards"},
    in_errors{YType::uint64, "in-errors"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_octets{YType::uint64, "in-octets"},
    in_unicast_pkts{YType::uint64, "in-unicast-pkts"},
    in_unknown_protos{YType::uint32, "in-unknown-protos"},
    last_clear{YType::str, "last-clear"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    out_discards{YType::uint64, "out-discards"},
    out_errors{YType::uint64, "out-errors"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_octets{YType::uint64, "out-octets"},
    out_unicast_pkts{YType::uint64, "out-unicast-pkts"}
{
    yang_name = "counters"; yang_parent_name = "state";
}

Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::~Counters()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::has_data() const
{
    return in_broadcast_pkts.is_set
	|| in_discards.is_set
	|| in_errors.is_set
	|| in_multicast_pkts.is_set
	|| in_octets.is_set
	|| in_unicast_pkts.is_set
	|| in_unknown_protos.is_set
	|| last_clear.is_set
	|| out_broadcast_pkts.is_set
	|| out_discards.is_set
	|| out_errors.is_set
	|| out_multicast_pkts.is_set
	|| out_octets.is_set
	|| out_unicast_pkts.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(in_broadcast_pkts.operation)
	|| is_set(in_discards.operation)
	|| is_set(in_errors.operation)
	|| is_set(in_multicast_pkts.operation)
	|| is_set(in_octets.operation)
	|| is_set(in_unicast_pkts.operation)
	|| is_set(in_unknown_protos.operation)
	|| is_set(last_clear.operation)
	|| is_set(out_broadcast_pkts.operation)
	|| is_set(out_discards.operation)
	|| is_set(out_errors.operation)
	|| is_set(out_multicast_pkts.operation)
	|| is_set(out_octets.operation)
	|| is_set(out_unicast_pkts.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.operation)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (in_discards.is_set || is_set(in_discards.operation)) leaf_name_data.push_back(in_discards.get_name_leafdata());
    if (in_errors.is_set || is_set(in_errors.operation)) leaf_name_data.push_back(in_errors.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.operation)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.operation)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_unicast_pkts.is_set || is_set(in_unicast_pkts.operation)) leaf_name_data.push_back(in_unicast_pkts.get_name_leafdata());
    if (in_unknown_protos.is_set || is_set(in_unknown_protos.operation)) leaf_name_data.push_back(in_unknown_protos.get_name_leafdata());
    if (last_clear.is_set || is_set(last_clear.operation)) leaf_name_data.push_back(last_clear.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.operation)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (out_discards.is_set || is_set(out_discards.operation)) leaf_name_data.push_back(out_discards.get_name_leafdata());
    if (out_errors.is_set || is_set(out_errors.operation)) leaf_name_data.push_back(out_errors.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.operation)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.operation)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_unicast_pkts.is_set || is_set(out_unicast_pkts.operation)) leaf_name_data.push_back(out_unicast_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::State::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-broadcast-pkts")
    {
        in_broadcast_pkts = value;
    }
    if(value_path == "in-discards")
    {
        in_discards = value;
    }
    if(value_path == "in-errors")
    {
        in_errors = value;
    }
    if(value_path == "in-multicast-pkts")
    {
        in_multicast_pkts = value;
    }
    if(value_path == "in-octets")
    {
        in_octets = value;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts = value;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos = value;
    }
    if(value_path == "last-clear")
    {
        last_clear = value;
    }
    if(value_path == "out-broadcast-pkts")
    {
        out_broadcast_pkts = value;
    }
    if(value_path == "out-discards")
    {
        out_discards = value;
    }
    if(value_path == "out-errors")
    {
        out_errors = value;
    }
    if(value_path == "out-multicast-pkts")
    {
        out_multicast_pkts = value;
    }
    if(value_path == "out-octets")
    {
        out_octets = value;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Vlan()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "vlan"; yang_parent_name = "subinterface";
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::~Vlan()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-vlan:vlan";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Vlan::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Vlan::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::Config()
    :
    global_vlan_id{YType::str, "global-vlan-id"},
    vlan_id{YType::str, "vlan-id"}
{
    yang_name = "config"; yang_parent_name = "vlan";
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::has_data() const
{
    return global_vlan_id.is_set
	|| vlan_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(global_vlan_id.operation)
	|| is_set(vlan_id.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_vlan_id.is_set || is_set(global_vlan_id.operation)) leaf_name_data.push_back(global_vlan_id.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Vlan::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-vlan-id")
    {
        global_vlan_id = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::State()
    :
    global_vlan_id{YType::str, "global-vlan-id"},
    vlan_id{YType::str, "vlan-id"}
{
    yang_name = "state"; yang_parent_name = "vlan";
}

Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::has_data() const
{
    return global_vlan_id.is_set
	|| vlan_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::has_operation() const
{
    return is_set(operation)
	|| is_set(global_vlan_id.operation)
	|| is_set(vlan_id.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_vlan_id.is_set || is_set(global_vlan_id.operation)) leaf_name_data.push_back(global_vlan_id.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Vlan::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-vlan-id")
    {
        global_vlan_id = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Ipv4()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ipv4"; yang_parent_name = "subinterface";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::~Ipv4()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-ip:ipv4";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::get_children()
{
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Address()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State>())
	,vrrp(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    vrrp->parent = this;
    children["vrrp"] = vrrp;

    yang_name = "address"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::~Address()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "vrrp")
    {
        if(vrrp != nullptr)
        {
            children["vrrp"] = vrrp;
        }
        else
        {
            vrrp = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp>();
            vrrp->parent = this;
            children["vrrp"] = vrrp;
        }
        return children.at("vrrp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("vrrp") == children.end())
    {
        if(vrrp != nullptr)
        {
            children["vrrp"] = vrrp;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config::Config()
    :
    ip{YType::str, "ip"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "config"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config::has_data() const
{
    return ip.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(prefix_length.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State::State()
    :
    ip{YType::str, "ip"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "state"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State::has_data() const
{
    return ip.is_set
	|| origin.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(origin.operation)
	|| is_set(prefix_length.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::Vrrp()
{
    yang_name = "vrrp"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::~Vrrp()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::has_data() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrrp' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrrp-group")
    {
        for(auto const & c : vrrp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup>();
        c->parent = this;
        vrrp_group.push_back(std::move(c));
        children[segment_path] = vrrp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::get_children()
{
    for (auto const & c : vrrp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::VrrpGroup()
    :
    virtual_router_id{YType::str, "virtual-router-id"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config>())
	,interface_tracking(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State>())
{
    config->parent = this;
    children["config"] = config;

    interface_tracking->parent = this;
    children["interface-tracking"] = interface_tracking;

    state->parent = this;
    children["state"] = state;

    yang_name = "vrrp-group"; yang_parent_name = "vrrp";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::~VrrpGroup()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::has_data() const
{
    return virtual_router_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (interface_tracking !=  nullptr && interface_tracking->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(virtual_router_id.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_tracking !=  nullptr && interface_tracking->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group" <<"[virtual-router-id='" <<virtual_router_id <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrrpGroup' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "interface-tracking")
    {
        if(interface_tracking != nullptr)
        {
            children["interface-tracking"] = interface_tracking;
        }
        else
        {
            interface_tracking = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking>();
            interface_tracking->parent = this;
            children["interface-tracking"] = interface_tracking;
        }
        return children.at("interface-tracking");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("interface-tracking") == children.end())
    {
        if(interface_tracking != nullptr)
        {
            children["interface-tracking"] = interface_tracking;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config::Config()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "config"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accept_mode.operation)
	|| is_set(advertisement_interval.operation)
	|| is_set(preempt.operation)
	|| is_set(preempt_delay.operation)
	|| is_set(priority.operation)
	|| is_set(virtual_address.operation)
	|| is_set(virtual_router_id.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.operation)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.operation)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.operation)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State::State()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    current_priority{YType::uint8, "current-priority"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "state"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| current_priority.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accept_mode.operation)
	|| is_set(advertisement_interval.operation)
	|| is_set(current_priority.operation)
	|| is_set(preempt.operation)
	|| is_set(preempt_delay.operation)
	|| is_set(priority.operation)
	|| is_set(virtual_address.operation)
	|| is_set(virtual_router_id.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.operation)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.operation)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (current_priority.is_set || is_set(current_priority.operation)) leaf_name_data.push_back(current_priority.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.operation)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
    }
    if(value_path == "current-priority")
    {
        current_priority = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "interface-tracking"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::~InterfaceTracking()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTracking' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "config"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_decrement.operation)
	|| is_set(track_interface.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.operation)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "state"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_decrement.operation)
	|| is_set(track_interface.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.operation)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "neighbor"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config::Config()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "config"; yang_parent_name = "neighbor";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(link_layer_address.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State::State()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "state"; yang_parent_name = "neighbor";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set
	|| origin.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(link_layer_address.operation)
	|| is_set(origin.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Neighbor::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "config"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::has_data() const
{
    return enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(mtu.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::State()
    :
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "state"; yang_parent_name = "ipv4";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::has_data() const
{
    return enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(mtu.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv4::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Ipv6()
    :
    autoconf(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf>())
	,config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State>())
{
    autoconf->parent = this;
    children["autoconf"] = autoconf;

    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ipv6"; yang_parent_name = "subinterface";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::~Ipv6()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return (autoconf !=  nullptr && autoconf->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (autoconf !=  nullptr && autoconf->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-ip:ipv6";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "autoconf")
    {
        if(autoconf != nullptr)
        {
            children["autoconf"] = autoconf;
        }
        else
        {
            autoconf = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf>();
            autoconf->parent = this;
            children["autoconf"] = autoconf;
        }
        return children.at("autoconf");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::get_children()
{
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("autoconf") == children.end())
    {
        if(autoconf != nullptr)
        {
            children["autoconf"] = autoconf;
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Address()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State>())
	,vrrp(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    vrrp->parent = this;
    children["vrrp"] = vrrp;

    yang_name = "address"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::~Address()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "vrrp")
    {
        if(vrrp != nullptr)
        {
            children["vrrp"] = vrrp;
        }
        else
        {
            vrrp = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp>();
            vrrp->parent = this;
            children["vrrp"] = vrrp;
        }
        return children.at("vrrp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("vrrp") == children.end())
    {
        if(vrrp != nullptr)
        {
            children["vrrp"] = vrrp;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config::Config()
    :
    ip{YType::str, "ip"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "config"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config::has_data() const
{
    return ip.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(prefix_length.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::State()
    :
    ip{YType::str, "ip"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"},
    status{YType::enumeration, "status"}
{
    yang_name = "state"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::has_data() const
{
    return ip.is_set
	|| origin.is_set
	|| prefix_length.is_set
	|| status.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(origin.operation)
	|| is_set(prefix_length.operation)
	|| is_set(status.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::Vrrp()
{
    yang_name = "vrrp"; yang_parent_name = "address";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::~Vrrp()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::has_data() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrrp' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrrp-group")
    {
        for(auto const & c : vrrp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup>();
        c->parent = this;
        vrrp_group.push_back(std::move(c));
        children[segment_path] = vrrp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::get_children()
{
    for (auto const & c : vrrp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::VrrpGroup()
    :
    virtual_router_id{YType::str, "virtual-router-id"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config>())
	,interface_tracking(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State>())
{
    config->parent = this;
    children["config"] = config;

    interface_tracking->parent = this;
    children["interface-tracking"] = interface_tracking;

    state->parent = this;
    children["state"] = state;

    yang_name = "vrrp-group"; yang_parent_name = "vrrp";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::~VrrpGroup()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::has_data() const
{
    return virtual_router_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (interface_tracking !=  nullptr && interface_tracking->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(virtual_router_id.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_tracking !=  nullptr && interface_tracking->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group" <<"[virtual-router-id='" <<virtual_router_id <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrrpGroup' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "interface-tracking")
    {
        if(interface_tracking != nullptr)
        {
            children["interface-tracking"] = interface_tracking;
        }
        else
        {
            interface_tracking = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking>();
            interface_tracking->parent = this;
            children["interface-tracking"] = interface_tracking;
        }
        return children.at("interface-tracking");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("interface-tracking") == children.end())
    {
        if(interface_tracking != nullptr)
        {
            children["interface-tracking"] = interface_tracking;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config::Config()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_link_local{YType::str, "virtual-link-local"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "config"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_link_local.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accept_mode.operation)
	|| is_set(advertisement_interval.operation)
	|| is_set(preempt.operation)
	|| is_set(preempt_delay.operation)
	|| is_set(priority.operation)
	|| is_set(virtual_address.operation)
	|| is_set(virtual_link_local.operation)
	|| is_set(virtual_router_id.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.operation)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.operation)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.operation)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_link_local.is_set || is_set(virtual_link_local.operation)) leaf_name_data.push_back(virtual_link_local.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local = value;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State::State()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    current_priority{YType::uint8, "current-priority"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_link_local{YType::str, "virtual-link-local"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "state"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| current_priority.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_link_local.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accept_mode.operation)
	|| is_set(advertisement_interval.operation)
	|| is_set(current_priority.operation)
	|| is_set(preempt.operation)
	|| is_set(preempt_delay.operation)
	|| is_set(priority.operation)
	|| is_set(virtual_address.operation)
	|| is_set(virtual_link_local.operation)
	|| is_set(virtual_router_id.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.operation)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.operation)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (current_priority.is_set || is_set(current_priority.operation)) leaf_name_data.push_back(current_priority.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.operation)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_link_local.is_set || is_set(virtual_link_local.operation)) leaf_name_data.push_back(virtual_link_local.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
    }
    if(value_path == "current-priority")
    {
        current_priority = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local = value;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "interface-tracking"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::~InterfaceTracking()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTracking' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "config"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_decrement.operation)
	|| is_set(track_interface.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.operation)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "state"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_decrement.operation)
	|| is_set(track_interface.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.operation)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "neighbor"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config::Config()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "config"; yang_parent_name = "neighbor";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(link_layer_address.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::State()
    :
    ip{YType::str, "ip"},
    is_router{YType::empty, "is-router"},
    link_layer_address{YType::str, "link-layer-address"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "state"; yang_parent_name = "neighbor";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::has_data() const
{
    return ip.is_set
	|| is_router.is_set
	|| link_layer_address.is_set
	|| neighbor_state.is_set
	|| origin.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(is_router.operation)
	|| is_set(link_layer_address.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(origin.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (is_router.is_set || is_set(is_router.operation)) leaf_name_data.push_back(is_router.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "is-router")
    {
        is_router = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::Config()
    :
    dup_addr_detect_transmits{YType::uint32, "dup-addr-detect-transmits"},
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "config"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::has_data() const
{
    return dup_addr_detect_transmits.is_set
	|| enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(dup_addr_detect_transmits.operation)
	|| is_set(enabled.operation)
	|| is_set(mtu.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dup_addr_detect_transmits.is_set || is_set(dup_addr_detect_transmits.operation)) leaf_name_data.push_back(dup_addr_detect_transmits.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::State()
    :
    dup_addr_detect_transmits{YType::uint32, "dup-addr-detect-transmits"},
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "state"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::has_data() const
{
    return dup_addr_detect_transmits.is_set
	|| enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::has_operation() const
{
    return is_set(operation)
	|| is_set(dup_addr_detect_transmits.operation)
	|| is_set(enabled.operation)
	|| is_set(mtu.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dup_addr_detect_transmits.is_set || is_set(dup_addr_detect_transmits.operation)) leaf_name_data.push_back(dup_addr_detect_transmits.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Autoconf()
    :
    config(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config>())
	,state(std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "autoconf"; yang_parent_name = "ipv6";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::~Autoconf()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconf";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoconf' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config::Config()
    :
    create_global_addresses{YType::boolean, "create-global-addresses"},
    create_temporary_addresses{YType::boolean, "create-temporary-addresses"},
    temporary_preferred_lifetime{YType::uint32, "temporary-preferred-lifetime"},
    temporary_valid_lifetime{YType::uint32, "temporary-valid-lifetime"}
{
    yang_name = "config"; yang_parent_name = "autoconf";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config::~Config()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config::has_data() const
{
    return create_global_addresses.is_set
	|| create_temporary_addresses.is_set
	|| temporary_preferred_lifetime.is_set
	|| temporary_valid_lifetime.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(create_global_addresses.operation)
	|| is_set(create_temporary_addresses.operation)
	|| is_set(temporary_preferred_lifetime.operation)
	|| is_set(temporary_valid_lifetime.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create_global_addresses.is_set || is_set(create_global_addresses.operation)) leaf_name_data.push_back(create_global_addresses.get_name_leafdata());
    if (create_temporary_addresses.is_set || is_set(create_temporary_addresses.operation)) leaf_name_data.push_back(create_temporary_addresses.get_name_leafdata());
    if (temporary_preferred_lifetime.is_set || is_set(temporary_preferred_lifetime.operation)) leaf_name_data.push_back(temporary_preferred_lifetime.get_name_leafdata());
    if (temporary_valid_lifetime.is_set || is_set(temporary_valid_lifetime.operation)) leaf_name_data.push_back(temporary_valid_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "create-global-addresses")
    {
        create_global_addresses = value;
    }
    if(value_path == "create-temporary-addresses")
    {
        create_temporary_addresses = value;
    }
    if(value_path == "temporary-preferred-lifetime")
    {
        temporary_preferred_lifetime = value;
    }
    if(value_path == "temporary-valid-lifetime")
    {
        temporary_valid_lifetime = value;
    }
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State::State()
    :
    create_global_addresses{YType::boolean, "create-global-addresses"},
    create_temporary_addresses{YType::boolean, "create-temporary-addresses"},
    temporary_preferred_lifetime{YType::uint32, "temporary-preferred-lifetime"},
    temporary_valid_lifetime{YType::uint32, "temporary-valid-lifetime"}
{
    yang_name = "state"; yang_parent_name = "autoconf";
}

Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State::~State()
{
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State::has_data() const
{
    return create_global_addresses.is_set
	|| create_temporary_addresses.is_set
	|| temporary_preferred_lifetime.is_set
	|| temporary_valid_lifetime.is_set;
}

bool Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State::has_operation() const
{
    return is_set(operation)
	|| is_set(create_global_addresses.operation)
	|| is_set(create_temporary_addresses.operation)
	|| is_set(temporary_preferred_lifetime.operation)
	|| is_set(temporary_valid_lifetime.operation);
}

std::string Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create_global_addresses.is_set || is_set(create_global_addresses.operation)) leaf_name_data.push_back(create_global_addresses.get_name_leafdata());
    if (create_temporary_addresses.is_set || is_set(create_temporary_addresses.operation)) leaf_name_data.push_back(create_temporary_addresses.get_name_leafdata());
    if (temporary_preferred_lifetime.is_set || is_set(temporary_preferred_lifetime.operation)) leaf_name_data.push_back(temporary_preferred_lifetime.get_name_leafdata());
    if (temporary_valid_lifetime.is_set || is_set(temporary_valid_lifetime.operation)) leaf_name_data.push_back(temporary_valid_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State::get_children()
{
    return children;
}

void Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Autoconf::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "create-global-addresses")
    {
        create_global_addresses = value;
    }
    if(value_path == "create-temporary-addresses")
    {
        create_temporary_addresses = value;
    }
    if(value_path == "temporary-preferred-lifetime")
    {
        temporary_preferred_lifetime = value;
    }
    if(value_path == "temporary-valid-lifetime")
    {
        temporary_valid_lifetime = value;
    }
}

Interfaces::Interface::Ethernet::Ethernet()
    :
    config(std::make_shared<Interfaces::Interface::Ethernet::Config>())
	,state(std::make_shared<Interfaces::Interface::Ethernet::State>())
	,vlan(std::make_shared<Interfaces::Interface::Ethernet::Vlan>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    vlan->parent = this;
    children["vlan"] = vlan;

    yang_name = "ethernet"; yang_parent_name = "interface";
}

Interfaces::Interface::Ethernet::~Ethernet()
{
}

bool Interfaces::Interface::Ethernet::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Interfaces::Interface::Ethernet::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Interfaces::Interface::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-ethernet:ethernet";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Ethernet::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Ethernet::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "vlan")
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
        else
        {
            vlan = std::make_shared<Interfaces::Interface::Ethernet::Vlan>();
            vlan->parent = this;
            children["vlan"] = vlan;
        }
        return children.at("vlan");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Ethernet::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("vlan") == children.end())
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
    }

    return children;
}

void Interfaces::Interface::Ethernet::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Ethernet::Config::Config()
    :
    aggregate_id{YType::str, "openconfig-if-aggregate:aggregate-id"},
    auto_negotiate{YType::boolean, "auto-negotiate"},
    duplex_mode{YType::enumeration, "duplex-mode"},
    enable_flow_control{YType::boolean, "enable-flow-control"},
    mac_address{YType::str, "mac-address"},
    port_speed{YType::identityref, "port-speed"}
{
    yang_name = "config"; yang_parent_name = "ethernet";
}

Interfaces::Interface::Ethernet::Config::~Config()
{
}

bool Interfaces::Interface::Ethernet::Config::has_data() const
{
    return aggregate_id.is_set
	|| auto_negotiate.is_set
	|| duplex_mode.is_set
	|| enable_flow_control.is_set
	|| mac_address.is_set
	|| port_speed.is_set;
}

bool Interfaces::Interface::Ethernet::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(aggregate_id.operation)
	|| is_set(auto_negotiate.operation)
	|| is_set(duplex_mode.operation)
	|| is_set(enable_flow_control.operation)
	|| is_set(mac_address.operation)
	|| is_set(port_speed.operation);
}

std::string Interfaces::Interface::Ethernet::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Ethernet::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_id.is_set || is_set(aggregate_id.operation)) leaf_name_data.push_back(aggregate_id.get_name_leafdata());
    if (auto_negotiate.is_set || is_set(auto_negotiate.operation)) leaf_name_data.push_back(auto_negotiate.get_name_leafdata());
    if (duplex_mode.is_set || is_set(duplex_mode.operation)) leaf_name_data.push_back(duplex_mode.get_name_leafdata());
    if (enable_flow_control.is_set || is_set(enable_flow_control.operation)) leaf_name_data.push_back(enable_flow_control.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.operation)) leaf_name_data.push_back(port_speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Ethernet::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Ethernet::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregate-id")
    {
        aggregate_id = value;
    }
    if(value_path == "auto-negotiate")
    {
        auto_negotiate = value;
    }
    if(value_path == "duplex-mode")
    {
        duplex_mode = value;
    }
    if(value_path == "enable-flow-control")
    {
        enable_flow_control = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
    }
}

Interfaces::Interface::Ethernet::State::State()
    :
    aggregate_id{YType::str, "openconfig-if-aggregate:aggregate-id"},
    auto_negotiate{YType::boolean, "auto-negotiate"},
    duplex_mode{YType::enumeration, "duplex-mode"},
    enable_flow_control{YType::boolean, "enable-flow-control"},
    hw_mac_address{YType::str, "hw-mac-address"},
    mac_address{YType::str, "mac-address"},
    port_speed{YType::identityref, "port-speed"}
    	,
    counters(std::make_shared<Interfaces::Interface::Ethernet::State::Counters>())
{
    counters->parent = this;
    children["counters"] = counters;

    yang_name = "state"; yang_parent_name = "ethernet";
}

Interfaces::Interface::Ethernet::State::~State()
{
}

bool Interfaces::Interface::Ethernet::State::has_data() const
{
    return aggregate_id.is_set
	|| auto_negotiate.is_set
	|| duplex_mode.is_set
	|| enable_flow_control.is_set
	|| hw_mac_address.is_set
	|| mac_address.is_set
	|| port_speed.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Interfaces::Interface::Ethernet::State::has_operation() const
{
    return is_set(operation)
	|| is_set(aggregate_id.operation)
	|| is_set(auto_negotiate.operation)
	|| is_set(duplex_mode.operation)
	|| is_set(enable_flow_control.operation)
	|| is_set(hw_mac_address.operation)
	|| is_set(mac_address.operation)
	|| is_set(port_speed.operation)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Interfaces::Interface::Ethernet::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Ethernet::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_id.is_set || is_set(aggregate_id.operation)) leaf_name_data.push_back(aggregate_id.get_name_leafdata());
    if (auto_negotiate.is_set || is_set(auto_negotiate.operation)) leaf_name_data.push_back(auto_negotiate.get_name_leafdata());
    if (duplex_mode.is_set || is_set(duplex_mode.operation)) leaf_name_data.push_back(duplex_mode.get_name_leafdata());
    if (enable_flow_control.is_set || is_set(enable_flow_control.operation)) leaf_name_data.push_back(enable_flow_control.get_name_leafdata());
    if (hw_mac_address.is_set || is_set(hw_mac_address.operation)) leaf_name_data.push_back(hw_mac_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (port_speed.is_set || is_set(port_speed.operation)) leaf_name_data.push_back(port_speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<Interfaces::Interface::Ethernet::State::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Ethernet::State::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    return children;
}

void Interfaces::Interface::Ethernet::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregate-id")
    {
        aggregate_id = value;
    }
    if(value_path == "auto-negotiate")
    {
        auto_negotiate = value;
    }
    if(value_path == "duplex-mode")
    {
        duplex_mode = value;
    }
    if(value_path == "enable-flow-control")
    {
        enable_flow_control = value;
    }
    if(value_path == "hw-mac-address")
    {
        hw_mac_address = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "port-speed")
    {
        port_speed = value;
    }
}

Interfaces::Interface::Ethernet::State::Counters::Counters()
    :
    in_8021q_frames{YType::uint64, "in-8021q-frames"},
    in_crc_errors{YType::uint64, "in-crc-errors"},
    in_fragment_frames{YType::uint64, "in-fragment-frames"},
    in_jabber_frames{YType::uint64, "in-jabber-frames"},
    in_mac_control_frames{YType::uint64, "in-mac-control-frames"},
    in_mac_pause_frames{YType::uint64, "in-mac-pause-frames"},
    in_oversize_frames{YType::uint64, "in-oversize-frames"},
    out_8021q_frames{YType::uint64, "out-8021q-frames"},
    out_mac_control_frames{YType::uint64, "out-mac-control-frames"},
    out_mac_pause_frames{YType::uint64, "out-mac-pause-frames"}
{
    yang_name = "counters"; yang_parent_name = "state";
}

Interfaces::Interface::Ethernet::State::Counters::~Counters()
{
}

bool Interfaces::Interface::Ethernet::State::Counters::has_data() const
{
    return in_8021q_frames.is_set
	|| in_crc_errors.is_set
	|| in_fragment_frames.is_set
	|| in_jabber_frames.is_set
	|| in_mac_control_frames.is_set
	|| in_mac_pause_frames.is_set
	|| in_oversize_frames.is_set
	|| out_8021q_frames.is_set
	|| out_mac_control_frames.is_set
	|| out_mac_pause_frames.is_set;
}

bool Interfaces::Interface::Ethernet::State::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(in_8021q_frames.operation)
	|| is_set(in_crc_errors.operation)
	|| is_set(in_fragment_frames.operation)
	|| is_set(in_jabber_frames.operation)
	|| is_set(in_mac_control_frames.operation)
	|| is_set(in_mac_pause_frames.operation)
	|| is_set(in_oversize_frames.operation)
	|| is_set(out_8021q_frames.operation)
	|| is_set(out_mac_control_frames.operation)
	|| is_set(out_mac_pause_frames.operation);
}

std::string Interfaces::Interface::Ethernet::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Ethernet::State::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_8021q_frames.is_set || is_set(in_8021q_frames.operation)) leaf_name_data.push_back(in_8021q_frames.get_name_leafdata());
    if (in_crc_errors.is_set || is_set(in_crc_errors.operation)) leaf_name_data.push_back(in_crc_errors.get_name_leafdata());
    if (in_fragment_frames.is_set || is_set(in_fragment_frames.operation)) leaf_name_data.push_back(in_fragment_frames.get_name_leafdata());
    if (in_jabber_frames.is_set || is_set(in_jabber_frames.operation)) leaf_name_data.push_back(in_jabber_frames.get_name_leafdata());
    if (in_mac_control_frames.is_set || is_set(in_mac_control_frames.operation)) leaf_name_data.push_back(in_mac_control_frames.get_name_leafdata());
    if (in_mac_pause_frames.is_set || is_set(in_mac_pause_frames.operation)) leaf_name_data.push_back(in_mac_pause_frames.get_name_leafdata());
    if (in_oversize_frames.is_set || is_set(in_oversize_frames.operation)) leaf_name_data.push_back(in_oversize_frames.get_name_leafdata());
    if (out_8021q_frames.is_set || is_set(out_8021q_frames.operation)) leaf_name_data.push_back(out_8021q_frames.get_name_leafdata());
    if (out_mac_control_frames.is_set || is_set(out_mac_control_frames.operation)) leaf_name_data.push_back(out_mac_control_frames.get_name_leafdata());
    if (out_mac_pause_frames.is_set || is_set(out_mac_pause_frames.operation)) leaf_name_data.push_back(out_mac_pause_frames.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Ethernet::State::Counters::get_children()
{
    return children;
}

void Interfaces::Interface::Ethernet::State::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-8021q-frames")
    {
        in_8021q_frames = value;
    }
    if(value_path == "in-crc-errors")
    {
        in_crc_errors = value;
    }
    if(value_path == "in-fragment-frames")
    {
        in_fragment_frames = value;
    }
    if(value_path == "in-jabber-frames")
    {
        in_jabber_frames = value;
    }
    if(value_path == "in-mac-control-frames")
    {
        in_mac_control_frames = value;
    }
    if(value_path == "in-mac-pause-frames")
    {
        in_mac_pause_frames = value;
    }
    if(value_path == "in-oversize-frames")
    {
        in_oversize_frames = value;
    }
    if(value_path == "out-8021q-frames")
    {
        out_8021q_frames = value;
    }
    if(value_path == "out-mac-control-frames")
    {
        out_mac_control_frames = value;
    }
    if(value_path == "out-mac-pause-frames")
    {
        out_mac_pause_frames = value;
    }
}

Interfaces::Interface::Ethernet::Vlan::Vlan()
    :
    config(std::make_shared<Interfaces::Interface::Ethernet::Vlan::Config>())
	,state(std::make_shared<Interfaces::Interface::Ethernet::Vlan::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "vlan"; yang_parent_name = "ethernet";
}

Interfaces::Interface::Ethernet::Vlan::~Vlan()
{
}

bool Interfaces::Interface::Ethernet::Vlan::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Ethernet::Vlan::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Ethernet::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-vlan:vlan";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Ethernet::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Ethernet::Vlan::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Ethernet::Vlan::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Ethernet::Vlan::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Ethernet::Vlan::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Ethernet::Vlan::Config::Config()
    :
    access_vlan{YType::str, "access-vlan"},
    interface_mode{YType::enumeration, "interface-mode"},
    native_vlan{YType::str, "native-vlan"},
    trunk_vlans{YType::str, "trunk-vlans"}
{
    yang_name = "config"; yang_parent_name = "vlan";
}

Interfaces::Interface::Ethernet::Vlan::Config::~Config()
{
}

bool Interfaces::Interface::Ethernet::Vlan::Config::has_data() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return access_vlan.is_set
	|| interface_mode.is_set
	|| native_vlan.is_set;
}

bool Interfaces::Interface::Ethernet::Vlan::Config::has_operation() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(access_vlan.operation)
	|| is_set(interface_mode.operation)
	|| is_set(native_vlan.operation)
	|| is_set(trunk_vlans.operation);
}

std::string Interfaces::Interface::Ethernet::Vlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Ethernet::Vlan::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_vlan.is_set || is_set(access_vlan.operation)) leaf_name_data.push_back(access_vlan.get_name_leafdata());
    if (interface_mode.is_set || is_set(interface_mode.operation)) leaf_name_data.push_back(interface_mode.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.operation)) leaf_name_data.push_back(native_vlan.get_name_leafdata());

    auto trunk_vlans_name_datas = trunk_vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), trunk_vlans_name_datas.begin(), trunk_vlans_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::Vlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Ethernet::Vlan::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Ethernet::Vlan::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-vlan")
    {
        access_vlan = value;
    }
    if(value_path == "interface-mode")
    {
        interface_mode = value;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.append(value);
    }
}

Interfaces::Interface::Ethernet::Vlan::State::State()
    :
    access_vlan{YType::str, "access-vlan"},
    interface_mode{YType::enumeration, "interface-mode"},
    native_vlan{YType::str, "native-vlan"},
    trunk_vlans{YType::str, "trunk-vlans"}
{
    yang_name = "state"; yang_parent_name = "vlan";
}

Interfaces::Interface::Ethernet::Vlan::State::~State()
{
}

bool Interfaces::Interface::Ethernet::Vlan::State::has_data() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return access_vlan.is_set
	|| interface_mode.is_set
	|| native_vlan.is_set;
}

bool Interfaces::Interface::Ethernet::Vlan::State::has_operation() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(access_vlan.operation)
	|| is_set(interface_mode.operation)
	|| is_set(native_vlan.operation)
	|| is_set(trunk_vlans.operation);
}

std::string Interfaces::Interface::Ethernet::Vlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Ethernet::Vlan::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_vlan.is_set || is_set(access_vlan.operation)) leaf_name_data.push_back(access_vlan.get_name_leafdata());
    if (interface_mode.is_set || is_set(interface_mode.operation)) leaf_name_data.push_back(interface_mode.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.operation)) leaf_name_data.push_back(native_vlan.get_name_leafdata());

    auto trunk_vlans_name_datas = trunk_vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), trunk_vlans_name_datas.begin(), trunk_vlans_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Ethernet::Vlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Ethernet::Vlan::State::get_children()
{
    return children;
}

void Interfaces::Interface::Ethernet::Vlan::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-vlan")
    {
        access_vlan = value;
    }
    if(value_path == "interface-mode")
    {
        interface_mode = value;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.append(value);
    }
}

Interfaces::Interface::Aggregation::Aggregation()
    :
    config(std::make_shared<Interfaces::Interface::Aggregation::Config>())
	,lacp(nullptr) // presence node
	,state(std::make_shared<Interfaces::Interface::Aggregation::State>())
	,vlan(std::make_shared<Interfaces::Interface::Aggregation::Vlan>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    vlan->parent = this;
    children["vlan"] = vlan;

    yang_name = "aggregation"; yang_parent_name = "interface";
}

Interfaces::Interface::Aggregation::~Aggregation()
{
}

bool Interfaces::Interface::Aggregation::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Interfaces::Interface::Aggregation::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Interfaces::Interface::Aggregation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-aggregate:aggregation";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregation' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Aggregation::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "lacp")
    {
        if(lacp != nullptr)
        {
            children["lacp"] = lacp;
        }
        else
        {
            lacp = std::make_shared<Interfaces::Interface::Aggregation::Lacp>();
            lacp->parent = this;
            children["lacp"] = lacp;
        }
        return children.at("lacp");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Aggregation::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "vlan")
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
        else
        {
            vlan = std::make_shared<Interfaces::Interface::Aggregation::Vlan>();
            vlan->parent = this;
            children["vlan"] = vlan;
        }
        return children.at("vlan");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("lacp") == children.end())
    {
        if(lacp != nullptr)
        {
            children["lacp"] = lacp;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("vlan") == children.end())
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
    }

    return children;
}

void Interfaces::Interface::Aggregation::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Aggregation::Config::Config()
    :
    lag_type{YType::enumeration, "lag-type"},
    min_links{YType::uint16, "min-links"}
{
    yang_name = "config"; yang_parent_name = "aggregation";
}

Interfaces::Interface::Aggregation::Config::~Config()
{
}

bool Interfaces::Interface::Aggregation::Config::has_data() const
{
    return lag_type.is_set
	|| min_links.is_set;
}

bool Interfaces::Interface::Aggregation::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(lag_type.operation)
	|| is_set(min_links.operation);
}

std::string Interfaces::Interface::Aggregation::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lag_type.is_set || is_set(lag_type.operation)) leaf_name_data.push_back(lag_type.get_name_leafdata());
    if (min_links.is_set || is_set(min_links.operation)) leaf_name_data.push_back(min_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Aggregation::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lag-type")
    {
        lag_type = value;
    }
    if(value_path == "min-links")
    {
        min_links = value;
    }
}

Interfaces::Interface::Aggregation::State::State()
    :
    lag_type{YType::enumeration, "lag-type"},
    members{YType::str, "members"},
    min_links{YType::uint16, "min-links"}
{
    yang_name = "state"; yang_parent_name = "aggregation";
}

Interfaces::Interface::Aggregation::State::~State()
{
}

bool Interfaces::Interface::Aggregation::State::has_data() const
{
    for (auto const & leaf : members.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lag_type.is_set
	|| min_links.is_set;
}

bool Interfaces::Interface::Aggregation::State::has_operation() const
{
    for (auto const & leaf : members.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(lag_type.operation)
	|| is_set(members.operation)
	|| is_set(min_links.operation);
}

std::string Interfaces::Interface::Aggregation::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lag_type.is_set || is_set(lag_type.operation)) leaf_name_data.push_back(lag_type.get_name_leafdata());
    if (min_links.is_set || is_set(min_links.operation)) leaf_name_data.push_back(min_links.get_name_leafdata());

    auto members_name_datas = members.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), members_name_datas.begin(), members_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::State::get_children()
{
    return children;
}

void Interfaces::Interface::Aggregation::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lag-type")
    {
        lag_type = value;
    }
    if(value_path == "members")
    {
        members.append(value);
    }
    if(value_path == "min-links")
    {
        min_links = value;
    }
}

Interfaces::Interface::Aggregation::Lacp::Lacp()
    :
    config(std::make_shared<Interfaces::Interface::Aggregation::Lacp::Config>())
	,members(std::make_shared<Interfaces::Interface::Aggregation::Lacp::Members>())
	,state(std::make_shared<Interfaces::Interface::Aggregation::Lacp::State>())
{
    config->parent = this;
    children["config"] = config;

    members->parent = this;
    children["members"] = members;

    state->parent = this;
    children["state"] = state;

    yang_name = "lacp"; yang_parent_name = "aggregation";
}

Interfaces::Interface::Aggregation::Lacp::~Lacp()
{
}

bool Interfaces::Interface::Aggregation::Lacp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (members !=  nullptr && members->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Aggregation::Lacp::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (members !=  nullptr && members->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Aggregation::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::Lacp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lacp' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Aggregation::Lacp::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "members")
    {
        if(members != nullptr)
        {
            children["members"] = members;
        }
        else
        {
            members = std::make_shared<Interfaces::Interface::Aggregation::Lacp::Members>();
            members->parent = this;
            children["members"] = members;
        }
        return children.at("members");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Aggregation::Lacp::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::Lacp::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("members") == children.end())
    {
        if(members != nullptr)
        {
            children["members"] = members;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Aggregation::Lacp::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Aggregation::Lacp::Config::Config()
    :
    interval{YType::enumeration, "interval"},
    lacp_mode{YType::enumeration, "lacp-mode"},
    system_id_mac{YType::str, "system-id-mac"},
    system_priority{YType::uint16, "system-priority"}
{
    yang_name = "config"; yang_parent_name = "lacp";
}

Interfaces::Interface::Aggregation::Lacp::Config::~Config()
{
}

bool Interfaces::Interface::Aggregation::Lacp::Config::has_data() const
{
    return interval.is_set
	|| lacp_mode.is_set
	|| system_id_mac.is_set
	|| system_priority.is_set;
}

bool Interfaces::Interface::Aggregation::Lacp::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(lacp_mode.operation)
	|| is_set(system_id_mac.operation)
	|| is_set(system_priority.operation);
}

std::string Interfaces::Interface::Aggregation::Lacp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::Lacp::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (lacp_mode.is_set || is_set(lacp_mode.operation)) leaf_name_data.push_back(lacp_mode.get_name_leafdata());
    if (system_id_mac.is_set || is_set(system_id_mac.operation)) leaf_name_data.push_back(system_id_mac.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.operation)) leaf_name_data.push_back(system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Lacp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::Lacp::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Aggregation::Lacp::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "lacp-mode")
    {
        lacp_mode = value;
    }
    if(value_path == "system-id-mac")
    {
        system_id_mac = value;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
    }
}

Interfaces::Interface::Aggregation::Lacp::State::State()
    :
    interval{YType::enumeration, "interval"},
    lacp_mode{YType::enumeration, "lacp-mode"},
    system_id_mac{YType::str, "system-id-mac"},
    system_priority{YType::uint16, "system-priority"}
{
    yang_name = "state"; yang_parent_name = "lacp";
}

Interfaces::Interface::Aggregation::Lacp::State::~State()
{
}

bool Interfaces::Interface::Aggregation::Lacp::State::has_data() const
{
    return interval.is_set
	|| lacp_mode.is_set
	|| system_id_mac.is_set
	|| system_priority.is_set;
}

bool Interfaces::Interface::Aggregation::Lacp::State::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(lacp_mode.operation)
	|| is_set(system_id_mac.operation)
	|| is_set(system_priority.operation);
}

std::string Interfaces::Interface::Aggregation::Lacp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::Lacp::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (lacp_mode.is_set || is_set(lacp_mode.operation)) leaf_name_data.push_back(lacp_mode.get_name_leafdata());
    if (system_id_mac.is_set || is_set(system_id_mac.operation)) leaf_name_data.push_back(system_id_mac.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.operation)) leaf_name_data.push_back(system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Lacp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::Lacp::State::get_children()
{
    return children;
}

void Interfaces::Interface::Aggregation::Lacp::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "lacp-mode")
    {
        lacp_mode = value;
    }
    if(value_path == "system-id-mac")
    {
        system_id_mac = value;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
    }
}

Interfaces::Interface::Aggregation::Lacp::Members::Members()
{
    yang_name = "members"; yang_parent_name = "lacp";
}

Interfaces::Interface::Aggregation::Lacp::Members::~Members()
{
}

bool Interfaces::Interface::Aggregation::Lacp::Members::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::Aggregation::Lacp::Members::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Interfaces::Interface::Aggregation::Lacp::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::Lacp::Members::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Members' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Lacp::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::Aggregation::Lacp::Members::Member>();
        c->parent = this;
        member.push_back(std::move(c));
        children[segment_path] = member.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::Lacp::Members::get_children()
{
    for (auto const & c : member)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Interfaces::Interface::Aggregation::Lacp::Members::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Aggregation::Lacp::Members::Member::Member()
    :
    interface{YType::str, "interface"}
    	,
    state(std::make_shared<Interfaces::Interface::Aggregation::Lacp::Members::Member::State>())
{
    state->parent = this;
    children["state"] = state;

    yang_name = "member"; yang_parent_name = "members";
}

Interfaces::Interface::Aggregation::Lacp::Members::Member::~Member()
{
}

bool Interfaces::Interface::Aggregation::Lacp::Members::Member::has_data() const
{
    return interface.is_set
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Aggregation::Lacp::Members::Member::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Aggregation::Lacp::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::Lacp::Members::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Member' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Lacp::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Aggregation::Lacp::Members::Member::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::Lacp::Members::Member::get_children()
{
    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Aggregation::Lacp::Members::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Interfaces::Interface::Aggregation::Lacp::Members::Member::State::State()
    :
    activity{YType::enumeration, "activity"},
    aggregatable{YType::boolean, "aggregatable"},
    collecting{YType::boolean, "collecting"},
    distributing{YType::boolean, "distributing"},
    interface{YType::str, "interface"},
    oper_key{YType::uint16, "oper-key"},
    partner_id{YType::str, "partner-id"},
    partner_key{YType::uint16, "partner-key"},
    synchronization{YType::enumeration, "synchronization"},
    system_id{YType::str, "system-id"},
    timeout{YType::enumeration, "timeout"}
    	,
    counters(std::make_shared<Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters>())
{
    counters->parent = this;
    children["counters"] = counters;

    yang_name = "state"; yang_parent_name = "member";
}

Interfaces::Interface::Aggregation::Lacp::Members::Member::State::~State()
{
}

bool Interfaces::Interface::Aggregation::Lacp::Members::Member::State::has_data() const
{
    return activity.is_set
	|| aggregatable.is_set
	|| collecting.is_set
	|| distributing.is_set
	|| interface.is_set
	|| oper_key.is_set
	|| partner_id.is_set
	|| partner_key.is_set
	|| synchronization.is_set
	|| system_id.is_set
	|| timeout.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Interfaces::Interface::Aggregation::Lacp::Members::Member::State::has_operation() const
{
    return is_set(operation)
	|| is_set(activity.operation)
	|| is_set(aggregatable.operation)
	|| is_set(collecting.operation)
	|| is_set(distributing.operation)
	|| is_set(interface.operation)
	|| is_set(oper_key.operation)
	|| is_set(partner_id.operation)
	|| is_set(partner_key.operation)
	|| is_set(synchronization.operation)
	|| is_set(system_id.operation)
	|| is_set(timeout.operation)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Interfaces::Interface::Aggregation::Lacp::Members::Member::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::Lacp::Members::Member::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activity.is_set || is_set(activity.operation)) leaf_name_data.push_back(activity.get_name_leafdata());
    if (aggregatable.is_set || is_set(aggregatable.operation)) leaf_name_data.push_back(aggregatable.get_name_leafdata());
    if (collecting.is_set || is_set(collecting.operation)) leaf_name_data.push_back(collecting.get_name_leafdata());
    if (distributing.is_set || is_set(distributing.operation)) leaf_name_data.push_back(distributing.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (oper_key.is_set || is_set(oper_key.operation)) leaf_name_data.push_back(oper_key.get_name_leafdata());
    if (partner_id.is_set || is_set(partner_id.operation)) leaf_name_data.push_back(partner_id.get_name_leafdata());
    if (partner_key.is_set || is_set(partner_key.operation)) leaf_name_data.push_back(partner_key.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.operation)) leaf_name_data.push_back(synchronization.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Lacp::Members::Member::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::Lacp::Members::Member::State::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    return children;
}

void Interfaces::Interface::Aggregation::Lacp::Members::Member::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activity")
    {
        activity = value;
    }
    if(value_path == "aggregatable")
    {
        aggregatable = value;
    }
    if(value_path == "collecting")
    {
        collecting = value;
    }
    if(value_path == "distributing")
    {
        distributing = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "oper-key")
    {
        oper_key = value;
    }
    if(value_path == "partner-id")
    {
        partner_id = value;
    }
    if(value_path == "partner-key")
    {
        partner_key = value;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters::Counters()
    :
    lacp_errors{YType::uint64, "lacp-errors"},
    lacp_in_pkts{YType::uint64, "lacp-in-pkts"},
    lacp_out_pkts{YType::uint64, "lacp-out-pkts"},
    lacp_rx_errors{YType::uint64, "lacp-rx-errors"},
    lacp_tx_errors{YType::uint64, "lacp-tx-errors"},
    lacp_unknown_errors{YType::uint64, "lacp-unknown-errors"}
{
    yang_name = "counters"; yang_parent_name = "state";
}

Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters::~Counters()
{
}

bool Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters::has_data() const
{
    return lacp_errors.is_set
	|| lacp_in_pkts.is_set
	|| lacp_out_pkts.is_set
	|| lacp_rx_errors.is_set
	|| lacp_tx_errors.is_set
	|| lacp_unknown_errors.is_set;
}

bool Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(lacp_errors.operation)
	|| is_set(lacp_in_pkts.operation)
	|| is_set(lacp_out_pkts.operation)
	|| is_set(lacp_rx_errors.operation)
	|| is_set(lacp_tx_errors.operation)
	|| is_set(lacp_unknown_errors.operation);
}

std::string Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lacp_errors.is_set || is_set(lacp_errors.operation)) leaf_name_data.push_back(lacp_errors.get_name_leafdata());
    if (lacp_in_pkts.is_set || is_set(lacp_in_pkts.operation)) leaf_name_data.push_back(lacp_in_pkts.get_name_leafdata());
    if (lacp_out_pkts.is_set || is_set(lacp_out_pkts.operation)) leaf_name_data.push_back(lacp_out_pkts.get_name_leafdata());
    if (lacp_rx_errors.is_set || is_set(lacp_rx_errors.operation)) leaf_name_data.push_back(lacp_rx_errors.get_name_leafdata());
    if (lacp_tx_errors.is_set || is_set(lacp_tx_errors.operation)) leaf_name_data.push_back(lacp_tx_errors.get_name_leafdata());
    if (lacp_unknown_errors.is_set || is_set(lacp_unknown_errors.operation)) leaf_name_data.push_back(lacp_unknown_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters::get_children()
{
    return children;
}

void Interfaces::Interface::Aggregation::Lacp::Members::Member::State::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lacp-errors")
    {
        lacp_errors = value;
    }
    if(value_path == "lacp-in-pkts")
    {
        lacp_in_pkts = value;
    }
    if(value_path == "lacp-out-pkts")
    {
        lacp_out_pkts = value;
    }
    if(value_path == "lacp-rx-errors")
    {
        lacp_rx_errors = value;
    }
    if(value_path == "lacp-tx-errors")
    {
        lacp_tx_errors = value;
    }
    if(value_path == "lacp-unknown-errors")
    {
        lacp_unknown_errors = value;
    }
}

Interfaces::Interface::Aggregation::Vlan::Vlan()
    :
    config(std::make_shared<Interfaces::Interface::Aggregation::Vlan::Config>())
	,state(std::make_shared<Interfaces::Interface::Aggregation::Vlan::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "vlan"; yang_parent_name = "aggregation";
}

Interfaces::Interface::Aggregation::Vlan::~Vlan()
{
}

bool Interfaces::Interface::Aggregation::Vlan::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::Aggregation::Vlan::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::Aggregation::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-vlan:vlan";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::Aggregation::Vlan::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::Aggregation::Vlan::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::Vlan::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::Aggregation::Vlan::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::Aggregation::Vlan::Config::Config()
    :
    access_vlan{YType::str, "access-vlan"},
    interface_mode{YType::enumeration, "interface-mode"},
    native_vlan{YType::str, "native-vlan"},
    trunk_vlans{YType::str, "trunk-vlans"}
{
    yang_name = "config"; yang_parent_name = "vlan";
}

Interfaces::Interface::Aggregation::Vlan::Config::~Config()
{
}

bool Interfaces::Interface::Aggregation::Vlan::Config::has_data() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return access_vlan.is_set
	|| interface_mode.is_set
	|| native_vlan.is_set;
}

bool Interfaces::Interface::Aggregation::Vlan::Config::has_operation() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(access_vlan.operation)
	|| is_set(interface_mode.operation)
	|| is_set(native_vlan.operation)
	|| is_set(trunk_vlans.operation);
}

std::string Interfaces::Interface::Aggregation::Vlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::Vlan::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_vlan.is_set || is_set(access_vlan.operation)) leaf_name_data.push_back(access_vlan.get_name_leafdata());
    if (interface_mode.is_set || is_set(interface_mode.operation)) leaf_name_data.push_back(interface_mode.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.operation)) leaf_name_data.push_back(native_vlan.get_name_leafdata());

    auto trunk_vlans_name_datas = trunk_vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), trunk_vlans_name_datas.begin(), trunk_vlans_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Vlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::Vlan::Config::get_children()
{
    return children;
}

void Interfaces::Interface::Aggregation::Vlan::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-vlan")
    {
        access_vlan = value;
    }
    if(value_path == "interface-mode")
    {
        interface_mode = value;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.append(value);
    }
}

Interfaces::Interface::Aggregation::Vlan::State::State()
    :
    access_vlan{YType::str, "access-vlan"},
    interface_mode{YType::enumeration, "interface-mode"},
    native_vlan{YType::str, "native-vlan"},
    trunk_vlans{YType::str, "trunk-vlans"}
{
    yang_name = "state"; yang_parent_name = "vlan";
}

Interfaces::Interface::Aggregation::Vlan::State::~State()
{
}

bool Interfaces::Interface::Aggregation::Vlan::State::has_data() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return access_vlan.is_set
	|| interface_mode.is_set
	|| native_vlan.is_set;
}

bool Interfaces::Interface::Aggregation::Vlan::State::has_operation() const
{
    for (auto const & leaf : trunk_vlans.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(access_vlan.operation)
	|| is_set(interface_mode.operation)
	|| is_set(native_vlan.operation)
	|| is_set(trunk_vlans.operation);
}

std::string Interfaces::Interface::Aggregation::Vlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::Aggregation::Vlan::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_vlan.is_set || is_set(access_vlan.operation)) leaf_name_data.push_back(access_vlan.get_name_leafdata());
    if (interface_mode.is_set || is_set(interface_mode.operation)) leaf_name_data.push_back(interface_mode.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.operation)) leaf_name_data.push_back(native_vlan.get_name_leafdata());

    auto trunk_vlans_name_datas = trunk_vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), trunk_vlans_name_datas.begin(), trunk_vlans_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::Aggregation::Vlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::Aggregation::Vlan::State::get_children()
{
    return children;
}

void Interfaces::Interface::Aggregation::Vlan::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-vlan")
    {
        access_vlan = value;
    }
    if(value_path == "interface-mode")
    {
        interface_mode = value;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
    }
    if(value_path == "trunk-vlans")
    {
        trunk_vlans.append(value);
    }
}

Interfaces::Interface::RoutedVlan::RoutedVlan()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Config>())
	,ipv4(nullptr) // presence node
	,ipv6(nullptr) // presence node
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "routed-vlan"; yang_parent_name = "interface";
}

Interfaces::Interface::RoutedVlan::~RoutedVlan()
{
}

bool Interfaces::Interface::RoutedVlan::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-vlan:routed-vlan";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutedVlan' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::RoutedVlan::Config::Config()
    :
    vlan{YType::str, "vlan"}
{
    yang_name = "config"; yang_parent_name = "routed-vlan";
}

Interfaces::Interface::RoutedVlan::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Config::has_data() const
{
    return vlan.is_set;
}

bool Interfaces::Interface::RoutedVlan::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Interfaces::Interface::RoutedVlan::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Interfaces::Interface::RoutedVlan::State::State()
    :
    vlan{YType::str, "vlan"}
{
    yang_name = "state"; yang_parent_name = "routed-vlan";
}

Interfaces::Interface::RoutedVlan::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::State::has_data() const
{
    return vlan.is_set;
}

bool Interfaces::Interface::RoutedVlan::State::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Interfaces::Interface::RoutedVlan::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Ipv4()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ipv4"; yang_parent_name = "routed-vlan";
}

Interfaces::Interface::RoutedVlan::Ipv4::~Ipv4()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-ip:ipv4";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::get_children()
{
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Address()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::State>())
	,vrrp(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    vrrp->parent = this;
    children["vrrp"] = vrrp;

    yang_name = "address"; yang_parent_name = "ipv4";
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::~Address()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "vrrp")
    {
        if(vrrp != nullptr)
        {
            children["vrrp"] = vrrp;
        }
        else
        {
            vrrp = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp>();
            vrrp->parent = this;
            children["vrrp"] = vrrp;
        }
        return children.at("vrrp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Address::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("vrrp") == children.end())
    {
        if(vrrp != nullptr)
        {
            children["vrrp"] = vrrp;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Config::Config()
    :
    ip{YType::str, "ip"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "config"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Config::has_data() const
{
    return ip.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(prefix_length.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Address::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Address::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Address::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Address::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Address::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::State::State()
    :
    ip{YType::str, "ip"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "state"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::State::has_data() const
{
    return ip.is_set
	|| origin.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::State::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(origin.operation)
	|| is_set(prefix_length.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Address::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Address::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Address::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Address::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Address::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::Vrrp()
{
    yang_name = "vrrp"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::~Vrrp()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::has_data() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrrp' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrrp-group")
    {
        for(auto const & c : vrrp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup>();
        c->parent = this;
        vrrp_group.push_back(std::move(c));
        children[segment_path] = vrrp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::get_children()
{
    for (auto const & c : vrrp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::VrrpGroup()
    :
    virtual_router_id{YType::str, "virtual-router-id"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config>())
	,interface_tracking(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State>())
{
    config->parent = this;
    children["config"] = config;

    interface_tracking->parent = this;
    children["interface-tracking"] = interface_tracking;

    state->parent = this;
    children["state"] = state;

    yang_name = "vrrp-group"; yang_parent_name = "vrrp";
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::~VrrpGroup()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::has_data() const
{
    return virtual_router_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (interface_tracking !=  nullptr && interface_tracking->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(virtual_router_id.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_tracking !=  nullptr && interface_tracking->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group" <<"[virtual-router-id='" <<virtual_router_id <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrrpGroup' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "interface-tracking")
    {
        if(interface_tracking != nullptr)
        {
            children["interface-tracking"] = interface_tracking;
        }
        else
        {
            interface_tracking = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking>();
            interface_tracking->parent = this;
            children["interface-tracking"] = interface_tracking;
        }
        return children.at("interface-tracking");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("interface-tracking") == children.end())
    {
        if(interface_tracking != nullptr)
        {
            children["interface-tracking"] = interface_tracking;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config::Config()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "config"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accept_mode.operation)
	|| is_set(advertisement_interval.operation)
	|| is_set(preempt.operation)
	|| is_set(preempt_delay.operation)
	|| is_set(priority.operation)
	|| is_set(virtual_address.operation)
	|| is_set(virtual_router_id.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.operation)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.operation)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.operation)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State::State()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    current_priority{YType::uint8, "current-priority"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "state"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| current_priority.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accept_mode.operation)
	|| is_set(advertisement_interval.operation)
	|| is_set(current_priority.operation)
	|| is_set(preempt.operation)
	|| is_set(preempt_delay.operation)
	|| is_set(priority.operation)
	|| is_set(virtual_address.operation)
	|| is_set(virtual_router_id.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.operation)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.operation)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (current_priority.is_set || is_set(current_priority.operation)) leaf_name_data.push_back(current_priority.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.operation)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
    }
    if(value_path == "current-priority")
    {
        current_priority = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "interface-tracking"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::~InterfaceTracking()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTracking' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "config"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_decrement.operation)
	|| is_set(track_interface.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.operation)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "state"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_decrement.operation)
	|| is_set(track_interface.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.operation)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "neighbor"; yang_parent_name = "ipv4";
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config::Config()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "config"; yang_parent_name = "neighbor";
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(link_layer_address.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State::State()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "state"; yang_parent_name = "neighbor";
}

Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set
	|| origin.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(link_layer_address.operation)
	|| is_set(origin.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Neighbor::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "config"; yang_parent_name = "ipv4";
}

Interfaces::Interface::RoutedVlan::Ipv4::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Config::has_data() const
{
    return enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(mtu.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv4::State::State()
    :
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint16, "mtu"}
{
    yang_name = "state"; yang_parent_name = "ipv4";
}

Interfaces::Interface::RoutedVlan::Ipv4::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv4::State::has_data() const
{
    return enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv4::State::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(mtu.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv4::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv4::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv4::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv4::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv4::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Ipv6()
    :
    autoconf(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf>())
	,config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::State>())
{
    autoconf->parent = this;
    children["autoconf"] = autoconf;

    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "ipv6"; yang_parent_name = "routed-vlan";
}

Interfaces::Interface::RoutedVlan::Ipv6::~Ipv6()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return (autoconf !=  nullptr && autoconf->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (autoconf !=  nullptr && autoconf->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-if-ip:ipv6";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "autoconf")
    {
        if(autoconf != nullptr)
        {
            children["autoconf"] = autoconf;
        }
        else
        {
            autoconf = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf>();
            autoconf->parent = this;
            children["autoconf"] = autoconf;
        }
        return children.at("autoconf");
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::get_children()
{
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("autoconf") == children.end())
    {
        if(autoconf != nullptr)
        {
            children["autoconf"] = autoconf;
        }
    }

    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Address()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::State>())
	,vrrp(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    vrrp->parent = this;
    children["vrrp"] = vrrp;

    yang_name = "address"; yang_parent_name = "ipv6";
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::~Address()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    if(child_yang_name == "vrrp")
    {
        if(vrrp != nullptr)
        {
            children["vrrp"] = vrrp;
        }
        else
        {
            vrrp = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp>();
            vrrp->parent = this;
            children["vrrp"] = vrrp;
        }
        return children.at("vrrp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Address::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    if(children.find("vrrp") == children.end())
    {
        if(vrrp != nullptr)
        {
            children["vrrp"] = vrrp;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Config::Config()
    :
    ip{YType::str, "ip"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "config"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Config::has_data() const
{
    return ip.is_set
	|| prefix_length.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(prefix_length.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Address::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Address::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Address::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Address::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Address::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::State::State()
    :
    ip{YType::str, "ip"},
    origin{YType::enumeration, "origin"},
    prefix_length{YType::uint8, "prefix-length"},
    status{YType::enumeration, "status"}
{
    yang_name = "state"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::State::has_data() const
{
    return ip.is_set
	|| origin.is_set
	|| prefix_length.is_set
	|| status.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::State::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(origin.operation)
	|| is_set(prefix_length.operation)
	|| is_set(status.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Address::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Address::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Address::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Address::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Address::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::Vrrp()
{
    yang_name = "vrrp"; yang_parent_name = "address";
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::~Vrrp()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::has_data() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_data())
            return true;
    }
    return false;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<vrrp_group.size(); index++)
    {
        if(vrrp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrrp' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrrp-group")
    {
        for(auto const & c : vrrp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup>();
        c->parent = this;
        vrrp_group.push_back(std::move(c));
        children[segment_path] = vrrp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::get_children()
{
    for (auto const & c : vrrp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::VrrpGroup()
    :
    virtual_router_id{YType::str, "virtual-router-id"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config>())
	,interface_tracking(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State>())
{
    config->parent = this;
    children["config"] = config;

    interface_tracking->parent = this;
    children["interface-tracking"] = interface_tracking;

    state->parent = this;
    children["state"] = state;

    yang_name = "vrrp-group"; yang_parent_name = "vrrp";
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::~VrrpGroup()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::has_data() const
{
    return virtual_router_id.is_set
	|| (config !=  nullptr && config->has_data())
	|| (interface_tracking !=  nullptr && interface_tracking->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(virtual_router_id.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (interface_tracking !=  nullptr && interface_tracking->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group" <<"[virtual-router-id='" <<virtual_router_id <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrrpGroup' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "interface-tracking")
    {
        if(interface_tracking != nullptr)
        {
            children["interface-tracking"] = interface_tracking;
        }
        else
        {
            interface_tracking = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking>();
            interface_tracking->parent = this;
            children["interface-tracking"] = interface_tracking;
        }
        return children.at("interface-tracking");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("interface-tracking") == children.end())
    {
        if(interface_tracking != nullptr)
        {
            children["interface-tracking"] = interface_tracking;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config::Config()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_link_local{YType::str, "virtual-link-local"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "config"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_link_local.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accept_mode.operation)
	|| is_set(advertisement_interval.operation)
	|| is_set(preempt.operation)
	|| is_set(preempt_delay.operation)
	|| is_set(priority.operation)
	|| is_set(virtual_address.operation)
	|| is_set(virtual_link_local.operation)
	|| is_set(virtual_router_id.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.operation)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.operation)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.operation)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_link_local.is_set || is_set(virtual_link_local.operation)) leaf_name_data.push_back(virtual_link_local.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local = value;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State::State()
    :
    accept_mode{YType::boolean, "accept-mode"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    current_priority{YType::uint8, "current-priority"},
    preempt{YType::boolean, "preempt"},
    preempt_delay{YType::uint16, "preempt-delay"},
    priority{YType::uint8, "priority"},
    virtual_address{YType::str, "virtual-address"},
    virtual_link_local{YType::str, "virtual-link-local"},
    virtual_router_id{YType::uint8, "virtual-router-id"}
{
    yang_name = "state"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State::has_data() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accept_mode.is_set
	|| advertisement_interval.is_set
	|| current_priority.is_set
	|| preempt.is_set
	|| preempt_delay.is_set
	|| priority.is_set
	|| virtual_link_local.is_set
	|| virtual_router_id.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State::has_operation() const
{
    for (auto const & leaf : virtual_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accept_mode.operation)
	|| is_set(advertisement_interval.operation)
	|| is_set(current_priority.operation)
	|| is_set(preempt.operation)
	|| is_set(preempt_delay.operation)
	|| is_set(priority.operation)
	|| is_set(virtual_address.operation)
	|| is_set(virtual_link_local.operation)
	|| is_set(virtual_router_id.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mode.is_set || is_set(accept_mode.operation)) leaf_name_data.push_back(accept_mode.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.operation)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (current_priority.is_set || is_set(current_priority.operation)) leaf_name_data.push_back(current_priority.get_name_leafdata());
    if (preempt.is_set || is_set(preempt.operation)) leaf_name_data.push_back(preempt.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.operation)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (virtual_link_local.is_set || is_set(virtual_link_local.operation)) leaf_name_data.push_back(virtual_link_local.get_name_leafdata());
    if (virtual_router_id.is_set || is_set(virtual_router_id.operation)) leaf_name_data.push_back(virtual_router_id.get_name_leafdata());

    auto virtual_address_name_datas = virtual_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_address_name_datas.begin(), virtual_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mode")
    {
        accept_mode = value;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
    }
    if(value_path == "current-priority")
    {
        current_priority = value;
    }
    if(value_path == "preempt")
    {
        preempt = value;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "virtual-address")
    {
        virtual_address.append(value);
    }
    if(value_path == "virtual-link-local")
    {
        virtual_link_local = value;
    }
    if(value_path == "virtual-router-id")
    {
        virtual_router_id = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::InterfaceTracking()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "interface-tracking"; yang_parent_name = "vrrp-group";
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::~InterfaceTracking()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTracking' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::Config()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "config"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_decrement.operation)
	|| is_set(track_interface.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.operation)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::State()
    :
    priority_decrement{YType::uint8, "priority-decrement"},
    track_interface{YType::str, "track-interface"}
{
    yang_name = "state"; yang_parent_name = "interface-tracking";
}

Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_data() const
{
    return priority_decrement.is_set
	|| track_interface.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_decrement.operation)
	|| is_set(track_interface.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (track_interface.is_set || is_set(track_interface.operation)) leaf_name_data.push_back(track_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Address::Vrrp::VrrpGroup::InterfaceTracking::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "track-interface")
    {
        track_interface = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Neighbor()
    :
    ip{YType::str, "ip"}
    	,
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "neighbor"; yang_parent_name = "ipv6";
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::~Neighbor()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::has_data() const
{
    return ip.is_set
	|| (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config::Config()
    :
    ip{YType::str, "ip"},
    link_layer_address{YType::str, "link-layer-address"}
{
    yang_name = "config"; yang_parent_name = "neighbor";
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config::has_data() const
{
    return ip.is_set
	|| link_layer_address.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(link_layer_address.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::State()
    :
    ip{YType::str, "ip"},
    is_router{YType::empty, "is-router"},
    link_layer_address{YType::str, "link-layer-address"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    origin{YType::enumeration, "origin"}
{
    yang_name = "state"; yang_parent_name = "neighbor";
}

Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::has_data() const
{
    return ip.is_set
	|| is_router.is_set
	|| link_layer_address.is_set
	|| neighbor_state.is_set
	|| origin.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(is_router.operation)
	|| is_set(link_layer_address.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(origin.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (is_router.is_set || is_set(is_router.operation)) leaf_name_data.push_back(is_router.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "is-router")
    {
        is_router = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Config::Config()
    :
    dup_addr_detect_transmits{YType::uint32, "dup-addr-detect-transmits"},
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "config"; yang_parent_name = "ipv6";
}

Interfaces::Interface::RoutedVlan::Ipv6::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Config::has_data() const
{
    return dup_addr_detect_transmits.is_set
	|| enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(dup_addr_detect_transmits.operation)
	|| is_set(enabled.operation)
	|| is_set(mtu.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dup_addr_detect_transmits.is_set || is_set(dup_addr_detect_transmits.operation)) leaf_name_data.push_back(dup_addr_detect_transmits.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::State::State()
    :
    dup_addr_detect_transmits{YType::uint32, "dup-addr-detect-transmits"},
    enabled{YType::boolean, "enabled"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "state"; yang_parent_name = "ipv6";
}

Interfaces::Interface::RoutedVlan::Ipv6::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::State::has_data() const
{
    return dup_addr_detect_transmits.is_set
	|| enabled.is_set
	|| mtu.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::State::has_operation() const
{
    return is_set(operation)
	|| is_set(dup_addr_detect_transmits.operation)
	|| is_set(enabled.operation)
	|| is_set(mtu.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dup_addr_detect_transmits.is_set || is_set(dup_addr_detect_transmits.operation)) leaf_name_data.push_back(dup_addr_detect_transmits.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dup-addr-detect-transmits")
    {
        dup_addr_detect_transmits = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Autoconf()
    :
    config(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config>())
	,state(std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State>())
{
    config->parent = this;
    children["config"] = config;

    state->parent = this;
    children["state"] = state;

    yang_name = "autoconf"; yang_parent_name = "ipv6";
}

Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::~Autoconf()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconf";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoconf' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
        else
        {
            state = std::make_shared<Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State>();
            state->parent = this;
            children["state"] = state;
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state;
        }
    }

    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::set_value(const std::string & value_path, std::string value)
{
}

Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config::Config()
    :
    create_global_addresses{YType::boolean, "create-global-addresses"},
    create_temporary_addresses{YType::boolean, "create-temporary-addresses"},
    temporary_preferred_lifetime{YType::uint32, "temporary-preferred-lifetime"},
    temporary_valid_lifetime{YType::uint32, "temporary-valid-lifetime"}
{
    yang_name = "config"; yang_parent_name = "autoconf";
}

Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config::~Config()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config::has_data() const
{
    return create_global_addresses.is_set
	|| create_temporary_addresses.is_set
	|| temporary_preferred_lifetime.is_set
	|| temporary_valid_lifetime.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(create_global_addresses.operation)
	|| is_set(create_temporary_addresses.operation)
	|| is_set(temporary_preferred_lifetime.operation)
	|| is_set(temporary_valid_lifetime.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Config' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create_global_addresses.is_set || is_set(create_global_addresses.operation)) leaf_name_data.push_back(create_global_addresses.get_name_leafdata());
    if (create_temporary_addresses.is_set || is_set(create_temporary_addresses.operation)) leaf_name_data.push_back(create_temporary_addresses.get_name_leafdata());
    if (temporary_preferred_lifetime.is_set || is_set(temporary_preferred_lifetime.operation)) leaf_name_data.push_back(temporary_preferred_lifetime.get_name_leafdata());
    if (temporary_valid_lifetime.is_set || is_set(temporary_valid_lifetime.operation)) leaf_name_data.push_back(temporary_valid_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "create-global-addresses")
    {
        create_global_addresses = value;
    }
    if(value_path == "create-temporary-addresses")
    {
        create_temporary_addresses = value;
    }
    if(value_path == "temporary-preferred-lifetime")
    {
        temporary_preferred_lifetime = value;
    }
    if(value_path == "temporary-valid-lifetime")
    {
        temporary_valid_lifetime = value;
    }
}

Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State::State()
    :
    create_global_addresses{YType::boolean, "create-global-addresses"},
    create_temporary_addresses{YType::boolean, "create-temporary-addresses"},
    temporary_preferred_lifetime{YType::uint32, "temporary-preferred-lifetime"},
    temporary_valid_lifetime{YType::uint32, "temporary-valid-lifetime"}
{
    yang_name = "state"; yang_parent_name = "autoconf";
}

Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State::~State()
{
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State::has_data() const
{
    return create_global_addresses.is_set
	|| create_temporary_addresses.is_set
	|| temporary_preferred_lifetime.is_set
	|| temporary_valid_lifetime.is_set;
}

bool Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State::has_operation() const
{
    return is_set(operation)
	|| is_set(create_global_addresses.operation)
	|| is_set(create_temporary_addresses.operation)
	|| is_set(temporary_preferred_lifetime.operation)
	|| is_set(temporary_valid_lifetime.operation);
}

std::string Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in openconfig_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create_global_addresses.is_set || is_set(create_global_addresses.operation)) leaf_name_data.push_back(create_global_addresses.get_name_leafdata());
    if (create_temporary_addresses.is_set || is_set(create_temporary_addresses.operation)) leaf_name_data.push_back(create_temporary_addresses.get_name_leafdata());
    if (temporary_preferred_lifetime.is_set || is_set(temporary_preferred_lifetime.operation)) leaf_name_data.push_back(temporary_preferred_lifetime.get_name_leafdata());
    if (temporary_valid_lifetime.is_set || is_set(temporary_valid_lifetime.operation)) leaf_name_data.push_back(temporary_valid_lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State::get_children()
{
    return children;
}

void Interfaces::Interface::RoutedVlan::Ipv6::Autoconf::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "create-global-addresses")
    {
        create_global_addresses = value;
    }
    if(value_path == "create-temporary-addresses")
    {
        create_temporary_addresses = value;
    }
    if(value_path == "temporary-preferred-lifetime")
    {
        temporary_preferred_lifetime = value;
    }
    if(value_path == "temporary-valid-lifetime")
    {
        temporary_valid_lifetime = value;
    }
}

const Enum::YLeaf Interfaces::Interface::State::AdminStatusEnum::UP {0, "UP"};
const Enum::YLeaf Interfaces::Interface::State::AdminStatusEnum::DOWN {1, "DOWN"};
const Enum::YLeaf Interfaces::Interface::State::AdminStatusEnum::TESTING {2, "TESTING"};

const Enum::YLeaf Interfaces::Interface::State::OperStatusEnum::UP {1, "UP"};
const Enum::YLeaf Interfaces::Interface::State::OperStatusEnum::DOWN {2, "DOWN"};
const Enum::YLeaf Interfaces::Interface::State::OperStatusEnum::TESTING {3, "TESTING"};
const Enum::YLeaf Interfaces::Interface::State::OperStatusEnum::UNKNOWN {4, "UNKNOWN"};
const Enum::YLeaf Interfaces::Interface::State::OperStatusEnum::DORMANT {5, "DORMANT"};
const Enum::YLeaf Interfaces::Interface::State::OperStatusEnum::NOT_PRESENT {6, "NOT-PRESENT"};
const Enum::YLeaf Interfaces::Interface::State::OperStatusEnum::LOWER_LAYER_DOWN {7, "LOWER-LAYER-DOWN"};

const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::AdminStatusEnum::UP {0, "UP"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::AdminStatusEnum::DOWN {1, "DOWN"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::AdminStatusEnum::TESTING {2, "TESTING"};

const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatusEnum::UP {1, "UP"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatusEnum::DOWN {2, "DOWN"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatusEnum::TESTING {3, "TESTING"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatusEnum::UNKNOWN {4, "UNKNOWN"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatusEnum::DORMANT {5, "DORMANT"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatusEnum::NOT_PRESENT {6, "NOT-PRESENT"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::State::OperStatusEnum::LOWER_LAYER_DOWN {7, "LOWER-LAYER-DOWN"};

const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::StatusEnum::PREFERRED {0, "PREFERRED"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::StatusEnum::DEPRECATED {1, "DEPRECATED"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::StatusEnum::INVALID {2, "INVALID"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::StatusEnum::INACCESSIBLE {3, "INACCESSIBLE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::StatusEnum::UNKNOWN {4, "UNKNOWN"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::StatusEnum::TENTATIVE {5, "TENTATIVE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::StatusEnum::DUPLICATE {6, "DUPLICATE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Address::State::StatusEnum::OPTIMISTIC {7, "OPTIMISTIC"};

const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::NeighborStateEnum::INCOMPLETE {0, "INCOMPLETE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::NeighborStateEnum::REACHABLE {1, "REACHABLE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::NeighborStateEnum::STALE {2, "STALE"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::NeighborStateEnum::DELAY {3, "DELAY"};
const Enum::YLeaf Interfaces::Interface::Subinterfaces::Subinterface::Ipv6::Neighbor::State::NeighborStateEnum::PROBE {4, "PROBE"};

const Enum::YLeaf Interfaces::Interface::Ethernet::Config::DuplexModeEnum::FULL {0, "FULL"};
const Enum::YLeaf Interfaces::Interface::Ethernet::Config::DuplexModeEnum::HALF {1, "HALF"};

const Enum::YLeaf Interfaces::Interface::Ethernet::State::DuplexModeEnum::FULL {0, "FULL"};
const Enum::YLeaf Interfaces::Interface::Ethernet::State::DuplexModeEnum::HALF {1, "HALF"};

const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Address::State::StatusEnum::PREFERRED {0, "PREFERRED"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Address::State::StatusEnum::DEPRECATED {1, "DEPRECATED"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Address::State::StatusEnum::INVALID {2, "INVALID"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Address::State::StatusEnum::INACCESSIBLE {3, "INACCESSIBLE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Address::State::StatusEnum::UNKNOWN {4, "UNKNOWN"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Address::State::StatusEnum::TENTATIVE {5, "TENTATIVE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Address::State::StatusEnum::DUPLICATE {6, "DUPLICATE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Address::State::StatusEnum::OPTIMISTIC {7, "OPTIMISTIC"};

const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::NeighborStateEnum::INCOMPLETE {0, "INCOMPLETE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::NeighborStateEnum::REACHABLE {1, "REACHABLE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::NeighborStateEnum::STALE {2, "STALE"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::NeighborStateEnum::DELAY {3, "DELAY"};
const Enum::YLeaf Interfaces::Interface::RoutedVlan::Ipv6::Neighbor::State::NeighborStateEnum::PROBE {4, "PROBE"};


}
}

