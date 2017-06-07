
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_1.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"},
    if_stat{YType::uint32, "if-stat"},
    madj_intf{YType::boolean, "madj-intf"}
{
    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry";
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    for (auto const & leaf : if_stat.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return area_id.is_set
	|| area_id_str.is_set
	|| madj_intf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (auto const & leaf : if_stat.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(area_id_str.operation)
	|| is_set(if_stat.operation)
	|| is_set(madj_intf.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfEntry' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.operation)) leaf_name_data.push_back(area_id_str.get_name_leafdata());
    if (madj_intf.is_set || is_set(madj_intf.operation)) leaf_name_data.push_back(madj_intf.get_name_leafdata());

    auto if_stat_name_datas = if_stat.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), if_stat_name_datas.begin(), if_stat_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
    }
    if(value_path == "if-stat")
    {
        if_stat.append(value);
    }
    if(value_path == "madj-intf")
    {
        madj_intf = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::AdjacencyInformation()
    :
    neighbor_details(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails>())
	,neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors>())
	,requests(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests>())
	,retransmissions(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions>())
{
    neighbor_details->parent = this;

    neighbors->parent = this;

    requests->parent = this;

    retransmissions->parent = this;

    yang_name = "adjacency-information"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::~AdjacencyInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::has_data() const
{
    return (neighbor_details !=  nullptr && neighbor_details->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (requests !=  nullptr && requests->has_data())
	|| (retransmissions !=  nullptr && retransmissions->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::has_operation() const
{
    return is_set(operation)
	|| (neighbor_details !=  nullptr && neighbor_details->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (requests !=  nullptr && requests->has_operation())
	|| (retransmissions !=  nullptr && retransmissions->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-details")
    {
        if(neighbor_details == nullptr)
        {
            neighbor_details = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails>();
        }
        return neighbor_details;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "retransmissions")
    {
        if(retransmissions == nullptr)
        {
            retransmissions = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions>();
        }
        return retransmissions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_details != nullptr)
    {
        children["neighbor-details"] = neighbor_details;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(requests != nullptr)
    {
        children["requests"] = requests;
    }

    if(retransmissions != nullptr)
    {
        children["retransmissions"] = retransmissions;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "adjacency-information";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::Neighbor()
    :
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::has_data() const
{
    return dr_bdr_state.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_id.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_madj_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(dr_bdr_state.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_address_xr.operation)
	|| is_set(neighbor_dead_timer.operation)
	|| is_set(neighbor_dr_priority.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_interface_name.operation)
	|| is_set(neighbor_madj_interface.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(neighbor_up_time.operation)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.operation)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.operation)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.operation)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.operation)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.operation)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.operation)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.operation)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.operation)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Requests()
{
    yang_name = "requests"; yang_parent_name = "adjacency-information";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::~Requests()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Requests' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    request_interface_name{YType::str, "request-interface-name"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_neighbor_id{YType::str, "request-neighbor-id"}
{
    yang_name = "request"; yang_parent_name = "requests";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::~Request()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| request_interface_name.is_set
	|| request_neighbor_address.is_set
	|| request_neighbor_id.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(request_interface_name.operation)
	|| is_set(request_neighbor_address.operation)
	|| is_set(request_neighbor_id.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (request_interface_name.is_set || is_set(request_interface_name.operation)) leaf_name_data.push_back(request_interface_name.get_name_leafdata());
    if (request_neighbor_address.is_set || is_set(request_neighbor_address.operation)) leaf_name_data.push_back(request_neighbor_address.get_name_leafdata());
    if (request_neighbor_id.is_set || is_set(request_neighbor_id.operation)) leaf_name_data.push_back(request_neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : request)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name = value;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address = value;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::Request_()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "request"; yang_parent_name = "request";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::~Request_()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request_' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmissions()
{
    yang_name = "retransmissions"; yang_parent_name = "adjacency-information";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::~Retransmissions()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissions";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmissions' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission")
    {
        for(auto const & c : retransmission)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission>();
        c->parent = this;
        retransmission.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : retransmission)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_count{YType::uint32, "retransmission-count"},
    retransmission_interface_name{YType::str, "retransmission-interface-name"},
    retransmission_neighbor_id{YType::str, "retransmission-neighbor-id"},
    retransmission_neighbor_ip_address{YType::str, "retransmission-neighbor-ip-address"},
    retransmission_timer{YType::uint32, "retransmission-timer"}
{
    yang_name = "retransmission"; yang_parent_name = "retransmissions";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::~Retransmission()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::has_data() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| retransmission_count.is_set
	|| retransmission_interface_name.is_set
	|| retransmission_neighbor_id.is_set
	|| retransmission_neighbor_ip_address.is_set
	|| retransmission_timer.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::has_operation() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(retransmission_count.operation)
	|| is_set(retransmission_interface_name.operation)
	|| is_set(retransmission_neighbor_id.operation)
	|| is_set(retransmission_neighbor_ip_address.operation)
	|| is_set(retransmission_timer.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmission' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_count.is_set || is_set(retransmission_count.operation)) leaf_name_data.push_back(retransmission_count.get_name_leafdata());
    if (retransmission_interface_name.is_set || is_set(retransmission_interface_name.operation)) leaf_name_data.push_back(retransmission_interface_name.get_name_leafdata());
    if (retransmission_neighbor_id.is_set || is_set(retransmission_neighbor_id.operation)) leaf_name_data.push_back(retransmission_neighbor_id.get_name_leafdata());
    if (retransmission_neighbor_ip_address.is_set || is_set(retransmission_neighbor_ip_address.operation)) leaf_name_data.push_back(retransmission_neighbor_ip_address.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.operation)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission-area-db")
    {
        for(auto const & c : retransmission_area_db)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb>();
        c->parent = this;
        retransmission_area_db.push_back(c);
        return c;
    }

    if(child_yang_name == "retransmission-asdb")
    {
        for(auto const & c : retransmission_asdb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : retransmission_area_db)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : retransmission_asdb)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count = value;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name = value;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id = value;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address = value;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionAreaDb' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_ls_id{YType::str, "header-ls-id"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::uint32, "header-sequence-number"}
{
    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_advertising_router.is_set
	|| header_ls_id.is_set
	|| header_lsa_age.is_set
	|| header_lsa_checksum.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_ls_id.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_checksum.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionAsdb' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.operation)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.operation)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
    }
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetails()
{
    yang_name = "neighbor-details"; yang_parent_name = "adjacency-information";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::~NeighborDetails()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-details";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetails' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-detail")
    {
        for(auto const & c : neighbor_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborDetail()
    :
    adjacency_sid_label{YType::uint32, "adjacency-sid-label"},
    adjacency_sid_protected{YType::boolean, "adjacency-sid-protected"},
    adjacency_sid_unprotected_label{YType::uint32, "adjacency-sid-unprotected-label"},
    interface_name{YType::str, "interface-name"},
    interface_type{YType::enumeration, "interface-type"},
    last_oob_time{YType::uint32, "last-oob-time"},
    lfa_interface{YType::str, "lfa-interface"},
    lfa_neighbor_id{YType::str, "lfa-neighbor-id"},
    lfa_neighbor_revision{YType::uint32, "lfa-neighbor-revision"},
    lfa_next_hop{YType::str, "lfa-next-hop"},
    neighbor_ack_list_count{YType::uint32, "neighbor-ack-list-count"},
    neighbor_ack_list_high_watermark{YType::uint32, "neighbor-ack-list-high-watermark"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_area_id{YType::str, "neighbor-area-id"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_filter{YType::boolean, "neighbor-filter"},
    neighbor_lls_option{YType::uint16, "neighbor-lls-option"},
    neighbor_option{YType::uint8, "neighbor-option"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    nsf_router_state{YType::enumeration, "nsf-router-state"},
    oob_resynchronization{YType::boolean, "oob-resynchronization"},
    pending_events{YType::uint16, "pending-events"},
    poll_interval{YType::uint32, "poll-interval"},
    state_change_count{YType::uint16, "state-change-count"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>())
	,neighbor_retransmission_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>())
	,neighbor_summary(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>())
{
    neighbor_bfd_information->parent = this;

    neighbor_retransmission_information->parent = this;

    neighbor_summary->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-details";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::~NeighborDetail()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_data() const
{
    return adjacency_sid_label.is_set
	|| adjacency_sid_protected.is_set
	|| adjacency_sid_unprotected_label.is_set
	|| interface_name.is_set
	|| interface_type.is_set
	|| last_oob_time.is_set
	|| lfa_interface.is_set
	|| lfa_neighbor_id.is_set
	|| lfa_neighbor_revision.is_set
	|| lfa_next_hop.is_set
	|| neighbor_ack_list_count.is_set
	|| neighbor_ack_list_high_watermark.is_set
	|| neighbor_address.is_set
	|| neighbor_area_id.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| neighbor_cost.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_filter.is_set
	|| neighbor_lls_option.is_set
	|| neighbor_option.is_set
	|| next_poll_interval.is_set
	|| nsf_router_state.is_set
	|| oob_resynchronization.is_set
	|| pending_events.is_set
	|| poll_interval.is_set
	|| state_change_count.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_data())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_sid_label.operation)
	|| is_set(adjacency_sid_protected.operation)
	|| is_set(adjacency_sid_unprotected_label.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_type.operation)
	|| is_set(last_oob_time.operation)
	|| is_set(lfa_interface.operation)
	|| is_set(lfa_neighbor_id.operation)
	|| is_set(lfa_neighbor_revision.operation)
	|| is_set(lfa_next_hop.operation)
	|| is_set(neighbor_ack_list_count.operation)
	|| is_set(neighbor_ack_list_high_watermark.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_area_id.operation)
	|| is_set(neighbor_backup_designated_router_address.operation)
	|| is_set(neighbor_cost.operation)
	|| is_set(neighbor_designated_router_address.operation)
	|| is_set(neighbor_filter.operation)
	|| is_set(neighbor_lls_option.operation)
	|| is_set(neighbor_option.operation)
	|| is_set(next_poll_interval.operation)
	|| is_set(nsf_router_state.operation)
	|| is_set(oob_resynchronization.operation)
	|| is_set(pending_events.operation)
	|| is_set(poll_interval.operation)
	|| is_set(state_change_count.operation)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_operation())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetail' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid_label.is_set || is_set(adjacency_sid_label.operation)) leaf_name_data.push_back(adjacency_sid_label.get_name_leafdata());
    if (adjacency_sid_protected.is_set || is_set(adjacency_sid_protected.operation)) leaf_name_data.push_back(adjacency_sid_protected.get_name_leafdata());
    if (adjacency_sid_unprotected_label.is_set || is_set(adjacency_sid_unprotected_label.operation)) leaf_name_data.push_back(adjacency_sid_unprotected_label.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (last_oob_time.is_set || is_set(last_oob_time.operation)) leaf_name_data.push_back(last_oob_time.get_name_leafdata());
    if (lfa_interface.is_set || is_set(lfa_interface.operation)) leaf_name_data.push_back(lfa_interface.get_name_leafdata());
    if (lfa_neighbor_id.is_set || is_set(lfa_neighbor_id.operation)) leaf_name_data.push_back(lfa_neighbor_id.get_name_leafdata());
    if (lfa_neighbor_revision.is_set || is_set(lfa_neighbor_revision.operation)) leaf_name_data.push_back(lfa_neighbor_revision.get_name_leafdata());
    if (lfa_next_hop.is_set || is_set(lfa_next_hop.operation)) leaf_name_data.push_back(lfa_next_hop.get_name_leafdata());
    if (neighbor_ack_list_count.is_set || is_set(neighbor_ack_list_count.operation)) leaf_name_data.push_back(neighbor_ack_list_count.get_name_leafdata());
    if (neighbor_ack_list_high_watermark.is_set || is_set(neighbor_ack_list_high_watermark.operation)) leaf_name_data.push_back(neighbor_ack_list_high_watermark.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_area_id.is_set || is_set(neighbor_area_id.operation)) leaf_name_data.push_back(neighbor_area_id.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.operation)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.operation)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.operation)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.operation)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (neighbor_lls_option.is_set || is_set(neighbor_lls_option.operation)) leaf_name_data.push_back(neighbor_lls_option.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.operation)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.operation)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (nsf_router_state.is_set || is_set(nsf_router_state.operation)) leaf_name_data.push_back(nsf_router_state.get_name_leafdata());
    if (oob_resynchronization.is_set || is_set(oob_resynchronization.operation)) leaf_name_data.push_back(oob_resynchronization.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.operation)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.operation)) leaf_name_data.push_back(state_change_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    if(child_yang_name == "neighbor-retransmission-information")
    {
        if(neighbor_retransmission_information == nullptr)
        {
            neighbor_retransmission_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>();
        }
        return neighbor_retransmission_information;
    }

    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary == nullptr)
        {
            neighbor_summary = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>();
        }
        return neighbor_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    if(neighbor_retransmission_information != nullptr)
    {
        children["neighbor-retransmission-information"] = neighbor_retransmission_information;
    }

    if(neighbor_summary != nullptr)
    {
        children["neighbor-summary"] = neighbor_summary;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label = value;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected = value;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time = value;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface = value;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id = value;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision = value;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop = value;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count = value;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id = value;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option = value;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state = value;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization = value;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborSummary()
    :
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-detail";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::~NeighborSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_data() const
{
    return dr_bdr_state.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_id.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_madj_interface.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(dr_bdr_state.operation)
	|| is_set(neighbor_address_xr.operation)
	|| is_set(neighbor_dead_timer.operation)
	|| is_set(neighbor_dr_priority.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(neighbor_interface_name.operation)
	|| is_set(neighbor_madj_interface.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(neighbor_up_time.operation)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSummary' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_bdr_state.is_set || is_set(dr_bdr_state.operation)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.operation)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.operation)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.operation)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.operation)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.operation)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.operation)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-summary";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.operation)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-detail";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.operation)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::NeighborRetransmissionInformation()
    :
    area_first_flood_information{YType::uint32, "area-first-flood-information"},
    area_first_flood_information_index{YType::uint32, "area-first-flood-information-index"},
    area_flooding_index{YType::uint32, "area-flooding-index"},
    area_next_flood_information{YType::uint32, "area-next-flood-information"},
    area_next_flood_information_index{YType::uint32, "area-next-flood-information-index"},
    as_first_flood_information{YType::uint32, "as-first-flood-information"},
    as_first_flood_information_index{YType::uint32, "as-first-flood-information-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    as_next_flood_information{YType::uint32, "as-next-flood-information"},
    as_next_flood_information_index{YType::uint32, "as-next-flood-information-index"},
    dbd_retransmission_count{YType::uint32, "dbd-retransmission-count"},
    dbd_retransmission_total_count{YType::uint32, "dbd-retransmission-total-count"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    neighbor_retransmission_count{YType::uint32, "neighbor-retransmission-count"},
    number_of_retransmissions{YType::uint32, "number-of-retransmissions"}
{
    yang_name = "neighbor-retransmission-information"; yang_parent_name = "neighbor-detail";
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::~NeighborRetransmissionInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_data() const
{
    return area_first_flood_information.is_set
	|| area_first_flood_information_index.is_set
	|| area_flooding_index.is_set
	|| area_next_flood_information.is_set
	|| area_next_flood_information_index.is_set
	|| as_first_flood_information.is_set
	|| as_first_flood_information_index.is_set
	|| as_flood_index.is_set
	|| as_next_flood_information.is_set
	|| as_next_flood_information_index.is_set
	|| dbd_retransmission_count.is_set
	|| dbd_retransmission_total_count.is_set
	|| last_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set
	|| maximum_retransmission_length.is_set
	|| maximum_retransmission_time.is_set
	|| neighbor_retransmission_count.is_set
	|| number_of_retransmissions.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(area_first_flood_information.operation)
	|| is_set(area_first_flood_information_index.operation)
	|| is_set(area_flooding_index.operation)
	|| is_set(area_next_flood_information.operation)
	|| is_set(area_next_flood_information_index.operation)
	|| is_set(as_first_flood_information.operation)
	|| is_set(as_first_flood_information_index.operation)
	|| is_set(as_flood_index.operation)
	|| is_set(as_next_flood_information.operation)
	|| is_set(as_next_flood_information_index.operation)
	|| is_set(dbd_retransmission_count.operation)
	|| is_set(dbd_retransmission_total_count.operation)
	|| is_set(last_retransmission_length.operation)
	|| is_set(last_retransmission_time.operation)
	|| is_set(lsa_retransmission_timer.operation)
	|| is_set(maximum_retransmission_length.operation)
	|| is_set(maximum_retransmission_time.operation)
	|| is_set(neighbor_retransmission_count.operation)
	|| is_set(number_of_retransmissions.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborRetransmissionInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood_information.is_set || is_set(area_first_flood_information.operation)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.operation)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.operation)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.operation)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.operation)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.operation)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.operation)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.operation)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.operation)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.operation)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.operation)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.operation)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.operation)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.operation)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.operation)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.operation)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.operation)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.operation)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.operation)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information = value;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index = value;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information = value;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index = value;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information = value;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index = value;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information = value;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index = value;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count = value;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count = value;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count = value;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteInformation()
    :
    backup_routes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes>())
	,connected_routes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes>())
	,external_routes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes>())
	,local_routes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes>())
	,multicast_intact_backup_routes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes>())
	,multicast_intact_route_table(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable>())
	,route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas>())
	,route_table(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable>())
	,summary_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation>())
{
    backup_routes->parent = this;

    connected_routes->parent = this;

    external_routes->parent = this;

    local_routes->parent = this;

    multicast_intact_backup_routes->parent = this;

    multicast_intact_route_table->parent = this;

    route_areas->parent = this;

    route_table->parent = this;

    summary_information->parent = this;

    yang_name = "route-information"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::~RouteInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::has_data() const
{
    return (backup_routes !=  nullptr && backup_routes->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (external_routes !=  nullptr && external_routes->has_data())
	|| (local_routes !=  nullptr && local_routes->has_data())
	|| (multicast_intact_backup_routes !=  nullptr && multicast_intact_backup_routes->has_data())
	|| (multicast_intact_route_table !=  nullptr && multicast_intact_route_table->has_data())
	|| (route_areas !=  nullptr && route_areas->has_data())
	|| (route_table !=  nullptr && route_table->has_data())
	|| (summary_information !=  nullptr && summary_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::has_operation() const
{
    return is_set(operation)
	|| (backup_routes !=  nullptr && backup_routes->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (external_routes !=  nullptr && external_routes->has_operation())
	|| (local_routes !=  nullptr && local_routes->has_operation())
	|| (multicast_intact_backup_routes !=  nullptr && multicast_intact_backup_routes->has_operation())
	|| (multicast_intact_route_table !=  nullptr && multicast_intact_route_table->has_operation())
	|| (route_areas !=  nullptr && route_areas->has_operation())
	|| (route_table !=  nullptr && route_table->has_operation())
	|| (summary_information !=  nullptr && summary_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-routes")
    {
        if(backup_routes == nullptr)
        {
            backup_routes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes>();
        }
        return backup_routes;
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes == nullptr)
        {
            connected_routes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes>();
        }
        return connected_routes;
    }

    if(child_yang_name == "external-routes")
    {
        if(external_routes == nullptr)
        {
            external_routes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes>();
        }
        return external_routes;
    }

    if(child_yang_name == "local-routes")
    {
        if(local_routes == nullptr)
        {
            local_routes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes>();
        }
        return local_routes;
    }

    if(child_yang_name == "multicast-intact-backup-routes")
    {
        if(multicast_intact_backup_routes == nullptr)
        {
            multicast_intact_backup_routes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes>();
        }
        return multicast_intact_backup_routes;
    }

    if(child_yang_name == "multicast-intact-route-table")
    {
        if(multicast_intact_route_table == nullptr)
        {
            multicast_intact_route_table = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable>();
        }
        return multicast_intact_route_table;
    }

    if(child_yang_name == "route-areas")
    {
        if(route_areas == nullptr)
        {
            route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas>();
        }
        return route_areas;
    }

    if(child_yang_name == "route-table")
    {
        if(route_table == nullptr)
        {
            route_table = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable>();
        }
        return route_table;
    }

    if(child_yang_name == "summary-information")
    {
        if(summary_information == nullptr)
        {
            summary_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation>();
        }
        return summary_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_routes != nullptr)
    {
        children["backup-routes"] = backup_routes;
    }

    if(connected_routes != nullptr)
    {
        children["connected-routes"] = connected_routes;
    }

    if(external_routes != nullptr)
    {
        children["external-routes"] = external_routes;
    }

    if(local_routes != nullptr)
    {
        children["local-routes"] = local_routes;
    }

    if(multicast_intact_backup_routes != nullptr)
    {
        children["multicast-intact-backup-routes"] = multicast_intact_backup_routes;
    }

    if(multicast_intact_route_table != nullptr)
    {
        children["multicast-intact-route-table"] = multicast_intact_route_table;
    }

    if(route_areas != nullptr)
    {
        children["route-areas"] = route_areas;
    }

    if(route_table != nullptr)
    {
        children["route-table"] = route_table;
    }

    if(summary_information != nullptr)
    {
        children["summary-information"] = summary_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoutes()
{
    yang_name = "backup-routes"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::~BackupRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::has_data() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-routes";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRoutes' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route")
    {
        for(auto const & c : backup_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute>();
        c->parent = this;
        backup_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::BackupRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "backup-route"; yang_parent_name = "backup-routes";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::~BackupRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRoute' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "backup-route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;

    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "backup-route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_id.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.operation)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{
    yang_name = "route-backup-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backup_metric.operation)
	|| is_set(backup_remote_lfa.operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(backup_route_interface_name.operation)
	|| is_set(backup_route_next_hop_address.operation)
	|| is_set(backup_route_source.operation)
	|| is_set(backup_tunnel_interface_name.operation)
	|| is_set(downstream.operation)
	|| is_set(line_card_disjoint.operation)
	|| is_set(node_protect.operation)
	|| is_set(primary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteBackupPath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.operation)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.operation)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.operation)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.operation)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.operation)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.operation)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.operation)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.operation)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
    }
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "route-backup-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::MulticastIntactRouteTable()
{
    yang_name = "multicast-intact-route-table"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::~MulticastIntactRouteTable()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-table";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactRouteTable' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route"; yang_parent_name = "multicast-intact-route-table";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::~Route()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoutes()
{
    yang_name = "multicast-intact-backup-routes"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::~MulticastIntactBackupRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-routes";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactBackupRoutes' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route")
    {
        for(auto const & c : multicast_intact_backup_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute>();
        c->parent = this;
        multicast_intact_backup_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_intact_backup_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::MulticastIntactBackupRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-backup-route"; yang_parent_name = "multicast-intact-backup-routes";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::~MulticastIntactBackupRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactBackupRoute' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;

    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_id.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.operation)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{
    yang_name = "route-backup-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backup_metric.operation)
	|| is_set(backup_remote_lfa.operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(backup_route_interface_name.operation)
	|| is_set(backup_route_next_hop_address.operation)
	|| is_set(backup_route_source.operation)
	|| is_set(backup_tunnel_interface_name.operation)
	|| is_set(downstream.operation)
	|| is_set(line_card_disjoint.operation)
	|| is_set(node_protect.operation)
	|| is_set(primary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteBackupPath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.operation)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.operation)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.operation)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.operation)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.operation)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.operation)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.operation)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.operation)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
    }
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "route-backup-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::SummaryInformation()
    :
    failure_address{YType::str, "failure-address"},
    failures{YType::uint32, "failures"}
    	,
    common(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common>())
	,failure_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime>())
{
    common->parent = this;

    failure_time->parent = this;

    yang_name = "summary-information"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::~SummaryInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::has_data() const
{
    return failure_address.is_set
	|| failures.is_set
	|| (common !=  nullptr && common->has_data())
	|| (failure_time !=  nullptr && failure_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(failure_address.operation)
	|| is_set(failures.operation)
	|| (common !=  nullptr && common->has_operation())
	|| (failure_time !=  nullptr && failure_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_address.is_set || is_set(failure_address.operation)) leaf_name_data.push_back(failure_address.get_name_leafdata());
    if (failures.is_set || is_set(failures.operation)) leaf_name_data.push_back(failures.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common>();
        }
        return common;
    }

    if(child_yang_name == "failure-time")
    {
        if(failure_time == nullptr)
        {
            failure_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime>();
        }
        return failure_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common != nullptr)
    {
        children["common"] = common;
    }

    if(failure_time != nullptr)
    {
        children["failure-time"] = failure_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure-address")
    {
        failure_address = value;
    }
    if(value_path == "failures")
    {
        failures = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::FailureTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "failure-time"; yang_parent_name = "summary-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::~FailureTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FailureTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::Common()
    :
    external_nssa_type1s{YType::uint32, "external-nssa-type1s"},
    external_nssa_type2s{YType::uint32, "external-nssa-type2s"},
    external_type1s{YType::uint32, "external-type1s"},
    external_type2s{YType::uint32, "external-type2s"},
    inter_areas{YType::uint32, "inter-areas"},
    intra_areas{YType::uint32, "intra-areas"},
    total{YType::uint32, "total"}
{
    yang_name = "common"; yang_parent_name = "summary-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::~Common()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::has_data() const
{
    return external_nssa_type1s.is_set
	|| external_nssa_type2s.is_set
	|| external_type1s.is_set
	|| external_type2s.is_set
	|| inter_areas.is_set
	|| intra_areas.is_set
	|| total.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(external_nssa_type1s.operation)
	|| is_set(external_nssa_type2s.operation)
	|| is_set(external_type1s.operation)
	|| is_set(external_type2s.operation)
	|| is_set(inter_areas.operation)
	|| is_set(intra_areas.operation)
	|| is_set(total.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Common' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_nssa_type1s.is_set || is_set(external_nssa_type1s.operation)) leaf_name_data.push_back(external_nssa_type1s.get_name_leafdata());
    if (external_nssa_type2s.is_set || is_set(external_nssa_type2s.operation)) leaf_name_data.push_back(external_nssa_type2s.get_name_leafdata());
    if (external_type1s.is_set || is_set(external_type1s.operation)) leaf_name_data.push_back(external_type1s.get_name_leafdata());
    if (external_type2s.is_set || is_set(external_type2s.operation)) leaf_name_data.push_back(external_type2s.get_name_leafdata());
    if (inter_areas.is_set || is_set(inter_areas.operation)) leaf_name_data.push_back(inter_areas.get_name_leafdata());
    if (intra_areas.is_set || is_set(intra_areas.operation)) leaf_name_data.push_back(intra_areas.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s = value;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s = value;
    }
    if(value_path == "external-type1s")
    {
        external_type1s = value;
    }
    if(value_path == "external-type2s")
    {
        external_type2s = value;
    }
    if(value_path == "inter-areas")
    {
        inter_areas = value;
    }
    if(value_path == "intra-areas")
    {
        intra_areas = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoutes()
{
    yang_name = "connected-routes"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::has_data() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::has_operation() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRoutes' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-route")
    {
        for(auto const & c : connected_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute>();
        c->parent = this;
        connected_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : connected_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::ConnectedRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "connected-route"; yang_parent_name = "connected-routes";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::~ConnectedRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRoute' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "connected-route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "connected-route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoutes()
{
    yang_name = "local-routes"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::~LocalRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::has_data() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::has_operation() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-routes";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalRoutes' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-route")
    {
        for(auto const & c : local_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute>();
        c->parent = this;
        local_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::LocalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "local-route"; yang_parent_name = "local-routes";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::~LocalRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalRoute' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "local-route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "local-route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteAreas()
{
    yang_name = "route-areas"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::~RouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::has_data() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::has_operation() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-areas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-area")
    {
        for(auto const & c : route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea>();
        c->parent = this;
        route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteArea()
    :
    area_id{YType::int32, "area-id"}
    	,
    backup_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>())
	,connected_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>())
	,local_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>())
	,multicast_intact_backup_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>())
	,multicast_intact_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>())
	,route_area_informations(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>())
	,summary_area_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>())
{
    backup_route_areas->parent = this;

    connected_route_areas->parent = this;

    local_route_areas->parent = this;

    multicast_intact_backup_route_areas->parent = this;

    multicast_intact_route_areas->parent = this;

    route_area_informations->parent = this;

    summary_area_information->parent = this;

    yang_name = "route-area"; yang_parent_name = "route-areas";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::~RouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::has_data() const
{
    return area_id.is_set
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_data())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_data())
	|| (local_route_areas !=  nullptr && local_route_areas->has_data())
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_data())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_data())
	|| (route_area_informations !=  nullptr && route_area_informations->has_data())
	|| (summary_area_information !=  nullptr && summary_area_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_operation())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_operation())
	|| (local_route_areas !=  nullptr && local_route_areas->has_operation())
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_operation())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_operation())
	|| (route_area_informations !=  nullptr && route_area_informations->has_operation())
	|| (summary_area_information !=  nullptr && summary_area_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route-areas")
    {
        if(backup_route_areas == nullptr)
        {
            backup_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>();
        }
        return backup_route_areas;
    }

    if(child_yang_name == "connected-route-areas")
    {
        if(connected_route_areas == nullptr)
        {
            connected_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>();
        }
        return connected_route_areas;
    }

    if(child_yang_name == "local-route-areas")
    {
        if(local_route_areas == nullptr)
        {
            local_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>();
        }
        return local_route_areas;
    }

    if(child_yang_name == "multicast-intact-backup-route-areas")
    {
        if(multicast_intact_backup_route_areas == nullptr)
        {
            multicast_intact_backup_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>();
        }
        return multicast_intact_backup_route_areas;
    }

    if(child_yang_name == "multicast-intact-route-areas")
    {
        if(multicast_intact_route_areas == nullptr)
        {
            multicast_intact_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>();
        }
        return multicast_intact_route_areas;
    }

    if(child_yang_name == "route-area-informations")
    {
        if(route_area_informations == nullptr)
        {
            route_area_informations = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>();
        }
        return route_area_informations;
    }

    if(child_yang_name == "summary-area-information")
    {
        if(summary_area_information == nullptr)
        {
            summary_area_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>();
        }
        return summary_area_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_route_areas != nullptr)
    {
        children["backup-route-areas"] = backup_route_areas;
    }

    if(connected_route_areas != nullptr)
    {
        children["connected-route-areas"] = connected_route_areas;
    }

    if(local_route_areas != nullptr)
    {
        children["local-route-areas"] = local_route_areas;
    }

    if(multicast_intact_backup_route_areas != nullptr)
    {
        children["multicast-intact-backup-route-areas"] = multicast_intact_backup_route_areas;
    }

    if(multicast_intact_route_areas != nullptr)
    {
        children["multicast-intact-route-areas"] = multicast_intact_route_areas;
    }

    if(route_area_informations != nullptr)
    {
        children["route-area-informations"] = route_area_informations;
    }

    if(summary_area_information != nullptr)
    {
        children["summary-area-information"] = summary_area_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteAreas()
{
    yang_name = "multicast-intact-backup-route-areas"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::~MulticastIntactBackupRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-areas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactBackupRouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route-area")
    {
        for(auto const & c : multicast_intact_backup_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea>();
        c->parent = this;
        multicast_intact_backup_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_intact_backup_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::MulticastIntactBackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-backup-route-area"; yang_parent_name = "multicast-intact-backup-route-areas";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::~MulticastIntactBackupRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-area";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactBackupRouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;

    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_id.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.operation)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{
    yang_name = "route-backup-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backup_metric.operation)
	|| is_set(backup_remote_lfa.operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(backup_route_interface_name.operation)
	|| is_set(backup_route_next_hop_address.operation)
	|| is_set(backup_route_source.operation)
	|| is_set(backup_tunnel_interface_name.operation)
	|| is_set(downstream.operation)
	|| is_set(line_card_disjoint.operation)
	|| is_set(node_protect.operation)
	|| is_set(primary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteBackupPath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.operation)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.operation)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.operation)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.operation)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.operation)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.operation)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.operation)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.operation)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
    }
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "route-backup-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteAreas()
{
    yang_name = "connected-route-areas"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::~ConnectedRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_data() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-areas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-route-area")
    {
        for(auto const & c : connected_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea>();
        c->parent = this;
        connected_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : connected_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::ConnectedRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "connected-route-area"; yang_parent_name = "connected-route-areas";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::~ConnectedRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-area";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "connected-route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "connected-route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteAreas()
{
    yang_name = "backup-route-areas"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::~BackupRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-areas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route-area")
    {
        for(auto const & c : backup_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea>();
        c->parent = this;
        backup_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::BackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "backup-route-area"; yang_parent_name = "backup-route-areas";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::~BackupRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-area";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "backup-route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RoutePath()
    :
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;

    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "backup-route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_data() const
{
    return lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_id.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_id.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.operation)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{
    yang_name = "route-backup-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_metric.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_tunnel_interface_name.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backup_metric.operation)
	|| is_set(backup_remote_lfa.operation)
	|| is_set(backup_repair_list_size.operation)
	|| is_set(backup_route_interface_name.operation)
	|| is_set(backup_route_next_hop_address.operation)
	|| is_set(backup_route_source.operation)
	|| is_set(backup_tunnel_interface_name.operation)
	|| is_set(downstream.operation)
	|| is_set(line_card_disjoint.operation)
	|| is_set(node_protect.operation)
	|| is_set(primary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteBackupPath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.operation)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.operation)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.operation)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.operation)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.operation)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.operation)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.operation)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.operation)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.operation)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        for(auto const & c : backup_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
    }
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
    }
    if(value_path == "downstream")
    {
        downstream = value;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "backup-repair"; yang_parent_name = "route-backup-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformations()
{
    yang_name = "route-area-informations"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::~RouteAreaInformations()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_data() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_operation() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-informations";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteAreaInformations' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-area-information")
    {
        for(auto const & c : route_area_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation>();
        c->parent = this;
        route_area_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_area_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteAreaInformation()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route-area-information"; yang_parent_name = "route-area-informations";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::~RouteAreaInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteAreaInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route-area-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route-area-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteAreas()
{
    yang_name = "multicast-intact-route-areas"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::~MulticastIntactRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_route_area.size(); index++)
    {
        if(multicast_intact_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_route_area.size(); index++)
    {
        if(multicast_intact_route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-areas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactRouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-route-area")
    {
        for(auto const & c : multicast_intact_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea>();
        c->parent = this;
        multicast_intact_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_intact_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::MulticastIntactRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-route-area"; yang_parent_name = "multicast-intact-route-areas";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::~MulticastIntactRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-area";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastIntactRouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas::MulticastIntactRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::SummaryAreaInformation()
    :
    failure_address{YType::str, "failure-address"},
    failures{YType::uint32, "failures"}
    	,
    common(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common>())
	,failure_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime>())
{
    common->parent = this;

    failure_time->parent = this;

    yang_name = "summary-area-information"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::~SummaryAreaInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_data() const
{
    return failure_address.is_set
	|| failures.is_set
	|| (common !=  nullptr && common->has_data())
	|| (failure_time !=  nullptr && failure_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(failure_address.operation)
	|| is_set(failures.operation)
	|| (common !=  nullptr && common->has_operation())
	|| (failure_time !=  nullptr && failure_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-area-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryAreaInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_address.is_set || is_set(failure_address.operation)) leaf_name_data.push_back(failure_address.get_name_leafdata());
    if (failures.is_set || is_set(failures.operation)) leaf_name_data.push_back(failures.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common>();
        }
        return common;
    }

    if(child_yang_name == "failure-time")
    {
        if(failure_time == nullptr)
        {
            failure_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime>();
        }
        return failure_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common != nullptr)
    {
        children["common"] = common;
    }

    if(failure_time != nullptr)
    {
        children["failure-time"] = failure_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure-address")
    {
        failure_address = value;
    }
    if(value_path == "failures")
    {
        failures = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::FailureTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "failure-time"; yang_parent_name = "summary-area-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::~FailureTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FailureTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::FailureTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::Common()
    :
    external_nssa_type1s{YType::uint32, "external-nssa-type1s"},
    external_nssa_type2s{YType::uint32, "external-nssa-type2s"},
    external_type1s{YType::uint32, "external-type1s"},
    external_type2s{YType::uint32, "external-type2s"},
    inter_areas{YType::uint32, "inter-areas"},
    intra_areas{YType::uint32, "intra-areas"},
    total{YType::uint32, "total"}
{
    yang_name = "common"; yang_parent_name = "summary-area-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::~Common()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_data() const
{
    return external_nssa_type1s.is_set
	|| external_nssa_type2s.is_set
	|| external_type1s.is_set
	|| external_type2s.is_set
	|| inter_areas.is_set
	|| intra_areas.is_set
	|| total.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(external_nssa_type1s.operation)
	|| is_set(external_nssa_type2s.operation)
	|| is_set(external_type1s.operation)
	|| is_set(external_type2s.operation)
	|| is_set(inter_areas.operation)
	|| is_set(intra_areas.operation)
	|| is_set(total.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Common' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_nssa_type1s.is_set || is_set(external_nssa_type1s.operation)) leaf_name_data.push_back(external_nssa_type1s.get_name_leafdata());
    if (external_nssa_type2s.is_set || is_set(external_nssa_type2s.operation)) leaf_name_data.push_back(external_nssa_type2s.get_name_leafdata());
    if (external_type1s.is_set || is_set(external_type1s.operation)) leaf_name_data.push_back(external_type1s.get_name_leafdata());
    if (external_type2s.is_set || is_set(external_type2s.operation)) leaf_name_data.push_back(external_type2s.get_name_leafdata());
    if (inter_areas.is_set || is_set(inter_areas.operation)) leaf_name_data.push_back(inter_areas.get_name_leafdata());
    if (intra_areas.is_set || is_set(intra_areas.operation)) leaf_name_data.push_back(intra_areas.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s = value;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s = value;
    }
    if(value_path == "external-type1s")
    {
        external_type1s = value;
    }
    if(value_path == "external-type2s")
    {
        external_type2s = value;
    }
    if(value_path == "inter-areas")
    {
        inter_areas = value;
    }
    if(value_path == "intra-areas")
    {
        intra_areas = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteAreas()
{
    yang_name = "local-route-areas"; yang_parent_name = "route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::~LocalRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_data() const
{
    for (std::size_t index=0; index<local_route_area.size(); index++)
    {
        if(local_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<local_route_area.size(); index++)
    {
        if(local_route_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route-areas";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalRouteAreas' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-route-area")
    {
        for(auto const & c : local_route_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea>();
        c->parent = this;
        local_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_route_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::LocalRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "local-route-area"; yang_parent_name = "local-route-areas";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::~LocalRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route-area";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalRouteArea' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "local-route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "local-route-area";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas::LocalRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::RouteTable()
{
    yang_name = "route-table"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::~RouteTable()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-table";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTable' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route"; yang_parent_name = "route-table";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::~Route()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoutes()
{
    yang_name = "external-routes"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::~ExternalRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::has_data() const
{
    for (std::size_t index=0; index<external_route.size(); index++)
    {
        if(external_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::has_operation() const
{
    for (std::size_t index=0; index<external_route.size(); index++)
    {
        if(external_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-routes";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRoutes' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-route")
    {
        for(auto const & c : external_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute>();
        c->parent = this;
        external_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : external_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ExternalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    protocol_name(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName>())
	,route_extended_community(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity>())
	,route_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_>())
{
    protocol_name->parent = this;

    route_extended_community->parent = this;

    route_information->parent = this;

    yang_name = "external-route"; yang_parent_name = "external-routes";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::~ExternalRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| (protocol_name !=  nullptr && protocol_name->has_data())
	|| (route_extended_community !=  nullptr && route_extended_community->has_data())
	|| (route_information !=  nullptr && route_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| (protocol_name !=  nullptr && protocol_name->has_operation())
	|| (route_extended_community !=  nullptr && route_extended_community->has_operation())
	|| (route_information !=  nullptr && route_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-route";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRoute' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-name")
    {
        if(protocol_name == nullptr)
        {
            protocol_name = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName>();
        }
        return protocol_name;
    }

    if(child_yang_name == "route-extended-community")
    {
        if(route_extended_community == nullptr)
        {
            route_extended_community = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity>();
        }
        return route_extended_community;
    }

    if(child_yang_name == "route-information")
    {
        if(route_information == nullptr)
        {
            route_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_>();
        }
        return route_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol_name != nullptr)
    {
        children["protocol-name"] = protocol_name;
    }

    if(route_extended_community != nullptr)
    {
        children["route-extended-community"] = route_extended_community;
    }

    if(route_information != nullptr)
    {
        children["route-information"] = route_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInformation_()
    :
    route_connected{YType::boolean, "route-connected"},
    route_metric{YType::uint32, "route-metric"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_type{YType::enumeration, "route-type"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route-information"; yang_parent_name = "external-route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::~RouteInformation_()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return route_connected.is_set
	|| route_metric.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_type.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(route_connected.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_prefix.operation)
	|| is_set(route_prefix_length.operation)
	|| is_set(route_type.operation)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInformation_' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_connected.is_set || is_set(route_connected.operation)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.operation)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.operation)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    for (auto const & c : route_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-connected")
    {
        route_connected = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_te_metric{YType::uint32, "route-te-metric"}
    	,
    route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime>())
	,route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime>())
{
    route_fail_time->parent = this;

    route_update_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_auto_excluded.is_set
	|| route_forward_distance.is_set
	|| route_rib_version.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_spf_version.is_set
	|| route_srte_nbr_registered.is_set
	|| route_srte_prefix_registered.is_set
	|| route_te_metric.is_set
	|| (route_fail_time !=  nullptr && route_fail_time->has_data())
	|| (route_update_time !=  nullptr && route_update_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(route_area_id.operation)
	|| is_set(route_auto_excluded.operation)
	|| is_set(route_forward_distance.operation)
	|| is_set(route_rib_version.operation)
	|| is_set(route_source.operation)
	|| is_set(route_spf_priority.operation)
	|| is_set(route_spf_version.operation)
	|| is_set(route_srte_nbr_registered.operation)
	|| is_set(route_srte_prefix_registered.operation)
	|| is_set(route_te_metric.operation)
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation())
	|| (route_update_time !=  nullptr && route_update_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteInfo' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.operation)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.operation)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.operation)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.operation)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.operation)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.operation)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.operation)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.operation)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-update-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteUpdateTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::RouteFailTime()
    :
    nanosecond{YType::uint32, "nanosecond"},
    second{YType::uint32, "second"}
{
    yang_name = "route-fail-time"; yang_parent_name = "route-info";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::has_data() const
{
    return nanosecond.is_set
	|| second.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanosecond.operation)
	|| is_set(second.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteFailTime' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanosecond.is_set || is_set(nanosecond.operation)) leaf_name_data.push_back(nanosecond.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanosecond")
    {
        nanosecond = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::RoutePath()
    :
    area_format{YType::boolean, "area-format"},
    area_id{YType::uint32, "area-id"},
    lsa_type{YType::uint8, "lsa-type"},
    route_interface_name{YType::str, "route-interface-name"},
    route_lsaid{YType::str, "route-lsaid"},
    route_metric{YType::uint32, "route-metric"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_source{YType::str, "route-source"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route-information";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::has_data() const
{
    return area_format.is_set
	|| area_id.is_set
	|| lsa_type.is_set
	|| route_interface_name.is_set
	|| route_lsaid.is_set
	|| route_metric.is_set
	|| route_next_hop_address.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_source.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(route_interface_name.operation)
	|| is_set(route_lsaid.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_next_hop_address.operation)
	|| is_set(route_path_is_mcast_intact.operation)
	|| is_set(route_path_is_ucmp_path.operation)
	|| is_set(route_source.operation)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (route_interface_name.is_set || is_set(route_interface_name.operation)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.operation)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.operation)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.operation)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.operation)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.operation)) leaf_name_data.push_back(route_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
    }
    if(value_path == "route-source")
    {
        route_source = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"}
{
    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_strict_spf.is_set
	|| microloop_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(microloop_repair_list_size.operation)
	|| is_set(microloop_strict_spf.operation)
	|| is_set(microloop_tunnel_interface_name.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrMicroloopAvoidancePath' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.operation)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.operation)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.operation)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        for(auto const & c : microloop_repair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : microloop_repair)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_element_type{YType::uint32, "repair-element-type"},
    repair_label{YType::uint32, "repair-label"}
{
    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_element_type.is_set
	|| repair_label.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(repair_element_id.operation)
	|| is_set(repair_element_type.operation)
	|| is_set(repair_label.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroloopRepair' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.operation)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.operation)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.operation)) leaf_name_data.push_back(repair_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::ProtocolName()
    :
    bgp_as_number{YType::str, "bgp-as-number"},
    connected_instance{YType::str, "connected-instance"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    protocol_type{YType::enumeration, "protocol-type"}
{
    yang_name = "protocol-name"; yang_parent_name = "external-route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::~ProtocolName()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::has_data() const
{
    return bgp_as_number.is_set
	|| connected_instance.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| protocol_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_as_number.operation)
	|| is_set(connected_instance.operation)
	|| is_set(eigrp_as_number.operation)
	|| is_set(isis_instance_id.operation)
	|| is_set(ospf_process_id.operation)
	|| is_set(protocol_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-name";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolName' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_as_number.is_set || is_set(bgp_as_number.operation)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (connected_instance.is_set || is_set(connected_instance.operation)) leaf_name_data.push_back(connected_instance.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.operation)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.operation)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.operation)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (protocol_type.is_set || is_set(protocol_type.operation)) leaf_name_data.push_back(protocol_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
    }
    if(value_path == "connected-instance")
    {
        connected_instance = value;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
    }
    if(value_path == "protocol-type")
    {
        protocol_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::RouteExtendedCommunity()
    :
    extended_community_area_id{YType::uint32, "extended-community-area-id"},
    extended_community_domain_id_value{YType::str, "extended-community-domain-id-value"},
    extended_community_options{YType::uint8, "extended-community-options"},
    extended_community_route_type{YType::uint8, "extended-community-route-type"},
    extended_community_router_id{YType::str, "extended-community-router-id"},
    extended_communityl_domain_id_type{YType::uint16, "extended-communityl-domain-id-type"}
{
    yang_name = "route-extended-community"; yang_parent_name = "external-route";
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::~RouteExtendedCommunity()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_data() const
{
    return extended_community_area_id.is_set
	|| extended_community_domain_id_value.is_set
	|| extended_community_options.is_set
	|| extended_community_route_type.is_set
	|| extended_community_router_id.is_set
	|| extended_communityl_domain_id_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_community_area_id.operation)
	|| is_set(extended_community_domain_id_value.operation)
	|| is_set(extended_community_options.operation)
	|| is_set(extended_community_route_type.operation)
	|| is_set(extended_community_router_id.operation)
	|| is_set(extended_communityl_domain_id_type.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-extended-community";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteExtendedCommunity' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_community_area_id.is_set || is_set(extended_community_area_id.operation)) leaf_name_data.push_back(extended_community_area_id.get_name_leafdata());
    if (extended_community_domain_id_value.is_set || is_set(extended_community_domain_id_value.operation)) leaf_name_data.push_back(extended_community_domain_id_value.get_name_leafdata());
    if (extended_community_options.is_set || is_set(extended_community_options.operation)) leaf_name_data.push_back(extended_community_options.get_name_leafdata());
    if (extended_community_route_type.is_set || is_set(extended_community_route_type.operation)) leaf_name_data.push_back(extended_community_route_type.get_name_leafdata());
    if (extended_community_router_id.is_set || is_set(extended_community_router_id.operation)) leaf_name_data.push_back(extended_community_router_id.get_name_leafdata());
    if (extended_communityl_domain_id_type.is_set || is_set(extended_communityl_domain_id_type.operation)) leaf_name_data.push_back(extended_communityl_domain_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-community-area-id")
    {
        extended_community_area_id = value;
    }
    if(value_path == "extended-community-domain-id-value")
    {
        extended_community_domain_id_value = value;
    }
    if(value_path == "extended-community-options")
    {
        extended_community_options = value;
    }
    if(value_path == "extended-community-route-type")
    {
        extended_community_route_type = value;
    }
    if(value_path == "extended-community-router-id")
    {
        extended_community_router_id = value;
    }
    if(value_path == "extended-communityl-domain-id-type")
    {
        extended_communityl_domain_id_type = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceInformation()
    :
    interface_briefs(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs>())
	,interfaces(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces>())
	,virtual_links(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks>())
{
    interface_briefs->parent = this;

    interfaces->parent = this;

    virtual_links->parent = this;

    yang_name = "interface-information"; yang_parent_name = "vrf";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::~InterfaceInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::has_data() const
{
    return (interface_briefs !=  nullptr && interface_briefs->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (virtual_links !=  nullptr && virtual_links->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::has_operation() const
{
    return is_set(operation)
	|| (interface_briefs !=  nullptr && interface_briefs->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (virtual_links !=  nullptr && virtual_links->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-information";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceInformation' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-briefs")
    {
        if(interface_briefs == nullptr)
        {
            interface_briefs = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs>();
        }
        return interface_briefs;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "virtual-links")
    {
        if(virtual_links == nullptr)
        {
            virtual_links = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks>();
        }
        return virtual_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_briefs != nullptr)
    {
        children["interface-briefs"] = interface_briefs;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(virtual_links != nullptr)
    {
        children["virtual-links"] = virtual_links;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLinks()
{
    yang_name = "virtual-links"; yang_parent_name = "interface-information";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::~VirtualLinks()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::has_data() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::has_operation() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-links";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLinks' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link")
    {
        for(auto const & c : virtual_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLink()
    :
    virtual_link_name{YType::str, "virtual-link-name"},
    transit_area{YType::str, "transit-area"},
    virtaul_link_retransmission_interval{YType::uint32, "virtaul-link-retransmission-interval"},
    virtual_link_authentication_type{YType::enumeration, "virtual-link-authentication-type"},
    virtual_link_cost{YType::uint16, "virtual-link-cost"},
    virtual_link_dc_bitless_lsa{YType::uint32, "virtual-link-dc-bitless-lsa"},
    virtual_link_dead_interval{YType::uint32, "virtual-link-dead-interval"},
    virtual_link_demand_circuit{YType::boolean, "virtual-link-demand-circuit"},
    virtual_link_hello_interval{YType::uint32, "virtual-link-hello-interval"},
    virtual_link_hello_interval_ms{YType::uint32, "virtual-link-hello-interval-ms"},
    virtual_link_interface_name{YType::str, "virtual-link-interface-name"},
    virtual_link_keychain_id{YType::uint64, "virtual-link-keychain-id"},
    virtual_link_last_nsf{YType::uint32, "virtual-link-last-nsf"},
    virtual_link_md_key{YType::uint16, "virtual-link-md-key"},
    virtual_link_name_xr{YType::str, "virtual-link-name-xr"},
    virtual_link_neighbor_id{YType::str, "virtual-link-neighbor-id"},
    virtual_link_next_hello{YType::uint32, "virtual-link-next-hello"},
    virtual_link_next_hello_ms{YType::uint32, "virtual-link-next-hello-ms"},
    virtual_link_nsf{YType::boolean, "virtual-link-nsf"},
    virtual_link_nsf_enabled{YType::boolean, "virtual-link-nsf-enabled"},
    virtual_link_old_md_key_count{YType::uint32, "virtual-link-old-md-key-count"},
    virtual_link_passive{YType::boolean, "virtual-link-passive"},
    virtual_link_state{YType::enumeration, "virtual-link-state"},
    virtual_link_wait_interval{YType::uint32, "virtual-link-wait-interval"},
    virtual_link_youngest_md_key{YType::boolean, "virtual-link-youngest-md-key"},
    virtual_link_youngest_md_key_id{YType::uint16, "virtual-link-youngest-md-key-id"},
    virual_link_transmission_delay{YType::uint16, "virual-link-transmission-delay"}
    	,
    virtual_link_neighbor(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor>())
{
    virtual_link_neighbor->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "virtual-links";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::~VirtualLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::has_data() const
{
    for (auto const & leaf : virtual_link_md_key.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return virtual_link_name.is_set
	|| transit_area.is_set
	|| virtaul_link_retransmission_interval.is_set
	|| virtual_link_authentication_type.is_set
	|| virtual_link_cost.is_set
	|| virtual_link_dc_bitless_lsa.is_set
	|| virtual_link_dead_interval.is_set
	|| virtual_link_demand_circuit.is_set
	|| virtual_link_hello_interval.is_set
	|| virtual_link_hello_interval_ms.is_set
	|| virtual_link_interface_name.is_set
	|| virtual_link_keychain_id.is_set
	|| virtual_link_last_nsf.is_set
	|| virtual_link_name_xr.is_set
	|| virtual_link_neighbor_id.is_set
	|| virtual_link_next_hello.is_set
	|| virtual_link_next_hello_ms.is_set
	|| virtual_link_nsf.is_set
	|| virtual_link_nsf_enabled.is_set
	|| virtual_link_old_md_key_count.is_set
	|| virtual_link_passive.is_set
	|| virtual_link_state.is_set
	|| virtual_link_wait_interval.is_set
	|| virtual_link_youngest_md_key.is_set
	|| virtual_link_youngest_md_key_id.is_set
	|| virual_link_transmission_delay.is_set
	|| (virtual_link_neighbor !=  nullptr && virtual_link_neighbor->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::has_operation() const
{
    for (auto const & leaf : virtual_link_md_key.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(virtual_link_name.operation)
	|| is_set(transit_area.operation)
	|| is_set(virtaul_link_retransmission_interval.operation)
	|| is_set(virtual_link_authentication_type.operation)
	|| is_set(virtual_link_cost.operation)
	|| is_set(virtual_link_dc_bitless_lsa.operation)
	|| is_set(virtual_link_dead_interval.operation)
	|| is_set(virtual_link_demand_circuit.operation)
	|| is_set(virtual_link_hello_interval.operation)
	|| is_set(virtual_link_hello_interval_ms.operation)
	|| is_set(virtual_link_interface_name.operation)
	|| is_set(virtual_link_keychain_id.operation)
	|| is_set(virtual_link_last_nsf.operation)
	|| is_set(virtual_link_md_key.operation)
	|| is_set(virtual_link_name_xr.operation)
	|| is_set(virtual_link_neighbor_id.operation)
	|| is_set(virtual_link_next_hello.operation)
	|| is_set(virtual_link_next_hello_ms.operation)
	|| is_set(virtual_link_nsf.operation)
	|| is_set(virtual_link_nsf_enabled.operation)
	|| is_set(virtual_link_old_md_key_count.operation)
	|| is_set(virtual_link_passive.operation)
	|| is_set(virtual_link_state.operation)
	|| is_set(virtual_link_wait_interval.operation)
	|| is_set(virtual_link_youngest_md_key.operation)
	|| is_set(virtual_link_youngest_md_key_id.operation)
	|| is_set(virual_link_transmission_delay.operation)
	|| (virtual_link_neighbor !=  nullptr && virtual_link_neighbor->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[virtual-link-name='" <<virtual_link_name <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLink' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_name.is_set || is_set(virtual_link_name.operation)) leaf_name_data.push_back(virtual_link_name.get_name_leafdata());
    if (transit_area.is_set || is_set(transit_area.operation)) leaf_name_data.push_back(transit_area.get_name_leafdata());
    if (virtaul_link_retransmission_interval.is_set || is_set(virtaul_link_retransmission_interval.operation)) leaf_name_data.push_back(virtaul_link_retransmission_interval.get_name_leafdata());
    if (virtual_link_authentication_type.is_set || is_set(virtual_link_authentication_type.operation)) leaf_name_data.push_back(virtual_link_authentication_type.get_name_leafdata());
    if (virtual_link_cost.is_set || is_set(virtual_link_cost.operation)) leaf_name_data.push_back(virtual_link_cost.get_name_leafdata());
    if (virtual_link_dc_bitless_lsa.is_set || is_set(virtual_link_dc_bitless_lsa.operation)) leaf_name_data.push_back(virtual_link_dc_bitless_lsa.get_name_leafdata());
    if (virtual_link_dead_interval.is_set || is_set(virtual_link_dead_interval.operation)) leaf_name_data.push_back(virtual_link_dead_interval.get_name_leafdata());
    if (virtual_link_demand_circuit.is_set || is_set(virtual_link_demand_circuit.operation)) leaf_name_data.push_back(virtual_link_demand_circuit.get_name_leafdata());
    if (virtual_link_hello_interval.is_set || is_set(virtual_link_hello_interval.operation)) leaf_name_data.push_back(virtual_link_hello_interval.get_name_leafdata());
    if (virtual_link_hello_interval_ms.is_set || is_set(virtual_link_hello_interval_ms.operation)) leaf_name_data.push_back(virtual_link_hello_interval_ms.get_name_leafdata());
    if (virtual_link_interface_name.is_set || is_set(virtual_link_interface_name.operation)) leaf_name_data.push_back(virtual_link_interface_name.get_name_leafdata());
    if (virtual_link_keychain_id.is_set || is_set(virtual_link_keychain_id.operation)) leaf_name_data.push_back(virtual_link_keychain_id.get_name_leafdata());
    if (virtual_link_last_nsf.is_set || is_set(virtual_link_last_nsf.operation)) leaf_name_data.push_back(virtual_link_last_nsf.get_name_leafdata());
    if (virtual_link_name_xr.is_set || is_set(virtual_link_name_xr.operation)) leaf_name_data.push_back(virtual_link_name_xr.get_name_leafdata());
    if (virtual_link_neighbor_id.is_set || is_set(virtual_link_neighbor_id.operation)) leaf_name_data.push_back(virtual_link_neighbor_id.get_name_leafdata());
    if (virtual_link_next_hello.is_set || is_set(virtual_link_next_hello.operation)) leaf_name_data.push_back(virtual_link_next_hello.get_name_leafdata());
    if (virtual_link_next_hello_ms.is_set || is_set(virtual_link_next_hello_ms.operation)) leaf_name_data.push_back(virtual_link_next_hello_ms.get_name_leafdata());
    if (virtual_link_nsf.is_set || is_set(virtual_link_nsf.operation)) leaf_name_data.push_back(virtual_link_nsf.get_name_leafdata());
    if (virtual_link_nsf_enabled.is_set || is_set(virtual_link_nsf_enabled.operation)) leaf_name_data.push_back(virtual_link_nsf_enabled.get_name_leafdata());
    if (virtual_link_old_md_key_count.is_set || is_set(virtual_link_old_md_key_count.operation)) leaf_name_data.push_back(virtual_link_old_md_key_count.get_name_leafdata());
    if (virtual_link_passive.is_set || is_set(virtual_link_passive.operation)) leaf_name_data.push_back(virtual_link_passive.get_name_leafdata());
    if (virtual_link_state.is_set || is_set(virtual_link_state.operation)) leaf_name_data.push_back(virtual_link_state.get_name_leafdata());
    if (virtual_link_wait_interval.is_set || is_set(virtual_link_wait_interval.operation)) leaf_name_data.push_back(virtual_link_wait_interval.get_name_leafdata());
    if (virtual_link_youngest_md_key.is_set || is_set(virtual_link_youngest_md_key.operation)) leaf_name_data.push_back(virtual_link_youngest_md_key.get_name_leafdata());
    if (virtual_link_youngest_md_key_id.is_set || is_set(virtual_link_youngest_md_key_id.operation)) leaf_name_data.push_back(virtual_link_youngest_md_key_id.get_name_leafdata());
    if (virual_link_transmission_delay.is_set || is_set(virual_link_transmission_delay.operation)) leaf_name_data.push_back(virual_link_transmission_delay.get_name_leafdata());

    auto virtual_link_md_key_name_datas = virtual_link_md_key.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), virtual_link_md_key_name_datas.begin(), virtual_link_md_key_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link-neighbor")
    {
        if(virtual_link_neighbor == nullptr)
        {
            virtual_link_neighbor = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor>();
        }
        return virtual_link_neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(virtual_link_neighbor != nullptr)
    {
        children["virtual-link-neighbor"] = virtual_link_neighbor;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "virtual-link-name")
    {
        virtual_link_name = value;
    }
    if(value_path == "transit-area")
    {
        transit_area = value;
    }
    if(value_path == "virtaul-link-retransmission-interval")
    {
        virtaul_link_retransmission_interval = value;
    }
    if(value_path == "virtual-link-authentication-type")
    {
        virtual_link_authentication_type = value;
    }
    if(value_path == "virtual-link-cost")
    {
        virtual_link_cost = value;
    }
    if(value_path == "virtual-link-dc-bitless-lsa")
    {
        virtual_link_dc_bitless_lsa = value;
    }
    if(value_path == "virtual-link-dead-interval")
    {
        virtual_link_dead_interval = value;
    }
    if(value_path == "virtual-link-demand-circuit")
    {
        virtual_link_demand_circuit = value;
    }
    if(value_path == "virtual-link-hello-interval")
    {
        virtual_link_hello_interval = value;
    }
    if(value_path == "virtual-link-hello-interval-ms")
    {
        virtual_link_hello_interval_ms = value;
    }
    if(value_path == "virtual-link-interface-name")
    {
        virtual_link_interface_name = value;
    }
    if(value_path == "virtual-link-keychain-id")
    {
        virtual_link_keychain_id = value;
    }
    if(value_path == "virtual-link-last-nsf")
    {
        virtual_link_last_nsf = value;
    }
    if(value_path == "virtual-link-md-key")
    {
        virtual_link_md_key.append(value);
    }
    if(value_path == "virtual-link-name-xr")
    {
        virtual_link_name_xr = value;
    }
    if(value_path == "virtual-link-neighbor-id")
    {
        virtual_link_neighbor_id = value;
    }
    if(value_path == "virtual-link-next-hello")
    {
        virtual_link_next_hello = value;
    }
    if(value_path == "virtual-link-next-hello-ms")
    {
        virtual_link_next_hello_ms = value;
    }
    if(value_path == "virtual-link-nsf")
    {
        virtual_link_nsf = value;
    }
    if(value_path == "virtual-link-nsf-enabled")
    {
        virtual_link_nsf_enabled = value;
    }
    if(value_path == "virtual-link-old-md-key-count")
    {
        virtual_link_old_md_key_count = value;
    }
    if(value_path == "virtual-link-passive")
    {
        virtual_link_passive = value;
    }
    if(value_path == "virtual-link-state")
    {
        virtual_link_state = value;
    }
    if(value_path == "virtual-link-wait-interval")
    {
        virtual_link_wait_interval = value;
    }
    if(value_path == "virtual-link-youngest-md-key")
    {
        virtual_link_youngest_md_key = value;
    }
    if(value_path == "virtual-link-youngest-md-key-id")
    {
        virtual_link_youngest_md_key_id = value;
    }
    if(value_path == "virual-link-transmission-delay")
    {
        virual_link_transmission_delay = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkNeighbor()
    :
    virtual_link_state{YType::enumeration, "virtual-link-state"},
    virtual_link_suppress_hello{YType::boolean, "virtual-link-suppress-hello"}
    	,
    virtual_link_retransmissoin(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin>())
{
    virtual_link_retransmissoin->parent = this;

    yang_name = "virtual-link-neighbor"; yang_parent_name = "virtual-link";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::~VirtualLinkNeighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::has_data() const
{
    return virtual_link_state.is_set
	|| virtual_link_suppress_hello.is_set
	|| (virtual_link_retransmissoin !=  nullptr && virtual_link_retransmissoin->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(virtual_link_state.operation)
	|| is_set(virtual_link_suppress_hello.operation)
	|| (virtual_link_retransmissoin !=  nullptr && virtual_link_retransmissoin->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-neighbor";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLinkNeighbor' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_state.is_set || is_set(virtual_link_state.operation)) leaf_name_data.push_back(virtual_link_state.get_name_leafdata());
    if (virtual_link_suppress_hello.is_set || is_set(virtual_link_suppress_hello.operation)) leaf_name_data.push_back(virtual_link_suppress_hello.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-link-retransmissoin")
    {
        if(virtual_link_retransmissoin == nullptr)
        {
            virtual_link_retransmissoin = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin>();
        }
        return virtual_link_retransmissoin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(virtual_link_retransmissoin != nullptr)
    {
        children["virtual-link-retransmissoin"] = virtual_link_retransmissoin;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "virtual-link-state")
    {
        virtual_link_state = value;
    }
    if(value_path == "virtual-link-suppress-hello")
    {
        virtual_link_suppress_hello = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::VirtualLinkRetransmissoin()
    :
    area_first_flood_information{YType::uint32, "area-first-flood-information"},
    area_first_flood_information_index{YType::uint32, "area-first-flood-information-index"},
    area_flooding_index{YType::uint32, "area-flooding-index"},
    area_next_flood_information{YType::uint32, "area-next-flood-information"},
    area_next_flood_information_index{YType::uint32, "area-next-flood-information-index"},
    as_first_flood_information{YType::uint32, "as-first-flood-information"},
    as_first_flood_information_index{YType::uint32, "as-first-flood-information-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    as_next_flood_information{YType::uint32, "as-next-flood-information"},
    as_next_flood_information_index{YType::uint32, "as-next-flood-information-index"},
    dbd_retransmission_count{YType::uint32, "dbd-retransmission-count"},
    dbd_retransmission_total_count{YType::uint32, "dbd-retransmission-total-count"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    neighbor_retransmission_count{YType::uint32, "neighbor-retransmission-count"},
    number_of_retransmissions{YType::uint32, "number-of-retransmissions"}
{
    yang_name = "virtual-link-retransmissoin"; yang_parent_name = "virtual-link-neighbor";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::~VirtualLinkRetransmissoin()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::has_data() const
{
    return area_first_flood_information.is_set
	|| area_first_flood_information_index.is_set
	|| area_flooding_index.is_set
	|| area_next_flood_information.is_set
	|| area_next_flood_information_index.is_set
	|| as_first_flood_information.is_set
	|| as_first_flood_information_index.is_set
	|| as_flood_index.is_set
	|| as_next_flood_information.is_set
	|| as_next_flood_information_index.is_set
	|| dbd_retransmission_count.is_set
	|| dbd_retransmission_total_count.is_set
	|| last_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set
	|| maximum_retransmission_length.is_set
	|| maximum_retransmission_time.is_set
	|| neighbor_retransmission_count.is_set
	|| number_of_retransmissions.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::has_operation() const
{
    return is_set(operation)
	|| is_set(area_first_flood_information.operation)
	|| is_set(area_first_flood_information_index.operation)
	|| is_set(area_flooding_index.operation)
	|| is_set(area_next_flood_information.operation)
	|| is_set(area_next_flood_information_index.operation)
	|| is_set(as_first_flood_information.operation)
	|| is_set(as_first_flood_information_index.operation)
	|| is_set(as_flood_index.operation)
	|| is_set(as_next_flood_information.operation)
	|| is_set(as_next_flood_information_index.operation)
	|| is_set(dbd_retransmission_count.operation)
	|| is_set(dbd_retransmission_total_count.operation)
	|| is_set(last_retransmission_length.operation)
	|| is_set(last_retransmission_time.operation)
	|| is_set(lsa_retransmission_timer.operation)
	|| is_set(maximum_retransmission_length.operation)
	|| is_set(maximum_retransmission_time.operation)
	|| is_set(neighbor_retransmission_count.operation)
	|| is_set(number_of_retransmissions.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link-retransmissoin";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLinkRetransmissoin' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood_information.is_set || is_set(area_first_flood_information.operation)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.operation)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.operation)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.operation)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.operation)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.operation)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.operation)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.operation)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.operation)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.operation)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.operation)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.operation)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.operation)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.operation)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.operation)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.operation)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.operation)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.operation)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.operation)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information = value;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index = value;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information = value;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index = value;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information = value;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index = value;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information = value;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index = value;
    }
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count = value;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count = value;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count = value;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBriefs()
{
    yang_name = "interface-briefs"; yang_parent_name = "interface-information";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::~InterfaceBriefs()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBriefs' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-brief")
    {
        for(auto const & c : interface_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::set_value(const std::string & value_path, std::string value)
{
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_address{YType::str, "interface-address"},
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_fast_detect_hold_down{YType::boolean, "interface-fast-detect-hold-down"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_madj_count{YType::uint16, "interface-madj-count"},
    interface_mask{YType::uint32, "interface-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    interfaceis_madj{YType::boolean, "interfaceis-madj"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{
    yang_name = "interface-brief"; yang_parent_name = "interface-briefs";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::has_data() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_address.is_set
	|| interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_fast_detect_hold_down.is_set
	|| interface_link_cost.is_set
	|| interface_madj_count.is_set
	|| interface_mask.is_set
	|| interface_name_xr.is_set
	|| interface_neighbor_count.is_set
	|| interfaceis_madj.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    for (std::size_t index=0; index<interface_madj.size(); index++)
    {
        if(interface_madj[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_adj_neighbor_count.operation)
	|| is_set(interface_area.operation)
	|| is_set(interface_fast_detect_hold_down.operation)
	|| is_set(interface_link_cost.operation)
	|| is_set(interface_madj_count.operation)
	|| is_set(interface_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_neighbor_count.operation)
	|| is_set(interfaceis_madj.operation)
	|| is_set(ospf_interface_state.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBrief' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.operation)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.operation)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.operation)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_fast_detect_hold_down.is_set || is_set(interface_fast_detect_hold_down.operation)) leaf_name_data.push_back(interface_fast_detect_hold_down.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.operation)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_madj_count.is_set || is_set(interface_madj_count.operation)) leaf_name_data.push_back(interface_madj_count.get_name_leafdata());
    if (interface_mask.is_set || is_set(interface_mask.operation)) leaf_name_data.push_back(interface_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.operation)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (interfaceis_madj.is_set || is_set(interfaceis_madj.operation)) leaf_name_data.push_back(interfaceis_madj.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.operation)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-madj")
    {
        for(auto const & c : interface_madj)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj>();
        c->parent = this;
        interface_madj.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_madj)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
    }
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
    }
    if(value_path == "interface-fast-detect-hold-down")
    {
        interface_fast_detect_hold_down = value;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
    }
    if(value_path == "interface-madj-count")
    {
        interface_madj_count = value;
    }
    if(value_path == "interface-mask")
    {
        interface_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
    }
    if(value_path == "interfaceis-madj")
    {
        interfaceis_madj = value;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
    }
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::InterfaceMadj()
    :
    interface_adj_neighbor_count{YType::uint16, "interface-adj-neighbor-count"},
    interface_area{YType::str, "interface-area"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_neighbor_count{YType::uint16, "interface-neighbor-count"},
    madj_area_id{YType::uint32, "madj-area-id"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"}
{
    yang_name = "interface-madj"; yang_parent_name = "interface-brief";
}

Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::~InterfaceMadj()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_data() const
{
    return interface_adj_neighbor_count.is_set
	|| interface_area.is_set
	|| interface_link_cost.is_set
	|| interface_neighbor_count.is_set
	|| madj_area_id.is_set
	|| ospf_interface_state.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_adj_neighbor_count.operation)
	|| is_set(interface_area.operation)
	|| is_set(interface_link_cost.operation)
	|| is_set(interface_neighbor_count.operation)
	|| is_set(madj_area_id.operation)
	|| is_set(ospf_interface_state.operation);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-madj";

    return path_buffer.str();

}

const EntityPath Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceMadj' in Cisco_IOS_XR_ipv4_ospf_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_adj_neighbor_count.is_set || is_set(interface_adj_neighbor_count.operation)) leaf_name_data.push_back(interface_adj_neighbor_count.get_name_leafdata());
    if (interface_area.is_set || is_set(interface_area.operation)) leaf_name_data.push_back(interface_area.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.operation)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_neighbor_count.is_set || is_set(interface_neighbor_count.operation)) leaf_name_data.push_back(interface_neighbor_count.get_name_leafdata());
    if (madj_area_id.is_set || is_set(madj_area_id.operation)) leaf_name_data.push_back(madj_area_id.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.operation)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-adj-neighbor-count")
    {
        interface_adj_neighbor_count = value;
    }
    if(value_path == "interface-area")
    {
        interface_area = value;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
    }
    if(value_path == "interface-neighbor-count")
    {
        interface_neighbor_count = value;
    }
    if(value_path == "madj-area-id")
    {
        madj_area_id = value;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
    }
}


}
}

