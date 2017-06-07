
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_pppoe_ma_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_subscriber_pppoe_ma_oper {

Pppoe::Pppoe()
    :
    access_interface_statistics(std::make_shared<Pppoe::AccessInterfaceStatistics>())
	,nodes(std::make_shared<Pppoe::Nodes>())
{
    access_interface_statistics->parent = this;

    nodes->parent = this;

    yang_name = "pppoe"; yang_parent_name = "Cisco-IOS-XR-subscriber-pppoe-ma-oper";
}

Pppoe::~Pppoe()
{
}

bool Pppoe::has_data() const
{
    return (access_interface_statistics !=  nullptr && access_interface_statistics->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Pppoe::has_operation() const
{
    return is_set(operation)
	|| (access_interface_statistics !=  nullptr && access_interface_statistics->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-oper:pppoe";

    return path_buffer.str();

}

const EntityPath Pppoe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface-statistics")
    {
        if(access_interface_statistics == nullptr)
        {
            access_interface_statistics = std::make_shared<Pppoe::AccessInterfaceStatistics>();
        }
        return access_interface_statistics;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Pppoe::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interface_statistics != nullptr)
    {
        children["access-interface-statistics"] = access_interface_statistics;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Pppoe::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Pppoe::clone_ptr() const
{
    return std::make_shared<Pppoe>();
}

std::string Pppoe::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pppoe::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pppoe::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistics()
{
    yang_name = "access-interface-statistics"; yang_parent_name = "pppoe";
}

Pppoe::AccessInterfaceStatistics::~AccessInterfaceStatistics()
{
}

bool Pppoe::AccessInterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<access_interface_statistic.size(); index++)
    {
        if(access_interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::AccessInterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<access_interface_statistic.size(); index++)
    {
        if(access_interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pppoe::AccessInterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-statistics";

    return path_buffer.str();

}

const EntityPath Pppoe::AccessInterfaceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-oper:pppoe/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::AccessInterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface-statistic")
    {
        for(auto const & c : access_interface_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic>();
        c->parent = this;
        access_interface_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::AccessInterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_interface_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pppoe::AccessInterfaceStatistics::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::AccessInterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"}
    	,
    packet_counts(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts>())
{
    packet_counts->parent = this;

    yang_name = "access-interface-statistic"; yang_parent_name = "access-interface-statistics";
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::~AccessInterfaceStatistic()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::has_data() const
{
    return interface_name.is_set
	|| (packet_counts !=  nullptr && packet_counts->has_data());
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (packet_counts !=  nullptr && packet_counts->has_operation());
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-statistic" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-oper:pppoe/access-interface-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-counts")
    {
        if(packet_counts == nullptr)
        {
            packet_counts = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts>();
        }
        return packet_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet_counts != nullptr)
    {
        children["packet-counts"] = packet_counts;
    }

    return children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PacketCounts()
    :
    other(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other>())
	,padi(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi>())
	,pado(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado>())
	,padr(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr>())
	,pads_error(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError>())
	,pads_success(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess>())
	,padt(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt>())
	,session_state(std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState>())
{
    other->parent = this;

    padi->parent = this;

    pado->parent = this;

    padr->parent = this;

    pads_error->parent = this;

    pads_success->parent = this;

    padt->parent = this;

    session_state->parent = this;

    yang_name = "packet-counts"; yang_parent_name = "access-interface-statistic";
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::~PacketCounts()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::has_data() const
{
    return (other !=  nullptr && other->has_data())
	|| (padi !=  nullptr && padi->has_data())
	|| (pado !=  nullptr && pado->has_data())
	|| (padr !=  nullptr && padr->has_data())
	|| (pads_error !=  nullptr && pads_error->has_data())
	|| (pads_success !=  nullptr && pads_success->has_data())
	|| (padt !=  nullptr && padt->has_data())
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::has_operation() const
{
    return is_set(operation)
	|| (other !=  nullptr && other->has_operation())
	|| (padi !=  nullptr && padi->has_operation())
	|| (pado !=  nullptr && pado->has_operation())
	|| (padr !=  nullptr && padr->has_operation())
	|| (pads_error !=  nullptr && pads_error->has_operation())
	|| (pads_success !=  nullptr && pads_success->has_operation())
	|| (padt !=  nullptr && padt->has_operation())
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-counts";

    return path_buffer.str();

}

const EntityPath Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketCounts' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "other")
    {
        if(other == nullptr)
        {
            other = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other>();
        }
        return other;
    }

    if(child_yang_name == "padi")
    {
        if(padi == nullptr)
        {
            padi = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi>();
        }
        return padi;
    }

    if(child_yang_name == "pado")
    {
        if(pado == nullptr)
        {
            pado = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado>();
        }
        return pado;
    }

    if(child_yang_name == "padr")
    {
        if(padr == nullptr)
        {
            padr = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr>();
        }
        return padr;
    }

    if(child_yang_name == "pads-error")
    {
        if(pads_error == nullptr)
        {
            pads_error = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError>();
        }
        return pads_error;
    }

    if(child_yang_name == "pads-success")
    {
        if(pads_success == nullptr)
        {
            pads_success = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess>();
        }
        return pads_success;
    }

    if(child_yang_name == "padt")
    {
        if(padt == nullptr)
        {
            padt = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt>();
        }
        return padt;
    }

    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(other != nullptr)
    {
        children["other"] = other;
    }

    if(padi != nullptr)
    {
        children["padi"] = padi;
    }

    if(pado != nullptr)
    {
        children["pado"] = pado;
    }

    if(padr != nullptr)
    {
        children["padr"] = padr;
    }

    if(pads_error != nullptr)
    {
        children["pads-error"] = pads_error;
    }

    if(pads_success != nullptr)
    {
        children["pads-success"] = pads_success;
    }

    if(padt != nullptr)
    {
        children["padt"] = padt;
    }

    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::Padi()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "padi"; yang_parent_name = "packet-counts";
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::~Padi()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padi";

    return path_buffer.str();

}

const EntityPath Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padi' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::Pado()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "pado"; yang_parent_name = "packet-counts";
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::~Pado()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pado";

    return path_buffer.str();

}

const EntityPath Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pado' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Pado::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::Padr()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "padr"; yang_parent_name = "packet-counts";
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::~Padr()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padr";

    return path_buffer.str();

}

const EntityPath Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padr' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::PadsSuccess()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "pads-success"; yang_parent_name = "packet-counts";
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::~PadsSuccess()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pads-success";

    return path_buffer.str();

}

const EntityPath Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PadsSuccess' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsSuccess::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::PadsError()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "pads-error"; yang_parent_name = "packet-counts";
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::~PadsError()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pads-error";

    return path_buffer.str();

}

const EntityPath Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PadsError' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::PadsError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::Padt()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "padt"; yang_parent_name = "packet-counts";
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::~Padt()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padt";

    return path_buffer.str();

}

const EntityPath Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padt' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Padt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::SessionState()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "session-state"; yang_parent_name = "packet-counts";
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::~SessionState()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

const EntityPath Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionState' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::Other()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "other"; yang_parent_name = "packet-counts";
}

Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::~Other()
{
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other";

    return path_buffer.str();

}

const EntityPath Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Other' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::AccessInterfaceStatistics::AccessInterfaceStatistic::PacketCounts::Other::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "pppoe";
}

Pppoe::Nodes::~Nodes()
{
}

bool Pppoe::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pppoe::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-oper:pppoe/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pppoe::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pppoe::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    access_interface(std::make_shared<Pppoe::Nodes::Node::AccessInterface>())
	,bba_groups(std::make_shared<Pppoe::Nodes::Node::BbaGroups>())
	,interfaces(std::make_shared<Pppoe::Nodes::Node::Interfaces>())
	,statistics(std::make_shared<Pppoe::Nodes::Node::Statistics>())
	,summary_total(std::make_shared<Pppoe::Nodes::Node::SummaryTotal>())
{
    access_interface->parent = this;

    bba_groups->parent = this;

    interfaces->parent = this;

    statistics->parent = this;

    summary_total->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Pppoe::Nodes::Node::~Node()
{
}

bool Pppoe::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (access_interface !=  nullptr && access_interface->has_data())
	|| (bba_groups !=  nullptr && bba_groups->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary_total !=  nullptr && summary_total->has_data());
}

bool Pppoe::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (access_interface !=  nullptr && access_interface->has_operation())
	|| (bba_groups !=  nullptr && bba_groups->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary_total !=  nullptr && summary_total->has_operation());
}

std::string Pppoe::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-oper:pppoe/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface")
    {
        if(access_interface == nullptr)
        {
            access_interface = std::make_shared<Pppoe::Nodes::Node::AccessInterface>();
        }
        return access_interface;
    }

    if(child_yang_name == "bba-groups")
    {
        if(bba_groups == nullptr)
        {
            bba_groups = std::make_shared<Pppoe::Nodes::Node::BbaGroups>();
        }
        return bba_groups;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Pppoe::Nodes::Node::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Pppoe::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary-total")
    {
        if(summary_total == nullptr)
        {
            summary_total = std::make_shared<Pppoe::Nodes::Node::SummaryTotal>();
        }
        return summary_total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interface != nullptr)
    {
        children["access-interface"] = access_interface;
    }

    if(bba_groups != nullptr)
    {
        children["bba-groups"] = bba_groups;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary_total != nullptr)
    {
        children["summary-total"] = summary_total;
    }

    return children;
}

void Pppoe::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Pppoe::Nodes::Node::Statistics::Statistics()
    :
    packet_counts(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts>())
	,packet_error_counts(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketErrorCounts>())
{
    packet_counts->parent = this;

    packet_error_counts->parent = this;

    yang_name = "statistics"; yang_parent_name = "node";
}

Pppoe::Nodes::Node::Statistics::~Statistics()
{
}

bool Pppoe::Nodes::Node::Statistics::has_data() const
{
    return (packet_counts !=  nullptr && packet_counts->has_data())
	|| (packet_error_counts !=  nullptr && packet_error_counts->has_data());
}

bool Pppoe::Nodes::Node::Statistics::has_operation() const
{
    return is_set(operation)
	|| (packet_counts !=  nullptr && packet_counts->has_operation())
	|| (packet_error_counts !=  nullptr && packet_error_counts->has_operation());
}

std::string Pppoe::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-counts")
    {
        if(packet_counts == nullptr)
        {
            packet_counts = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts>();
        }
        return packet_counts;
    }

    if(child_yang_name == "packet-error-counts")
    {
        if(packet_error_counts == nullptr)
        {
            packet_error_counts = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketErrorCounts>();
        }
        return packet_error_counts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet_counts != nullptr)
    {
        children["packet-counts"] = packet_counts;
    }

    if(packet_error_counts != nullptr)
    {
        children["packet-error-counts"] = packet_error_counts;
    }

    return children;
}

void Pppoe::Nodes::Node::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::Nodes::Node::Statistics::PacketCounts::PacketCounts()
    :
    other(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Other>())
	,padi(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padi>())
	,pado(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Pado>())
	,padr(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padr>())
	,pads_error(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError>())
	,pads_success(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess>())
	,padt(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padt>())
	,session_state(std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState>())
{
    other->parent = this;

    padi->parent = this;

    pado->parent = this;

    padr->parent = this;

    pads_error->parent = this;

    pads_success->parent = this;

    padt->parent = this;

    session_state->parent = this;

    yang_name = "packet-counts"; yang_parent_name = "statistics";
}

Pppoe::Nodes::Node::Statistics::PacketCounts::~PacketCounts()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::has_data() const
{
    return (other !=  nullptr && other->has_data())
	|| (padi !=  nullptr && padi->has_data())
	|| (pado !=  nullptr && pado->has_data())
	|| (padr !=  nullptr && padr->has_data())
	|| (pads_error !=  nullptr && pads_error->has_data())
	|| (pads_success !=  nullptr && pads_success->has_data())
	|| (padt !=  nullptr && padt->has_data())
	|| (session_state !=  nullptr && session_state->has_data());
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::has_operation() const
{
    return is_set(operation)
	|| (other !=  nullptr && other->has_operation())
	|| (padi !=  nullptr && padi->has_operation())
	|| (pado !=  nullptr && pado->has_operation())
	|| (padr !=  nullptr && padr->has_operation())
	|| (pads_error !=  nullptr && pads_error->has_operation())
	|| (pads_success !=  nullptr && pads_success->has_operation())
	|| (padt !=  nullptr && padt->has_operation())
	|| (session_state !=  nullptr && session_state->has_operation());
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-counts";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Statistics::PacketCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketCounts' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "other")
    {
        if(other == nullptr)
        {
            other = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Other>();
        }
        return other;
    }

    if(child_yang_name == "padi")
    {
        if(padi == nullptr)
        {
            padi = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padi>();
        }
        return padi;
    }

    if(child_yang_name == "pado")
    {
        if(pado == nullptr)
        {
            pado = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Pado>();
        }
        return pado;
    }

    if(child_yang_name == "padr")
    {
        if(padr == nullptr)
        {
            padr = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padr>();
        }
        return padr;
    }

    if(child_yang_name == "pads-error")
    {
        if(pads_error == nullptr)
        {
            pads_error = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError>();
        }
        return pads_error;
    }

    if(child_yang_name == "pads-success")
    {
        if(pads_success == nullptr)
        {
            pads_success = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess>();
        }
        return pads_success;
    }

    if(child_yang_name == "padt")
    {
        if(padt == nullptr)
        {
            padt = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::Padt>();
        }
        return padt;
    }

    if(child_yang_name == "session-state")
    {
        if(session_state == nullptr)
        {
            session_state = std::make_shared<Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState>();
        }
        return session_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(other != nullptr)
    {
        children["other"] = other;
    }

    if(padi != nullptr)
    {
        children["padi"] = padi;
    }

    if(pado != nullptr)
    {
        children["pado"] = pado;
    }

    if(padr != nullptr)
    {
        children["padr"] = padr;
    }

    if(pads_error != nullptr)
    {
        children["pads-error"] = pads_error;
    }

    if(pads_success != nullptr)
    {
        children["pads-success"] = pads_success;
    }

    if(padt != nullptr)
    {
        children["padt"] = padt;
    }

    if(session_state != nullptr)
    {
        children["session-state"] = session_state;
    }

    return children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::Padi()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "padi"; yang_parent_name = "packet-counts";
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::~Padi()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padi";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padi' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Padi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::Pado()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "pado"; yang_parent_name = "packet-counts";
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::~Pado()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pado";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pado' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Pado::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::Padr()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "padr"; yang_parent_name = "packet-counts";
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::~Padr()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padr";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padr' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Padr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::PadsSuccess()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "pads-success"; yang_parent_name = "packet-counts";
}

Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::~PadsSuccess()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pads-success";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PadsSuccess' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::PadsSuccess::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::PadsError()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "pads-error"; yang_parent_name = "packet-counts";
}

Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::~PadsError()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pads-error";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PadsError' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::PadsError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::Padt()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "padt"; yang_parent_name = "packet-counts";
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::~Padt()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padt";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padt' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Padt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::SessionState()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "session-state"; yang_parent_name = "packet-counts";
}

Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::~SessionState()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-state";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionState' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::SessionState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Other::Other()
    :
    dropped{YType::uint32, "dropped"},
    received{YType::uint32, "received"},
    sent{YType::uint32, "sent"}
{
    yang_name = "other"; yang_parent_name = "packet-counts";
}

Pppoe::Nodes::Node::Statistics::PacketCounts::Other::~Other()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Other::has_data() const
{
    return dropped.is_set
	|| received.is_set
	|| sent.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketCounts::Other::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped.operation)
	|| is_set(received.operation)
	|| is_set(sent.operation);
}

std::string Pppoe::Nodes::Node::Statistics::PacketCounts::Other::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Statistics::PacketCounts::Other::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Other' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.operation)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (sent.is_set || is_set(sent.operation)) leaf_name_data.push_back(sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Statistics::PacketCounts::Other::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Statistics::PacketCounts::Other::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::Statistics::PacketCounts::Other::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped")
    {
        dropped = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "sent")
    {
        sent = value;
    }
}

Pppoe::Nodes::Node::Statistics::PacketErrorCounts::PacketErrorCounts()
    :
    bad_packet_length{YType::uint32, "bad-packet-length"},
    bad_tag_length_field{YType::uint32, "bad-tag-length-field"},
    bad_vendor_tag_length_field{YType::uint32, "bad-vendor-tag-length-field"},
    duplicate_host_uniq_tag_received{YType::uint32, "duplicate-host-uniq-tag-received"},
    duplicate_relay_session_id_tag_received{YType::uint32, "duplicate-relay-session-id-tag-received"},
    invalid_ale_tag{YType::uint32, "invalid-ale-tag"},
    invalid_dsl_tag{YType::uint32, "invalid-dsl-tag"},
    invalid_iana_code_invendor_tag{YType::uint32, "invalid-iana-code-invendor-tag"},
    invalid_iwf_tag{YType::uint32, "invalid-iwf-tag"},
    invalid_max_payload_tag{YType::uint32, "invalid-max-payload-tag"},
    invalid_peer_mac{YType::uint32, "invalid-peer-mac"},
    invalid_service_name{YType::uint32, "invalid-service-name"},
    invalid_version_type_value{YType::uint32, "invalid-version-type-value"},
    invalid_vlan_tags{YType::uint32, "invalid-vlan-tags"},
    multiple_ale_tags{YType::uint32, "multiple-ale-tags"},
    multiple_circuit_id_tags{YType::uint32, "multiple-circuit-id-tags"},
    multiple_host_uniq_tags{YType::uint32, "multiple-host-uniq-tags"},
    multiple_iwf_tags{YType::uint32, "multiple-iwf-tags"},
    multiple_max_payload_tags{YType::uint32, "multiple-max-payload-tags"},
    multiple_of_the_same_dsl_tag{YType::uint32, "multiple-of-the-same-dsl-tag"},
    multiple_relay_session_id_tags{YType::uint32, "multiple-relay-session-id-tags"},
    multiple_remote_id_tags{YType::uint32, "multiple-remote-id-tags"},
    multiple_service_name_tags{YType::uint32, "multiple-service-name-tags"},
    multiple_vendor_specific_tags{YType::uint32, "multiple-vendor-specific-tags"},
    no_iana_code_invendor_tag{YType::uint32, "no-iana-code-invendor-tag"},
    no_interface_handle{YType::uint32, "no-interface-handle"},
    no_packet_mac_address{YType::uint32, "no-packet-mac-address"},
    no_packet_payload{YType::uint32, "no-packet-payload"},
    no_service_name_tag{YType::uint32, "no-service-name-tag"},
    no_space_left_in_packet{YType::uint32, "no-space-left-in-packet"},
    packet_on_srg_slave{YType::uint32, "packet-on-srg-slave"},
    packet_too_long{YType::uint32, "packet-too-long"},
    pado_received{YType::uint32, "pado-received"},
    pads_received{YType::uint32, "pads-received"},
    padt_before_pads_sent{YType::uint32, "padt-before-pads-sent"},
    padt_for_unknown_session{YType::uint32, "padt-for-unknown-session"},
    padt_with_wrong_peer_mac{YType::uint32, "padt-with-wrong-peer-mac"},
    padt_with_wrong_vlan_tags{YType::uint32, "padt-with-wrong-vlan-tags"},
    session_stage_packet_for_unknown_session{YType::uint32, "session-stage-packet-for-unknown-session"},
    session_stage_packet_with_no_error{YType::uint32, "session-stage-packet-with-no-error"},
    session_stage_packet_with_wrong_mac{YType::uint32, "session-stage-packet-with-wrong-mac"},
    session_stage_packet_with_wrong_vlan_tags{YType::uint32, "session-stage-packet-with-wrong-vlan-tags"},
    tag_too_short{YType::uint32, "tag-too-short"},
    unexpected_ac_name_tag{YType::uint32, "unexpected-ac-name-tag"},
    unexpected_error_tags{YType::uint32, "unexpected-error-tags"},
    unexpected_session_id_in_packet{YType::uint32, "unexpected-session-id-in-packet"},
    unknown_interface{YType::uint32, "unknown-interface"},
    unknown_packet_type_received{YType::uint32, "unknown-packet-type-received"},
    unknown_tag_received{YType::uint32, "unknown-tag-received"},
    unknownvendor_tag{YType::uint32, "unknownvendor-tag"},
    vendor_tag_too_short{YType::uint32, "vendor-tag-too-short"},
    zero_length_host_uniq{YType::uint32, "zero-length-host-uniq"}
{
    yang_name = "packet-error-counts"; yang_parent_name = "statistics";
}

Pppoe::Nodes::Node::Statistics::PacketErrorCounts::~PacketErrorCounts()
{
}

bool Pppoe::Nodes::Node::Statistics::PacketErrorCounts::has_data() const
{
    return bad_packet_length.is_set
	|| bad_tag_length_field.is_set
	|| bad_vendor_tag_length_field.is_set
	|| duplicate_host_uniq_tag_received.is_set
	|| duplicate_relay_session_id_tag_received.is_set
	|| invalid_ale_tag.is_set
	|| invalid_dsl_tag.is_set
	|| invalid_iana_code_invendor_tag.is_set
	|| invalid_iwf_tag.is_set
	|| invalid_max_payload_tag.is_set
	|| invalid_peer_mac.is_set
	|| invalid_service_name.is_set
	|| invalid_version_type_value.is_set
	|| invalid_vlan_tags.is_set
	|| multiple_ale_tags.is_set
	|| multiple_circuit_id_tags.is_set
	|| multiple_host_uniq_tags.is_set
	|| multiple_iwf_tags.is_set
	|| multiple_max_payload_tags.is_set
	|| multiple_of_the_same_dsl_tag.is_set
	|| multiple_relay_session_id_tags.is_set
	|| multiple_remote_id_tags.is_set
	|| multiple_service_name_tags.is_set
	|| multiple_vendor_specific_tags.is_set
	|| no_iana_code_invendor_tag.is_set
	|| no_interface_handle.is_set
	|| no_packet_mac_address.is_set
	|| no_packet_payload.is_set
	|| no_service_name_tag.is_set
	|| no_space_left_in_packet.is_set
	|| packet_on_srg_slave.is_set
	|| packet_too_long.is_set
	|| pado_received.is_set
	|| pads_received.is_set
	|| padt_before_pads_sent.is_set
	|| padt_for_unknown_session.is_set
	|| padt_with_wrong_peer_mac.is_set
	|| padt_with_wrong_vlan_tags.is_set
	|| session_stage_packet_for_unknown_session.is_set
	|| session_stage_packet_with_no_error.is_set
	|| session_stage_packet_with_wrong_mac.is_set
	|| session_stage_packet_with_wrong_vlan_tags.is_set
	|| tag_too_short.is_set
	|| unexpected_ac_name_tag.is_set
	|| unexpected_error_tags.is_set
	|| unexpected_session_id_in_packet.is_set
	|| unknown_interface.is_set
	|| unknown_packet_type_received.is_set
	|| unknown_tag_received.is_set
	|| unknownvendor_tag.is_set
	|| vendor_tag_too_short.is_set
	|| zero_length_host_uniq.is_set;
}

bool Pppoe::Nodes::Node::Statistics::PacketErrorCounts::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_packet_length.operation)
	|| is_set(bad_tag_length_field.operation)
	|| is_set(bad_vendor_tag_length_field.operation)
	|| is_set(duplicate_host_uniq_tag_received.operation)
	|| is_set(duplicate_relay_session_id_tag_received.operation)
	|| is_set(invalid_ale_tag.operation)
	|| is_set(invalid_dsl_tag.operation)
	|| is_set(invalid_iana_code_invendor_tag.operation)
	|| is_set(invalid_iwf_tag.operation)
	|| is_set(invalid_max_payload_tag.operation)
	|| is_set(invalid_peer_mac.operation)
	|| is_set(invalid_service_name.operation)
	|| is_set(invalid_version_type_value.operation)
	|| is_set(invalid_vlan_tags.operation)
	|| is_set(multiple_ale_tags.operation)
	|| is_set(multiple_circuit_id_tags.operation)
	|| is_set(multiple_host_uniq_tags.operation)
	|| is_set(multiple_iwf_tags.operation)
	|| is_set(multiple_max_payload_tags.operation)
	|| is_set(multiple_of_the_same_dsl_tag.operation)
	|| is_set(multiple_relay_session_id_tags.operation)
	|| is_set(multiple_remote_id_tags.operation)
	|| is_set(multiple_service_name_tags.operation)
	|| is_set(multiple_vendor_specific_tags.operation)
	|| is_set(no_iana_code_invendor_tag.operation)
	|| is_set(no_interface_handle.operation)
	|| is_set(no_packet_mac_address.operation)
	|| is_set(no_packet_payload.operation)
	|| is_set(no_service_name_tag.operation)
	|| is_set(no_space_left_in_packet.operation)
	|| is_set(packet_on_srg_slave.operation)
	|| is_set(packet_too_long.operation)
	|| is_set(pado_received.operation)
	|| is_set(pads_received.operation)
	|| is_set(padt_before_pads_sent.operation)
	|| is_set(padt_for_unknown_session.operation)
	|| is_set(padt_with_wrong_peer_mac.operation)
	|| is_set(padt_with_wrong_vlan_tags.operation)
	|| is_set(session_stage_packet_for_unknown_session.operation)
	|| is_set(session_stage_packet_with_no_error.operation)
	|| is_set(session_stage_packet_with_wrong_mac.operation)
	|| is_set(session_stage_packet_with_wrong_vlan_tags.operation)
	|| is_set(tag_too_short.operation)
	|| is_set(unexpected_ac_name_tag.operation)
	|| is_set(unexpected_error_tags.operation)
	|| is_set(unexpected_session_id_in_packet.operation)
	|| is_set(unknown_interface.operation)
	|| is_set(unknown_packet_type_received.operation)
	|| is_set(unknown_tag_received.operation)
	|| is_set(unknownvendor_tag.operation)
	|| is_set(vendor_tag_too_short.operation)
	|| is_set(zero_length_host_uniq.operation);
}

std::string Pppoe::Nodes::Node::Statistics::PacketErrorCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-error-counts";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Statistics::PacketErrorCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketErrorCounts' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_packet_length.is_set || is_set(bad_packet_length.operation)) leaf_name_data.push_back(bad_packet_length.get_name_leafdata());
    if (bad_tag_length_field.is_set || is_set(bad_tag_length_field.operation)) leaf_name_data.push_back(bad_tag_length_field.get_name_leafdata());
    if (bad_vendor_tag_length_field.is_set || is_set(bad_vendor_tag_length_field.operation)) leaf_name_data.push_back(bad_vendor_tag_length_field.get_name_leafdata());
    if (duplicate_host_uniq_tag_received.is_set || is_set(duplicate_host_uniq_tag_received.operation)) leaf_name_data.push_back(duplicate_host_uniq_tag_received.get_name_leafdata());
    if (duplicate_relay_session_id_tag_received.is_set || is_set(duplicate_relay_session_id_tag_received.operation)) leaf_name_data.push_back(duplicate_relay_session_id_tag_received.get_name_leafdata());
    if (invalid_ale_tag.is_set || is_set(invalid_ale_tag.operation)) leaf_name_data.push_back(invalid_ale_tag.get_name_leafdata());
    if (invalid_dsl_tag.is_set || is_set(invalid_dsl_tag.operation)) leaf_name_data.push_back(invalid_dsl_tag.get_name_leafdata());
    if (invalid_iana_code_invendor_tag.is_set || is_set(invalid_iana_code_invendor_tag.operation)) leaf_name_data.push_back(invalid_iana_code_invendor_tag.get_name_leafdata());
    if (invalid_iwf_tag.is_set || is_set(invalid_iwf_tag.operation)) leaf_name_data.push_back(invalid_iwf_tag.get_name_leafdata());
    if (invalid_max_payload_tag.is_set || is_set(invalid_max_payload_tag.operation)) leaf_name_data.push_back(invalid_max_payload_tag.get_name_leafdata());
    if (invalid_peer_mac.is_set || is_set(invalid_peer_mac.operation)) leaf_name_data.push_back(invalid_peer_mac.get_name_leafdata());
    if (invalid_service_name.is_set || is_set(invalid_service_name.operation)) leaf_name_data.push_back(invalid_service_name.get_name_leafdata());
    if (invalid_version_type_value.is_set || is_set(invalid_version_type_value.operation)) leaf_name_data.push_back(invalid_version_type_value.get_name_leafdata());
    if (invalid_vlan_tags.is_set || is_set(invalid_vlan_tags.operation)) leaf_name_data.push_back(invalid_vlan_tags.get_name_leafdata());
    if (multiple_ale_tags.is_set || is_set(multiple_ale_tags.operation)) leaf_name_data.push_back(multiple_ale_tags.get_name_leafdata());
    if (multiple_circuit_id_tags.is_set || is_set(multiple_circuit_id_tags.operation)) leaf_name_data.push_back(multiple_circuit_id_tags.get_name_leafdata());
    if (multiple_host_uniq_tags.is_set || is_set(multiple_host_uniq_tags.operation)) leaf_name_data.push_back(multiple_host_uniq_tags.get_name_leafdata());
    if (multiple_iwf_tags.is_set || is_set(multiple_iwf_tags.operation)) leaf_name_data.push_back(multiple_iwf_tags.get_name_leafdata());
    if (multiple_max_payload_tags.is_set || is_set(multiple_max_payload_tags.operation)) leaf_name_data.push_back(multiple_max_payload_tags.get_name_leafdata());
    if (multiple_of_the_same_dsl_tag.is_set || is_set(multiple_of_the_same_dsl_tag.operation)) leaf_name_data.push_back(multiple_of_the_same_dsl_tag.get_name_leafdata());
    if (multiple_relay_session_id_tags.is_set || is_set(multiple_relay_session_id_tags.operation)) leaf_name_data.push_back(multiple_relay_session_id_tags.get_name_leafdata());
    if (multiple_remote_id_tags.is_set || is_set(multiple_remote_id_tags.operation)) leaf_name_data.push_back(multiple_remote_id_tags.get_name_leafdata());
    if (multiple_service_name_tags.is_set || is_set(multiple_service_name_tags.operation)) leaf_name_data.push_back(multiple_service_name_tags.get_name_leafdata());
    if (multiple_vendor_specific_tags.is_set || is_set(multiple_vendor_specific_tags.operation)) leaf_name_data.push_back(multiple_vendor_specific_tags.get_name_leafdata());
    if (no_iana_code_invendor_tag.is_set || is_set(no_iana_code_invendor_tag.operation)) leaf_name_data.push_back(no_iana_code_invendor_tag.get_name_leafdata());
    if (no_interface_handle.is_set || is_set(no_interface_handle.operation)) leaf_name_data.push_back(no_interface_handle.get_name_leafdata());
    if (no_packet_mac_address.is_set || is_set(no_packet_mac_address.operation)) leaf_name_data.push_back(no_packet_mac_address.get_name_leafdata());
    if (no_packet_payload.is_set || is_set(no_packet_payload.operation)) leaf_name_data.push_back(no_packet_payload.get_name_leafdata());
    if (no_service_name_tag.is_set || is_set(no_service_name_tag.operation)) leaf_name_data.push_back(no_service_name_tag.get_name_leafdata());
    if (no_space_left_in_packet.is_set || is_set(no_space_left_in_packet.operation)) leaf_name_data.push_back(no_space_left_in_packet.get_name_leafdata());
    if (packet_on_srg_slave.is_set || is_set(packet_on_srg_slave.operation)) leaf_name_data.push_back(packet_on_srg_slave.get_name_leafdata());
    if (packet_too_long.is_set || is_set(packet_too_long.operation)) leaf_name_data.push_back(packet_too_long.get_name_leafdata());
    if (pado_received.is_set || is_set(pado_received.operation)) leaf_name_data.push_back(pado_received.get_name_leafdata());
    if (pads_received.is_set || is_set(pads_received.operation)) leaf_name_data.push_back(pads_received.get_name_leafdata());
    if (padt_before_pads_sent.is_set || is_set(padt_before_pads_sent.operation)) leaf_name_data.push_back(padt_before_pads_sent.get_name_leafdata());
    if (padt_for_unknown_session.is_set || is_set(padt_for_unknown_session.operation)) leaf_name_data.push_back(padt_for_unknown_session.get_name_leafdata());
    if (padt_with_wrong_peer_mac.is_set || is_set(padt_with_wrong_peer_mac.operation)) leaf_name_data.push_back(padt_with_wrong_peer_mac.get_name_leafdata());
    if (padt_with_wrong_vlan_tags.is_set || is_set(padt_with_wrong_vlan_tags.operation)) leaf_name_data.push_back(padt_with_wrong_vlan_tags.get_name_leafdata());
    if (session_stage_packet_for_unknown_session.is_set || is_set(session_stage_packet_for_unknown_session.operation)) leaf_name_data.push_back(session_stage_packet_for_unknown_session.get_name_leafdata());
    if (session_stage_packet_with_no_error.is_set || is_set(session_stage_packet_with_no_error.operation)) leaf_name_data.push_back(session_stage_packet_with_no_error.get_name_leafdata());
    if (session_stage_packet_with_wrong_mac.is_set || is_set(session_stage_packet_with_wrong_mac.operation)) leaf_name_data.push_back(session_stage_packet_with_wrong_mac.get_name_leafdata());
    if (session_stage_packet_with_wrong_vlan_tags.is_set || is_set(session_stage_packet_with_wrong_vlan_tags.operation)) leaf_name_data.push_back(session_stage_packet_with_wrong_vlan_tags.get_name_leafdata());
    if (tag_too_short.is_set || is_set(tag_too_short.operation)) leaf_name_data.push_back(tag_too_short.get_name_leafdata());
    if (unexpected_ac_name_tag.is_set || is_set(unexpected_ac_name_tag.operation)) leaf_name_data.push_back(unexpected_ac_name_tag.get_name_leafdata());
    if (unexpected_error_tags.is_set || is_set(unexpected_error_tags.operation)) leaf_name_data.push_back(unexpected_error_tags.get_name_leafdata());
    if (unexpected_session_id_in_packet.is_set || is_set(unexpected_session_id_in_packet.operation)) leaf_name_data.push_back(unexpected_session_id_in_packet.get_name_leafdata());
    if (unknown_interface.is_set || is_set(unknown_interface.operation)) leaf_name_data.push_back(unknown_interface.get_name_leafdata());
    if (unknown_packet_type_received.is_set || is_set(unknown_packet_type_received.operation)) leaf_name_data.push_back(unknown_packet_type_received.get_name_leafdata());
    if (unknown_tag_received.is_set || is_set(unknown_tag_received.operation)) leaf_name_data.push_back(unknown_tag_received.get_name_leafdata());
    if (unknownvendor_tag.is_set || is_set(unknownvendor_tag.operation)) leaf_name_data.push_back(unknownvendor_tag.get_name_leafdata());
    if (vendor_tag_too_short.is_set || is_set(vendor_tag_too_short.operation)) leaf_name_data.push_back(vendor_tag_too_short.get_name_leafdata());
    if (zero_length_host_uniq.is_set || is_set(zero_length_host_uniq.operation)) leaf_name_data.push_back(zero_length_host_uniq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Statistics::PacketErrorCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Statistics::PacketErrorCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::Statistics::PacketErrorCounts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-packet-length")
    {
        bad_packet_length = value;
    }
    if(value_path == "bad-tag-length-field")
    {
        bad_tag_length_field = value;
    }
    if(value_path == "bad-vendor-tag-length-field")
    {
        bad_vendor_tag_length_field = value;
    }
    if(value_path == "duplicate-host-uniq-tag-received")
    {
        duplicate_host_uniq_tag_received = value;
    }
    if(value_path == "duplicate-relay-session-id-tag-received")
    {
        duplicate_relay_session_id_tag_received = value;
    }
    if(value_path == "invalid-ale-tag")
    {
        invalid_ale_tag = value;
    }
    if(value_path == "invalid-dsl-tag")
    {
        invalid_dsl_tag = value;
    }
    if(value_path == "invalid-iana-code-invendor-tag")
    {
        invalid_iana_code_invendor_tag = value;
    }
    if(value_path == "invalid-iwf-tag")
    {
        invalid_iwf_tag = value;
    }
    if(value_path == "invalid-max-payload-tag")
    {
        invalid_max_payload_tag = value;
    }
    if(value_path == "invalid-peer-mac")
    {
        invalid_peer_mac = value;
    }
    if(value_path == "invalid-service-name")
    {
        invalid_service_name = value;
    }
    if(value_path == "invalid-version-type-value")
    {
        invalid_version_type_value = value;
    }
    if(value_path == "invalid-vlan-tags")
    {
        invalid_vlan_tags = value;
    }
    if(value_path == "multiple-ale-tags")
    {
        multiple_ale_tags = value;
    }
    if(value_path == "multiple-circuit-id-tags")
    {
        multiple_circuit_id_tags = value;
    }
    if(value_path == "multiple-host-uniq-tags")
    {
        multiple_host_uniq_tags = value;
    }
    if(value_path == "multiple-iwf-tags")
    {
        multiple_iwf_tags = value;
    }
    if(value_path == "multiple-max-payload-tags")
    {
        multiple_max_payload_tags = value;
    }
    if(value_path == "multiple-of-the-same-dsl-tag")
    {
        multiple_of_the_same_dsl_tag = value;
    }
    if(value_path == "multiple-relay-session-id-tags")
    {
        multiple_relay_session_id_tags = value;
    }
    if(value_path == "multiple-remote-id-tags")
    {
        multiple_remote_id_tags = value;
    }
    if(value_path == "multiple-service-name-tags")
    {
        multiple_service_name_tags = value;
    }
    if(value_path == "multiple-vendor-specific-tags")
    {
        multiple_vendor_specific_tags = value;
    }
    if(value_path == "no-iana-code-invendor-tag")
    {
        no_iana_code_invendor_tag = value;
    }
    if(value_path == "no-interface-handle")
    {
        no_interface_handle = value;
    }
    if(value_path == "no-packet-mac-address")
    {
        no_packet_mac_address = value;
    }
    if(value_path == "no-packet-payload")
    {
        no_packet_payload = value;
    }
    if(value_path == "no-service-name-tag")
    {
        no_service_name_tag = value;
    }
    if(value_path == "no-space-left-in-packet")
    {
        no_space_left_in_packet = value;
    }
    if(value_path == "packet-on-srg-slave")
    {
        packet_on_srg_slave = value;
    }
    if(value_path == "packet-too-long")
    {
        packet_too_long = value;
    }
    if(value_path == "pado-received")
    {
        pado_received = value;
    }
    if(value_path == "pads-received")
    {
        pads_received = value;
    }
    if(value_path == "padt-before-pads-sent")
    {
        padt_before_pads_sent = value;
    }
    if(value_path == "padt-for-unknown-session")
    {
        padt_for_unknown_session = value;
    }
    if(value_path == "padt-with-wrong-peer-mac")
    {
        padt_with_wrong_peer_mac = value;
    }
    if(value_path == "padt-with-wrong-vlan-tags")
    {
        padt_with_wrong_vlan_tags = value;
    }
    if(value_path == "session-stage-packet-for-unknown-session")
    {
        session_stage_packet_for_unknown_session = value;
    }
    if(value_path == "session-stage-packet-with-no-error")
    {
        session_stage_packet_with_no_error = value;
    }
    if(value_path == "session-stage-packet-with-wrong-mac")
    {
        session_stage_packet_with_wrong_mac = value;
    }
    if(value_path == "session-stage-packet-with-wrong-vlan-tags")
    {
        session_stage_packet_with_wrong_vlan_tags = value;
    }
    if(value_path == "tag-too-short")
    {
        tag_too_short = value;
    }
    if(value_path == "unexpected-ac-name-tag")
    {
        unexpected_ac_name_tag = value;
    }
    if(value_path == "unexpected-error-tags")
    {
        unexpected_error_tags = value;
    }
    if(value_path == "unexpected-session-id-in-packet")
    {
        unexpected_session_id_in_packet = value;
    }
    if(value_path == "unknown-interface")
    {
        unknown_interface = value;
    }
    if(value_path == "unknown-packet-type-received")
    {
        unknown_packet_type_received = value;
    }
    if(value_path == "unknown-tag-received")
    {
        unknown_tag_received = value;
    }
    if(value_path == "unknownvendor-tag")
    {
        unknownvendor_tag = value;
    }
    if(value_path == "vendor-tag-too-short")
    {
        vendor_tag_too_short = value;
    }
    if(value_path == "zero-length-host-uniq")
    {
        zero_length_host_uniq = value;
    }
}

Pppoe::Nodes::Node::AccessInterface::AccessInterface()
    :
    summaries(std::make_shared<Pppoe::Nodes::Node::AccessInterface::Summaries>())
{
    summaries->parent = this;

    yang_name = "access-interface"; yang_parent_name = "node";
}

Pppoe::Nodes::Node::AccessInterface::~AccessInterface()
{
}

bool Pppoe::Nodes::Node::AccessInterface::has_data() const
{
    return (summaries !=  nullptr && summaries->has_data());
}

bool Pppoe::Nodes::Node::AccessInterface::has_operation() const
{
    return is_set(operation)
	|| (summaries !=  nullptr && summaries->has_operation());
}

std::string Pppoe::Nodes::Node::AccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::AccessInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessInterface' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::AccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summaries")
    {
        if(summaries == nullptr)
        {
            summaries = std::make_shared<Pppoe::Nodes::Node::AccessInterface::Summaries>();
        }
        return summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::AccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summaries != nullptr)
    {
        children["summaries"] = summaries;
    }

    return children;
}

void Pppoe::Nodes::Node::AccessInterface::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::Nodes::Node::AccessInterface::Summaries::Summaries()
{
    yang_name = "summaries"; yang_parent_name = "access-interface";
}

Pppoe::Nodes::Node::AccessInterface::Summaries::~Summaries()
{
}

bool Pppoe::Nodes::Node::AccessInterface::Summaries::has_data() const
{
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::Node::AccessInterface::Summaries::has_operation() const
{
    for (std::size_t index=0; index<summary.size(); index++)
    {
        if(summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pppoe::Nodes::Node::AccessInterface::Summaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summaries";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::AccessInterface::Summaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summaries' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::AccessInterface::Summaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        for(auto const & c : summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pppoe::Nodes::Node::AccessInterface::Summaries::Summary>();
        c->parent = this;
        summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::AccessInterface::Summaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pppoe::Nodes::Node::AccessInterface::Summaries::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::Summary()
    :
    interface_name{YType::str, "interface-name"},
    bba_group_name{YType::str, "bba-group-name"},
    incomplete_sessions{YType::uint32, "incomplete-sessions"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_state{YType::uint32, "interface-state"},
    is_ready{YType::int32, "is-ready"},
    mac_address{YType::str, "mac-address"},
    sessions{YType::uint32, "sessions"}
{
    yang_name = "summary"; yang_parent_name = "summaries";
}

Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::~Summary()
{
}

bool Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::has_data() const
{
    return interface_name.is_set
	|| bba_group_name.is_set
	|| incomplete_sessions.is_set
	|| interface_name_xr.is_set
	|| interface_state.is_set
	|| is_ready.is_set
	|| mac_address.is_set
	|| sessions.is_set;
}

bool Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bba_group_name.operation)
	|| is_set(incomplete_sessions.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_state.operation)
	|| is_set(is_ready.operation)
	|| is_set(mac_address.operation)
	|| is_set(sessions.operation);
}

std::string Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bba_group_name.is_set || is_set(bba_group_name.operation)) leaf_name_data.push_back(bba_group_name.get_name_leafdata());
    if (incomplete_sessions.is_set || is_set(incomplete_sessions.operation)) leaf_name_data.push_back(incomplete_sessions.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.operation)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (is_ready.is_set || is_set(is_ready.operation)) leaf_name_data.push_back(is_ready.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.operation)) leaf_name_data.push_back(sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::AccessInterface::Summaries::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bba-group-name")
    {
        bba_group_name = value;
    }
    if(value_path == "incomplete-sessions")
    {
        incomplete_sessions = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
    }
    if(value_path == "is-ready")
    {
        is_ready = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "sessions")
    {
        sessions = value;
    }
}

Pppoe::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

Pppoe::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Pppoe::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pppoe::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pppoe::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pppoe::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::Nodes::Node::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    access_interface_name{YType::str, "access-interface-name"},
    bba_group_name{YType::str, "bba-group-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_complete{YType::int32, "is-complete"},
    local_mac_address{YType::str, "local-mac-address"},
    peer_mac_address{YType::str, "peer-mac-address"},
    session_id{YType::uint16, "session-id"},
    srg_state{YType::enumeration, "srg-state"},
    vlan_inner_id{YType::uint16, "vlan-inner-id"},
    vlan_outer_id{YType::uint16, "vlan-outer-id"}
    	,
    tags(std::make_shared<Pppoe::Nodes::Node::Interfaces::Interface::Tags>())
{
    tags->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pppoe::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Pppoe::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| access_interface_name.is_set
	|| bba_group_name.is_set
	|| interface_name_xr.is_set
	|| is_complete.is_set
	|| local_mac_address.is_set
	|| peer_mac_address.is_set
	|| session_id.is_set
	|| srg_state.is_set
	|| vlan_inner_id.is_set
	|| vlan_outer_id.is_set
	|| (tags !=  nullptr && tags->has_data());
}

bool Pppoe::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(access_interface_name.operation)
	|| is_set(bba_group_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_complete.operation)
	|| is_set(local_mac_address.operation)
	|| is_set(peer_mac_address.operation)
	|| is_set(session_id.operation)
	|| is_set(srg_state.operation)
	|| is_set(vlan_inner_id.operation)
	|| is_set(vlan_outer_id.operation)
	|| (tags !=  nullptr && tags->has_operation());
}

std::string Pppoe::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (access_interface_name.is_set || is_set(access_interface_name.operation)) leaf_name_data.push_back(access_interface_name.get_name_leafdata());
    if (bba_group_name.is_set || is_set(bba_group_name.operation)) leaf_name_data.push_back(bba_group_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_complete.is_set || is_set(is_complete.operation)) leaf_name_data.push_back(is_complete.get_name_leafdata());
    if (local_mac_address.is_set || is_set(local_mac_address.operation)) leaf_name_data.push_back(local_mac_address.get_name_leafdata());
    if (peer_mac_address.is_set || is_set(peer_mac_address.operation)) leaf_name_data.push_back(peer_mac_address.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (srg_state.is_set || is_set(srg_state.operation)) leaf_name_data.push_back(srg_state.get_name_leafdata());
    if (vlan_inner_id.is_set || is_set(vlan_inner_id.operation)) leaf_name_data.push_back(vlan_inner_id.get_name_leafdata());
    if (vlan_outer_id.is_set || is_set(vlan_outer_id.operation)) leaf_name_data.push_back(vlan_outer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tags")
    {
        if(tags == nullptr)
        {
            tags = std::make_shared<Pppoe::Nodes::Node::Interfaces::Interface::Tags>();
        }
        return tags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tags != nullptr)
    {
        children["tags"] = tags;
    }

    return children;
}

void Pppoe::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "access-interface-name")
    {
        access_interface_name = value;
    }
    if(value_path == "bba-group-name")
    {
        bba_group_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-complete")
    {
        is_complete = value;
    }
    if(value_path == "local-mac-address")
    {
        local_mac_address = value;
    }
    if(value_path == "peer-mac-address")
    {
        peer_mac_address = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "srg-state")
    {
        srg_state = value;
    }
    if(value_path == "vlan-inner-id")
    {
        vlan_inner_id = value;
    }
    if(value_path == "vlan-outer-id")
    {
        vlan_outer_id = value;
    }
}

Pppoe::Nodes::Node::Interfaces::Interface::Tags::Tags()
    :
    circuit_id{YType::str, "circuit-id"},
    dsl_actual_delay_down{YType::uint32, "dsl-actual-delay-down"},
    dsl_actual_delay_up{YType::uint32, "dsl-actual-delay-up"},
    dsl_actual_down{YType::uint32, "dsl-actual-down"},
    dsl_actual_up{YType::uint32, "dsl-actual-up"},
    dsl_attain_down{YType::uint32, "dsl-attain-down"},
    dsl_attain_up{YType::uint32, "dsl-attain-up"},
    dsl_max_delay_down{YType::uint32, "dsl-max-delay-down"},
    dsl_max_delay_up{YType::uint32, "dsl-max-delay-up"},
    dsl_max_down{YType::uint32, "dsl-max-down"},
    dsl_max_up{YType::uint32, "dsl-max-up"},
    dsl_min_down{YType::uint32, "dsl-min-down"},
    dsl_min_down_low{YType::uint32, "dsl-min-down-low"},
    dsl_min_up{YType::uint32, "dsl-min-up"},
    dsl_min_up_low{YType::uint32, "dsl-min-up-low"},
    host_uniq{YType::str, "host-uniq"},
    is_iwf{YType::int32, "is-iwf"},
    max_payload{YType::uint16, "max-payload"},
    relay_session_id{YType::str, "relay-session-id"},
    remote_id{YType::str, "remote-id"},
    service_name{YType::str, "service-name"}
    	,
    access_loop_encapsulation(std::make_shared<Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation>())
{
    access_loop_encapsulation->parent = this;

    yang_name = "tags"; yang_parent_name = "interface";
}

Pppoe::Nodes::Node::Interfaces::Interface::Tags::~Tags()
{
}

bool Pppoe::Nodes::Node::Interfaces::Interface::Tags::has_data() const
{
    return circuit_id.is_set
	|| dsl_actual_delay_down.is_set
	|| dsl_actual_delay_up.is_set
	|| dsl_actual_down.is_set
	|| dsl_actual_up.is_set
	|| dsl_attain_down.is_set
	|| dsl_attain_up.is_set
	|| dsl_max_delay_down.is_set
	|| dsl_max_delay_up.is_set
	|| dsl_max_down.is_set
	|| dsl_max_up.is_set
	|| dsl_min_down.is_set
	|| dsl_min_down_low.is_set
	|| dsl_min_up.is_set
	|| dsl_min_up_low.is_set
	|| host_uniq.is_set
	|| is_iwf.is_set
	|| max_payload.is_set
	|| relay_session_id.is_set
	|| remote_id.is_set
	|| service_name.is_set
	|| (access_loop_encapsulation !=  nullptr && access_loop_encapsulation->has_data());
}

bool Pppoe::Nodes::Node::Interfaces::Interface::Tags::has_operation() const
{
    return is_set(operation)
	|| is_set(circuit_id.operation)
	|| is_set(dsl_actual_delay_down.operation)
	|| is_set(dsl_actual_delay_up.operation)
	|| is_set(dsl_actual_down.operation)
	|| is_set(dsl_actual_up.operation)
	|| is_set(dsl_attain_down.operation)
	|| is_set(dsl_attain_up.operation)
	|| is_set(dsl_max_delay_down.operation)
	|| is_set(dsl_max_delay_up.operation)
	|| is_set(dsl_max_down.operation)
	|| is_set(dsl_max_up.operation)
	|| is_set(dsl_min_down.operation)
	|| is_set(dsl_min_down_low.operation)
	|| is_set(dsl_min_up.operation)
	|| is_set(dsl_min_up_low.operation)
	|| is_set(host_uniq.operation)
	|| is_set(is_iwf.operation)
	|| is_set(max_payload.operation)
	|| is_set(relay_session_id.operation)
	|| is_set(remote_id.operation)
	|| is_set(service_name.operation)
	|| (access_loop_encapsulation !=  nullptr && access_loop_encapsulation->has_operation());
}

std::string Pppoe::Nodes::Node::Interfaces::Interface::Tags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tags";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Interfaces::Interface::Tags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tags' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (dsl_actual_delay_down.is_set || is_set(dsl_actual_delay_down.operation)) leaf_name_data.push_back(dsl_actual_delay_down.get_name_leafdata());
    if (dsl_actual_delay_up.is_set || is_set(dsl_actual_delay_up.operation)) leaf_name_data.push_back(dsl_actual_delay_up.get_name_leafdata());
    if (dsl_actual_down.is_set || is_set(dsl_actual_down.operation)) leaf_name_data.push_back(dsl_actual_down.get_name_leafdata());
    if (dsl_actual_up.is_set || is_set(dsl_actual_up.operation)) leaf_name_data.push_back(dsl_actual_up.get_name_leafdata());
    if (dsl_attain_down.is_set || is_set(dsl_attain_down.operation)) leaf_name_data.push_back(dsl_attain_down.get_name_leafdata());
    if (dsl_attain_up.is_set || is_set(dsl_attain_up.operation)) leaf_name_data.push_back(dsl_attain_up.get_name_leafdata());
    if (dsl_max_delay_down.is_set || is_set(dsl_max_delay_down.operation)) leaf_name_data.push_back(dsl_max_delay_down.get_name_leafdata());
    if (dsl_max_delay_up.is_set || is_set(dsl_max_delay_up.operation)) leaf_name_data.push_back(dsl_max_delay_up.get_name_leafdata());
    if (dsl_max_down.is_set || is_set(dsl_max_down.operation)) leaf_name_data.push_back(dsl_max_down.get_name_leafdata());
    if (dsl_max_up.is_set || is_set(dsl_max_up.operation)) leaf_name_data.push_back(dsl_max_up.get_name_leafdata());
    if (dsl_min_down.is_set || is_set(dsl_min_down.operation)) leaf_name_data.push_back(dsl_min_down.get_name_leafdata());
    if (dsl_min_down_low.is_set || is_set(dsl_min_down_low.operation)) leaf_name_data.push_back(dsl_min_down_low.get_name_leafdata());
    if (dsl_min_up.is_set || is_set(dsl_min_up.operation)) leaf_name_data.push_back(dsl_min_up.get_name_leafdata());
    if (dsl_min_up_low.is_set || is_set(dsl_min_up_low.operation)) leaf_name_data.push_back(dsl_min_up_low.get_name_leafdata());
    if (host_uniq.is_set || is_set(host_uniq.operation)) leaf_name_data.push_back(host_uniq.get_name_leafdata());
    if (is_iwf.is_set || is_set(is_iwf.operation)) leaf_name_data.push_back(is_iwf.get_name_leafdata());
    if (max_payload.is_set || is_set(max_payload.operation)) leaf_name_data.push_back(max_payload.get_name_leafdata());
    if (relay_session_id.is_set || is_set(relay_session_id.operation)) leaf_name_data.push_back(relay_session_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.operation)) leaf_name_data.push_back(service_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Interfaces::Interface::Tags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-loop-encapsulation")
    {
        if(access_loop_encapsulation == nullptr)
        {
            access_loop_encapsulation = std::make_shared<Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation>();
        }
        return access_loop_encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Interfaces::Interface::Tags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_loop_encapsulation != nullptr)
    {
        children["access-loop-encapsulation"] = access_loop_encapsulation;
    }

    return children;
}

void Pppoe::Nodes::Node::Interfaces::Interface::Tags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "dsl-actual-delay-down")
    {
        dsl_actual_delay_down = value;
    }
    if(value_path == "dsl-actual-delay-up")
    {
        dsl_actual_delay_up = value;
    }
    if(value_path == "dsl-actual-down")
    {
        dsl_actual_down = value;
    }
    if(value_path == "dsl-actual-up")
    {
        dsl_actual_up = value;
    }
    if(value_path == "dsl-attain-down")
    {
        dsl_attain_down = value;
    }
    if(value_path == "dsl-attain-up")
    {
        dsl_attain_up = value;
    }
    if(value_path == "dsl-max-delay-down")
    {
        dsl_max_delay_down = value;
    }
    if(value_path == "dsl-max-delay-up")
    {
        dsl_max_delay_up = value;
    }
    if(value_path == "dsl-max-down")
    {
        dsl_max_down = value;
    }
    if(value_path == "dsl-max-up")
    {
        dsl_max_up = value;
    }
    if(value_path == "dsl-min-down")
    {
        dsl_min_down = value;
    }
    if(value_path == "dsl-min-down-low")
    {
        dsl_min_down_low = value;
    }
    if(value_path == "dsl-min-up")
    {
        dsl_min_up = value;
    }
    if(value_path == "dsl-min-up-low")
    {
        dsl_min_up_low = value;
    }
    if(value_path == "host-uniq")
    {
        host_uniq = value;
    }
    if(value_path == "is-iwf")
    {
        is_iwf = value;
    }
    if(value_path == "max-payload")
    {
        max_payload = value;
    }
    if(value_path == "relay-session-id")
    {
        relay_session_id = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
    if(value_path == "service-name")
    {
        service_name = value;
    }
}

Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::AccessLoopEncapsulation()
    :
    data_link{YType::uint8, "data-link"},
    encaps1{YType::uint8, "encaps1"},
    encaps2{YType::uint8, "encaps2"}
{
    yang_name = "access-loop-encapsulation"; yang_parent_name = "tags";
}

Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::~AccessLoopEncapsulation()
{
}

bool Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::has_data() const
{
    return data_link.is_set
	|| encaps1.is_set
	|| encaps2.is_set;
}

bool Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(data_link.operation)
	|| is_set(encaps1.operation)
	|| is_set(encaps2.operation);
}

std::string Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-loop-encapsulation";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessLoopEncapsulation' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_link.is_set || is_set(data_link.operation)) leaf_name_data.push_back(data_link.get_name_leafdata());
    if (encaps1.is_set || is_set(encaps1.operation)) leaf_name_data.push_back(encaps1.get_name_leafdata());
    if (encaps2.is_set || is_set(encaps2.operation)) leaf_name_data.push_back(encaps2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::Interfaces::Interface::Tags::AccessLoopEncapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-link")
    {
        data_link = value;
    }
    if(value_path == "encaps1")
    {
        encaps1 = value;
    }
    if(value_path == "encaps2")
    {
        encaps2 = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroups()
{
    yang_name = "bba-groups"; yang_parent_name = "node";
}

Pppoe::Nodes::Node::BbaGroups::~BbaGroups()
{
}

bool Pppoe::Nodes::Node::BbaGroups::has_data() const
{
    for (std::size_t index=0; index<bba_group.size(); index++)
    {
        if(bba_group[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::Node::BbaGroups::has_operation() const
{
    for (std::size_t index=0; index<bba_group.size(); index++)
    {
        if(bba_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bba-groups";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbaGroups' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bba-group")
    {
        for(auto const & c : bba_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup>();
        c->parent = this;
        bba_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bba_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pppoe::Nodes::Node::BbaGroups::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::BbaGroup()
    :
    bba_group_name{YType::str, "bba-group-name"}
    	,
    limit_config(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig>())
	,limits(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits>())
	,throttle_config(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig>())
	,throttles(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles>())
{
    limit_config->parent = this;

    limits->parent = this;

    throttle_config->parent = this;

    throttles->parent = this;

    yang_name = "bba-group"; yang_parent_name = "bba-groups";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::~BbaGroup()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::has_data() const
{
    return bba_group_name.is_set
	|| (limit_config !=  nullptr && limit_config->has_data())
	|| (limits !=  nullptr && limits->has_data())
	|| (throttle_config !=  nullptr && throttle_config->has_data())
	|| (throttles !=  nullptr && throttles->has_data());
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(bba_group_name.operation)
	|| (limit_config !=  nullptr && limit_config->has_operation())
	|| (limits !=  nullptr && limits->has_operation())
	|| (throttle_config !=  nullptr && throttle_config->has_operation())
	|| (throttles !=  nullptr && throttles->has_operation());
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bba-group" <<"[bba-group-name='" <<bba_group_name <<"']";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbaGroup' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bba_group_name.is_set || is_set(bba_group_name.operation)) leaf_name_data.push_back(bba_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit-config")
    {
        if(limit_config == nullptr)
        {
            limit_config = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig>();
        }
        return limit_config;
    }

    if(child_yang_name == "limits")
    {
        if(limits == nullptr)
        {
            limits = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits>();
        }
        return limits;
    }

    if(child_yang_name == "throttle-config")
    {
        if(throttle_config == nullptr)
        {
            throttle_config = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig>();
        }
        return throttle_config;
    }

    if(child_yang_name == "throttles")
    {
        if(throttles == nullptr)
        {
            throttles = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles>();
        }
        return throttles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit_config != nullptr)
    {
        children["limit-config"] = limit_config;
    }

    if(limits != nullptr)
    {
        children["limits"] = limits;
    }

    if(throttle_config != nullptr)
    {
        children["throttle-config"] = throttle_config;
    }

    if(throttles != nullptr)
    {
        children["throttles"] = throttles;
    }

    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bba-group-name")
    {
        bba_group_name = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::LimitConfig()
    :
    access_intf(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf>())
	,card(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card>())
	,circuit_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId>())
	,circuit_id_and_remote_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId>())
	,inner_vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId>())
	,mac(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac>())
	,mac_access_interface(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface>())
	,mac_iwf(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf>())
	,mac_iwf_access_interface(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface>())
	,outer_vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId>())
	,remote_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId>())
	,vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId>())
{
    access_intf->parent = this;

    card->parent = this;

    circuit_id->parent = this;

    circuit_id_and_remote_id->parent = this;

    inner_vlan_id->parent = this;

    mac->parent = this;

    mac_access_interface->parent = this;

    mac_iwf->parent = this;

    mac_iwf_access_interface->parent = this;

    outer_vlan_id->parent = this;

    remote_id->parent = this;

    vlan_id->parent = this;

    yang_name = "limit-config"; yang_parent_name = "bba-group";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::~LimitConfig()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::has_data() const
{
    return (access_intf !=  nullptr && access_intf->has_data())
	|| (card !=  nullptr && card->has_data())
	|| (circuit_id !=  nullptr && circuit_id->has_data())
	|| (circuit_id_and_remote_id !=  nullptr && circuit_id_and_remote_id->has_data())
	|| (inner_vlan_id !=  nullptr && inner_vlan_id->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (mac_access_interface !=  nullptr && mac_access_interface->has_data())
	|| (mac_iwf !=  nullptr && mac_iwf->has_data())
	|| (mac_iwf_access_interface !=  nullptr && mac_iwf_access_interface->has_data())
	|| (outer_vlan_id !=  nullptr && outer_vlan_id->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data())
	|| (vlan_id !=  nullptr && vlan_id->has_data());
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::has_operation() const
{
    return is_set(operation)
	|| (access_intf !=  nullptr && access_intf->has_operation())
	|| (card !=  nullptr && card->has_operation())
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (circuit_id_and_remote_id !=  nullptr && circuit_id_and_remote_id->has_operation())
	|| (inner_vlan_id !=  nullptr && inner_vlan_id->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (mac_access_interface !=  nullptr && mac_access_interface->has_operation())
	|| (mac_iwf !=  nullptr && mac_iwf->has_operation())
	|| (mac_iwf_access_interface !=  nullptr && mac_iwf_access_interface->has_operation())
	|| (outer_vlan_id !=  nullptr && outer_vlan_id->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation())
	|| (vlan_id !=  nullptr && vlan_id->has_operation());
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit-config";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LimitConfig' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-intf")
    {
        if(access_intf == nullptr)
        {
            access_intf = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf>();
        }
        return access_intf;
    }

    if(child_yang_name == "card")
    {
        if(card == nullptr)
        {
            card = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card>();
        }
        return card;
    }

    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId>();
        }
        return circuit_id;
    }

    if(child_yang_name == "circuit-id-and-remote-id")
    {
        if(circuit_id_and_remote_id == nullptr)
        {
            circuit_id_and_remote_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId>();
        }
        return circuit_id_and_remote_id;
    }

    if(child_yang_name == "inner-vlan-id")
    {
        if(inner_vlan_id == nullptr)
        {
            inner_vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId>();
        }
        return inner_vlan_id;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "mac-access-interface")
    {
        if(mac_access_interface == nullptr)
        {
            mac_access_interface = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface>();
        }
        return mac_access_interface;
    }

    if(child_yang_name == "mac-iwf")
    {
        if(mac_iwf == nullptr)
        {
            mac_iwf = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf>();
        }
        return mac_iwf;
    }

    if(child_yang_name == "mac-iwf-access-interface")
    {
        if(mac_iwf_access_interface == nullptr)
        {
            mac_iwf_access_interface = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface>();
        }
        return mac_iwf_access_interface;
    }

    if(child_yang_name == "outer-vlan-id")
    {
        if(outer_vlan_id == nullptr)
        {
            outer_vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId>();
        }
        return outer_vlan_id;
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId>();
        }
        return remote_id;
    }

    if(child_yang_name == "vlan-id")
    {
        if(vlan_id == nullptr)
        {
            vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId>();
        }
        return vlan_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_intf != nullptr)
    {
        children["access-intf"] = access_intf;
    }

    if(card != nullptr)
    {
        children["card"] = card;
    }

    if(circuit_id != nullptr)
    {
        children["circuit-id"] = circuit_id;
    }

    if(circuit_id_and_remote_id != nullptr)
    {
        children["circuit-id-and-remote-id"] = circuit_id_and_remote_id;
    }

    if(inner_vlan_id != nullptr)
    {
        children["inner-vlan-id"] = inner_vlan_id;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(mac_access_interface != nullptr)
    {
        children["mac-access-interface"] = mac_access_interface;
    }

    if(mac_iwf != nullptr)
    {
        children["mac-iwf"] = mac_iwf;
    }

    if(mac_iwf_access_interface != nullptr)
    {
        children["mac-iwf-access-interface"] = mac_iwf_access_interface;
    }

    if(outer_vlan_id != nullptr)
    {
        children["outer-vlan-id"] = outer_vlan_id;
    }

    if(remote_id != nullptr)
    {
        children["remote-id"] = remote_id;
    }

    if(vlan_id != nullptr)
    {
        children["vlan-id"] = vlan_id;
    }

    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::Card()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "card"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::~Card()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Card' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Card::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::AccessIntf()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "access-intf"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::~AccessIntf()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-intf";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessIntf' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::AccessIntf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::Mac()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "mac"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::~Mac()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::MacIwf()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "mac-iwf"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::~MacIwf()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacIwf' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::MacAccessInterface()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "mac-access-interface"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::~MacAccessInterface()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-access-interface";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAccessInterface' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacAccessInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::MacIwfAccessInterface()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "mac-iwf-access-interface"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::~MacIwfAccessInterface()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf-access-interface";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacIwfAccessInterface' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::MacIwfAccessInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::CircuitId()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "circuit-id"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::~CircuitId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::RemoteId()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "remote-id"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::~RemoteId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::RemoteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::CircuitIdAndRemoteId()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "circuit-id-and-remote-id"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::~CircuitIdAndRemoteId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-and-remote-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdAndRemoteId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::CircuitIdAndRemoteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::OuterVlanId()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "outer-vlan-id"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::~OuterVlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outer-vlan-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OuterVlanId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::OuterVlanId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::InnerVlanId()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "inner-vlan-id"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::~InnerVlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-vlan-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InnerVlanId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::InnerVlanId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::VlanId()
    :
    max_limit{YType::uint32, "max-limit"},
    radius_override_enabled{YType::int32, "radius-override-enabled"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "vlan-id"; yang_parent_name = "limit-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::~VlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::has_data() const
{
    return max_limit.is_set
	|| radius_override_enabled.is_set
	|| threshold.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(radius_override_enabled.operation)
	|| is_set(threshold.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (radius_override_enabled.is_set || is_set(radius_override_enabled.operation)) leaf_name_data.push_back(radius_override_enabled.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::LimitConfig::VlanId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "radius-override-enabled")
    {
        radius_override_enabled = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limits()
{
    yang_name = "limits"; yang_parent_name = "bba-group";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::~Limits()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::has_data() const
{
    for (std::size_t index=0; index<limit.size(); index++)
    {
        if(limit[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::has_operation() const
{
    for (std::size_t index=0; index<limit.size(); index++)
    {
        if(limit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limits";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limits' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        for(auto const & c : limit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit>();
        c->parent = this;
        limit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : limit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::Limit()
    :
    circuit_id{YType::str, "circuit-id"},
    inner_vlan_id{YType::uint32, "inner-vlan-id"},
    interface_name{YType::str, "interface-name"},
    iwf{YType::boolean, "iwf"},
    mac_address{YType::str, "mac-address"},
    outer_vlan_id{YType::uint32, "outer-vlan-id"},
    override_limit{YType::uint32, "override-limit"},
    radius_override_set{YType::int32, "radius-override-set"},
    remote_id{YType::str, "remote-id"},
    session_count{YType::uint32, "session-count"},
    state{YType::enumeration, "state"}
{
    yang_name = "limit"; yang_parent_name = "limits";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::~Limit()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::has_data() const
{
    return circuit_id.is_set
	|| inner_vlan_id.is_set
	|| interface_name.is_set
	|| iwf.is_set
	|| mac_address.is_set
	|| outer_vlan_id.is_set
	|| override_limit.is_set
	|| radius_override_set.is_set
	|| remote_id.is_set
	|| session_count.is_set
	|| state.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(circuit_id.operation)
	|| is_set(inner_vlan_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(iwf.operation)
	|| is_set(mac_address.operation)
	|| is_set(outer_vlan_id.operation)
	|| is_set(override_limit.operation)
	|| is_set(radius_override_set.operation)
	|| is_set(remote_id.operation)
	|| is_set(session_count.operation)
	|| is_set(state.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.operation)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (iwf.is_set || is_set(iwf.operation)) leaf_name_data.push_back(iwf.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.operation)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (override_limit.is_set || is_set(override_limit.operation)) leaf_name_data.push_back(override_limit.get_name_leafdata());
    if (radius_override_set.is_set || is_set(radius_override_set.operation)) leaf_name_data.push_back(radius_override_set.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Limits::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "iwf")
    {
        iwf = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
    }
    if(value_path == "override-limit")
    {
        override_limit = value;
    }
    if(value_path == "radius-override-set")
    {
        radius_override_set = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
    if(value_path == "session-count")
    {
        session_count = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttles()
{
    yang_name = "throttles"; yang_parent_name = "bba-group";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::~Throttles()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::has_data() const
{
    for (std::size_t index=0; index<throttle.size(); index++)
    {
        if(throttle[index]->has_data())
            return true;
    }
    return false;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::has_operation() const
{
    for (std::size_t index=0; index<throttle.size(); index++)
    {
        if(throttle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttles";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Throttles' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "throttle")
    {
        for(auto const & c : throttle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle>();
        c->parent = this;
        throttle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : throttle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::Throttle()
    :
    circuit_id{YType::str, "circuit-id"},
    inner_vlan_id{YType::uint32, "inner-vlan-id"},
    interface_name{YType::str, "interface-name"},
    iwf{YType::boolean, "iwf"},
    mac_address{YType::str, "mac-address"},
    outer_vlan_id{YType::uint32, "outer-vlan-id"},
    padi_count{YType::uint32, "padi-count"},
    padr_count{YType::uint32, "padr-count"},
    remote_id{YType::str, "remote-id"},
    since_reset{YType::uint32, "since-reset"},
    state{YType::enumeration, "state"},
    time_left{YType::uint32, "time-left"}
{
    yang_name = "throttle"; yang_parent_name = "throttles";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::~Throttle()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::has_data() const
{
    return circuit_id.is_set
	|| inner_vlan_id.is_set
	|| interface_name.is_set
	|| iwf.is_set
	|| mac_address.is_set
	|| outer_vlan_id.is_set
	|| padi_count.is_set
	|| padr_count.is_set
	|| remote_id.is_set
	|| since_reset.is_set
	|| state.is_set
	|| time_left.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::has_operation() const
{
    return is_set(operation)
	|| is_set(circuit_id.operation)
	|| is_set(inner_vlan_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(iwf.operation)
	|| is_set(mac_address.operation)
	|| is_set(outer_vlan_id.operation)
	|| is_set(padi_count.operation)
	|| is_set(padr_count.operation)
	|| is_set(remote_id.operation)
	|| is_set(since_reset.operation)
	|| is_set(state.operation)
	|| is_set(time_left.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Throttle' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (inner_vlan_id.is_set || is_set(inner_vlan_id.operation)) leaf_name_data.push_back(inner_vlan_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (iwf.is_set || is_set(iwf.operation)) leaf_name_data.push_back(iwf.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (outer_vlan_id.is_set || is_set(outer_vlan_id.operation)) leaf_name_data.push_back(outer_vlan_id.get_name_leafdata());
    if (padi_count.is_set || is_set(padi_count.operation)) leaf_name_data.push_back(padi_count.get_name_leafdata());
    if (padr_count.is_set || is_set(padr_count.operation)) leaf_name_data.push_back(padr_count.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (since_reset.is_set || is_set(since_reset.operation)) leaf_name_data.push_back(since_reset.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (time_left.is_set || is_set(time_left.operation)) leaf_name_data.push_back(time_left.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::Throttles::Throttle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "inner-vlan-id")
    {
        inner_vlan_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "iwf")
    {
        iwf = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "outer-vlan-id")
    {
        outer_vlan_id = value;
    }
    if(value_path == "padi-count")
    {
        padi_count = value;
    }
    if(value_path == "padr-count")
    {
        padr_count = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
    if(value_path == "since-reset")
    {
        since_reset = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "time-left")
    {
        time_left = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::ThrottleConfig()
    :
    circuit_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId>())
	,circuit_id_and_remote_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId>())
	,inner_vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId>())
	,mac(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac>())
	,mac_access_interface(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface>())
	,mac_iwf_access_interface(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface>())
	,outer_vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId>())
	,remote_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId>())
	,vlan_id(std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId>())
{
    circuit_id->parent = this;

    circuit_id_and_remote_id->parent = this;

    inner_vlan_id->parent = this;

    mac->parent = this;

    mac_access_interface->parent = this;

    mac_iwf_access_interface->parent = this;

    outer_vlan_id->parent = this;

    remote_id->parent = this;

    vlan_id->parent = this;

    yang_name = "throttle-config"; yang_parent_name = "bba-group";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::~ThrottleConfig()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::has_data() const
{
    return (circuit_id !=  nullptr && circuit_id->has_data())
	|| (circuit_id_and_remote_id !=  nullptr && circuit_id_and_remote_id->has_data())
	|| (inner_vlan_id !=  nullptr && inner_vlan_id->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (mac_access_interface !=  nullptr && mac_access_interface->has_data())
	|| (mac_iwf_access_interface !=  nullptr && mac_iwf_access_interface->has_data())
	|| (outer_vlan_id !=  nullptr && outer_vlan_id->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data())
	|| (vlan_id !=  nullptr && vlan_id->has_data());
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::has_operation() const
{
    return is_set(operation)
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (circuit_id_and_remote_id !=  nullptr && circuit_id_and_remote_id->has_operation())
	|| (inner_vlan_id !=  nullptr && inner_vlan_id->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (mac_access_interface !=  nullptr && mac_access_interface->has_operation())
	|| (mac_iwf_access_interface !=  nullptr && mac_iwf_access_interface->has_operation())
	|| (outer_vlan_id !=  nullptr && outer_vlan_id->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation())
	|| (vlan_id !=  nullptr && vlan_id->has_operation());
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle-config";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThrottleConfig' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId>();
        }
        return circuit_id;
    }

    if(child_yang_name == "circuit-id-and-remote-id")
    {
        if(circuit_id_and_remote_id == nullptr)
        {
            circuit_id_and_remote_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId>();
        }
        return circuit_id_and_remote_id;
    }

    if(child_yang_name == "inner-vlan-id")
    {
        if(inner_vlan_id == nullptr)
        {
            inner_vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId>();
        }
        return inner_vlan_id;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "mac-access-interface")
    {
        if(mac_access_interface == nullptr)
        {
            mac_access_interface = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface>();
        }
        return mac_access_interface;
    }

    if(child_yang_name == "mac-iwf-access-interface")
    {
        if(mac_iwf_access_interface == nullptr)
        {
            mac_iwf_access_interface = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface>();
        }
        return mac_iwf_access_interface;
    }

    if(child_yang_name == "outer-vlan-id")
    {
        if(outer_vlan_id == nullptr)
        {
            outer_vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId>();
        }
        return outer_vlan_id;
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId>();
        }
        return remote_id;
    }

    if(child_yang_name == "vlan-id")
    {
        if(vlan_id == nullptr)
        {
            vlan_id = std::make_shared<Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId>();
        }
        return vlan_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit_id != nullptr)
    {
        children["circuit-id"] = circuit_id;
    }

    if(circuit_id_and_remote_id != nullptr)
    {
        children["circuit-id-and-remote-id"] = circuit_id_and_remote_id;
    }

    if(inner_vlan_id != nullptr)
    {
        children["inner-vlan-id"] = inner_vlan_id;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(mac_access_interface != nullptr)
    {
        children["mac-access-interface"] = mac_access_interface;
    }

    if(mac_iwf_access_interface != nullptr)
    {
        children["mac-iwf-access-interface"] = mac_iwf_access_interface;
    }

    if(outer_vlan_id != nullptr)
    {
        children["outer-vlan-id"] = outer_vlan_id;
    }

    if(remote_id != nullptr)
    {
        children["remote-id"] = remote_id;
    }

    if(vlan_id != nullptr)
    {
        children["vlan-id"] = vlan_id;
    }

    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::set_value(const std::string & value_path, std::string value)
{
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::Mac()
    :
    blocking_period{YType::uint32, "blocking-period"},
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"}
{
    yang_name = "mac"; yang_parent_name = "throttle-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::~Mac()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::has_data() const
{
    return blocking_period.is_set
	|| limit.is_set
	|| request_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(limit.operation)
	|| is_set(request_period.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::MacAccessInterface()
    :
    blocking_period{YType::uint32, "blocking-period"},
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"}
{
    yang_name = "mac-access-interface"; yang_parent_name = "throttle-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::~MacAccessInterface()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::has_data() const
{
    return blocking_period.is_set
	|| limit.is_set
	|| request_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(limit.operation)
	|| is_set(request_period.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-access-interface";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAccessInterface' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacAccessInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::MacIwfAccessInterface()
    :
    blocking_period{YType::uint32, "blocking-period"},
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"}
{
    yang_name = "mac-iwf-access-interface"; yang_parent_name = "throttle-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::~MacIwfAccessInterface()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::has_data() const
{
    return blocking_period.is_set
	|| limit.is_set
	|| request_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(limit.operation)
	|| is_set(request_period.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-iwf-access-interface";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacIwfAccessInterface' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::MacIwfAccessInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::CircuitId()
    :
    blocking_period{YType::uint32, "blocking-period"},
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"}
{
    yang_name = "circuit-id"; yang_parent_name = "throttle-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::~CircuitId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::has_data() const
{
    return blocking_period.is_set
	|| limit.is_set
	|| request_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(limit.operation)
	|| is_set(request_period.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::RemoteId()
    :
    blocking_period{YType::uint32, "blocking-period"},
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"}
{
    yang_name = "remote-id"; yang_parent_name = "throttle-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::~RemoteId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::has_data() const
{
    return blocking_period.is_set
	|| limit.is_set
	|| request_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(limit.operation)
	|| is_set(request_period.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::RemoteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::CircuitIdAndRemoteId()
    :
    blocking_period{YType::uint32, "blocking-period"},
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"}
{
    yang_name = "circuit-id-and-remote-id"; yang_parent_name = "throttle-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::~CircuitIdAndRemoteId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::has_data() const
{
    return blocking_period.is_set
	|| limit.is_set
	|| request_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(limit.operation)
	|| is_set(request_period.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id-and-remote-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitIdAndRemoteId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::CircuitIdAndRemoteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::OuterVlanId()
    :
    blocking_period{YType::uint32, "blocking-period"},
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"}
{
    yang_name = "outer-vlan-id"; yang_parent_name = "throttle-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::~OuterVlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::has_data() const
{
    return blocking_period.is_set
	|| limit.is_set
	|| request_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(limit.operation)
	|| is_set(request_period.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outer-vlan-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OuterVlanId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::OuterVlanId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::InnerVlanId()
    :
    blocking_period{YType::uint32, "blocking-period"},
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"}
{
    yang_name = "inner-vlan-id"; yang_parent_name = "throttle-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::~InnerVlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::has_data() const
{
    return blocking_period.is_set
	|| limit.is_set
	|| request_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(limit.operation)
	|| is_set(request_period.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inner-vlan-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InnerVlanId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::InnerVlanId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::VlanId()
    :
    blocking_period{YType::uint32, "blocking-period"},
    limit{YType::uint32, "limit"},
    request_period{YType::uint32, "request-period"}
{
    yang_name = "vlan-id"; yang_parent_name = "throttle-config";
}

Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::~VlanId()
{
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::has_data() const
{
    return blocking_period.is_set
	|| limit.is_set
	|| request_period.is_set;
}

bool Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::has_operation() const
{
    return is_set(operation)
	|| is_set(blocking_period.operation)
	|| is_set(limit.operation)
	|| is_set(request_period.operation);
}

std::string Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanId' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocking_period.is_set || is_set(blocking_period.operation)) leaf_name_data.push_back(blocking_period.get_name_leafdata());
    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (request_period.is_set || is_set(request_period.operation)) leaf_name_data.push_back(request_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::BbaGroups::BbaGroup::ThrottleConfig::VlanId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocking-period")
    {
        blocking_period = value;
    }
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "request-period")
    {
        request_period = value;
    }
}

Pppoe::Nodes::Node::SummaryTotal::SummaryTotal()
    :
    complete_sessions{YType::uint32, "complete-sessions"},
    flow_control_disconnected_sessions{YType::uint64, "flow-control-disconnected-sessions"},
    flow_control_dropped_sessions{YType::uint64, "flow-control-dropped-sessions"},
    flow_control_in_flight_sessions{YType::uint32, "flow-control-in-flight-sessions"},
    flow_control_limit{YType::uint32, "flow-control-limit"},
    flow_control_successful_sessions{YType::uint64, "flow-control-successful-sessions"},
    incomplete_sessions{YType::uint32, "incomplete-sessions"},
    not_ready_access_interfaces{YType::uint32, "not-ready-access-interfaces"},
    pppoema_subscriber_infra_flow_control{YType::uint32, "pppoema-subscriber-infra-flow-control"},
    ready_access_interfaces{YType::uint32, "ready-access-interfaces"}
{
    yang_name = "summary-total"; yang_parent_name = "node";
}

Pppoe::Nodes::Node::SummaryTotal::~SummaryTotal()
{
}

bool Pppoe::Nodes::Node::SummaryTotal::has_data() const
{
    return complete_sessions.is_set
	|| flow_control_disconnected_sessions.is_set
	|| flow_control_dropped_sessions.is_set
	|| flow_control_in_flight_sessions.is_set
	|| flow_control_limit.is_set
	|| flow_control_successful_sessions.is_set
	|| incomplete_sessions.is_set
	|| not_ready_access_interfaces.is_set
	|| pppoema_subscriber_infra_flow_control.is_set
	|| ready_access_interfaces.is_set;
}

bool Pppoe::Nodes::Node::SummaryTotal::has_operation() const
{
    return is_set(operation)
	|| is_set(complete_sessions.operation)
	|| is_set(flow_control_disconnected_sessions.operation)
	|| is_set(flow_control_dropped_sessions.operation)
	|| is_set(flow_control_in_flight_sessions.operation)
	|| is_set(flow_control_limit.operation)
	|| is_set(flow_control_successful_sessions.operation)
	|| is_set(incomplete_sessions.operation)
	|| is_set(not_ready_access_interfaces.operation)
	|| is_set(pppoema_subscriber_infra_flow_control.operation)
	|| is_set(ready_access_interfaces.operation);
}

std::string Pppoe::Nodes::Node::SummaryTotal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-total";

    return path_buffer.str();

}

const EntityPath Pppoe::Nodes::Node::SummaryTotal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryTotal' in Cisco_IOS_XR_subscriber_pppoe_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete_sessions.is_set || is_set(complete_sessions.operation)) leaf_name_data.push_back(complete_sessions.get_name_leafdata());
    if (flow_control_disconnected_sessions.is_set || is_set(flow_control_disconnected_sessions.operation)) leaf_name_data.push_back(flow_control_disconnected_sessions.get_name_leafdata());
    if (flow_control_dropped_sessions.is_set || is_set(flow_control_dropped_sessions.operation)) leaf_name_data.push_back(flow_control_dropped_sessions.get_name_leafdata());
    if (flow_control_in_flight_sessions.is_set || is_set(flow_control_in_flight_sessions.operation)) leaf_name_data.push_back(flow_control_in_flight_sessions.get_name_leafdata());
    if (flow_control_limit.is_set || is_set(flow_control_limit.operation)) leaf_name_data.push_back(flow_control_limit.get_name_leafdata());
    if (flow_control_successful_sessions.is_set || is_set(flow_control_successful_sessions.operation)) leaf_name_data.push_back(flow_control_successful_sessions.get_name_leafdata());
    if (incomplete_sessions.is_set || is_set(incomplete_sessions.operation)) leaf_name_data.push_back(incomplete_sessions.get_name_leafdata());
    if (not_ready_access_interfaces.is_set || is_set(not_ready_access_interfaces.operation)) leaf_name_data.push_back(not_ready_access_interfaces.get_name_leafdata());
    if (pppoema_subscriber_infra_flow_control.is_set || is_set(pppoema_subscriber_infra_flow_control.operation)) leaf_name_data.push_back(pppoema_subscriber_infra_flow_control.get_name_leafdata());
    if (ready_access_interfaces.is_set || is_set(ready_access_interfaces.operation)) leaf_name_data.push_back(ready_access_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppoe::Nodes::Node::SummaryTotal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pppoe::Nodes::Node::SummaryTotal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pppoe::Nodes::Node::SummaryTotal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "complete-sessions")
    {
        complete_sessions = value;
    }
    if(value_path == "flow-control-disconnected-sessions")
    {
        flow_control_disconnected_sessions = value;
    }
    if(value_path == "flow-control-dropped-sessions")
    {
        flow_control_dropped_sessions = value;
    }
    if(value_path == "flow-control-in-flight-sessions")
    {
        flow_control_in_flight_sessions = value;
    }
    if(value_path == "flow-control-limit")
    {
        flow_control_limit = value;
    }
    if(value_path == "flow-control-successful-sessions")
    {
        flow_control_successful_sessions = value;
    }
    if(value_path == "incomplete-sessions")
    {
        incomplete_sessions = value;
    }
    if(value_path == "not-ready-access-interfaces")
    {
        not_ready_access_interfaces = value;
    }
    if(value_path == "pppoema-subscriber-infra-flow-control")
    {
        pppoema_subscriber_infra_flow_control = value;
    }
    if(value_path == "ready-access-interfaces")
    {
        ready_access_interfaces = value;
    }
}

const Enum::YLeaf PppoeMaThrottleStateEnum::idle {0, "idle"};
const Enum::YLeaf PppoeMaThrottleStateEnum::monitor {1, "monitor"};
const Enum::YLeaf PppoeMaThrottleStateEnum::block {2, "block"};

const Enum::YLeaf PppoeMaLimitStateEnum::ok {0, "ok"};
const Enum::YLeaf PppoeMaLimitStateEnum::warning {1, "warning"};
const Enum::YLeaf PppoeMaLimitStateEnum::block {2, "block"};

const Enum::YLeaf PppoeMaSessionIdbSrgStateEnum::none {0, "none"};
const Enum::YLeaf PppoeMaSessionIdbSrgStateEnum::active {1, "active"};
const Enum::YLeaf PppoeMaSessionIdbSrgStateEnum::standby {2, "standby"};


}
}

