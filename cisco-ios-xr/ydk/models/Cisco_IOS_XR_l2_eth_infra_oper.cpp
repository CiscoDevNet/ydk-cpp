
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_l2_eth_infra_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2_eth_infra_oper {

MacAccounting::Interfaces::Interface::State::State()
    :
    	is_egress_enabled{YType::boolean, "is-egress-enabled"},
	 is_ingress_enabled{YType::boolean, "is-ingress-enabled"},
	 number_available_egress{YType::uint32, "number-available-egress"},
	 number_available_ingress{YType::uint32, "number-available-ingress"},
	 number_available_on_node{YType::uint32, "number-available-on-node"}
{
    yang_name = "state"; yang_parent_name = "interface";
}

MacAccounting::Interfaces::Interface::State::~State()
{
}

bool MacAccounting::Interfaces::Interface::State::has_data() const
{
    return is_egress_enabled.is_set
	|| is_ingress_enabled.is_set
	|| number_available_egress.is_set
	|| number_available_ingress.is_set
	|| number_available_on_node.is_set;
}

bool MacAccounting::Interfaces::Interface::State::has_operation() const
{
    return is_set(operation)
	|| is_set(is_egress_enabled.operation)
	|| is_set(is_ingress_enabled.operation)
	|| is_set(number_available_egress.operation)
	|| is_set(number_available_ingress.operation)
	|| is_set(number_available_on_node.operation);
}

std::string MacAccounting::Interfaces::Interface::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";

    return path_buffer.str();

}

EntityPath MacAccounting::Interfaces::Interface::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_egress_enabled.is_set || is_set(is_egress_enabled.operation)) leaf_name_data.push_back(is_egress_enabled.get_name_leafdata());
    if (is_ingress_enabled.is_set || is_set(is_ingress_enabled.operation)) leaf_name_data.push_back(is_ingress_enabled.get_name_leafdata());
    if (number_available_egress.is_set || is_set(number_available_egress.operation)) leaf_name_data.push_back(number_available_egress.get_name_leafdata());
    if (number_available_ingress.is_set || is_set(number_available_ingress.operation)) leaf_name_data.push_back(number_available_ingress.get_name_leafdata());
    if (number_available_on_node.is_set || is_set(number_available_on_node.operation)) leaf_name_data.push_back(number_available_on_node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacAccounting::Interfaces::Interface::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MacAccounting::Interfaces::Interface::State::get_children()
{
    return children;
}

void MacAccounting::Interfaces::Interface::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-egress-enabled")
    {
        is_egress_enabled = value;
    }
    if(value_path == "is-ingress-enabled")
    {
        is_ingress_enabled = value;
    }
    if(value_path == "number-available-egress")
    {
        number_available_egress = value;
    }
    if(value_path == "number-available-ingress")
    {
        number_available_ingress = value;
    }
    if(value_path == "number-available-on-node")
    {
        number_available_on_node = value;
    }
}

MacAccounting::Interfaces::Interface::IngressStatistic::IngressStatistic()
    :
    	bytes{YType::uint64, "bytes"},
	 mac_address{YType::str, "mac-address"},
	 packets{YType::uint64, "packets"}
{
    yang_name = "ingress-statistic"; yang_parent_name = "interface";
}

MacAccounting::Interfaces::Interface::IngressStatistic::~IngressStatistic()
{
}

bool MacAccounting::Interfaces::Interface::IngressStatistic::has_data() const
{
    return bytes.is_set
	|| mac_address.is_set
	|| packets.is_set;
}

bool MacAccounting::Interfaces::Interface::IngressStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(mac_address.operation)
	|| is_set(packets.operation);
}

std::string MacAccounting::Interfaces::Interface::IngressStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-statistic";

    return path_buffer.str();

}

EntityPath MacAccounting::Interfaces::Interface::IngressStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacAccounting::Interfaces::Interface::IngressStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MacAccounting::Interfaces::Interface::IngressStatistic::get_children()
{
    return children;
}

void MacAccounting::Interfaces::Interface::IngressStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

MacAccounting::Interfaces::Interface::EgressStatistic::EgressStatistic()
    :
    	bytes{YType::uint64, "bytes"},
	 mac_address{YType::str, "mac-address"},
	 packets{YType::uint64, "packets"}
{
    yang_name = "egress-statistic"; yang_parent_name = "interface";
}

MacAccounting::Interfaces::Interface::EgressStatistic::~EgressStatistic()
{
}

bool MacAccounting::Interfaces::Interface::EgressStatistic::has_data() const
{
    return bytes.is_set
	|| mac_address.is_set
	|| packets.is_set;
}

bool MacAccounting::Interfaces::Interface::EgressStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(mac_address.operation)
	|| is_set(packets.operation);
}

std::string MacAccounting::Interfaces::Interface::EgressStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-statistic";

    return path_buffer.str();

}

EntityPath MacAccounting::Interfaces::Interface::EgressStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacAccounting::Interfaces::Interface::EgressStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MacAccounting::Interfaces::Interface::EgressStatistic::get_children()
{
    return children;
}

void MacAccounting::Interfaces::Interface::EgressStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

MacAccounting::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    state(std::make_unique<MacAccounting::Interfaces::Interface::State>())
{
    state->parent = this;
    children["state"] = state.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

MacAccounting::Interfaces::Interface::~Interface()
{
}

bool MacAccounting::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<egress_statistic.size(); index++)
    {
        if(egress_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ingress_statistic.size(); index++)
    {
        if(ingress_statistic[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| (state !=  nullptr && state->has_data());
}

bool MacAccounting::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<egress_statistic.size(); index++)
    {
        if(egress_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ingress_statistic.size(); index++)
    {
        if(ingress_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (state !=  nullptr && state->has_operation());
}

std::string MacAccounting::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MacAccounting::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:mac-accounting/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacAccounting::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "egress-statistic")
    {
        for(auto const & c : egress_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MacAccounting::Interfaces::Interface::EgressStatistic>();
        c->parent = this;
        egress_statistic.push_back(std::move(c));
        children[segment_path] = egress_statistic.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "ingress-statistic")
    {
        for(auto const & c : ingress_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MacAccounting::Interfaces::Interface::IngressStatistic>();
        c->parent = this;
        ingress_statistic.push_back(std::move(c));
        children[segment_path] = ingress_statistic.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "state")
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
        else
        {
            state = std::make_unique<MacAccounting::Interfaces::Interface::State>();
            state->parent = this;
            children["state"] = state.get();
        }
        return children.at("state");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MacAccounting::Interfaces::Interface::get_children()
{
    for (auto const & c : egress_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : ingress_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("state") == children.end())
    {
        if(state != nullptr)
        {
            children["state"] = state.get();
        }
    }

    return children;
}

void MacAccounting::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MacAccounting::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "mac-accounting";
}

MacAccounting::Interfaces::~Interfaces()
{
}

bool MacAccounting::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MacAccounting::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MacAccounting::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MacAccounting::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:mac-accounting/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacAccounting::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MacAccounting::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MacAccounting::Interfaces::get_children()
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

void MacAccounting::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MacAccounting::MacAccounting()
    :
    interfaces(std::make_unique<MacAccounting::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "mac-accounting"; yang_parent_name = "Cisco-IOS-XR-l2-eth-infra-oper";
}

MacAccounting::~MacAccounting()
{
}

bool MacAccounting::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool MacAccounting::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MacAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:mac-accounting";

    return path_buffer.str();

}

EntityPath MacAccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MacAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<MacAccounting::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MacAccounting::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    return children;
}

void MacAccounting::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> MacAccounting::clone_ptr()
{
    return std::make_unique<MacAccounting>();
}
Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::StateCounters()
    :
    	admin_down{YType::uint32, "admin-down"},
	 down{YType::uint32, "down"},
	 up{YType::uint32, "up"}
{
    yang_name = "state-counters"; yang_parent_name = "layer2-sub-interfaces";
}

Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::~StateCounters()
{
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::has_data() const
{
    return admin_down.is_set
	|| down.is_set
	|| up.is_set;
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_down.operation)
	|| is_set(down.operation)
	|| is_set(up.operation);
}

std::string Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-counters";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_down.is_set || is_set(admin_down.operation)) leaf_name_data.push_back(admin_down.get_name_leafdata());
    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::get_children()
{
    return children;
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-down")
    {
        admin_down = value;
    }
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
}

Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::Layer2SubInterfaces()
    :
    	dot1q_count{YType::uint32, "dot1q-count"},
	 qin_any_count{YType::uint32, "qin-any-count"},
	 qin_q_count{YType::uint32, "qin-q-count"},
	 total_count{YType::uint32, "total-count"},
	 untagged_count{YType::uint32, "untagged-count"}
    	,
    state_counters(std::make_unique<Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters>())
{
    state_counters->parent = this;
    children["state-counters"] = state_counters.get();

    yang_name = "layer2-sub-interfaces"; yang_parent_name = "trunk";
}

Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::~Layer2SubInterfaces()
{
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::has_data() const
{
    return dot1q_count.is_set
	|| qin_any_count.is_set
	|| qin_q_count.is_set
	|| total_count.is_set
	|| untagged_count.is_set
	|| (state_counters !=  nullptr && state_counters->has_data());
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1q_count.operation)
	|| is_set(qin_any_count.operation)
	|| is_set(qin_q_count.operation)
	|| is_set(total_count.operation)
	|| is_set(untagged_count.operation)
	|| (state_counters !=  nullptr && state_counters->has_operation());
}

std::string Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer2-sub-interfaces";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q_count.is_set || is_set(dot1q_count.operation)) leaf_name_data.push_back(dot1q_count.get_name_leafdata());
    if (qin_any_count.is_set || is_set(qin_any_count.operation)) leaf_name_data.push_back(qin_any_count.get_name_leafdata());
    if (qin_q_count.is_set || is_set(qin_q_count.operation)) leaf_name_data.push_back(qin_q_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (untagged_count.is_set || is_set(untagged_count.operation)) leaf_name_data.push_back(untagged_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "state-counters")
    {
        if(state_counters != nullptr)
        {
            children["state-counters"] = state_counters.get();
        }
        else
        {
            state_counters = std::make_unique<Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::StateCounters>();
            state_counters->parent = this;
            children["state-counters"] = state_counters.get();
        }
        return children.at("state-counters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::get_children()
{
    if(children.find("state-counters") == children.end())
    {
        if(state_counters != nullptr)
        {
            children["state-counters"] = state_counters.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1q-count")
    {
        dot1q_count = value;
    }
    if(value_path == "qin-any-count")
    {
        qin_any_count = value;
    }
    if(value_path == "qin-q-count")
    {
        qin_q_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "untagged-count")
    {
        untagged_count = value;
    }
}

Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::StateCounters()
    :
    	admin_down{YType::uint32, "admin-down"},
	 down{YType::uint32, "down"},
	 up{YType::uint32, "up"}
{
    yang_name = "state-counters"; yang_parent_name = "layer3-sub-interfaces";
}

Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::~StateCounters()
{
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::has_data() const
{
    return admin_down.is_set
	|| down.is_set
	|| up.is_set;
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_down.operation)
	|| is_set(down.operation)
	|| is_set(up.operation);
}

std::string Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-counters";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_down.is_set || is_set(admin_down.operation)) leaf_name_data.push_back(admin_down.get_name_leafdata());
    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::get_children()
{
    return children;
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-down")
    {
        admin_down = value;
    }
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
}

Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::Layer3SubInterfaces()
    :
    	dot1q_count{YType::uint32, "dot1q-count"},
	 native_vlan{YType::uint16, "native-vlan"},
	 qin_q_count{YType::uint32, "qin-q-count"},
	 total_count{YType::uint32, "total-count"},
	 untagged_count{YType::uint32, "untagged-count"}
    	,
    state_counters(std::make_unique<Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters>())
{
    state_counters->parent = this;
    children["state-counters"] = state_counters.get();

    yang_name = "layer3-sub-interfaces"; yang_parent_name = "trunk";
}

Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::~Layer3SubInterfaces()
{
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::has_data() const
{
    return dot1q_count.is_set
	|| native_vlan.is_set
	|| qin_q_count.is_set
	|| total_count.is_set
	|| untagged_count.is_set
	|| (state_counters !=  nullptr && state_counters->has_data());
}

bool Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1q_count.operation)
	|| is_set(native_vlan.operation)
	|| is_set(qin_q_count.operation)
	|| is_set(total_count.operation)
	|| is_set(untagged_count.operation)
	|| (state_counters !=  nullptr && state_counters->has_operation());
}

std::string Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer3-sub-interfaces";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q_count.is_set || is_set(dot1q_count.operation)) leaf_name_data.push_back(dot1q_count.get_name_leafdata());
    if (native_vlan.is_set || is_set(native_vlan.operation)) leaf_name_data.push_back(native_vlan.get_name_leafdata());
    if (qin_q_count.is_set || is_set(qin_q_count.operation)) leaf_name_data.push_back(qin_q_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (untagged_count.is_set || is_set(untagged_count.operation)) leaf_name_data.push_back(untagged_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "state-counters")
    {
        if(state_counters != nullptr)
        {
            children["state-counters"] = state_counters.get();
        }
        else
        {
            state_counters = std::make_unique<Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::StateCounters>();
            state_counters->parent = this;
            children["state-counters"] = state_counters.get();
        }
        return children.at("state-counters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::get_children()
{
    if(children.find("state-counters") == children.end())
    {
        if(state_counters != nullptr)
        {
            children["state-counters"] = state_counters.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1q-count")
    {
        dot1q_count = value;
    }
    if(value_path == "native-vlan")
    {
        native_vlan = value;
    }
    if(value_path == "qin-q-count")
    {
        qin_q_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
    if(value_path == "untagged-count")
    {
        untagged_count = value;
    }
}

Vlan::Nodes::Node::Trunks::Trunk::Trunk()
    :
    	interface{YType::str, "interface"},
	 dot1ad_count{YType::uint32, "dot1ad-count"},
	 interface_xr{YType::str, "interface-xr"},
	 mac_filtering{YType::enumeration, "mac-filtering"},
	 mtu{YType::uint16, "mtu"},
	 qinq_outer_ether_type{YType::enumeration, "qinq-outer-ether-type"},
	 state{YType::enumeration, "state"},
	 untagged_interface{YType::str, "untagged-interface"}
    	,
    layer2_sub_interfaces(std::make_unique<Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces>())
	,layer3_sub_interfaces(std::make_unique<Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces>())
{
    layer2_sub_interfaces->parent = this;
    children["layer2-sub-interfaces"] = layer2_sub_interfaces.get();

    layer3_sub_interfaces->parent = this;
    children["layer3-sub-interfaces"] = layer3_sub_interfaces.get();

    yang_name = "trunk"; yang_parent_name = "trunks";
}

Vlan::Nodes::Node::Trunks::Trunk::~Trunk()
{
}

bool Vlan::Nodes::Node::Trunks::Trunk::has_data() const
{
    return interface.is_set
	|| dot1ad_count.is_set
	|| interface_xr.is_set
	|| mac_filtering.is_set
	|| mtu.is_set
	|| qinq_outer_ether_type.is_set
	|| state.is_set
	|| untagged_interface.is_set
	|| (layer2_sub_interfaces !=  nullptr && layer2_sub_interfaces->has_data())
	|| (layer3_sub_interfaces !=  nullptr && layer3_sub_interfaces->has_data());
}

bool Vlan::Nodes::Node::Trunks::Trunk::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(dot1ad_count.operation)
	|| is_set(interface_xr.operation)
	|| is_set(mac_filtering.operation)
	|| is_set(mtu.operation)
	|| is_set(qinq_outer_ether_type.operation)
	|| is_set(state.operation)
	|| is_set(untagged_interface.operation)
	|| (layer2_sub_interfaces !=  nullptr && layer2_sub_interfaces->has_operation())
	|| (layer3_sub_interfaces !=  nullptr && layer3_sub_interfaces->has_operation());
}

std::string Vlan::Nodes::Node::Trunks::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk" <<"[interface='" <<interface.get() <<"']";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Trunks::Trunk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (dot1ad_count.is_set || is_set(dot1ad_count.operation)) leaf_name_data.push_back(dot1ad_count.get_name_leafdata());
    if (interface_xr.is_set || is_set(interface_xr.operation)) leaf_name_data.push_back(interface_xr.get_name_leafdata());
    if (mac_filtering.is_set || is_set(mac_filtering.operation)) leaf_name_data.push_back(mac_filtering.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (qinq_outer_ether_type.is_set || is_set(qinq_outer_ether_type.operation)) leaf_name_data.push_back(qinq_outer_ether_type.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (untagged_interface.is_set || is_set(untagged_interface.operation)) leaf_name_data.push_back(untagged_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Trunks::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "layer2-sub-interfaces")
    {
        if(layer2_sub_interfaces != nullptr)
        {
            children["layer2-sub-interfaces"] = layer2_sub_interfaces.get();
        }
        else
        {
            layer2_sub_interfaces = std::make_unique<Vlan::Nodes::Node::Trunks::Trunk::Layer2SubInterfaces>();
            layer2_sub_interfaces->parent = this;
            children["layer2-sub-interfaces"] = layer2_sub_interfaces.get();
        }
        return children.at("layer2-sub-interfaces");
    }

    if(child_yang_name == "layer3-sub-interfaces")
    {
        if(layer3_sub_interfaces != nullptr)
        {
            children["layer3-sub-interfaces"] = layer3_sub_interfaces.get();
        }
        else
        {
            layer3_sub_interfaces = std::make_unique<Vlan::Nodes::Node::Trunks::Trunk::Layer3SubInterfaces>();
            layer3_sub_interfaces->parent = this;
            children["layer3-sub-interfaces"] = layer3_sub_interfaces.get();
        }
        return children.at("layer3-sub-interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::Trunks::Trunk::get_children()
{
    if(children.find("layer2-sub-interfaces") == children.end())
    {
        if(layer2_sub_interfaces != nullptr)
        {
            children["layer2-sub-interfaces"] = layer2_sub_interfaces.get();
        }
    }

    if(children.find("layer3-sub-interfaces") == children.end())
    {
        if(layer3_sub_interfaces != nullptr)
        {
            children["layer3-sub-interfaces"] = layer3_sub_interfaces.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::Trunks::Trunk::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "dot1ad-count")
    {
        dot1ad_count = value;
    }
    if(value_path == "interface-xr")
    {
        interface_xr = value;
    }
    if(value_path == "mac-filtering")
    {
        mac_filtering = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "qinq-outer-ether-type")
    {
        qinq_outer_ether_type = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "untagged-interface")
    {
        untagged_interface = value;
    }
}

Vlan::Nodes::Node::Trunks::Trunks()
{
    yang_name = "trunks"; yang_parent_name = "node";
}

Vlan::Nodes::Node::Trunks::~Trunks()
{
}

bool Vlan::Nodes::Node::Trunks::has_data() const
{
    for (std::size_t index=0; index<trunk.size(); index++)
    {
        if(trunk[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::Node::Trunks::has_operation() const
{
    for (std::size_t index=0; index<trunk.size(); index++)
    {
        if(trunk[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vlan::Nodes::Node::Trunks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunks";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Trunks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Trunks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trunk")
    {
        for(auto const & c : trunk)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlan::Nodes::Node::Trunks::Trunk>();
        c->parent = this;
        trunk.push_back(std::move(c));
        children[segment_path] = trunk.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::Trunks::get_children()
{
    for (auto const & c : trunk)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::Trunks::set_value(const std::string & value_path, std::string value)
{
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::Stack()
    :
    	outer_tag{YType::uint16, "outer-tag"},
	 second_tag{YType::uint16, "second-tag"}
{
    yang_name = "stack"; yang_parent_name = "encapsulation-details";
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::~Stack()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::has_data() const
{
    return outer_tag.is_set
	|| second_tag.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::has_operation() const
{
    return is_set(operation)
	|| is_set(outer_tag.operation)
	|| is_set(second_tag.operation);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.operation)) leaf_name_data.push_back(second_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::get_children()
{
    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
    }
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::LocalTrafficTag()
    :
    	ethertype{YType::enumeration, "ethertype"},
	 vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "local-traffic-tag"; yang_parent_name = "local-traffic-stack";
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::~LocalTrafficTag()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_data() const
{
    return ethertype.is_set
	|| vlan_id.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_operation() const
{
    return is_set(operation)
	|| is_set(ethertype.operation)
	|| is_set(vlan_id.operation);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-tag";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_children()
{
    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficStack()
{
    yang_name = "local-traffic-stack"; yang_parent_name = "service-instance-details";
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::~LocalTrafficStack()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_data() const
{
    for (std::size_t index=0; index<local_traffic_tag.size(); index++)
    {
        if(local_traffic_tag[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_operation() const
{
    for (std::size_t index=0; index<local_traffic_tag.size(); index++)
    {
        if(local_traffic_tag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-stack";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-traffic-tag")
    {
        for(auto const & c : local_traffic_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag>();
        c->parent = this;
        local_traffic_tag.push_back(std::move(c));
        children[segment_path] = local_traffic_tag.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_children()
{
    for (auto const & c : local_traffic_tag)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::set_value(const std::string & value_path, std::string value)
{
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::VlanRange()
    :
    	vlan_id_high{YType::uint16, "vlan-id-high"},
	 vlan_id_low{YType::uint16, "vlan-id-low"}
{
    yang_name = "vlan-range"; yang_parent_name = "tags-to-match";
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::~VlanRange()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_data() const
{
    return vlan_id_high.is_set
	|| vlan_id_low.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_id_high.operation)
	|| is_set(vlan_id_low.operation);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id_high.is_set || is_set(vlan_id_high.operation)) leaf_name_data.push_back(vlan_id_high.get_name_leafdata());
    if (vlan_id_low.is_set || is_set(vlan_id_low.operation)) leaf_name_data.push_back(vlan_id_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_children()
{
    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-id-high")
    {
        vlan_id_high = value;
    }
    if(value_path == "vlan-id-low")
    {
        vlan_id_low = value;
    }
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::TagsToMatch()
    :
    	ethertype{YType::enumeration, "ethertype"},
	 priority{YType::enumeration, "priority"}
{
    yang_name = "tags-to-match"; yang_parent_name = "service-instance-details";
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::~TagsToMatch()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return ethertype.is_set
	|| priority.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ethertype.operation)
	|| is_set(priority.operation);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags-to-match";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange>();
        c->parent = this;
        vlan_range.push_back(std::move(c));
        children[segment_path] = vlan_range.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_children()
{
    for (auto const & c : vlan_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::Pushe()
    :
    	ethertype{YType::enumeration, "ethertype"},
	 vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "pushe"; yang_parent_name = "service-instance-details";
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::~Pushe()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_data() const
{
    return ethertype.is_set
	|| vlan_id.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_operation() const
{
    return is_set(operation)
	|| is_set(ethertype.operation)
	|| is_set(vlan_id.operation);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pushe";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_children()
{
    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::ServiceInstanceDetails()
    :
    	destination_mac_match{YType::str, "destination-mac-match"},
	 is_exact_match{YType::boolean, "is-exact-match"},
	 is_native_preserving{YType::boolean, "is-native-preserving"},
	 is_native_vlan{YType::boolean, "is-native-vlan"},
	 payload_ethertype{YType::enumeration, "payload-ethertype"},
	 source_mac_match{YType::str, "source-mac-match"},
	 tags_popped{YType::uint16, "tags-popped"}
    	,
    local_traffic_stack(std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack>())
{
    local_traffic_stack->parent = this;
    children["local-traffic-stack"] = local_traffic_stack.get();

    yang_name = "service-instance-details"; yang_parent_name = "encapsulation-details";
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::~ServiceInstanceDetails()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<pushe.size(); index++)
    {
        if(pushe[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tags_to_match.size(); index++)
    {
        if(tags_to_match[index]->has_data())
            return true;
    }
    return destination_mac_match.is_set
	|| is_exact_match.is_set
	|| is_native_preserving.is_set
	|| is_native_vlan.is_set
	|| payload_ethertype.is_set
	|| source_mac_match.is_set
	|| tags_popped.is_set
	|| (local_traffic_stack !=  nullptr && local_traffic_stack->has_data());
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<pushe.size(); index++)
    {
        if(pushe[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tags_to_match.size(); index++)
    {
        if(tags_to_match[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_mac_match.operation)
	|| is_set(is_exact_match.operation)
	|| is_set(is_native_preserving.operation)
	|| is_set(is_native_vlan.operation)
	|| is_set(payload_ethertype.operation)
	|| is_set(source_mac_match.operation)
	|| is_set(tags_popped.operation)
	|| (local_traffic_stack !=  nullptr && local_traffic_stack->has_operation());
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance-details";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_mac_match.is_set || is_set(destination_mac_match.operation)) leaf_name_data.push_back(destination_mac_match.get_name_leafdata());
    if (is_exact_match.is_set || is_set(is_exact_match.operation)) leaf_name_data.push_back(is_exact_match.get_name_leafdata());
    if (is_native_preserving.is_set || is_set(is_native_preserving.operation)) leaf_name_data.push_back(is_native_preserving.get_name_leafdata());
    if (is_native_vlan.is_set || is_set(is_native_vlan.operation)) leaf_name_data.push_back(is_native_vlan.get_name_leafdata());
    if (payload_ethertype.is_set || is_set(payload_ethertype.operation)) leaf_name_data.push_back(payload_ethertype.get_name_leafdata());
    if (source_mac_match.is_set || is_set(source_mac_match.operation)) leaf_name_data.push_back(source_mac_match.get_name_leafdata());
    if (tags_popped.is_set || is_set(tags_popped.operation)) leaf_name_data.push_back(tags_popped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-traffic-stack")
    {
        if(local_traffic_stack != nullptr)
        {
            children["local-traffic-stack"] = local_traffic_stack.get();
        }
        else
        {
            local_traffic_stack = std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack>();
            local_traffic_stack->parent = this;
            children["local-traffic-stack"] = local_traffic_stack.get();
        }
        return children.at("local-traffic-stack");
    }

    if(child_yang_name == "pushe")
    {
        for(auto const & c : pushe)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::Pushe>();
        c->parent = this;
        pushe.push_back(std::move(c));
        children[segment_path] = pushe.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "tags-to-match")
    {
        for(auto const & c : tags_to_match)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch>();
        c->parent = this;
        tags_to_match.push_back(std::move(c));
        children[segment_path] = tags_to_match.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::get_children()
{
    if(children.find("local-traffic-stack") == children.end())
    {
        if(local_traffic_stack != nullptr)
        {
            children["local-traffic-stack"] = local_traffic_stack.get();
        }
    }

    for (auto const & c : pushe)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : tags_to_match)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-mac-match")
    {
        destination_mac_match = value;
    }
    if(value_path == "is-exact-match")
    {
        is_exact_match = value;
    }
    if(value_path == "is-native-preserving")
    {
        is_native_preserving = value;
    }
    if(value_path == "is-native-vlan")
    {
        is_native_vlan = value;
    }
    if(value_path == "payload-ethertype")
    {
        payload_ethertype = value;
    }
    if(value_path == "source-mac-match")
    {
        source_mac_match = value;
    }
    if(value_path == "tags-popped")
    {
        tags_popped = value;
    }
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack::Dot1AdDot1QStack()
    :
    	outer_tag{YType::uint16, "outer-tag"},
	 second_tag{YType::uint16, "second-tag"}
{
    yang_name = "dot1ad-dot1q-stack"; yang_parent_name = "encapsulation-details";
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack::~Dot1AdDot1QStack()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack::has_data() const
{
    return outer_tag.is_set
	|| second_tag.is_set;
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack::has_operation() const
{
    return is_set(operation)
	|| is_set(outer_tag.operation)
	|| is_set(second_tag.operation);
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad-dot1q-stack";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.operation)) leaf_name_data.push_back(second_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack::get_children()
{
    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
    }
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::EncapsulationDetails()
    :
    	dot1ad_native_tag{YType::uint16, "dot1ad-native-tag"},
	 dot1ad_outer_tag{YType::uint16, "dot1ad-outer-tag"},
	 dot1ad_tag{YType::uint16, "dot1ad-tag"},
	 native_tag{YType::uint16, "native-tag"},
	 outer_tag{YType::uint16, "outer-tag"},
	 tag{YType::uint16, "tag"},
	 vlan_encapsulation{YType::enumeration, "vlan-encapsulation"}
    	,
    dot1ad_dot1q_stack(std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack>())
	,service_instance_details(std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails>())
	,stack(std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack>())
{
    dot1ad_dot1q_stack->parent = this;
    children["dot1ad-dot1q-stack"] = dot1ad_dot1q_stack.get();

    service_instance_details->parent = this;
    children["service-instance-details"] = service_instance_details.get();

    stack->parent = this;
    children["stack"] = stack.get();

    yang_name = "encapsulation-details"; yang_parent_name = "interface";
}

Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::~EncapsulationDetails()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::has_data() const
{
    return dot1ad_native_tag.is_set
	|| dot1ad_outer_tag.is_set
	|| dot1ad_tag.is_set
	|| native_tag.is_set
	|| outer_tag.is_set
	|| tag.is_set
	|| vlan_encapsulation.is_set
	|| (dot1ad_dot1q_stack !=  nullptr && dot1ad_dot1q_stack->has_data())
	|| (service_instance_details !=  nullptr && service_instance_details->has_data())
	|| (stack !=  nullptr && stack->has_data());
}

bool Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1ad_native_tag.operation)
	|| is_set(dot1ad_outer_tag.operation)
	|| is_set(dot1ad_tag.operation)
	|| is_set(native_tag.operation)
	|| is_set(outer_tag.operation)
	|| is_set(tag.operation)
	|| is_set(vlan_encapsulation.operation)
	|| (dot1ad_dot1q_stack !=  nullptr && dot1ad_dot1q_stack->has_operation())
	|| (service_instance_details !=  nullptr && service_instance_details->has_operation())
	|| (stack !=  nullptr && stack->has_operation());
}

std::string Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-details";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1ad_native_tag.is_set || is_set(dot1ad_native_tag.operation)) leaf_name_data.push_back(dot1ad_native_tag.get_name_leafdata());
    if (dot1ad_outer_tag.is_set || is_set(dot1ad_outer_tag.operation)) leaf_name_data.push_back(dot1ad_outer_tag.get_name_leafdata());
    if (dot1ad_tag.is_set || is_set(dot1ad_tag.operation)) leaf_name_data.push_back(dot1ad_tag.get_name_leafdata());
    if (native_tag.is_set || is_set(native_tag.operation)) leaf_name_data.push_back(native_tag.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vlan_encapsulation.is_set || is_set(vlan_encapsulation.operation)) leaf_name_data.push_back(vlan_encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dot1ad-dot1q-stack")
    {
        if(dot1ad_dot1q_stack != nullptr)
        {
            children["dot1ad-dot1q-stack"] = dot1ad_dot1q_stack.get();
        }
        else
        {
            dot1ad_dot1q_stack = std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Dot1AdDot1QStack>();
            dot1ad_dot1q_stack->parent = this;
            children["dot1ad-dot1q-stack"] = dot1ad_dot1q_stack.get();
        }
        return children.at("dot1ad-dot1q-stack");
    }

    if(child_yang_name == "service-instance-details")
    {
        if(service_instance_details != nullptr)
        {
            children["service-instance-details"] = service_instance_details.get();
        }
        else
        {
            service_instance_details = std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::ServiceInstanceDetails>();
            service_instance_details->parent = this;
            children["service-instance-details"] = service_instance_details.get();
        }
        return children.at("service-instance-details");
    }

    if(child_yang_name == "stack")
    {
        if(stack != nullptr)
        {
            children["stack"] = stack.get();
        }
        else
        {
            stack = std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::Stack>();
            stack->parent = this;
            children["stack"] = stack.get();
        }
        return children.at("stack");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::get_children()
{
    if(children.find("dot1ad-dot1q-stack") == children.end())
    {
        if(dot1ad_dot1q_stack != nullptr)
        {
            children["dot1ad-dot1q-stack"] = dot1ad_dot1q_stack.get();
        }
    }

    if(children.find("service-instance-details") == children.end())
    {
        if(service_instance_details != nullptr)
        {
            children["service-instance-details"] = service_instance_details.get();
        }
    }

    if(children.find("stack") == children.end())
    {
        if(stack != nullptr)
        {
            children["stack"] = stack.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1ad-native-tag")
    {
        dot1ad_native_tag = value;
    }
    if(value_path == "dot1ad-outer-tag")
    {
        dot1ad_outer_tag = value;
    }
    if(value_path == "dot1ad-tag")
    {
        dot1ad_tag = value;
    }
    if(value_path == "native-tag")
    {
        native_tag = value;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "vlan-encapsulation")
    {
        vlan_encapsulation = value;
    }
}

Vlan::Nodes::Node::Interfaces::Interface::Interface()
    :
    	interface{YType::str, "interface"},
	 interface_xr{YType::str, "interface-xr"},
	 mtu{YType::uint16, "mtu"},
	 parent_interface{YType::str, "parent-interface"},
	 service{YType::enumeration, "service"},
	 state{YType::enumeration, "state"},
	 switched_mtu{YType::uint16, "switched-mtu"}
    	,
    encapsulation_details(std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails>())
{
    encapsulation_details->parent = this;
    children["encapsulation-details"] = encapsulation_details.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Vlan::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Vlan::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface.is_set
	|| interface_xr.is_set
	|| mtu.is_set
	|| parent_interface.is_set
	|| service.is_set
	|| state.is_set
	|| switched_mtu.is_set
	|| (encapsulation_details !=  nullptr && encapsulation_details->has_data());
}

bool Vlan::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(interface_xr.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_interface.operation)
	|| is_set(service.operation)
	|| is_set(state.operation)
	|| is_set(switched_mtu.operation)
	|| (encapsulation_details !=  nullptr && encapsulation_details->has_operation());
}

std::string Vlan::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface.get() <<"']";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_xr.is_set || is_set(interface_xr.operation)) leaf_name_data.push_back(interface_xr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.operation)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (switched_mtu.is_set || is_set(switched_mtu.operation)) leaf_name_data.push_back(switched_mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "encapsulation-details")
    {
        if(encapsulation_details != nullptr)
        {
            children["encapsulation-details"] = encapsulation_details.get();
        }
        else
        {
            encapsulation_details = std::make_unique<Vlan::Nodes::Node::Interfaces::Interface::EncapsulationDetails>();
            encapsulation_details->parent = this;
            children["encapsulation-details"] = encapsulation_details.get();
        }
        return children.at("encapsulation-details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::Interfaces::Interface::get_children()
{
    if(children.find("encapsulation-details") == children.end())
    {
        if(encapsulation_details != nullptr)
        {
            children["encapsulation-details"] = encapsulation_details.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-xr")
    {
        interface_xr = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "switched-mtu")
    {
        switched_mtu = value;
    }
}

Vlan::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

Vlan::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Vlan::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vlan::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Vlan::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::Interfaces::get_children()
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

void Vlan::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::Stack()
    :
    	outer_tag{YType::uint16, "outer-tag"},
	 second_tag{YType::uint16, "second-tag"}
{
    yang_name = "stack"; yang_parent_name = "encapsulation-details";
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::~Stack()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::has_data() const
{
    return outer_tag.is_set
	|| second_tag.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::has_operation() const
{
    return is_set(operation)
	|| is_set(outer_tag.operation)
	|| is_set(second_tag.operation);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.operation)) leaf_name_data.push_back(second_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::get_children()
{
    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
    }
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::LocalTrafficTag()
    :
    	ethertype{YType::enumeration, "ethertype"},
	 vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "local-traffic-tag"; yang_parent_name = "local-traffic-stack";
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::~LocalTrafficTag()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_data() const
{
    return ethertype.is_set
	|| vlan_id.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::has_operation() const
{
    return is_set(operation)
	|| is_set(ethertype.operation)
	|| is_set(vlan_id.operation);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-tag";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::get_children()
{
    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficStack()
{
    yang_name = "local-traffic-stack"; yang_parent_name = "service-instance-details";
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::~LocalTrafficStack()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_data() const
{
    for (std::size_t index=0; index<local_traffic_tag.size(); index++)
    {
        if(local_traffic_tag[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::has_operation() const
{
    for (std::size_t index=0; index<local_traffic_tag.size(); index++)
    {
        if(local_traffic_tag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-traffic-stack";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-traffic-tag")
    {
        for(auto const & c : local_traffic_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag>();
        c->parent = this;
        local_traffic_tag.push_back(std::move(c));
        children[segment_path] = local_traffic_tag.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::get_children()
{
    for (auto const & c : local_traffic_tag)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::set_value(const std::string & value_path, std::string value)
{
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::VlanRange()
    :
    	vlan_id_high{YType::uint16, "vlan-id-high"},
	 vlan_id_low{YType::uint16, "vlan-id-low"}
{
    yang_name = "vlan-range"; yang_parent_name = "tags-to-match";
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::~VlanRange()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_data() const
{
    return vlan_id_high.is_set
	|| vlan_id_low.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_id_high.operation)
	|| is_set(vlan_id_low.operation);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id_high.is_set || is_set(vlan_id_high.operation)) leaf_name_data.push_back(vlan_id_high.get_name_leafdata());
    if (vlan_id_low.is_set || is_set(vlan_id_low.operation)) leaf_name_data.push_back(vlan_id_low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::get_children()
{
    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-id-high")
    {
        vlan_id_high = value;
    }
    if(value_path == "vlan-id-low")
    {
        vlan_id_low = value;
    }
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::TagsToMatch()
    :
    	ethertype{YType::enumeration, "ethertype"},
	 priority{YType::enumeration, "priority"}
{
    yang_name = "tags-to-match"; yang_parent_name = "service-instance-details";
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::~TagsToMatch()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return ethertype.is_set
	|| priority.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ethertype.operation)
	|| is_set(priority.operation);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags-to-match";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange>();
        c->parent = this;
        vlan_range.push_back(std::move(c));
        children[segment_path] = vlan_range.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::get_children()
{
    for (auto const & c : vlan_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::Pushe()
    :
    	ethertype{YType::enumeration, "ethertype"},
	 vlan_id{YType::uint16, "vlan-id"}
{
    yang_name = "pushe"; yang_parent_name = "service-instance-details";
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::~Pushe()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_data() const
{
    return ethertype.is_set
	|| vlan_id.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::has_operation() const
{
    return is_set(operation)
	|| is_set(ethertype.operation)
	|| is_set(vlan_id.operation);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pushe";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::get_children()
{
    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::ServiceInstanceDetails()
    :
    	destination_mac_match{YType::str, "destination-mac-match"},
	 is_exact_match{YType::boolean, "is-exact-match"},
	 is_native_preserving{YType::boolean, "is-native-preserving"},
	 is_native_vlan{YType::boolean, "is-native-vlan"},
	 payload_ethertype{YType::enumeration, "payload-ethertype"},
	 source_mac_match{YType::str, "source-mac-match"},
	 tags_popped{YType::uint16, "tags-popped"}
    	,
    local_traffic_stack(std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack>())
{
    local_traffic_stack->parent = this;
    children["local-traffic-stack"] = local_traffic_stack.get();

    yang_name = "service-instance-details"; yang_parent_name = "encapsulation-details";
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::~ServiceInstanceDetails()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<pushe.size(); index++)
    {
        if(pushe[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tags_to_match.size(); index++)
    {
        if(tags_to_match[index]->has_data())
            return true;
    }
    return destination_mac_match.is_set
	|| is_exact_match.is_set
	|| is_native_preserving.is_set
	|| is_native_vlan.is_set
	|| payload_ethertype.is_set
	|| source_mac_match.is_set
	|| tags_popped.is_set
	|| (local_traffic_stack !=  nullptr && local_traffic_stack->has_data());
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<pushe.size(); index++)
    {
        if(pushe[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tags_to_match.size(); index++)
    {
        if(tags_to_match[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_mac_match.operation)
	|| is_set(is_exact_match.operation)
	|| is_set(is_native_preserving.operation)
	|| is_set(is_native_vlan.operation)
	|| is_set(payload_ethertype.operation)
	|| is_set(source_mac_match.operation)
	|| is_set(tags_popped.operation)
	|| (local_traffic_stack !=  nullptr && local_traffic_stack->has_operation());
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance-details";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_mac_match.is_set || is_set(destination_mac_match.operation)) leaf_name_data.push_back(destination_mac_match.get_name_leafdata());
    if (is_exact_match.is_set || is_set(is_exact_match.operation)) leaf_name_data.push_back(is_exact_match.get_name_leafdata());
    if (is_native_preserving.is_set || is_set(is_native_preserving.operation)) leaf_name_data.push_back(is_native_preserving.get_name_leafdata());
    if (is_native_vlan.is_set || is_set(is_native_vlan.operation)) leaf_name_data.push_back(is_native_vlan.get_name_leafdata());
    if (payload_ethertype.is_set || is_set(payload_ethertype.operation)) leaf_name_data.push_back(payload_ethertype.get_name_leafdata());
    if (source_mac_match.is_set || is_set(source_mac_match.operation)) leaf_name_data.push_back(source_mac_match.get_name_leafdata());
    if (tags_popped.is_set || is_set(tags_popped.operation)) leaf_name_data.push_back(tags_popped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-traffic-stack")
    {
        if(local_traffic_stack != nullptr)
        {
            children["local-traffic-stack"] = local_traffic_stack.get();
        }
        else
        {
            local_traffic_stack = std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack>();
            local_traffic_stack->parent = this;
            children["local-traffic-stack"] = local_traffic_stack.get();
        }
        return children.at("local-traffic-stack");
    }

    if(child_yang_name == "pushe")
    {
        for(auto const & c : pushe)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::Pushe>();
        c->parent = this;
        pushe.push_back(std::move(c));
        children[segment_path] = pushe.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "tags-to-match")
    {
        for(auto const & c : tags_to_match)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch>();
        c->parent = this;
        tags_to_match.push_back(std::move(c));
        children[segment_path] = tags_to_match.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::get_children()
{
    if(children.find("local-traffic-stack") == children.end())
    {
        if(local_traffic_stack != nullptr)
        {
            children["local-traffic-stack"] = local_traffic_stack.get();
        }
    }

    for (auto const & c : pushe)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : tags_to_match)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-mac-match")
    {
        destination_mac_match = value;
    }
    if(value_path == "is-exact-match")
    {
        is_exact_match = value;
    }
    if(value_path == "is-native-preserving")
    {
        is_native_preserving = value;
    }
    if(value_path == "is-native-vlan")
    {
        is_native_vlan = value;
    }
    if(value_path == "payload-ethertype")
    {
        payload_ethertype = value;
    }
    if(value_path == "source-mac-match")
    {
        source_mac_match = value;
    }
    if(value_path == "tags-popped")
    {
        tags_popped = value;
    }
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack::Dot1AdDot1QStack()
    :
    	outer_tag{YType::uint16, "outer-tag"},
	 second_tag{YType::uint16, "second-tag"}
{
    yang_name = "dot1ad-dot1q-stack"; yang_parent_name = "encapsulation-details";
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack::~Dot1AdDot1QStack()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack::has_data() const
{
    return outer_tag.is_set
	|| second_tag.is_set;
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack::has_operation() const
{
    return is_set(operation)
	|| is_set(outer_tag.operation)
	|| is_set(second_tag.operation);
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad-dot1q-stack";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.operation)) leaf_name_data.push_back(second_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack::get_children()
{
    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
    }
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::EncapsulationDetails()
    :
    	dot1ad_native_tag{YType::uint16, "dot1ad-native-tag"},
	 dot1ad_outer_tag{YType::uint16, "dot1ad-outer-tag"},
	 dot1ad_tag{YType::uint16, "dot1ad-tag"},
	 native_tag{YType::uint16, "native-tag"},
	 outer_tag{YType::uint16, "outer-tag"},
	 tag{YType::uint16, "tag"},
	 vlan_encapsulation{YType::enumeration, "vlan-encapsulation"}
    	,
    dot1ad_dot1q_stack(std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack>())
	,service_instance_details(std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails>())
	,stack(std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack>())
{
    dot1ad_dot1q_stack->parent = this;
    children["dot1ad-dot1q-stack"] = dot1ad_dot1q_stack.get();

    service_instance_details->parent = this;
    children["service-instance-details"] = service_instance_details.get();

    stack->parent = this;
    children["stack"] = stack.get();

    yang_name = "encapsulation-details"; yang_parent_name = "tag-allocation";
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::~EncapsulationDetails()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::has_data() const
{
    return dot1ad_native_tag.is_set
	|| dot1ad_outer_tag.is_set
	|| dot1ad_tag.is_set
	|| native_tag.is_set
	|| outer_tag.is_set
	|| tag.is_set
	|| vlan_encapsulation.is_set
	|| (dot1ad_dot1q_stack !=  nullptr && dot1ad_dot1q_stack->has_data())
	|| (service_instance_details !=  nullptr && service_instance_details->has_data())
	|| (stack !=  nullptr && stack->has_data());
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1ad_native_tag.operation)
	|| is_set(dot1ad_outer_tag.operation)
	|| is_set(dot1ad_tag.operation)
	|| is_set(native_tag.operation)
	|| is_set(outer_tag.operation)
	|| is_set(tag.operation)
	|| is_set(vlan_encapsulation.operation)
	|| (dot1ad_dot1q_stack !=  nullptr && dot1ad_dot1q_stack->has_operation())
	|| (service_instance_details !=  nullptr && service_instance_details->has_operation())
	|| (stack !=  nullptr && stack->has_operation());
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-details";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1ad_native_tag.is_set || is_set(dot1ad_native_tag.operation)) leaf_name_data.push_back(dot1ad_native_tag.get_name_leafdata());
    if (dot1ad_outer_tag.is_set || is_set(dot1ad_outer_tag.operation)) leaf_name_data.push_back(dot1ad_outer_tag.get_name_leafdata());
    if (dot1ad_tag.is_set || is_set(dot1ad_tag.operation)) leaf_name_data.push_back(dot1ad_tag.get_name_leafdata());
    if (native_tag.is_set || is_set(native_tag.operation)) leaf_name_data.push_back(native_tag.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vlan_encapsulation.is_set || is_set(vlan_encapsulation.operation)) leaf_name_data.push_back(vlan_encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dot1ad-dot1q-stack")
    {
        if(dot1ad_dot1q_stack != nullptr)
        {
            children["dot1ad-dot1q-stack"] = dot1ad_dot1q_stack.get();
        }
        else
        {
            dot1ad_dot1q_stack = std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Dot1AdDot1QStack>();
            dot1ad_dot1q_stack->parent = this;
            children["dot1ad-dot1q-stack"] = dot1ad_dot1q_stack.get();
        }
        return children.at("dot1ad-dot1q-stack");
    }

    if(child_yang_name == "service-instance-details")
    {
        if(service_instance_details != nullptr)
        {
            children["service-instance-details"] = service_instance_details.get();
        }
        else
        {
            service_instance_details = std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::ServiceInstanceDetails>();
            service_instance_details->parent = this;
            children["service-instance-details"] = service_instance_details.get();
        }
        return children.at("service-instance-details");
    }

    if(child_yang_name == "stack")
    {
        if(stack != nullptr)
        {
            children["stack"] = stack.get();
        }
        else
        {
            stack = std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::Stack>();
            stack->parent = this;
            children["stack"] = stack.get();
        }
        return children.at("stack");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::get_children()
{
    if(children.find("dot1ad-dot1q-stack") == children.end())
    {
        if(dot1ad_dot1q_stack != nullptr)
        {
            children["dot1ad-dot1q-stack"] = dot1ad_dot1q_stack.get();
        }
    }

    if(children.find("service-instance-details") == children.end())
    {
        if(service_instance_details != nullptr)
        {
            children["service-instance-details"] = service_instance_details.get();
        }
    }

    if(children.find("stack") == children.end())
    {
        if(stack != nullptr)
        {
            children["stack"] = stack.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1ad-native-tag")
    {
        dot1ad_native_tag = value;
    }
    if(value_path == "dot1ad-outer-tag")
    {
        dot1ad_outer_tag = value;
    }
    if(value_path == "dot1ad-tag")
    {
        dot1ad_tag = value;
    }
    if(value_path == "native-tag")
    {
        native_tag = value;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "vlan-encapsulation")
    {
        vlan_encapsulation = value;
    }
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::TagAllocation()
    :
    	first_tag{YType::uint32, "first-tag"},
	 interface{YType::str, "interface"},
	 interface_xr{YType::str, "interface-xr"},
	 mtu{YType::uint16, "mtu"},
	 parent_interface{YType::str, "parent-interface"},
	 second_tag{YType::str, "second-tag"},
	 service{YType::enumeration, "service"},
	 state{YType::enumeration, "state"},
	 switched_mtu{YType::uint16, "switched-mtu"}
    	,
    encapsulation_details(std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails>())
{
    encapsulation_details->parent = this;
    children["encapsulation-details"] = encapsulation_details.get();

    yang_name = "tag-allocation"; yang_parent_name = "tag-allocations";
}

Vlan::Nodes::Node::TagAllocations::TagAllocation::~TagAllocation()
{
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::has_data() const
{
    return first_tag.is_set
	|| interface.is_set
	|| interface_xr.is_set
	|| mtu.is_set
	|| parent_interface.is_set
	|| second_tag.is_set
	|| service.is_set
	|| state.is_set
	|| switched_mtu.is_set
	|| (encapsulation_details !=  nullptr && encapsulation_details->has_data());
}

bool Vlan::Nodes::Node::TagAllocations::TagAllocation::has_operation() const
{
    return is_set(operation)
	|| is_set(first_tag.operation)
	|| is_set(interface.operation)
	|| is_set(interface_xr.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_interface.operation)
	|| is_set(second_tag.operation)
	|| is_set(service.operation)
	|| is_set(state.operation)
	|| is_set(switched_mtu.operation)
	|| (encapsulation_details !=  nullptr && encapsulation_details->has_operation());
}

std::string Vlan::Nodes::Node::TagAllocations::TagAllocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-allocation";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::TagAllocations::TagAllocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_tag.is_set || is_set(first_tag.operation)) leaf_name_data.push_back(first_tag.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_xr.is_set || is_set(interface_xr.operation)) leaf_name_data.push_back(interface_xr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_interface.is_set || is_set(parent_interface.operation)) leaf_name_data.push_back(parent_interface.get_name_leafdata());
    if (second_tag.is_set || is_set(second_tag.operation)) leaf_name_data.push_back(second_tag.get_name_leafdata());
    if (service.is_set || is_set(service.operation)) leaf_name_data.push_back(service.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (switched_mtu.is_set || is_set(switched_mtu.operation)) leaf_name_data.push_back(switched_mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::TagAllocations::TagAllocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "encapsulation-details")
    {
        if(encapsulation_details != nullptr)
        {
            children["encapsulation-details"] = encapsulation_details.get();
        }
        else
        {
            encapsulation_details = std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation::EncapsulationDetails>();
            encapsulation_details->parent = this;
            children["encapsulation-details"] = encapsulation_details.get();
        }
        return children.at("encapsulation-details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::TagAllocations::TagAllocation::get_children()
{
    if(children.find("encapsulation-details") == children.end())
    {
        if(encapsulation_details != nullptr)
        {
            children["encapsulation-details"] = encapsulation_details.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::TagAllocation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first-tag")
    {
        first_tag = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-xr")
    {
        interface_xr = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-interface")
    {
        parent_interface = value;
    }
    if(value_path == "second-tag")
    {
        second_tag = value;
    }
    if(value_path == "service")
    {
        service = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "switched-mtu")
    {
        switched_mtu = value;
    }
}

Vlan::Nodes::Node::TagAllocations::TagAllocations()
{
    yang_name = "tag-allocations"; yang_parent_name = "node";
}

Vlan::Nodes::Node::TagAllocations::~TagAllocations()
{
}

bool Vlan::Nodes::Node::TagAllocations::has_data() const
{
    for (std::size_t index=0; index<tag_allocation.size(); index++)
    {
        if(tag_allocation[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::Node::TagAllocations::has_operation() const
{
    for (std::size_t index=0; index<tag_allocation.size(); index++)
    {
        if(tag_allocation[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vlan::Nodes::Node::TagAllocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag-allocations";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::TagAllocations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::TagAllocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tag-allocation")
    {
        for(auto const & c : tag_allocation)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlan::Nodes::Node::TagAllocations::TagAllocation>();
        c->parent = this;
        tag_allocation.push_back(std::move(c));
        children[segment_path] = tag_allocation.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::TagAllocations::get_children()
{
    for (auto const & c : tag_allocation)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::TagAllocations::set_value(const std::string & value_path, std::string value)
{
}

Vlan::Nodes::Node::Node()
    :
    	node_id{YType::str, "node-id"}
    	,
    interfaces(std::make_unique<Vlan::Nodes::Node::Interfaces>())
	,tag_allocations(std::make_unique<Vlan::Nodes::Node::TagAllocations>())
	,trunks(std::make_unique<Vlan::Nodes::Node::Trunks>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    tag_allocations->parent = this;
    children["tag-allocations"] = tag_allocations.get();

    trunks->parent = this;
    children["trunks"] = trunks.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Vlan::Nodes::Node::~Node()
{
}

bool Vlan::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (tag_allocations !=  nullptr && tag_allocations->has_data())
	|| (trunks !=  nullptr && trunks->has_data());
}

bool Vlan::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (tag_allocations !=  nullptr && tag_allocations->has_operation())
	|| (trunks !=  nullptr && trunks->has_operation());
}

std::string Vlan::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:vlan/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Vlan::Nodes::Node::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "tag-allocations")
    {
        if(tag_allocations != nullptr)
        {
            children["tag-allocations"] = tag_allocations.get();
        }
        else
        {
            tag_allocations = std::make_unique<Vlan::Nodes::Node::TagAllocations>();
            tag_allocations->parent = this;
            children["tag-allocations"] = tag_allocations.get();
        }
        return children.at("tag-allocations");
    }

    if(child_yang_name == "trunks")
    {
        if(trunks != nullptr)
        {
            children["trunks"] = trunks.get();
        }
        else
        {
            trunks = std::make_unique<Vlan::Nodes::Node::Trunks>();
            trunks->parent = this;
            children["trunks"] = trunks.get();
        }
        return children.at("trunks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::Node::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("tag-allocations") == children.end())
    {
        if(tag_allocations != nullptr)
        {
            children["tag-allocations"] = tag_allocations.get();
        }
    }

    if(children.find("trunks") == children.end())
    {
        if(trunks != nullptr)
        {
            children["trunks"] = trunks.get();
        }
    }

    return children;
}

void Vlan::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

Vlan::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "vlan";
}

Vlan::Nodes::~Nodes()
{
}

bool Vlan::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Vlan::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vlan::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Vlan::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:vlan/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Vlan::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Vlan::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Vlan::Vlan()
    :
    nodes(std::make_unique<Vlan::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "vlan"; yang_parent_name = "Cisco-IOS-XR-l2-eth-infra-oper";
}

Vlan::~Vlan()
{
}

bool Vlan::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Vlan::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:vlan";

    return path_buffer.str();

}

EntityPath Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Vlan::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Vlan::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Vlan::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Vlan::clone_ptr()
{
    return std::make_unique<Vlan>();
}
EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::UnicastFilter()
    :
    	mac_address{YType::str, "mac-address"},
	 mode{YType::enumeration, "mode"}
{
    yang_name = "unicast-filter"; yang_parent_name = "unicast-mac-filter";
}

EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::~UnicastFilter()
{
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::has_data() const
{
    return mac_address.is_set
	|| mode.is_set;
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(mode.operation);
}

std::string EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-filter";

    return path_buffer.str();

}

EntityPath EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::get_children()
{
    return children;
}

void EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastMacFilter()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "unicast-mac-filter"; yang_parent_name = "unicast-mac-filters";
}

EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::~UnicastMacFilter()
{
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::has_data() const
{
    for (std::size_t index=0; index<unicast_filter.size(); index++)
    {
        if(unicast_filter[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::has_operation() const
{
    for (std::size_t index=0; index<unicast_filter.size(); index++)
    {
        if(unicast_filter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-mac-filter" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "unicast-filter")
    {
        for(auto const & c : unicast_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::UnicastFilter>();
        c->parent = this;
        unicast_filter.push_back(std::move(c));
        children[segment_path] = unicast_filter.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::get_children()
{
    for (auto const & c : unicast_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilters()
{
    yang_name = "unicast-mac-filters"; yang_parent_name = "node";
}

EthernetEncapsulation::Nodes::Node::UnicastMacFilters::~UnicastMacFilters()
{
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::has_data() const
{
    for (std::size_t index=0; index<unicast_mac_filter.size(); index++)
    {
        if(unicast_mac_filter[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetEncapsulation::Nodes::Node::UnicastMacFilters::has_operation() const
{
    for (std::size_t index=0; index<unicast_mac_filter.size(); index++)
    {
        if(unicast_mac_filter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EthernetEncapsulation::Nodes::Node::UnicastMacFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-mac-filters";

    return path_buffer.str();

}

EntityPath EthernetEncapsulation::Nodes::Node::UnicastMacFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetEncapsulation::Nodes::Node::UnicastMacFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "unicast-mac-filter")
    {
        for(auto const & c : unicast_mac_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetEncapsulation::Nodes::Node::UnicastMacFilters::UnicastMacFilter>();
        c->parent = this;
        unicast_mac_filter.push_back(std::move(c));
        children[segment_path] = unicast_mac_filter.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetEncapsulation::Nodes::Node::UnicastMacFilters::get_children()
{
    for (auto const & c : unicast_mac_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EthernetEncapsulation::Nodes::Node::UnicastMacFilters::set_value(const std::string & value_path, std::string value)
{
}

EthernetEncapsulation::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    unicast_mac_filters(std::make_unique<EthernetEncapsulation::Nodes::Node::UnicastMacFilters>())
{
    unicast_mac_filters->parent = this;
    children["unicast-mac-filters"] = unicast_mac_filters.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

EthernetEncapsulation::Nodes::Node::~Node()
{
}

bool EthernetEncapsulation::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (unicast_mac_filters !=  nullptr && unicast_mac_filters->has_data());
}

bool EthernetEncapsulation::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (unicast_mac_filters !=  nullptr && unicast_mac_filters->has_operation());
}

std::string EthernetEncapsulation::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath EthernetEncapsulation::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:ethernet-encapsulation/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetEncapsulation::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "unicast-mac-filters")
    {
        if(unicast_mac_filters != nullptr)
        {
            children["unicast-mac-filters"] = unicast_mac_filters.get();
        }
        else
        {
            unicast_mac_filters = std::make_unique<EthernetEncapsulation::Nodes::Node::UnicastMacFilters>();
            unicast_mac_filters->parent = this;
            children["unicast-mac-filters"] = unicast_mac_filters.get();
        }
        return children.at("unicast-mac-filters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetEncapsulation::Nodes::Node::get_children()
{
    if(children.find("unicast-mac-filters") == children.end())
    {
        if(unicast_mac_filters != nullptr)
        {
            children["unicast-mac-filters"] = unicast_mac_filters.get();
        }
    }

    return children;
}

void EthernetEncapsulation::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

EthernetEncapsulation::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "ethernet-encapsulation";
}

EthernetEncapsulation::Nodes::~Nodes()
{
}

bool EthernetEncapsulation::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool EthernetEncapsulation::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EthernetEncapsulation::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath EthernetEncapsulation::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:ethernet-encapsulation/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetEncapsulation::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<EthernetEncapsulation::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetEncapsulation::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void EthernetEncapsulation::Nodes::set_value(const std::string & value_path, std::string value)
{
}

EthernetEncapsulation::EthernetEncapsulation()
    :
    nodes(std::make_unique<EthernetEncapsulation::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "ethernet-encapsulation"; yang_parent_name = "Cisco-IOS-XR-l2-eth-infra-oper";
}

EthernetEncapsulation::~EthernetEncapsulation()
{
}

bool EthernetEncapsulation::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool EthernetEncapsulation::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string EthernetEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2-eth-infra-oper:ethernet-encapsulation";

    return path_buffer.str();

}

EntityPath EthernetEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* EthernetEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<EthernetEncapsulation::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & EthernetEncapsulation::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void EthernetEncapsulation::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> EthernetEncapsulation::clone_ptr()
{
    return std::make_unique<EthernetEncapsulation>();
}

const Enum::YLeaf VlanEncapsEnum::no_encapsulation {0, "no-encapsulation"};
const Enum::YLeaf VlanEncapsEnum::dot1q {1, "dot1q"};
const Enum::YLeaf VlanEncapsEnum::qinq {2, "qinq"};
const Enum::YLeaf VlanEncapsEnum::qin_any {3, "qin-any"};
const Enum::YLeaf VlanEncapsEnum::dot1q_native {4, "dot1q-native"};
const Enum::YLeaf VlanEncapsEnum::dot1ad {5, "dot1ad"};
const Enum::YLeaf VlanEncapsEnum::dot1ad_native {6, "dot1ad-native"};
const Enum::YLeaf VlanEncapsEnum::service_instance {7, "service-instance"};
const Enum::YLeaf VlanEncapsEnum::dot1ad_dot1q {8, "dot1ad-dot1q"};
const Enum::YLeaf VlanEncapsEnum::dot1ad_any {9, "dot1ad-any"};

const Enum::YLeaf EthCapsUcastMacModeEnum::reserved {0, "reserved"};
const Enum::YLeaf EthCapsUcastMacModeEnum::permit {1, "permit"};

const Enum::YLeaf ImStateEnumEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::YLeaf ImStateEnumEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::YLeaf ImStateEnumEnum::im_state_down {2, "im-state-down"};
const Enum::YLeaf ImStateEnumEnum::im_state_up {3, "im-state-up"};
const Enum::YLeaf ImStateEnumEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::YLeaf ImStateEnumEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::YLeaf ImStateEnumEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::YLeaf ImStateEnumEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::YLeaf ImStateEnumEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::YLeaf ImStateEnumEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::YLeaf ImStateEnumEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::YLeaf ImStateEnumEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::YLeaf ImStateEnumEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::YLeaf ImStateEnumEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::YLeaf ImStateEnumEnum::im_state_reset {14, "im-state-reset"};
const Enum::YLeaf ImStateEnumEnum::im_state_operational {15, "im-state-operational"};
const Enum::YLeaf ImStateEnumEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::YLeaf ImStateEnumEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::YLeaf ImStateEnumEnum::im_state_last {18, "im-state-last"};

const Enum::YLeaf EfpTagPriorityEnum::priority0 {0, "priority0"};
const Enum::YLeaf EfpTagPriorityEnum::priority1 {1, "priority1"};
const Enum::YLeaf EfpTagPriorityEnum::priority2 {2, "priority2"};
const Enum::YLeaf EfpTagPriorityEnum::priority3 {3, "priority3"};
const Enum::YLeaf EfpTagPriorityEnum::priority4 {4, "priority4"};
const Enum::YLeaf EfpTagPriorityEnum::priority5 {5, "priority5"};
const Enum::YLeaf EfpTagPriorityEnum::priority6 {6, "priority6"};
const Enum::YLeaf EfpTagPriorityEnum::priority7 {7, "priority7"};
const Enum::YLeaf EfpTagPriorityEnum::priority_any {8, "priority-any"};

const Enum::YLeaf EfpTagEtypeEnum::untagged {0, "untagged"};
const Enum::YLeaf EfpTagEtypeEnum::dot1q {33024, "dot1q"};
const Enum::YLeaf EfpTagEtypeEnum::dot1ad {34984, "dot1ad"};

const Enum::YLeaf VlanServiceEnum::vlan_service_l2 {1, "vlan-service-l2"};
const Enum::YLeaf VlanServiceEnum::vlan_service_l3 {2, "vlan-service-l3"};

const Enum::YLeaf EfpPayloadEtypeEnum::payload_ethertype_any {0, "payload-ethertype-any"};
const Enum::YLeaf EfpPayloadEtypeEnum::payload_ethertype_ip {1, "payload-ethertype-ip"};
const Enum::YLeaf EfpPayloadEtypeEnum::payload_ethertype_pppoe {2, "payload-ethertype-pppoe"};

const Enum::YLeaf VlanQinqOuterEtypeEnum::ether_type8100 {33024, "ether-type8100"};
const Enum::YLeaf VlanQinqOuterEtypeEnum::ether_type9100 {37120, "ether-type9100"};
const Enum::YLeaf VlanQinqOuterEtypeEnum::ether_type9200 {37376, "ether-type9200"};

const Enum::YLeaf EthFilteringEnum::no_filtering {0, "no-filtering"};
const Enum::YLeaf EthFilteringEnum::dot1q_filtering {1, "dot1q-filtering"};
const Enum::YLeaf EthFilteringEnum::dot1ad_filtering {2, "dot1ad-filtering"};
const Enum::YLeaf EthFilteringEnum::two_port_mac_relay_filtering {3, "two-port-mac-relay-filtering"};


}
}

