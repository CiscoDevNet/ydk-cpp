
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_interfaces.hpp"

namespace ydk {
namespace ietf_interfaces {

InterfaceTypeIdentity::InterfaceTypeIdentity()
     : Identity("ietf-interfaces:interface-type")
{
}

InterfaceTypeIdentity::~InterfaceTypeIdentity()
{
}

Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ietf-interfaces";
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
    path_buffer << "ietf-interfaces:interfaces";

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
    return ydk_ietf_models_path;
}

std::string Interfaces::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function Interfaces::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

Interfaces::Interface::Interface()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    enabled{YType::boolean, "enabled"},
    link_up_down_trap_enable{YType::enumeration, "link-up-down-trap-enable"},
    type{YType::identityref, "type"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Interfaces::Interface::~Interface()
{
}

bool Interfaces::Interface::has_data() const
{
    return name.is_set
	|| description.is_set
	|| enabled.is_set
	|| link_up_down_trap_enable.is_set
	|| type.is_set;
}

bool Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(enabled.operation)
	|| is_set(link_up_down_trap_enable.operation)
	|| is_set(type.operation);
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
        path_buffer << "ietf-interfaces:interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (link_up_down_trap_enable.is_set || is_set(link_up_down_trap_enable.operation)) leaf_name_data.push_back(link_up_down_trap_enable.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Interfaces::Interface::get_children()
{
    return children;
}

void Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "link-up-down-trap-enable")
    {
        link_up_down_trap_enable = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfacesState::InterfacesState()
{
    yang_name = "interfaces-state"; yang_parent_name = "ietf-interfaces";
}

InterfacesState::~InterfacesState()
{
}

bool InterfacesState::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool InterfacesState::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfacesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-interfaces:interfaces-state";

    return path_buffer.str();

}

EntityPath InterfacesState::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> InterfacesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<InterfacesState::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfacesState::get_children()
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

void InterfacesState::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> InterfacesState::clone_ptr() const
{
    return std::make_shared<InterfacesState>();
}

std::string InterfacesState::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string InterfacesState::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function InterfacesState::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

InterfacesState::Interface::Interface()
    :
    name{YType::str, "name"},
    admin_status{YType::enumeration, "admin-status"},
    higher_layer_if{YType::str, "higher-layer-if"},
    if_index{YType::int32, "if-index"},
    last_change{YType::str, "last-change"},
    lower_layer_if{YType::str, "lower-layer-if"},
    oper_status{YType::enumeration, "oper-status"},
    phys_address{YType::str, "phys-address"},
    speed{YType::uint64, "speed"},
    type{YType::identityref, "type"}
    	,
    bandwidth(std::make_shared<InterfacesState::Interface::Bandwidth>())
	,statistics(std::make_shared<InterfacesState::Interface::Statistics>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "interface"; yang_parent_name = "interfaces-state";
}

InterfacesState::Interface::~Interface()
{
}

bool InterfacesState::Interface::has_data() const
{
    for (auto const & leaf : higher_layer_if.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lower_layer_if.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| admin_status.is_set
	|| if_index.is_set
	|| last_change.is_set
	|| oper_status.is_set
	|| phys_address.is_set
	|| speed.is_set
	|| type.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool InterfacesState::Interface::has_operation() const
{
    for (auto const & leaf : higher_layer_if.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lower_layer_if.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(admin_status.operation)
	|| is_set(higher_layer_if.operation)
	|| is_set(if_index.operation)
	|| is_set(last_change.operation)
	|| is_set(lower_layer_if.operation)
	|| is_set(oper_status.operation)
	|| is_set(phys_address.operation)
	|| is_set(speed.operation)
	|| is_set(type.operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string InterfacesState::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath InterfacesState::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-interfaces:interfaces-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (last_change.is_set || is_set(last_change.operation)) leaf_name_data.push_back(last_change.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.operation)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (phys_address.is_set || is_set(phys_address.operation)) leaf_name_data.push_back(phys_address.get_name_leafdata());
    if (speed.is_set || is_set(speed.operation)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());

    auto higher_layer_if_name_datas = higher_layer_if.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), higher_layer_if_name_datas.begin(), higher_layer_if_name_datas.end());
    auto lower_layer_if_name_datas = lower_layer_if.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lower_layer_if_name_datas.begin(), lower_layer_if_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<InterfacesState::Interface::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<InterfacesState::Interface::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfacesState::Interface::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void InterfacesState::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "higher-layer-if")
    {
        higher_layer_if.append(value);
    }
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "last-change")
    {
        last_change = value;
    }
    if(value_path == "lower-layer-if")
    {
        lower_layer_if.append(value);
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
    }
    if(value_path == "phys-address")
    {
        phys_address = value;
    }
    if(value_path == "speed")
    {
        speed = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfacesState::Interface::Statistics::Statistics()
    :
    discontinuity_time{YType::str, "discontinuity-time"},
    in_broadcast_pkts{YType::uint64, "in-broadcast-pkts"},
    in_discards{YType::uint32, "in-discards"},
    in_errors{YType::uint32, "in-errors"},
    in_multicast_pkts{YType::uint64, "in-multicast-pkts"},
    in_octets{YType::uint64, "in-octets"},
    in_pkts{YType::uint64, "ietf-interfaces-ext:in-pkts"},
    in_unicast_pkts{YType::uint64, "in-unicast-pkts"},
    in_unknown_protos{YType::uint32, "in-unknown-protos"},
    out_broadcast_pkts{YType::uint64, "out-broadcast-pkts"},
    out_discards{YType::uint32, "out-discards"},
    out_errors{YType::uint32, "out-errors"},
    out_multicast_pkts{YType::uint64, "out-multicast-pkts"},
    out_octets{YType::uint64, "out-octets"},
    out_pkts{YType::uint64, "ietf-interfaces-ext:out-pkts"},
    out_unicast_pkts{YType::uint64, "out-unicast-pkts"}
{
    yang_name = "statistics"; yang_parent_name = "interface";
}

InterfacesState::Interface::Statistics::~Statistics()
{
}

bool InterfacesState::Interface::Statistics::has_data() const
{
    return discontinuity_time.is_set
	|| in_broadcast_pkts.is_set
	|| in_discards.is_set
	|| in_errors.is_set
	|| in_multicast_pkts.is_set
	|| in_octets.is_set
	|| in_pkts.is_set
	|| in_unicast_pkts.is_set
	|| in_unknown_protos.is_set
	|| out_broadcast_pkts.is_set
	|| out_discards.is_set
	|| out_errors.is_set
	|| out_multicast_pkts.is_set
	|| out_octets.is_set
	|| out_pkts.is_set
	|| out_unicast_pkts.is_set;
}

bool InterfacesState::Interface::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(discontinuity_time.operation)
	|| is_set(in_broadcast_pkts.operation)
	|| is_set(in_discards.operation)
	|| is_set(in_errors.operation)
	|| is_set(in_multicast_pkts.operation)
	|| is_set(in_octets.operation)
	|| is_set(in_pkts.operation)
	|| is_set(in_unicast_pkts.operation)
	|| is_set(in_unknown_protos.operation)
	|| is_set(out_broadcast_pkts.operation)
	|| is_set(out_discards.operation)
	|| is_set(out_errors.operation)
	|| is_set(out_multicast_pkts.operation)
	|| is_set(out_octets.operation)
	|| is_set(out_pkts.operation)
	|| is_set(out_unicast_pkts.operation);
}

std::string InterfacesState::Interface::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath InterfacesState::Interface::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discontinuity_time.is_set || is_set(discontinuity_time.operation)) leaf_name_data.push_back(discontinuity_time.get_name_leafdata());
    if (in_broadcast_pkts.is_set || is_set(in_broadcast_pkts.operation)) leaf_name_data.push_back(in_broadcast_pkts.get_name_leafdata());
    if (in_discards.is_set || is_set(in_discards.operation)) leaf_name_data.push_back(in_discards.get_name_leafdata());
    if (in_errors.is_set || is_set(in_errors.operation)) leaf_name_data.push_back(in_errors.get_name_leafdata());
    if (in_multicast_pkts.is_set || is_set(in_multicast_pkts.operation)) leaf_name_data.push_back(in_multicast_pkts.get_name_leafdata());
    if (in_octets.is_set || is_set(in_octets.operation)) leaf_name_data.push_back(in_octets.get_name_leafdata());
    if (in_pkts.is_set || is_set(in_pkts.operation)) leaf_name_data.push_back(in_pkts.get_name_leafdata());
    if (in_unicast_pkts.is_set || is_set(in_unicast_pkts.operation)) leaf_name_data.push_back(in_unicast_pkts.get_name_leafdata());
    if (in_unknown_protos.is_set || is_set(in_unknown_protos.operation)) leaf_name_data.push_back(in_unknown_protos.get_name_leafdata());
    if (out_broadcast_pkts.is_set || is_set(out_broadcast_pkts.operation)) leaf_name_data.push_back(out_broadcast_pkts.get_name_leafdata());
    if (out_discards.is_set || is_set(out_discards.operation)) leaf_name_data.push_back(out_discards.get_name_leafdata());
    if (out_errors.is_set || is_set(out_errors.operation)) leaf_name_data.push_back(out_errors.get_name_leafdata());
    if (out_multicast_pkts.is_set || is_set(out_multicast_pkts.operation)) leaf_name_data.push_back(out_multicast_pkts.get_name_leafdata());
    if (out_octets.is_set || is_set(out_octets.operation)) leaf_name_data.push_back(out_octets.get_name_leafdata());
    if (out_pkts.is_set || is_set(out_pkts.operation)) leaf_name_data.push_back(out_pkts.get_name_leafdata());
    if (out_unicast_pkts.is_set || is_set(out_unicast_pkts.operation)) leaf_name_data.push_back(out_unicast_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfacesState::Interface::Statistics::get_children()
{
    return children;
}

void InterfacesState::Interface::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discontinuity-time")
    {
        discontinuity_time = value;
    }
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
    if(value_path == "in-pkts")
    {
        in_pkts = value;
    }
    if(value_path == "in-unicast-pkts")
    {
        in_unicast_pkts = value;
    }
    if(value_path == "in-unknown-protos")
    {
        in_unknown_protos = value;
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
    if(value_path == "out-pkts")
    {
        out_pkts = value;
    }
    if(value_path == "out-unicast-pkts")
    {
        out_unicast_pkts = value;
    }
}

InterfacesState::Interface::Bandwidth::Bandwidth()
    :
    units{YType::str, "units"},
    value_{YType::uint64, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "interface";
}

InterfacesState::Interface::Bandwidth::~Bandwidth()
{
}

bool InterfacesState::Interface::Bandwidth::has_data() const
{
    return units.is_set
	|| value_.is_set;
}

bool InterfacesState::Interface::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(units.operation)
	|| is_set(value_.operation);
}

std::string InterfacesState::Interface::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-interfaces-ext:bandwidth";

    return path_buffer.str();

}

EntityPath InterfacesState::Interface::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in ietf_interfaces cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfacesState::Interface::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfacesState::Interface::Bandwidth::get_children()
{
    return children;
}

void InterfacesState::Interface::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "units")
    {
        units = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

const Enum::YLeaf Interfaces::Interface::LinkUpDownTrapEnableEnum::enabled {1, "enabled"};
const Enum::YLeaf Interfaces::Interface::LinkUpDownTrapEnableEnum::disabled {2, "disabled"};

const Enum::YLeaf InterfacesState::Interface::AdminStatusEnum::up {1, "up"};
const Enum::YLeaf InterfacesState::Interface::AdminStatusEnum::down {2, "down"};
const Enum::YLeaf InterfacesState::Interface::AdminStatusEnum::testing {3, "testing"};

const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::up {1, "up"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::down {2, "down"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::testing {3, "testing"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::unknown {4, "unknown"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::dormant {5, "dormant"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::not_present {6, "not-present"};
const Enum::YLeaf InterfacesState::Interface::OperStatusEnum::lower_layer_down {7, "lower-layer-down"};


}
}

