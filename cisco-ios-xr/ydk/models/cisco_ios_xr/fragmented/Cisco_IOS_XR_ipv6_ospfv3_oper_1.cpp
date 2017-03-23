
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_1.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    is_request_sham_link{YType::boolean, "is-request-sham-link"},
    is_request_virtual_link{YType::boolean, "is-request-virtual-link"},
    neighbor_address{YType::str, "neighbor-address"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_sham_link_id{YType::uint32, "request-sham-link-id"},
    request_virtual_link_id{YType::uint32, "request-virtual-link-id"}
{
    yang_name = "request"; yang_parent_name = "request-list-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::~Request()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_request_sham_link.is_set
	|| is_request_virtual_link.is_set
	|| neighbor_address.is_set
	|| request_neighbor_address.is_set
	|| request_sham_link_id.is_set
	|| request_virtual_link_id.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_request_sham_link.operation)
	|| is_set(is_request_virtual_link.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(request_neighbor_address.operation)
	|| is_set(request_sham_link_id.operation)
	|| is_set(request_virtual_link_id.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_request_sham_link.is_set || is_set(is_request_sham_link.operation)) leaf_name_data.push_back(is_request_sham_link.get_name_leafdata());
    if (is_request_virtual_link.is_set || is_set(is_request_virtual_link.operation)) leaf_name_data.push_back(is_request_virtual_link.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (request_neighbor_address.is_set || is_set(request_neighbor_address.operation)) leaf_name_data.push_back(request_neighbor_address.get_name_leafdata());
    if (request_sham_link_id.is_set || is_set(request_sham_link_id.operation)) leaf_name_data.push_back(request_sham_link_id.get_name_leafdata());
    if (request_virtual_link_id.is_set || is_set(request_virtual_link_id.operation)) leaf_name_data.push_back(request_virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "request")
    {
        for(auto const & c : request)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_>();
        c->parent = this;
        request.push_back(std::move(c));
        children[segment_path] = request.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::get_children()
{
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-request-sham-link")
    {
        is_request_sham_link = value;
    }
    if(value_path == "is-request-virtual-link")
    {
        is_request_virtual_link = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address = value;
    }
    if(value_path == "request-sham-link-id")
    {
        request_sham_link_id = value;
    }
    if(value_path == "request-virtual-link-id")
    {
        request_virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_::Request_()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "request"; yang_parent_name = "request";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_::~Request_()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Request_' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.operation)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RequestListTable::Request::Request_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::NeighborTable()
{
    yang_name = "neighbor-table"; yang_parent_name = "area";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::~NeighborTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    is_neighbor_sham_link{YType::boolean, "is-neighbor-sham-link"},
    is_neighbor_virtual_link{YType::boolean, "is-neighbor-virtual-link"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_designated_router{YType::str, "neighbor-designated-router"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_sham_link_id{YType::uint32, "neighbor-sham-link-id"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_virtual_link_id{YType::uint32, "neighbor-virtual-link-id"}
    	,
    neighbor_bfd_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo>())
	,neighbor_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail>())
{
    neighbor_bfd_info->parent = this;
    children["neighbor-bfd-info"] = neighbor_bfd_info;

    neighbor_detail->parent = this;
    children["neighbor-detail"] = neighbor_detail;

    yang_name = "neighbor"; yang_parent_name = "neighbor-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::~Neighbor()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::has_data() const
{
    return interface_name.is_set
	|| is_neighbor_sham_link.is_set
	|| is_neighbor_virtual_link.is_set
	|| neighbor_address.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_designated_router.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_sham_link_id.is_set
	|| neighbor_state.is_set
	|| neighbor_up_time.is_set
	|| neighbor_virtual_link_id.is_set
	|| (neighbor_bfd_info !=  nullptr && neighbor_bfd_info->has_data())
	|| (neighbor_detail !=  nullptr && neighbor_detail->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_neighbor_sham_link.operation)
	|| is_set(is_neighbor_virtual_link.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_address_xr.operation)
	|| is_set(neighbor_dead_timer.operation)
	|| is_set(neighbor_designated_router.operation)
	|| is_set(neighbor_dr_priority.operation)
	|| is_set(neighbor_interface_id.operation)
	|| is_set(neighbor_sham_link_id.operation)
	|| is_set(neighbor_state.operation)
	|| is_set(neighbor_up_time.operation)
	|| is_set(neighbor_virtual_link_id.operation)
	|| (neighbor_bfd_info !=  nullptr && neighbor_bfd_info->has_operation())
	|| (neighbor_detail !=  nullptr && neighbor_detail->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_neighbor_sham_link.is_set || is_set(is_neighbor_sham_link.operation)) leaf_name_data.push_back(is_neighbor_sham_link.get_name_leafdata());
    if (is_neighbor_virtual_link.is_set || is_set(is_neighbor_virtual_link.operation)) leaf_name_data.push_back(is_neighbor_virtual_link.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.operation)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.operation)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_designated_router.is_set || is_set(neighbor_designated_router.operation)) leaf_name_data.push_back(neighbor_designated_router.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.operation)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.operation)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_sham_link_id.is_set || is_set(neighbor_sham_link_id.operation)) leaf_name_data.push_back(neighbor_sham_link_id.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.operation)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.operation)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_virtual_link_id.is_set || is_set(neighbor_virtual_link_id.operation)) leaf_name_data.push_back(neighbor_virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-bfd-info")
    {
        if(neighbor_bfd_info != nullptr)
        {
            children["neighbor-bfd-info"] = neighbor_bfd_info;
        }
        else
        {
            neighbor_bfd_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo>();
            neighbor_bfd_info->parent = this;
            children["neighbor-bfd-info"] = neighbor_bfd_info;
        }
        return children.at("neighbor-bfd-info");
    }

    if(child_yang_name == "neighbor-detail")
    {
        if(neighbor_detail != nullptr)
        {
            children["neighbor-detail"] = neighbor_detail;
        }
        else
        {
            neighbor_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail>();
            neighbor_detail->parent = this;
            children["neighbor-detail"] = neighbor_detail;
        }
        return children.at("neighbor-detail");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::get_children()
{
    if(children.find("neighbor-bfd-info") == children.end())
    {
        if(neighbor_bfd_info != nullptr)
        {
            children["neighbor-bfd-info"] = neighbor_bfd_info;
        }
    }

    if(children.find("neighbor-detail") == children.end())
    {
        if(neighbor_detail != nullptr)
        {
            children["neighbor-detail"] = neighbor_detail;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-neighbor-sham-link")
    {
        is_neighbor_sham_link = value;
    }
    if(value_path == "is-neighbor-virtual-link")
    {
        is_neighbor_virtual_link = value;
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
    if(value_path == "neighbor-designated-router")
    {
        neighbor_designated_router = value;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
    }
    if(value_path == "neighbor-sham-link-id")
    {
        neighbor_sham_link_id = value;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
    }
    if(value_path == "neighbor-virtual-link-id")
    {
        neighbor_virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborDetail()
    :
    interface_type{YType::enumeration, "interface-type"},
    is_neighbor_filtered{YType::boolean, "is-neighbor-filtered"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_ignore_timer{YType::uint32, "neighbor-ignore-timer"},
    neighbor_option{YType::uint32, "neighbor-option"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    pending_events{YType::uint16, "pending-events"},
    poll_interval{YType::uint32, "poll-interval"},
    state_changes{YType::uint16, "state-changes"}
    	,
    neighbor_retransmission(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission>())
{
    neighbor_retransmission->parent = this;
    children["neighbor-retransmission"] = neighbor_retransmission;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::~NeighborDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::has_data() const
{
    return interface_type.is_set
	|| is_neighbor_filtered.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| neighbor_cost.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_ignore_timer.is_set
	|| neighbor_option.is_set
	|| next_poll_interval.is_set
	|| pending_events.is_set
	|| poll_interval.is_set
	|| state_changes.is_set
	|| (neighbor_retransmission !=  nullptr && neighbor_retransmission->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_type.operation)
	|| is_set(is_neighbor_filtered.operation)
	|| is_set(neighbor_backup_designated_router_address.operation)
	|| is_set(neighbor_cost.operation)
	|| is_set(neighbor_designated_router_address.operation)
	|| is_set(neighbor_ignore_timer.operation)
	|| is_set(neighbor_option.operation)
	|| is_set(next_poll_interval.operation)
	|| is_set(pending_events.operation)
	|| is_set(poll_interval.operation)
	|| is_set(state_changes.operation)
	|| (neighbor_retransmission !=  nullptr && neighbor_retransmission->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (is_neighbor_filtered.is_set || is_set(is_neighbor_filtered.operation)) leaf_name_data.push_back(is_neighbor_filtered.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.operation)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.operation)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.operation)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_ignore_timer.is_set || is_set(neighbor_ignore_timer.operation)) leaf_name_data.push_back(neighbor_ignore_timer.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.operation)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.operation)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.operation)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.operation)) leaf_name_data.push_back(state_changes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-retransmission")
    {
        if(neighbor_retransmission != nullptr)
        {
            children["neighbor-retransmission"] = neighbor_retransmission;
        }
        else
        {
            neighbor_retransmission = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission>();
            neighbor_retransmission->parent = this;
            children["neighbor-retransmission"] = neighbor_retransmission;
        }
        return children.at("neighbor-retransmission");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::get_children()
{
    if(children.find("neighbor-retransmission") == children.end())
    {
        if(neighbor_retransmission != nullptr)
        {
            children["neighbor-retransmission"] = neighbor_retransmission;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "is-neighbor-filtered")
    {
        is_neighbor_filtered = value;
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
    if(value_path == "neighbor-ignore-timer")
    {
        neighbor_ignore_timer = value;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission::NeighborRetransmission()
    :
    area_first_flood{YType::uint32, "area-first-flood"},
    area_first_flood_index{YType::uint32, "area-first-flood-index"},
    area_flood_index{YType::uint32, "area-flood-index"},
    area_next_flood{YType::uint32, "area-next-flood"},
    area_next_flood_index{YType::uint32, "area-next-flood-index"},
    as_first_flood{YType::uint32, "as-first-flood"},
    as_first_flood_index{YType::uint32, "as-first-flood-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    as_next_flood{YType::uint32, "as-next-flood"},
    as_next_flood_index{YType::uint32, "as-next-flood-index"},
    database_descriptor_retransmissions{YType::uint32, "database-descriptor-retransmissions"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    link_first_flood{YType::uint32, "link-first-flood"},
    link_first_flood_index{YType::uint32, "link-first-flood-index"},
    link_flood_index{YType::uint32, "link-flood-index"},
    link_next_flood{YType::uint32, "link-next-flood"},
    link_next_flood_index{YType::uint32, "link-next-flood-index"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    neighbor_retransmissions{YType::uint32, "neighbor-retransmissions"},
    retransmissions{YType::uint32, "retransmissions"}
{
    yang_name = "neighbor-retransmission"; yang_parent_name = "neighbor-detail";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission::~NeighborRetransmission()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission::has_data() const
{
    return area_first_flood.is_set
	|| area_first_flood_index.is_set
	|| area_flood_index.is_set
	|| area_next_flood.is_set
	|| area_next_flood_index.is_set
	|| as_first_flood.is_set
	|| as_first_flood_index.is_set
	|| as_flood_index.is_set
	|| as_next_flood.is_set
	|| as_next_flood_index.is_set
	|| database_descriptor_retransmissions.is_set
	|| last_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| link_first_flood.is_set
	|| link_first_flood_index.is_set
	|| link_flood_index.is_set
	|| link_next_flood.is_set
	|| link_next_flood_index.is_set
	|| lsa_retransmission_timer.is_set
	|| maximum_retransmission_length.is_set
	|| maximum_retransmission_time.is_set
	|| neighbor_retransmissions.is_set
	|| retransmissions.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission::has_operation() const
{
    return is_set(operation)
	|| is_set(area_first_flood.operation)
	|| is_set(area_first_flood_index.operation)
	|| is_set(area_flood_index.operation)
	|| is_set(area_next_flood.operation)
	|| is_set(area_next_flood_index.operation)
	|| is_set(as_first_flood.operation)
	|| is_set(as_first_flood_index.operation)
	|| is_set(as_flood_index.operation)
	|| is_set(as_next_flood.operation)
	|| is_set(as_next_flood_index.operation)
	|| is_set(database_descriptor_retransmissions.operation)
	|| is_set(last_retransmission_length.operation)
	|| is_set(last_retransmission_time.operation)
	|| is_set(link_first_flood.operation)
	|| is_set(link_first_flood_index.operation)
	|| is_set(link_flood_index.operation)
	|| is_set(link_next_flood.operation)
	|| is_set(link_next_flood_index.operation)
	|| is_set(lsa_retransmission_timer.operation)
	|| is_set(maximum_retransmission_length.operation)
	|| is_set(maximum_retransmission_time.operation)
	|| is_set(neighbor_retransmissions.operation)
	|| is_set(retransmissions.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborRetransmission' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_first_flood.is_set || is_set(area_first_flood.operation)) leaf_name_data.push_back(area_first_flood.get_name_leafdata());
    if (area_first_flood_index.is_set || is_set(area_first_flood_index.operation)) leaf_name_data.push_back(area_first_flood_index.get_name_leafdata());
    if (area_flood_index.is_set || is_set(area_flood_index.operation)) leaf_name_data.push_back(area_flood_index.get_name_leafdata());
    if (area_next_flood.is_set || is_set(area_next_flood.operation)) leaf_name_data.push_back(area_next_flood.get_name_leafdata());
    if (area_next_flood_index.is_set || is_set(area_next_flood_index.operation)) leaf_name_data.push_back(area_next_flood_index.get_name_leafdata());
    if (as_first_flood.is_set || is_set(as_first_flood.operation)) leaf_name_data.push_back(as_first_flood.get_name_leafdata());
    if (as_first_flood_index.is_set || is_set(as_first_flood_index.operation)) leaf_name_data.push_back(as_first_flood_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.operation)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (as_next_flood.is_set || is_set(as_next_flood.operation)) leaf_name_data.push_back(as_next_flood.get_name_leafdata());
    if (as_next_flood_index.is_set || is_set(as_next_flood_index.operation)) leaf_name_data.push_back(as_next_flood_index.get_name_leafdata());
    if (database_descriptor_retransmissions.is_set || is_set(database_descriptor_retransmissions.operation)) leaf_name_data.push_back(database_descriptor_retransmissions.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.operation)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.operation)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (link_first_flood.is_set || is_set(link_first_flood.operation)) leaf_name_data.push_back(link_first_flood.get_name_leafdata());
    if (link_first_flood_index.is_set || is_set(link_first_flood_index.operation)) leaf_name_data.push_back(link_first_flood_index.get_name_leafdata());
    if (link_flood_index.is_set || is_set(link_flood_index.operation)) leaf_name_data.push_back(link_flood_index.get_name_leafdata());
    if (link_next_flood.is_set || is_set(link_next_flood.operation)) leaf_name_data.push_back(link_next_flood.get_name_leafdata());
    if (link_next_flood_index.is_set || is_set(link_next_flood_index.operation)) leaf_name_data.push_back(link_next_flood_index.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.operation)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.operation)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.operation)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (neighbor_retransmissions.is_set || is_set(neighbor_retransmissions.operation)) leaf_name_data.push_back(neighbor_retransmissions.get_name_leafdata());
    if (retransmissions.is_set || is_set(retransmissions.operation)) leaf_name_data.push_back(retransmissions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborDetail::NeighborRetransmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-first-flood")
    {
        area_first_flood = value;
    }
    if(value_path == "area-first-flood-index")
    {
        area_first_flood_index = value;
    }
    if(value_path == "area-flood-index")
    {
        area_flood_index = value;
    }
    if(value_path == "area-next-flood")
    {
        area_next_flood = value;
    }
    if(value_path == "area-next-flood-index")
    {
        area_next_flood_index = value;
    }
    if(value_path == "as-first-flood")
    {
        as_first_flood = value;
    }
    if(value_path == "as-first-flood-index")
    {
        as_first_flood_index = value;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
    }
    if(value_path == "as-next-flood")
    {
        as_next_flood = value;
    }
    if(value_path == "as-next-flood-index")
    {
        as_next_flood_index = value;
    }
    if(value_path == "database-descriptor-retransmissions")
    {
        database_descriptor_retransmissions = value;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
    }
    if(value_path == "link-first-flood")
    {
        link_first_flood = value;
    }
    if(value_path == "link-first-flood-index")
    {
        link_first_flood_index = value;
    }
    if(value_path == "link-flood-index")
    {
        link_flood_index = value;
    }
    if(value_path == "link-next-flood")
    {
        link_next_flood = value;
    }
    if(value_path == "link-next-flood-index")
    {
        link_next_flood_index = value;
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
    if(value_path == "neighbor-retransmissions")
    {
        neighbor_retransmissions = value;
    }
    if(value_path == "retransmissions")
    {
        retransmissions = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo::NeighborBfdInfo()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{
    yang_name = "neighbor-bfd-info"; yang_parent_name = "neighbor";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo::~NeighborBfdInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_intf_enable_mode.operation)
	|| is_set(bfd_status_flag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBfdInfo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::NeighborTable::Neighbor::NeighborBfdInfo::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::InterfaceTable()
{
    yang_name = "interface-table"; yang_parent_name = "area";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::~InterfaceTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    adjacent_neighbor{YType::uint32, "adjacent-neighbor"},
    backup_designated_router_address{YType::str, "backup-designated-router-address"},
    backup_designated_router_id{YType::str, "backup-designated-router-id"},
    configured_ldp_sync{YType::boolean, "configured-ldp-sync"},
    dead_interval{YType::uint32, "dead-interval"},
    designated_router_address{YType::str, "designated-router-address"},
    designated_router_id{YType::str, "designated-router-id"},
    hello_interval{YType::uint32, "hello-interval"},
    interface_address{YType::str, "interface-address"},
    interface_authentication_spi{YType::uint32, "interface-authentication-spi"},
    interface_authentication_transmit{YType::uint32, "interface-authentication-transmit"},
    interface_dc_bitless_ls_as{YType::uint32, "interface-dc-bitless-ls-as"},
    interface_encrypted_authentication_transmitted{YType::uint32, "interface-encrypted-authentication-transmitted"},
    interface_encryption_spi{YType::uint32, "interface-encryption-spi"},
    interface_encryption_transmitted{YType::uint32, "interface-encryption-transmitted"},
    interface_ldp_sync{YType::boolean, "interface-ldp-sync"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    interface_number{YType::uint32, "interface-number"},
    interface_priority{YType::uint8, "interface-priority"},
    interface_references{YType::uint32, "interface-references"},
    interface_retransmission_interval{YType::uint32, "interface-retransmission-interval"},
    interface_router_id{YType::str, "interface-router-id"},
    interface_state{YType::enumeration, "interface-state"},
    is_demand_circuit_configured{YType::boolean, "is-demand-circuit-configured"},
    is_designated_router{YType::boolean, "is-designated-router"},
    is_interface_demand_circuit{YType::boolean, "is-interface-demand-circuit"},
    is_interface_encryption_enabled{YType::boolean, "is-interface-encryption-enabled"},
    is_interface_flood_reduction{YType::boolean, "is-interface-flood-reduction"},
    is_interface_ip_security_active{YType::boolean, "is-interface-ip-security-active"},
    is_interface_ip_security_required{YType::boolean, "is-interface-ip-security-required"},
    is_interface_line_up{YType::boolean, "is-interface-line-up"},
    is_interface_lsa_filtered{YType::boolean, "is-interface-lsa-filtered"},
    is_prefix_suppress{YType::boolean, "is-prefix-suppress"},
    network_lsa_flush_timer{YType::uint32, "network-lsa-flush-timer"},
    network_type{YType::enumeration, "network-type"},
    next_hello_time{YType::uint32, "next-hello-time"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"},
    transmission_delay{YType::uint16, "transmission-delay"},
    wait_interval{YType::uint32, "wait-interval"}
    	,
    active_interface(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface>())
	,interface_bfd(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd>())
{
    active_interface->parent = this;
    children["active-interface"] = active_interface;

    interface_bfd->parent = this;
    children["interface-bfd"] = interface_bfd;

    yang_name = "interface"; yang_parent_name = "interface-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::~Interface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| adjacent_neighbor.is_set
	|| backup_designated_router_address.is_set
	|| backup_designated_router_id.is_set
	|| configured_ldp_sync.is_set
	|| dead_interval.is_set
	|| designated_router_address.is_set
	|| designated_router_id.is_set
	|| hello_interval.is_set
	|| interface_address.is_set
	|| interface_authentication_spi.is_set
	|| interface_authentication_transmit.is_set
	|| interface_dc_bitless_ls_as.is_set
	|| interface_encrypted_authentication_transmitted.is_set
	|| interface_encryption_spi.is_set
	|| interface_encryption_transmitted.is_set
	|| interface_ldp_sync.is_set
	|| interface_link_cost.is_set
	|| interface_number.is_set
	|| interface_priority.is_set
	|| interface_references.is_set
	|| interface_retransmission_interval.is_set
	|| interface_router_id.is_set
	|| interface_state.is_set
	|| is_demand_circuit_configured.is_set
	|| is_designated_router.is_set
	|| is_interface_demand_circuit.is_set
	|| is_interface_encryption_enabled.is_set
	|| is_interface_flood_reduction.is_set
	|| is_interface_ip_security_active.is_set
	|| is_interface_ip_security_required.is_set
	|| is_interface_line_up.is_set
	|| is_interface_lsa_filtered.is_set
	|| is_prefix_suppress.is_set
	|| network_lsa_flush_timer.is_set
	|| network_type.is_set
	|| next_hello_time.is_set
	|| ospf_interface_state.is_set
	|| transmission_delay.is_set
	|| wait_interval.is_set
	|| (active_interface !=  nullptr && active_interface->has_data())
	|| (interface_bfd !=  nullptr && interface_bfd->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor.size(); index++)
    {
        if(interface_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(adjacent_neighbor.operation)
	|| is_set(backup_designated_router_address.operation)
	|| is_set(backup_designated_router_id.operation)
	|| is_set(configured_ldp_sync.operation)
	|| is_set(dead_interval.operation)
	|| is_set(designated_router_address.operation)
	|| is_set(designated_router_id.operation)
	|| is_set(hello_interval.operation)
	|| is_set(interface_address.operation)
	|| is_set(interface_authentication_spi.operation)
	|| is_set(interface_authentication_transmit.operation)
	|| is_set(interface_dc_bitless_ls_as.operation)
	|| is_set(interface_encrypted_authentication_transmitted.operation)
	|| is_set(interface_encryption_spi.operation)
	|| is_set(interface_encryption_transmitted.operation)
	|| is_set(interface_ldp_sync.operation)
	|| is_set(interface_link_cost.operation)
	|| is_set(interface_number.operation)
	|| is_set(interface_priority.operation)
	|| is_set(interface_references.operation)
	|| is_set(interface_retransmission_interval.operation)
	|| is_set(interface_router_id.operation)
	|| is_set(interface_state.operation)
	|| is_set(is_demand_circuit_configured.operation)
	|| is_set(is_designated_router.operation)
	|| is_set(is_interface_demand_circuit.operation)
	|| is_set(is_interface_encryption_enabled.operation)
	|| is_set(is_interface_flood_reduction.operation)
	|| is_set(is_interface_ip_security_active.operation)
	|| is_set(is_interface_ip_security_required.operation)
	|| is_set(is_interface_line_up.operation)
	|| is_set(is_interface_lsa_filtered.operation)
	|| is_set(is_prefix_suppress.operation)
	|| is_set(network_lsa_flush_timer.operation)
	|| is_set(network_type.operation)
	|| is_set(next_hello_time.operation)
	|| is_set(ospf_interface_state.operation)
	|| is_set(transmission_delay.operation)
	|| is_set(wait_interval.operation)
	|| (active_interface !=  nullptr && active_interface->has_operation())
	|| (interface_bfd !=  nullptr && interface_bfd->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (adjacent_neighbor.is_set || is_set(adjacent_neighbor.operation)) leaf_name_data.push_back(adjacent_neighbor.get_name_leafdata());
    if (backup_designated_router_address.is_set || is_set(backup_designated_router_address.operation)) leaf_name_data.push_back(backup_designated_router_address.get_name_leafdata());
    if (backup_designated_router_id.is_set || is_set(backup_designated_router_id.operation)) leaf_name_data.push_back(backup_designated_router_id.get_name_leafdata());
    if (configured_ldp_sync.is_set || is_set(configured_ldp_sync.operation)) leaf_name_data.push_back(configured_ldp_sync.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (designated_router_address.is_set || is_set(designated_router_address.operation)) leaf_name_data.push_back(designated_router_address.get_name_leafdata());
    if (designated_router_id.is_set || is_set(designated_router_id.operation)) leaf_name_data.push_back(designated_router_id.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.operation)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_authentication_spi.is_set || is_set(interface_authentication_spi.operation)) leaf_name_data.push_back(interface_authentication_spi.get_name_leafdata());
    if (interface_authentication_transmit.is_set || is_set(interface_authentication_transmit.operation)) leaf_name_data.push_back(interface_authentication_transmit.get_name_leafdata());
    if (interface_dc_bitless_ls_as.is_set || is_set(interface_dc_bitless_ls_as.operation)) leaf_name_data.push_back(interface_dc_bitless_ls_as.get_name_leafdata());
    if (interface_encrypted_authentication_transmitted.is_set || is_set(interface_encrypted_authentication_transmitted.operation)) leaf_name_data.push_back(interface_encrypted_authentication_transmitted.get_name_leafdata());
    if (interface_encryption_spi.is_set || is_set(interface_encryption_spi.operation)) leaf_name_data.push_back(interface_encryption_spi.get_name_leafdata());
    if (interface_encryption_transmitted.is_set || is_set(interface_encryption_transmitted.operation)) leaf_name_data.push_back(interface_encryption_transmitted.get_name_leafdata());
    if (interface_ldp_sync.is_set || is_set(interface_ldp_sync.operation)) leaf_name_data.push_back(interface_ldp_sync.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.operation)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (interface_number.is_set || is_set(interface_number.operation)) leaf_name_data.push_back(interface_number.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.operation)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (interface_references.is_set || is_set(interface_references.operation)) leaf_name_data.push_back(interface_references.get_name_leafdata());
    if (interface_retransmission_interval.is_set || is_set(interface_retransmission_interval.operation)) leaf_name_data.push_back(interface_retransmission_interval.get_name_leafdata());
    if (interface_router_id.is_set || is_set(interface_router_id.operation)) leaf_name_data.push_back(interface_router_id.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.operation)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (is_demand_circuit_configured.is_set || is_set(is_demand_circuit_configured.operation)) leaf_name_data.push_back(is_demand_circuit_configured.get_name_leafdata());
    if (is_designated_router.is_set || is_set(is_designated_router.operation)) leaf_name_data.push_back(is_designated_router.get_name_leafdata());
    if (is_interface_demand_circuit.is_set || is_set(is_interface_demand_circuit.operation)) leaf_name_data.push_back(is_interface_demand_circuit.get_name_leafdata());
    if (is_interface_encryption_enabled.is_set || is_set(is_interface_encryption_enabled.operation)) leaf_name_data.push_back(is_interface_encryption_enabled.get_name_leafdata());
    if (is_interface_flood_reduction.is_set || is_set(is_interface_flood_reduction.operation)) leaf_name_data.push_back(is_interface_flood_reduction.get_name_leafdata());
    if (is_interface_ip_security_active.is_set || is_set(is_interface_ip_security_active.operation)) leaf_name_data.push_back(is_interface_ip_security_active.get_name_leafdata());
    if (is_interface_ip_security_required.is_set || is_set(is_interface_ip_security_required.operation)) leaf_name_data.push_back(is_interface_ip_security_required.get_name_leafdata());
    if (is_interface_line_up.is_set || is_set(is_interface_line_up.operation)) leaf_name_data.push_back(is_interface_line_up.get_name_leafdata());
    if (is_interface_lsa_filtered.is_set || is_set(is_interface_lsa_filtered.operation)) leaf_name_data.push_back(is_interface_lsa_filtered.get_name_leafdata());
    if (is_prefix_suppress.is_set || is_set(is_prefix_suppress.operation)) leaf_name_data.push_back(is_prefix_suppress.get_name_leafdata());
    if (network_lsa_flush_timer.is_set || is_set(network_lsa_flush_timer.operation)) leaf_name_data.push_back(network_lsa_flush_timer.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.operation)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (next_hello_time.is_set || is_set(next_hello_time.operation)) leaf_name_data.push_back(next_hello_time.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.operation)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());
    if (transmission_delay.is_set || is_set(transmission_delay.operation)) leaf_name_data.push_back(transmission_delay.get_name_leafdata());
    if (wait_interval.is_set || is_set(wait_interval.operation)) leaf_name_data.push_back(wait_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-interface")
    {
        if(active_interface != nullptr)
        {
            children["active-interface"] = active_interface;
        }
        else
        {
            active_interface = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface>();
            active_interface->parent = this;
            children["active-interface"] = active_interface;
        }
        return children.at("active-interface");
    }

    if(child_yang_name == "interface-bfd")
    {
        if(interface_bfd != nullptr)
        {
            children["interface-bfd"] = interface_bfd;
        }
        else
        {
            interface_bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd>();
            interface_bfd->parent = this;
            children["interface-bfd"] = interface_bfd;
        }
        return children.at("interface-bfd");
    }

    if(child_yang_name == "interface-neighbor")
    {
        for(auto const & c : interface_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor>();
        c->parent = this;
        interface_neighbor.push_back(std::move(c));
        children[segment_path] = interface_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::get_children()
{
    if(children.find("active-interface") == children.end())
    {
        if(active_interface != nullptr)
        {
            children["active-interface"] = active_interface;
        }
    }

    if(children.find("interface-bfd") == children.end())
    {
        if(interface_bfd != nullptr)
        {
            children["interface-bfd"] = interface_bfd;
        }
    }

    for (auto const & c : interface_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "adjacent-neighbor")
    {
        adjacent_neighbor = value;
    }
    if(value_path == "backup-designated-router-address")
    {
        backup_designated_router_address = value;
    }
    if(value_path == "backup-designated-router-id")
    {
        backup_designated_router_id = value;
    }
    if(value_path == "configured-ldp-sync")
    {
        configured_ldp_sync = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "designated-router-address")
    {
        designated_router_address = value;
    }
    if(value_path == "designated-router-id")
    {
        designated_router_id = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
    }
    if(value_path == "interface-authentication-spi")
    {
        interface_authentication_spi = value;
    }
    if(value_path == "interface-authentication-transmit")
    {
        interface_authentication_transmit = value;
    }
    if(value_path == "interface-dc-bitless-ls-as")
    {
        interface_dc_bitless_ls_as = value;
    }
    if(value_path == "interface-encrypted-authentication-transmitted")
    {
        interface_encrypted_authentication_transmitted = value;
    }
    if(value_path == "interface-encryption-spi")
    {
        interface_encryption_spi = value;
    }
    if(value_path == "interface-encryption-transmitted")
    {
        interface_encryption_transmitted = value;
    }
    if(value_path == "interface-ldp-sync")
    {
        interface_ldp_sync = value;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
    }
    if(value_path == "interface-number")
    {
        interface_number = value;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
    }
    if(value_path == "interface-references")
    {
        interface_references = value;
    }
    if(value_path == "interface-retransmission-interval")
    {
        interface_retransmission_interval = value;
    }
    if(value_path == "interface-router-id")
    {
        interface_router_id = value;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
    }
    if(value_path == "is-demand-circuit-configured")
    {
        is_demand_circuit_configured = value;
    }
    if(value_path == "is-designated-router")
    {
        is_designated_router = value;
    }
    if(value_path == "is-interface-demand-circuit")
    {
        is_interface_demand_circuit = value;
    }
    if(value_path == "is-interface-encryption-enabled")
    {
        is_interface_encryption_enabled = value;
    }
    if(value_path == "is-interface-flood-reduction")
    {
        is_interface_flood_reduction = value;
    }
    if(value_path == "is-interface-ip-security-active")
    {
        is_interface_ip_security_active = value;
    }
    if(value_path == "is-interface-ip-security-required")
    {
        is_interface_ip_security_required = value;
    }
    if(value_path == "is-interface-line-up")
    {
        is_interface_line_up = value;
    }
    if(value_path == "is-interface-lsa-filtered")
    {
        is_interface_lsa_filtered = value;
    }
    if(value_path == "is-prefix-suppress")
    {
        is_prefix_suppress = value;
    }
    if(value_path == "network-lsa-flush-timer")
    {
        network_lsa_flush_timer = value;
    }
    if(value_path == "network-type")
    {
        network_type = value;
    }
    if(value_path == "next-hello-time")
    {
        next_hello_time = value;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
    }
    if(value_path == "transmission-delay")
    {
        transmission_delay = value;
    }
    if(value_path == "wait-interval")
    {
        wait_interval = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface::ActiveInterface()
    :
    flood_queue_length{YType::uint32, "flood-queue-length"},
    flood_scan_length{YType::uint32, "flood-scan-length"},
    interface_area_flood_index{YType::uint32, "interface-area-flood-index"},
    interface_area_next_flood{YType::uint32, "interface-area-next-flood"},
    interface_area_next_flood_index{YType::uint32, "interface-area-next-flood-index"},
    interface_as_flood_index{YType::uint32, "interface-as-flood-index"},
    interface_as_next_flood{YType::uint32, "interface-as-next-flood"},
    interface_as_next_flood_index{YType::uint32, "interface-as-next-flood-index"},
    interface_flood_pacing_timer{YType::uint32, "interface-flood-pacing-timer"},
    interface_link_flood_index{YType::uint32, "interface-link-flood-index"},
    interface_link_next_flood{YType::uint32, "interface-link-next-flood"},
    interface_link_next_index{YType::uint32, "interface-link-next-index"},
    interface_neighbors{YType::uint16, "interface-neighbors"},
    last_flood_time{YType::uint32, "last-flood-time"},
    maximum_flood_length{YType::uint32, "maximum-flood-length"},
    maximum_flood_time{YType::uint32, "maximum-flood-time"},
    suppressed_hellos{YType::uint16, "suppressed-hellos"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "active-interface"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface::~ActiveInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface::has_data() const
{
    return flood_queue_length.is_set
	|| flood_scan_length.is_set
	|| interface_area_flood_index.is_set
	|| interface_area_next_flood.is_set
	|| interface_area_next_flood_index.is_set
	|| interface_as_flood_index.is_set
	|| interface_as_next_flood.is_set
	|| interface_as_next_flood_index.is_set
	|| interface_flood_pacing_timer.is_set
	|| interface_link_flood_index.is_set
	|| interface_link_next_flood.is_set
	|| interface_link_next_index.is_set
	|| interface_neighbors.is_set
	|| last_flood_time.is_set
	|| maximum_flood_length.is_set
	|| maximum_flood_time.is_set
	|| suppressed_hellos.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(flood_queue_length.operation)
	|| is_set(flood_scan_length.operation)
	|| is_set(interface_area_flood_index.operation)
	|| is_set(interface_area_next_flood.operation)
	|| is_set(interface_area_next_flood_index.operation)
	|| is_set(interface_as_flood_index.operation)
	|| is_set(interface_as_next_flood.operation)
	|| is_set(interface_as_next_flood_index.operation)
	|| is_set(interface_flood_pacing_timer.operation)
	|| is_set(interface_link_flood_index.operation)
	|| is_set(interface_link_next_flood.operation)
	|| is_set(interface_link_next_index.operation)
	|| is_set(interface_neighbors.operation)
	|| is_set(last_flood_time.operation)
	|| is_set(maximum_flood_length.operation)
	|| is_set(maximum_flood_time.operation)
	|| is_set(suppressed_hellos.operation)
	|| is_set(wait_time.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interface";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveInterface' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood_queue_length.is_set || is_set(flood_queue_length.operation)) leaf_name_data.push_back(flood_queue_length.get_name_leafdata());
    if (flood_scan_length.is_set || is_set(flood_scan_length.operation)) leaf_name_data.push_back(flood_scan_length.get_name_leafdata());
    if (interface_area_flood_index.is_set || is_set(interface_area_flood_index.operation)) leaf_name_data.push_back(interface_area_flood_index.get_name_leafdata());
    if (interface_area_next_flood.is_set || is_set(interface_area_next_flood.operation)) leaf_name_data.push_back(interface_area_next_flood.get_name_leafdata());
    if (interface_area_next_flood_index.is_set || is_set(interface_area_next_flood_index.operation)) leaf_name_data.push_back(interface_area_next_flood_index.get_name_leafdata());
    if (interface_as_flood_index.is_set || is_set(interface_as_flood_index.operation)) leaf_name_data.push_back(interface_as_flood_index.get_name_leafdata());
    if (interface_as_next_flood.is_set || is_set(interface_as_next_flood.operation)) leaf_name_data.push_back(interface_as_next_flood.get_name_leafdata());
    if (interface_as_next_flood_index.is_set || is_set(interface_as_next_flood_index.operation)) leaf_name_data.push_back(interface_as_next_flood_index.get_name_leafdata());
    if (interface_flood_pacing_timer.is_set || is_set(interface_flood_pacing_timer.operation)) leaf_name_data.push_back(interface_flood_pacing_timer.get_name_leafdata());
    if (interface_link_flood_index.is_set || is_set(interface_link_flood_index.operation)) leaf_name_data.push_back(interface_link_flood_index.get_name_leafdata());
    if (interface_link_next_flood.is_set || is_set(interface_link_next_flood.operation)) leaf_name_data.push_back(interface_link_next_flood.get_name_leafdata());
    if (interface_link_next_index.is_set || is_set(interface_link_next_index.operation)) leaf_name_data.push_back(interface_link_next_index.get_name_leafdata());
    if (interface_neighbors.is_set || is_set(interface_neighbors.operation)) leaf_name_data.push_back(interface_neighbors.get_name_leafdata());
    if (last_flood_time.is_set || is_set(last_flood_time.operation)) leaf_name_data.push_back(last_flood_time.get_name_leafdata());
    if (maximum_flood_length.is_set || is_set(maximum_flood_length.operation)) leaf_name_data.push_back(maximum_flood_length.get_name_leafdata());
    if (maximum_flood_time.is_set || is_set(maximum_flood_time.operation)) leaf_name_data.push_back(maximum_flood_time.get_name_leafdata());
    if (suppressed_hellos.is_set || is_set(suppressed_hellos.operation)) leaf_name_data.push_back(suppressed_hellos.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.operation)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::ActiveInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flood-queue-length")
    {
        flood_queue_length = value;
    }
    if(value_path == "flood-scan-length")
    {
        flood_scan_length = value;
    }
    if(value_path == "interface-area-flood-index")
    {
        interface_area_flood_index = value;
    }
    if(value_path == "interface-area-next-flood")
    {
        interface_area_next_flood = value;
    }
    if(value_path == "interface-area-next-flood-index")
    {
        interface_area_next_flood_index = value;
    }
    if(value_path == "interface-as-flood-index")
    {
        interface_as_flood_index = value;
    }
    if(value_path == "interface-as-next-flood")
    {
        interface_as_next_flood = value;
    }
    if(value_path == "interface-as-next-flood-index")
    {
        interface_as_next_flood_index = value;
    }
    if(value_path == "interface-flood-pacing-timer")
    {
        interface_flood_pacing_timer = value;
    }
    if(value_path == "interface-link-flood-index")
    {
        interface_link_flood_index = value;
    }
    if(value_path == "interface-link-next-flood")
    {
        interface_link_next_flood = value;
    }
    if(value_path == "interface-link-next-index")
    {
        interface_link_next_index = value;
    }
    if(value_path == "interface-neighbors")
    {
        interface_neighbors = value;
    }
    if(value_path == "last-flood-time")
    {
        last_flood_time = value;
    }
    if(value_path == "maximum-flood-length")
    {
        maximum_flood_length = value;
    }
    if(value_path == "maximum-flood-time")
    {
        maximum_flood_time = value;
    }
    if(value_path == "suppressed-hellos")
    {
        suppressed_hellos = value;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd::InterfaceBfd()
    :
    bfd_detection_multiplier{YType::uint32, "bfd-detection-multiplier"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"}
{
    yang_name = "interface-bfd"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd::~InterfaceBfd()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd::has_data() const
{
    return bfd_detection_multiplier.is_set
	|| bfd_interval.is_set
	|| bfd_intf_enable_mode.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_detection_multiplier.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_intf_enable_mode.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-bfd";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBfd' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_detection_multiplier.is_set || is_set(bfd_detection_multiplier.operation)) leaf_name_data.push_back(bfd_detection_multiplier.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.operation)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceBfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-detection-multiplier")
    {
        bfd_detection_multiplier = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor::InterfaceNeighbor()
    :
    interface_neighbor_cost{YType::uint32, "interface-neighbor-cost"},
    interface_neighbor_id{YType::str, "interface-neighbor-id"},
    is_hello_suppressed{YType::boolean, "is-hello-suppressed"},
    is_neighbor_bdr{YType::boolean, "is-neighbor-bdr"},
    is_neighbor_dr{YType::boolean, "is-neighbor-dr"}
{
    yang_name = "interface-neighbor"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor::~InterfaceNeighbor()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor::has_data() const
{
    return interface_neighbor_cost.is_set
	|| interface_neighbor_id.is_set
	|| is_hello_suppressed.is_set
	|| is_neighbor_bdr.is_set
	|| is_neighbor_dr.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_neighbor_cost.operation)
	|| is_set(interface_neighbor_id.operation)
	|| is_set(is_hello_suppressed.operation)
	|| is_set(is_neighbor_bdr.operation)
	|| is_set(is_neighbor_dr.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceNeighbor' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_cost.is_set || is_set(interface_neighbor_cost.operation)) leaf_name_data.push_back(interface_neighbor_cost.get_name_leafdata());
    if (interface_neighbor_id.is_set || is_set(interface_neighbor_id.operation)) leaf_name_data.push_back(interface_neighbor_id.get_name_leafdata());
    if (is_hello_suppressed.is_set || is_set(is_hello_suppressed.operation)) leaf_name_data.push_back(is_hello_suppressed.get_name_leafdata());
    if (is_neighbor_bdr.is_set || is_set(is_neighbor_bdr.operation)) leaf_name_data.push_back(is_neighbor_bdr.get_name_leafdata());
    if (is_neighbor_dr.is_set || is_set(is_neighbor_dr.operation)) leaf_name_data.push_back(is_neighbor_dr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::InterfaceTable::Interface::InterfaceNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-neighbor-cost")
    {
        interface_neighbor_cost = value;
    }
    if(value_path == "interface-neighbor-id")
    {
        interface_neighbor_id = value;
    }
    if(value_path == "is-hello-suppressed")
    {
        is_hello_suppressed = value;
    }
    if(value_path == "is-neighbor-bdr")
    {
        is_neighbor_bdr = value;
    }
    if(value_path == "is-neighbor-dr")
    {
        is_neighbor_dr = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::FloodListTable()
{
    yang_name = "flood-list-table"; yang_parent_name = "area";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::~FloodListTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::has_data() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::has_operation() const
{
    for (std::size_t index=0; index<flood.size(); index++)
    {
        if(flood[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-list-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodListTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flood")
    {
        for(auto const & c : flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood>();
        c->parent = this;
        flood.push_back(std::move(c));
        children[segment_path] = flood.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::get_children()
{
    for (auto const & c : flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::Flood()
    :
    interface_name{YType::str, "interface-name"},
    ls_transmission_timer{YType::uint32, "ls-transmission-timer"},
    queue_length{YType::uint32, "queue-length"}
{
    yang_name = "flood"; yang_parent_name = "flood-list-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::~Flood()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::has_data() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_flood.size(); index++)
    {
        if(link_flood[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| ls_transmission_timer.is_set
	|| queue_length.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::has_operation() const
{
    for (std::size_t index=0; index<area_flood.size(); index++)
    {
        if(area_flood[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<as_flood.size(); index++)
    {
        if(as_flood[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_flood.size(); index++)
    {
        if(link_flood[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(ls_transmission_timer.operation)
	|| is_set(queue_length.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flood' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_transmission_timer.is_set || is_set(ls_transmission_timer.operation)) leaf_name_data.push_back(ls_transmission_timer.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.operation)) leaf_name_data.push_back(queue_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-flood")
    {
        for(auto const & c : area_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood>();
        c->parent = this;
        area_flood.push_back(std::move(c));
        children[segment_path] = area_flood.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "as-flood")
    {
        for(auto const & c : as_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood>();
        c->parent = this;
        as_flood.push_back(std::move(c));
        children[segment_path] = as_flood.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "link-flood")
    {
        for(auto const & c : link_flood)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood>();
        c->parent = this;
        link_flood.push_back(std::move(c));
        children[segment_path] = link_flood.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::get_children()
{
    for (auto const & c : area_flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : as_flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : link_flood)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ls-transmission-timer")
    {
        ls_transmission_timer = value;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood::LinkFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "link-flood"; yang_parent_name = "flood";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood::~LinkFlood()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flood";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkFlood' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.operation)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::LinkFlood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood::AreaFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "area-flood"; yang_parent_name = "flood";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood::~AreaFlood()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-flood";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaFlood' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.operation)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AreaFlood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood::AsFlood()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "as-flood"; yang_parent_name = "flood";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood::~AsFlood()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-flood";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsFlood' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.operation)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::FloodListTable::Flood::AsFlood::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::RetransmissionListTable()
{
    yang_name = "retransmission-list-table"; yang_parent_name = "area";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::~RetransmissionListTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-list-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionListTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "retransmission")
    {
        for(auto const & c : retransmission)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission>();
        c->parent = this;
        retransmission.push_back(std::move(c));
        children[segment_path] = retransmission.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::get_children()
{
    for (auto const & c : retransmission)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    is_retransmission_sham_link{YType::boolean, "is-retransmission-sham-link"},
    is_retransmissionvirtual_link{YType::boolean, "is-retransmissionvirtual-link"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_length{YType::uint32, "retransmission-length"},
    retransmission_neighbor_address{YType::str, "retransmission-neighbor-address"},
    retransmission_sham_link_id{YType::uint32, "retransmission-sham-link-id"},
    retransmission_timer{YType::uint32, "retransmission-timer"},
    retransmissionvirtual_link_id{YType::uint32, "retransmissionvirtual-link-id"}
{
    yang_name = "retransmission"; yang_parent_name = "retransmission-list-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::~Retransmission()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::has_data() const
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
    for (std::size_t index=0; index<retransmissionvirtual_link_db.size(); index++)
    {
        if(retransmissionvirtual_link_db[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_retransmission_sham_link.is_set
	|| is_retransmissionvirtual_link.is_set
	|| neighbor_address.is_set
	|| retransmission_length.is_set
	|| retransmission_neighbor_address.is_set
	|| retransmission_sham_link_id.is_set
	|| retransmission_timer.is_set
	|| retransmissionvirtual_link_id.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::has_operation() const
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
    for (std::size_t index=0; index<retransmissionvirtual_link_db.size(); index++)
    {
        if(retransmissionvirtual_link_db[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_retransmission_sham_link.operation)
	|| is_set(is_retransmissionvirtual_link.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(retransmission_length.operation)
	|| is_set(retransmission_neighbor_address.operation)
	|| is_set(retransmission_sham_link_id.operation)
	|| is_set(retransmission_timer.operation)
	|| is_set(retransmissionvirtual_link_id.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmission' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_retransmission_sham_link.is_set || is_set(is_retransmission_sham_link.operation)) leaf_name_data.push_back(is_retransmission_sham_link.get_name_leafdata());
    if (is_retransmissionvirtual_link.is_set || is_set(is_retransmissionvirtual_link.operation)) leaf_name_data.push_back(is_retransmissionvirtual_link.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_length.is_set || is_set(retransmission_length.operation)) leaf_name_data.push_back(retransmission_length.get_name_leafdata());
    if (retransmission_neighbor_address.is_set || is_set(retransmission_neighbor_address.operation)) leaf_name_data.push_back(retransmission_neighbor_address.get_name_leafdata());
    if (retransmission_sham_link_id.is_set || is_set(retransmission_sham_link_id.operation)) leaf_name_data.push_back(retransmission_sham_link_id.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.operation)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());
    if (retransmissionvirtual_link_id.is_set || is_set(retransmissionvirtual_link_id.operation)) leaf_name_data.push_back(retransmissionvirtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "retransmission-area-db")
    {
        for(auto const & c : retransmission_area_db)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb>();
        c->parent = this;
        retransmission_area_db.push_back(std::move(c));
        children[segment_path] = retransmission_area_db.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "retransmission-asdb")
    {
        for(auto const & c : retransmission_asdb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(std::move(c));
        children[segment_path] = retransmission_asdb.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "retransmissionvirtual-link-db")
    {
        for(auto const & c : retransmissionvirtual_link_db)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb>();
        c->parent = this;
        retransmissionvirtual_link_db.push_back(std::move(c));
        children[segment_path] = retransmissionvirtual_link_db.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::get_children()
{
    for (auto const & c : retransmission_area_db)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : retransmission_asdb)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : retransmissionvirtual_link_db)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-retransmission-sham-link")
    {
        is_retransmission_sham_link = value;
    }
    if(value_path == "is-retransmissionvirtual-link")
    {
        is_retransmissionvirtual_link = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "retransmission-length")
    {
        retransmission_length = value;
    }
    if(value_path == "retransmission-neighbor-address")
    {
        retransmission_neighbor_address = value;
    }
    if(value_path == "retransmission-sham-link-id")
    {
        retransmission_sham_link_id = value;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
    }
    if(value_path == "retransmissionvirtual-link-id")
    {
        retransmissionvirtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb::RetransmissionvirtualLinkDb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "retransmissionvirtual-link-db"; yang_parent_name = "retransmission";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb::~RetransmissionvirtualLinkDb()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissionvirtual-link-db";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionvirtualLinkDb' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.operation)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionvirtualLinkDb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionAreaDb' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.operation)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_advertising_router{YType::str, "header-advertising-router"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{
    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_advertising_router.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_lsa_type.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(operation)
	|| is_set(header_advertising_router.operation)
	|| is_set(header_lsa_age.operation)
	|| is_set(header_lsa_id.operation)
	|| is_set(header_lsa_type.operation)
	|| is_set(header_sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RetransmissionAsdb' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_advertising_router.is_set || is_set(header_advertising_router.operation)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.operation)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.operation)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_lsa_type.is_set || is_set(header_lsa_type.operation)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.operation)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::RetransmissionListTable::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
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

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::DatabaseTable()
    :
    lsa_internal_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable>())
	,lsa_table(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable>())
{
    lsa_internal_table->parent = this;
    children["lsa-internal-table"] = lsa_internal_table;

    lsa_table->parent = this;
    children["lsa-table"] = lsa_table;

    yang_name = "database-table"; yang_parent_name = "area";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::~DatabaseTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::has_data() const
{
    return (lsa_internal_table !=  nullptr && lsa_internal_table->has_data())
	|| (lsa_table !=  nullptr && lsa_table->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::has_operation() const
{
    return is_set(operation)
	|| (lsa_internal_table !=  nullptr && lsa_internal_table->has_operation())
	|| (lsa_table !=  nullptr && lsa_table->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-internal-table")
    {
        if(lsa_internal_table != nullptr)
        {
            children["lsa-internal-table"] = lsa_internal_table;
        }
        else
        {
            lsa_internal_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable>();
            lsa_internal_table->parent = this;
            children["lsa-internal-table"] = lsa_internal_table;
        }
        return children.at("lsa-internal-table");
    }

    if(child_yang_name == "lsa-table")
    {
        if(lsa_table != nullptr)
        {
            children["lsa-table"] = lsa_table;
        }
        else
        {
            lsa_table = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable>();
            lsa_table->parent = this;
            children["lsa-table"] = lsa_table;
        }
        return children.at("lsa-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::get_children()
{
    if(children.find("lsa-internal-table") == children.end())
    {
        if(lsa_internal_table != nullptr)
        {
            children["lsa-internal-table"] = lsa_internal_table;
        }
    }

    if(children.find("lsa-table") == children.end())
    {
        if(lsa_table != nullptr)
        {
            children["lsa-table"] = lsa_table;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::LsaTable()
{
    yang_name = "lsa-table"; yang_parent_name = "database-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::~LsaTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa")
    {
        for(auto const & c : lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa>();
        c->parent = this;
        lsa.push_back(std::move(c));
        children[segment_path] = lsa.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::get_children()
{
    for (auto const & c : lsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::Lsa()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    interface_name{YType::str, "interface-name"},
    ls_id{YType::int32, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo>())
{
    lsa_info->parent = this;
    children["lsa-info"] = lsa_info;

    yang_name = "lsa"; yang_parent_name = "lsa-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| interface_name.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_info !=  nullptr && lsa_info->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(area_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(ls_id.operation)
	|| is_set(ls_type.operation)
	|| (lsa_info !=  nullptr && lsa_info->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsa' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-info")
    {
        if(lsa_info != nullptr)
        {
            children["lsa-info"] = lsa_info;
        }
        else
        {
            lsa_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo>();
            lsa_info->parent = this;
            children["lsa-info"] = lsa_info;
        }
        return children.at("lsa-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::get_children()
{
    if(children.find("lsa-info") == children.end())
    {
        if(lsa_info != nullptr)
        {
            children["lsa-info"] = lsa_info;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaInfo()
    :
    lsa_info_type{YType::enumeration, "lsa-info-type"}
    	,
    external_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType>())
	,grace_lsa(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa>())
	,inter_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType>())
	,inter_area_router_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType>())
	,intra_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>())
	,link_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType>())
	,lsa_summary_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo>())
	,network_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType>())
	,nssalsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType>())
	,router_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType>())
	,unknown_area_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType>())
	,unknown_aslsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType>())
	,unknown_link_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType>())
	,unknown_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType>())
{
    external_lsa_type->parent = this;
    children["external-lsa-type"] = external_lsa_type;

    grace_lsa->parent = this;
    children["grace-lsa"] = grace_lsa;

    inter_area_prefix_lsa_type->parent = this;
    children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;

    inter_area_router_lsa_type->parent = this;
    children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;

    intra_area_prefix_lsa_type->parent = this;
    children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;

    link_lsa_type->parent = this;
    children["link-lsa-type"] = link_lsa_type;

    lsa_summary_info->parent = this;
    children["lsa-summary-info"] = lsa_summary_info;

    network_lsa_type->parent = this;
    children["network-lsa-type"] = network_lsa_type;

    nssalsa_type->parent = this;
    children["nssalsa-type"] = nssalsa_type;

    router_lsa_type->parent = this;
    children["router-lsa-type"] = router_lsa_type;

    unknown_area_lsa_type->parent = this;
    children["unknown-area-lsa-type"] = unknown_area_lsa_type;

    unknown_aslsa_type->parent = this;
    children["unknown-aslsa-type"] = unknown_aslsa_type;

    unknown_link_lsa_type->parent = this;
    children["unknown-link-lsa-type"] = unknown_link_lsa_type;

    unknown_lsa_type->parent = this;
    children["unknown-lsa-type"] = unknown_lsa_type;

    yang_name = "lsa-info"; yang_parent_name = "lsa";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::~LsaInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::has_data() const
{
    return lsa_info_type.is_set
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (grace_lsa !=  nullptr && grace_lsa->has_data())
	|| (inter_area_prefix_lsa_type !=  nullptr && inter_area_prefix_lsa_type->has_data())
	|| (inter_area_router_lsa_type !=  nullptr && inter_area_router_lsa_type->has_data())
	|| (intra_area_prefix_lsa_type !=  nullptr && intra_area_prefix_lsa_type->has_data())
	|| (link_lsa_type !=  nullptr && link_lsa_type->has_data())
	|| (lsa_summary_info !=  nullptr && lsa_summary_info->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (nssalsa_type !=  nullptr && nssalsa_type->has_data())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (unknown_area_lsa_type !=  nullptr && unknown_area_lsa_type->has_data())
	|| (unknown_aslsa_type !=  nullptr && unknown_aslsa_type->has_data())
	|| (unknown_link_lsa_type !=  nullptr && unknown_link_lsa_type->has_data())
	|| (unknown_lsa_type !=  nullptr && unknown_lsa_type->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_info_type.operation)
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (grace_lsa !=  nullptr && grace_lsa->has_operation())
	|| (inter_area_prefix_lsa_type !=  nullptr && inter_area_prefix_lsa_type->has_operation())
	|| (inter_area_router_lsa_type !=  nullptr && inter_area_router_lsa_type->has_operation())
	|| (intra_area_prefix_lsa_type !=  nullptr && intra_area_prefix_lsa_type->has_operation())
	|| (link_lsa_type !=  nullptr && link_lsa_type->has_operation())
	|| (lsa_summary_info !=  nullptr && lsa_summary_info->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (nssalsa_type !=  nullptr && nssalsa_type->has_operation())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (unknown_area_lsa_type !=  nullptr && unknown_area_lsa_type->has_operation())
	|| (unknown_aslsa_type !=  nullptr && unknown_aslsa_type->has_operation())
	|| (unknown_link_lsa_type !=  nullptr && unknown_link_lsa_type->has_operation())
	|| (unknown_lsa_type !=  nullptr && unknown_lsa_type->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaInfo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_info_type.is_set || is_set(lsa_info_type.operation)) leaf_name_data.push_back(lsa_info_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type != nullptr)
        {
            children["external-lsa-type"] = external_lsa_type;
        }
        else
        {
            external_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType>();
            external_lsa_type->parent = this;
            children["external-lsa-type"] = external_lsa_type;
        }
        return children.at("external-lsa-type");
    }

    if(child_yang_name == "grace-lsa")
    {
        if(grace_lsa != nullptr)
        {
            children["grace-lsa"] = grace_lsa;
        }
        else
        {
            grace_lsa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa>();
            grace_lsa->parent = this;
            children["grace-lsa"] = grace_lsa;
        }
        return children.at("grace-lsa");
    }

    if(child_yang_name == "inter-area-prefix-lsa-type")
    {
        if(inter_area_prefix_lsa_type != nullptr)
        {
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
        else
        {
            inter_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType>();
            inter_area_prefix_lsa_type->parent = this;
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
        return children.at("inter-area-prefix-lsa-type");
    }

    if(child_yang_name == "inter-area-router-lsa-type")
    {
        if(inter_area_router_lsa_type != nullptr)
        {
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
        else
        {
            inter_area_router_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType>();
            inter_area_router_lsa_type->parent = this;
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
        return children.at("inter-area-router-lsa-type");
    }

    if(child_yang_name == "intra-area-prefix-lsa-type")
    {
        if(intra_area_prefix_lsa_type != nullptr)
        {
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
        else
        {
            intra_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>();
            intra_area_prefix_lsa_type->parent = this;
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
        return children.at("intra-area-prefix-lsa-type");
    }

    if(child_yang_name == "link-lsa-type")
    {
        if(link_lsa_type != nullptr)
        {
            children["link-lsa-type"] = link_lsa_type;
        }
        else
        {
            link_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType>();
            link_lsa_type->parent = this;
            children["link-lsa-type"] = link_lsa_type;
        }
        return children.at("link-lsa-type");
    }

    if(child_yang_name == "lsa-summary-info")
    {
        if(lsa_summary_info != nullptr)
        {
            children["lsa-summary-info"] = lsa_summary_info;
        }
        else
        {
            lsa_summary_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo>();
            lsa_summary_info->parent = this;
            children["lsa-summary-info"] = lsa_summary_info;
        }
        return children.at("lsa-summary-info");
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type != nullptr)
        {
            children["network-lsa-type"] = network_lsa_type;
        }
        else
        {
            network_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType>();
            network_lsa_type->parent = this;
            children["network-lsa-type"] = network_lsa_type;
        }
        return children.at("network-lsa-type");
    }

    if(child_yang_name == "nssalsa-type")
    {
        if(nssalsa_type != nullptr)
        {
            children["nssalsa-type"] = nssalsa_type;
        }
        else
        {
            nssalsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType>();
            nssalsa_type->parent = this;
            children["nssalsa-type"] = nssalsa_type;
        }
        return children.at("nssalsa-type");
    }

    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type != nullptr)
        {
            children["router-lsa-type"] = router_lsa_type;
        }
        else
        {
            router_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType>();
            router_lsa_type->parent = this;
            children["router-lsa-type"] = router_lsa_type;
        }
        return children.at("router-lsa-type");
    }

    if(child_yang_name == "unknown-area-lsa-type")
    {
        if(unknown_area_lsa_type != nullptr)
        {
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
        else
        {
            unknown_area_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType>();
            unknown_area_lsa_type->parent = this;
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
        return children.at("unknown-area-lsa-type");
    }

    if(child_yang_name == "unknown-aslsa-type")
    {
        if(unknown_aslsa_type != nullptr)
        {
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
        else
        {
            unknown_aslsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType>();
            unknown_aslsa_type->parent = this;
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
        return children.at("unknown-aslsa-type");
    }

    if(child_yang_name == "unknown-link-lsa-type")
    {
        if(unknown_link_lsa_type != nullptr)
        {
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
        else
        {
            unknown_link_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType>();
            unknown_link_lsa_type->parent = this;
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
        return children.at("unknown-link-lsa-type");
    }

    if(child_yang_name == "unknown-lsa-type")
    {
        if(unknown_lsa_type != nullptr)
        {
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
        else
        {
            unknown_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType>();
            unknown_lsa_type->parent = this;
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
        return children.at("unknown-lsa-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::get_children()
{
    if(children.find("external-lsa-type") == children.end())
    {
        if(external_lsa_type != nullptr)
        {
            children["external-lsa-type"] = external_lsa_type;
        }
    }

    if(children.find("grace-lsa") == children.end())
    {
        if(grace_lsa != nullptr)
        {
            children["grace-lsa"] = grace_lsa;
        }
    }

    if(children.find("inter-area-prefix-lsa-type") == children.end())
    {
        if(inter_area_prefix_lsa_type != nullptr)
        {
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
    }

    if(children.find("inter-area-router-lsa-type") == children.end())
    {
        if(inter_area_router_lsa_type != nullptr)
        {
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
    }

    if(children.find("intra-area-prefix-lsa-type") == children.end())
    {
        if(intra_area_prefix_lsa_type != nullptr)
        {
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
    }

    if(children.find("link-lsa-type") == children.end())
    {
        if(link_lsa_type != nullptr)
        {
            children["link-lsa-type"] = link_lsa_type;
        }
    }

    if(children.find("lsa-summary-info") == children.end())
    {
        if(lsa_summary_info != nullptr)
        {
            children["lsa-summary-info"] = lsa_summary_info;
        }
    }

    if(children.find("network-lsa-type") == children.end())
    {
        if(network_lsa_type != nullptr)
        {
            children["network-lsa-type"] = network_lsa_type;
        }
    }

    if(children.find("nssalsa-type") == children.end())
    {
        if(nssalsa_type != nullptr)
        {
            children["nssalsa-type"] = nssalsa_type;
        }
    }

    if(children.find("router-lsa-type") == children.end())
    {
        if(router_lsa_type != nullptr)
        {
            children["router-lsa-type"] = router_lsa_type;
        }
    }

    if(children.find("unknown-area-lsa-type") == children.end())
    {
        if(unknown_area_lsa_type != nullptr)
        {
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
    }

    if(children.find("unknown-aslsa-type") == children.end())
    {
        if(unknown_aslsa_type != nullptr)
        {
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
    }

    if(children.find("unknown-link-lsa-type") == children.end())
    {
        if(unknown_link_lsa_type != nullptr)
        {
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
    }

    if(children.find("unknown-lsa-type") == children.end())
    {
        if(unknown_lsa_type != nullptr)
        {
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-info-type")
    {
        lsa_info_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaSummaryInfo()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    links{YType::uint16, "links"},
    lsa_router_id{YType::uint32, "lsa-router-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    reference_lsa_id{YType::uint32, "reference-lsa-id"},
    reference_type{YType::uint16, "reference-type"},
    router_la_bits{YType::uint8, "router-la-bits"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "lsa-summary-info"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::~LsaSummaryInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| links.is_set
	|| lsa_router_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| reference_lsa_id.is_set
	|| reference_type.is_set
	|| router_la_bits.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(links.operation)
	|| is_set(lsa_router_id.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(reference_lsa_id.operation)
	|| is_set(reference_type.operation)
	|| is_set(router_la_bits.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaSummaryInfo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());
    if (lsa_router_id.is_set || is_set(lsa_router_id.operation)) leaf_name_data.push_back(lsa_router_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (reference_lsa_id.is_set || is_set(reference_lsa_id.operation)) leaf_name_data.push_back(reference_lsa_id.get_name_leafdata());
    if (reference_type.is_set || is_set(reference_type.operation)) leaf_name_data.push_back(reference_type.get_name_leafdata());
    if (router_la_bits.is_set || is_set(router_la_bits.operation)) leaf_name_data.push_back(router_la_bits.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "links")
    {
        links = value;
    }
    if(value_path == "lsa-router-id")
    {
        lsa_router_id = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "reference-lsa-id")
    {
        reference_lsa_id = value;
    }
    if(value_path == "reference-type")
    {
        reference_type = value;
    }
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "lsa-summary-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "lsa-summary-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RouterLsaType()
    :
    router_la_bits{YType::uint8, "router-la-bits"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>())
	,rpf_path(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    rpf_path->parent = this;
    children["rpf-path"] = rpf_path;

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::~RouterLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return router_la_bits.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (rpf_path !=  nullptr && rpf_path->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(router_la_bits.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (rpf_path !=  nullptr && rpf_path->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_la_bits.is_set || is_set(router_la_bits.operation)) leaf_name_data.push_back(router_la_bits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(std::move(c));
        children[segment_path] = link.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    if(child_yang_name == "rpf-path")
    {
        if(rpf_path != nullptr)
        {
            children["rpf-path"] = rpf_path;
        }
        else
        {
            rpf_path = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath>();
            rpf_path->parent = this;
            children["rpf-path"] = rpf_path;
        }
        return children.at("rpf-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::get_children()
{
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    if(children.find("rpf-path") == children.end())
    {
        if(rpf_path != nullptr)
        {
            children["rpf-path"] = rpf_path;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::RpfPath()
    :
    interface_name{YType::str, "interface-name"},
    rpf_multicast_next_hop{YType::uint32, "rpf-multicast-next-hop"}
{
    yang_name = "rpf-path"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::~RpfPath()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_data() const
{
    return interface_name.is_set
	|| rpf_multicast_next_hop.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(rpf_multicast_next_hop.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfPath' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rpf_multicast_next_hop.is_set || is_set(rpf_multicast_next_hop.operation)) leaf_name_data.push_back(rpf_multicast_next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::RpfPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rpf-multicast-next-hop")
    {
        rpf_multicast_next_hop = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::Link()
    :
    link_interface_id{YType::uint32, "link-interface-id"},
    link_metric{YType::uint16, "link-metric"},
    link_neighbor_interface_id{YType::uint32, "link-neighbor-interface-id"},
    link_neighbor_router_id{YType::uint32, "link-neighbor-router-id"},
    link_type{YType::enumeration, "link-type"}
{
    yang_name = "link"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::~Link()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::has_data() const
{
    return link_interface_id.is_set
	|| link_metric.is_set
	|| link_neighbor_interface_id.is_set
	|| link_neighbor_router_id.is_set
	|| link_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(link_interface_id.operation)
	|| is_set(link_metric.operation)
	|| is_set(link_neighbor_interface_id.operation)
	|| is_set(link_neighbor_router_id.operation)
	|| is_set(link_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_interface_id.is_set || is_set(link_interface_id.operation)) leaf_name_data.push_back(link_interface_id.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.operation)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_neighbor_interface_id.is_set || is_set(link_neighbor_interface_id.operation)) leaf_name_data.push_back(link_neighbor_interface_id.get_name_leafdata());
    if (link_neighbor_router_id.is_set || is_set(link_neighbor_router_id.operation)) leaf_name_data.push_back(link_neighbor_router_id.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::RouterLsaType::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-interface-id")
    {
        link_interface_id = value;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
    }
    if(value_path == "link-neighbor-interface-id")
    {
        link_neighbor_interface_id = value;
    }
    if(value_path == "link-neighbor-router-id")
    {
        link_neighbor_router_id = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::NetworkLsaType()
    :
    neighbor_router{YType::str, "neighbor-router"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::has_data() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::has_operation() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_router.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto neighbor_router_name_datas = neighbor_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), neighbor_router_name_datas.begin(), neighbor_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-router")
    {
        neighbor_router.append(value);
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "network-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "network-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::InterAreaPrefixLsaType()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "inter-area-prefix-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::~InterAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaPrefixLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "inter-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "inter-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::InterAreaRouterLsaType()
    :
    lsa_router_id{YType::uint32, "lsa-router-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "inter-area-router-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::~InterAreaRouterLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_data() const
{
    return lsa_router_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_router_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaRouterLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_router_id.is_set || is_set(lsa_router_id.operation)) leaf_name_data.push_back(lsa_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-router-id")
    {
        lsa_router_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "inter-area-router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "inter-area-router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::ExternalLsaType()
    :
    external_tag{YType::uint32, "external-tag"},
    forwarding_address{YType::str, "forwarding-address"},
    is_forwarding_address_set{YType::boolean, "is-forwarding-address-set"},
    metric_type{YType::enumeration, "metric-type"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"},
    tos_cost{YType::uint32, "tos-cost"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::has_data() const
{
    return external_tag.is_set
	|| forwarding_address.is_set
	|| is_forwarding_address_set.is_set
	|| metric_type.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| tos_cost.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(external_tag.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(is_forwarding_address_set.operation)
	|| is_set(metric_type.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(tos_cost.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_tag.is_set || is_set(external_tag.operation)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (is_forwarding_address_set.is_set || is_set(is_forwarding_address_set.operation)) leaf_name_data.push_back(is_forwarding_address_set.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.operation)) leaf_name_data.push_back(tos_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-tag")
    {
        external_tag = value;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "is-forwarding-address-set")
    {
        is_forwarding_address_set = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "external-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "external-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::NssalsaType()
    :
    external_tag{YType::uint32, "external-tag"},
    forwarding_address{YType::str, "forwarding-address"},
    is_forwarding_address_set{YType::boolean, "is-forwarding-address-set"},
    metric_type{YType::enumeration, "metric-type"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"},
    tos_cost{YType::uint32, "tos-cost"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "nssalsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::~NssalsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::has_data() const
{
    return external_tag.is_set
	|| forwarding_address.is_set
	|| is_forwarding_address_set.is_set
	|| metric_type.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| tos_cost.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(external_tag.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(is_forwarding_address_set.operation)
	|| is_set(metric_type.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(tos_cost.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssalsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssalsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_tag.is_set || is_set(external_tag.operation)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (is_forwarding_address_set.is_set || is_set(is_forwarding_address_set.operation)) leaf_name_data.push_back(is_forwarding_address_set.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.operation)) leaf_name_data.push_back(tos_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-tag")
    {
        external_tag = value;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "is-forwarding-address-set")
    {
        is_forwarding_address_set = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "nssalsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "nssalsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::NssalsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    lsa_link_local{YType::str, "lsa-link-local"},
    router_priority{YType::uint8, "router-priority"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "link-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::~LinkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| lsa_link_local.is_set
	|| router_priority.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(lsa_link_local.operation)
	|| is_set(router_priority.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (lsa_link_local.is_set || is_set(lsa_link_local.operation)) leaf_name_data.push_back(lsa_link_local.get_name_leafdata());
    if (router_priority.is_set || is_set(router_priority.operation)) leaf_name_data.push_back(router_priority.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "lsa-link-local")
    {
        lsa_link_local = value;
    }
    if(value_path == "router-priority")
    {
        router_priority = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::Prefix()
    :
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    prefix{YType::str, "prefix"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "prefix"; yang_parent_name = "link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_data() const
{
    return ospfv3_prefix_length.is_set
	|| ospfv3_prefix_metric.is_set
	|| ospfv3_prefix_options.is_set
	|| prefix.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfv3_prefix_length.operation)
	|| is_set(ospfv3_prefix_metric.operation)
	|| is_set(ospfv3_prefix_options.operation)
	|| is_set(prefix.operation)
	|| is_set(priority.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfv3_prefix_length.is_set || is_set(ospfv3_prefix_length.operation)) leaf_name_data.push_back(ospfv3_prefix_length.get_name_leafdata());
    if (ospfv3_prefix_metric.is_set || is_set(ospfv3_prefix_metric.operation)) leaf_name_data.push_back(ospfv3_prefix_metric.get_name_leafdata());
    if (ospfv3_prefix_options.is_set || is_set(ospfv3_prefix_options.operation)) leaf_name_data.push_back(ospfv3_prefix_options.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::LinkLsaType::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfv3-prefix-length")
    {
        ospfv3_prefix_length = value;
    }
    if(value_path == "ospfv3-prefix-metric")
    {
        ospfv3_prefix_metric = value;
    }
    if(value_path == "ospfv3-prefix-options")
    {
        ospfv3_prefix_options = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::IntraAreaPrefixLsaType()
    :
    reference_advertised_router{YType::str, "reference-advertised-router"},
    reference_lsa_id{YType::uint32, "reference-lsa-id"},
    reference_type{YType::enumeration, "reference-type"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "intra-area-prefix-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::~IntraAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return reference_advertised_router.is_set
	|| reference_lsa_id.is_set
	|| reference_type.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(reference_advertised_router.operation)
	|| is_set(reference_lsa_id.operation)
	|| is_set(reference_type.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IntraAreaPrefixLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reference_advertised_router.is_set || is_set(reference_advertised_router.operation)) leaf_name_data.push_back(reference_advertised_router.get_name_leafdata());
    if (reference_lsa_id.is_set || is_set(reference_lsa_id.operation)) leaf_name_data.push_back(reference_lsa_id.get_name_leafdata());
    if (reference_type.is_set || is_set(reference_type.operation)) leaf_name_data.push_back(reference_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reference-advertised-router")
    {
        reference_advertised_router = value;
    }
    if(value_path == "reference-lsa-id")
    {
        reference_lsa_id = value;
    }
    if(value_path == "reference-type")
    {
        reference_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "intra-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "intra-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::Prefix()
    :
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    prefix{YType::str, "prefix"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "prefix"; yang_parent_name = "intra-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_data() const
{
    return ospfv3_prefix_length.is_set
	|| ospfv3_prefix_metric.is_set
	|| ospfv3_prefix_options.is_set
	|| prefix.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfv3_prefix_length.operation)
	|| is_set(ospfv3_prefix_metric.operation)
	|| is_set(ospfv3_prefix_options.operation)
	|| is_set(prefix.operation)
	|| is_set(priority.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfv3_prefix_length.is_set || is_set(ospfv3_prefix_length.operation)) leaf_name_data.push_back(ospfv3_prefix_length.get_name_leafdata());
    if (ospfv3_prefix_metric.is_set || is_set(ospfv3_prefix_metric.operation)) leaf_name_data.push_back(ospfv3_prefix_metric.get_name_leafdata());
    if (ospfv3_prefix_options.is_set || is_set(ospfv3_prefix_options.operation)) leaf_name_data.push_back(ospfv3_prefix_options.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfv3-prefix-length")
    {
        ospfv3_prefix_length = value;
    }
    if(value_path == "ospfv3-prefix-metric")
    {
        ospfv3_prefix_metric = value;
    }
    if(value_path == "ospfv3-prefix-options")
    {
        ospfv3_prefix_options = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::GraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "grace-lsa"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::~GraceLsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::has_operation() const
{
    return is_set(operation)
	|| is_set(grace_period.operation)
	|| is_set(grace_reason.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grace-lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GraceLsa' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.operation)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.operation)) leaf_name_data.push_back(grace_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "grace-lsa";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "grace-lsa";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::GraceLsa::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::UnknownLinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-link-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::~UnknownLinkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-link-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownLinkLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::UnknownAreaLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-area-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::~UnknownAreaLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-area-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAreaLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-area-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-area-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::UnknownAslsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-aslsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::~UnknownAslsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-aslsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAslsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-aslsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-aslsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::UnknownLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::~UnknownLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::LsaInternalTable()
{
    yang_name = "lsa-internal-table"; yang_parent_name = "database-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::~LsaInternalTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaInternalTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa")
    {
        for(auto const & c : lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa>();
        c->parent = this;
        lsa.push_back(std::move(c));
        children[segment_path] = lsa.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::get_children()
{
    for (auto const & c : lsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::Lsa()
    :
    advertising_router{YType::str, "advertising-router"},
    area_id{YType::int32, "area-id"},
    interface_name{YType::str, "interface-name"},
    ls_id{YType::int32, "ls-id"},
    ls_type{YType::enumeration, "ls-type"}
    	,
    lsa_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo>())
{
    lsa_info->parent = this;
    children["lsa-info"] = lsa_info;

    yang_name = "lsa"; yang_parent_name = "lsa-internal-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::has_data() const
{
    return advertising_router.is_set
	|| area_id.is_set
	|| interface_name.is_set
	|| ls_id.is_set
	|| ls_type.is_set
	|| (lsa_info !=  nullptr && lsa_info->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(area_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(ls_id.operation)
	|| is_set(ls_type.operation)
	|| (lsa_info !=  nullptr && lsa_info->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsa' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.operation)) leaf_name_data.push_back(ls_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-info")
    {
        if(lsa_info != nullptr)
        {
            children["lsa-info"] = lsa_info;
        }
        else
        {
            lsa_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo>();
            lsa_info->parent = this;
            children["lsa-info"] = lsa_info;
        }
        return children.at("lsa-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::get_children()
{
    if(children.find("lsa-info") == children.end())
    {
        if(lsa_info != nullptr)
        {
            children["lsa-info"] = lsa_info;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaInfo()
    :
    lsa_info_type{YType::enumeration, "lsa-info-type"}
    	,
    external_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType>())
	,grace_lsa(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa>())
	,inter_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType>())
	,inter_area_router_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType>())
	,intra_area_prefix_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>())
	,link_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType>())
	,lsa_summary_info(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo>())
	,network_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType>())
	,nssalsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType>())
	,router_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType>())
	,unknown_area_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType>())
	,unknown_aslsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType>())
	,unknown_link_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType>())
	,unknown_lsa_type(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType>())
{
    external_lsa_type->parent = this;
    children["external-lsa-type"] = external_lsa_type;

    grace_lsa->parent = this;
    children["grace-lsa"] = grace_lsa;

    inter_area_prefix_lsa_type->parent = this;
    children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;

    inter_area_router_lsa_type->parent = this;
    children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;

    intra_area_prefix_lsa_type->parent = this;
    children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;

    link_lsa_type->parent = this;
    children["link-lsa-type"] = link_lsa_type;

    lsa_summary_info->parent = this;
    children["lsa-summary-info"] = lsa_summary_info;

    network_lsa_type->parent = this;
    children["network-lsa-type"] = network_lsa_type;

    nssalsa_type->parent = this;
    children["nssalsa-type"] = nssalsa_type;

    router_lsa_type->parent = this;
    children["router-lsa-type"] = router_lsa_type;

    unknown_area_lsa_type->parent = this;
    children["unknown-area-lsa-type"] = unknown_area_lsa_type;

    unknown_aslsa_type->parent = this;
    children["unknown-aslsa-type"] = unknown_aslsa_type;

    unknown_link_lsa_type->parent = this;
    children["unknown-link-lsa-type"] = unknown_link_lsa_type;

    unknown_lsa_type->parent = this;
    children["unknown-lsa-type"] = unknown_lsa_type;

    yang_name = "lsa-info"; yang_parent_name = "lsa";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::~LsaInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::has_data() const
{
    return lsa_info_type.is_set
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (grace_lsa !=  nullptr && grace_lsa->has_data())
	|| (inter_area_prefix_lsa_type !=  nullptr && inter_area_prefix_lsa_type->has_data())
	|| (inter_area_router_lsa_type !=  nullptr && inter_area_router_lsa_type->has_data())
	|| (intra_area_prefix_lsa_type !=  nullptr && intra_area_prefix_lsa_type->has_data())
	|| (link_lsa_type !=  nullptr && link_lsa_type->has_data())
	|| (lsa_summary_info !=  nullptr && lsa_summary_info->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (nssalsa_type !=  nullptr && nssalsa_type->has_data())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (unknown_area_lsa_type !=  nullptr && unknown_area_lsa_type->has_data())
	|| (unknown_aslsa_type !=  nullptr && unknown_aslsa_type->has_data())
	|| (unknown_link_lsa_type !=  nullptr && unknown_link_lsa_type->has_data())
	|| (unknown_lsa_type !=  nullptr && unknown_lsa_type->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_info_type.operation)
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (grace_lsa !=  nullptr && grace_lsa->has_operation())
	|| (inter_area_prefix_lsa_type !=  nullptr && inter_area_prefix_lsa_type->has_operation())
	|| (inter_area_router_lsa_type !=  nullptr && inter_area_router_lsa_type->has_operation())
	|| (intra_area_prefix_lsa_type !=  nullptr && intra_area_prefix_lsa_type->has_operation())
	|| (link_lsa_type !=  nullptr && link_lsa_type->has_operation())
	|| (lsa_summary_info !=  nullptr && lsa_summary_info->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (nssalsa_type !=  nullptr && nssalsa_type->has_operation())
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (unknown_area_lsa_type !=  nullptr && unknown_area_lsa_type->has_operation())
	|| (unknown_aslsa_type !=  nullptr && unknown_aslsa_type->has_operation())
	|| (unknown_link_lsa_type !=  nullptr && unknown_link_lsa_type->has_operation())
	|| (unknown_lsa_type !=  nullptr && unknown_lsa_type->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaInfo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_info_type.is_set || is_set(lsa_info_type.operation)) leaf_name_data.push_back(lsa_info_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type != nullptr)
        {
            children["external-lsa-type"] = external_lsa_type;
        }
        else
        {
            external_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType>();
            external_lsa_type->parent = this;
            children["external-lsa-type"] = external_lsa_type;
        }
        return children.at("external-lsa-type");
    }

    if(child_yang_name == "grace-lsa")
    {
        if(grace_lsa != nullptr)
        {
            children["grace-lsa"] = grace_lsa;
        }
        else
        {
            grace_lsa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa>();
            grace_lsa->parent = this;
            children["grace-lsa"] = grace_lsa;
        }
        return children.at("grace-lsa");
    }

    if(child_yang_name == "inter-area-prefix-lsa-type")
    {
        if(inter_area_prefix_lsa_type != nullptr)
        {
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
        else
        {
            inter_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType>();
            inter_area_prefix_lsa_type->parent = this;
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
        return children.at("inter-area-prefix-lsa-type");
    }

    if(child_yang_name == "inter-area-router-lsa-type")
    {
        if(inter_area_router_lsa_type != nullptr)
        {
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
        else
        {
            inter_area_router_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType>();
            inter_area_router_lsa_type->parent = this;
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
        return children.at("inter-area-router-lsa-type");
    }

    if(child_yang_name == "intra-area-prefix-lsa-type")
    {
        if(intra_area_prefix_lsa_type != nullptr)
        {
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
        else
        {
            intra_area_prefix_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType>();
            intra_area_prefix_lsa_type->parent = this;
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
        return children.at("intra-area-prefix-lsa-type");
    }

    if(child_yang_name == "link-lsa-type")
    {
        if(link_lsa_type != nullptr)
        {
            children["link-lsa-type"] = link_lsa_type;
        }
        else
        {
            link_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType>();
            link_lsa_type->parent = this;
            children["link-lsa-type"] = link_lsa_type;
        }
        return children.at("link-lsa-type");
    }

    if(child_yang_name == "lsa-summary-info")
    {
        if(lsa_summary_info != nullptr)
        {
            children["lsa-summary-info"] = lsa_summary_info;
        }
        else
        {
            lsa_summary_info = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo>();
            lsa_summary_info->parent = this;
            children["lsa-summary-info"] = lsa_summary_info;
        }
        return children.at("lsa-summary-info");
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type != nullptr)
        {
            children["network-lsa-type"] = network_lsa_type;
        }
        else
        {
            network_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType>();
            network_lsa_type->parent = this;
            children["network-lsa-type"] = network_lsa_type;
        }
        return children.at("network-lsa-type");
    }

    if(child_yang_name == "nssalsa-type")
    {
        if(nssalsa_type != nullptr)
        {
            children["nssalsa-type"] = nssalsa_type;
        }
        else
        {
            nssalsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType>();
            nssalsa_type->parent = this;
            children["nssalsa-type"] = nssalsa_type;
        }
        return children.at("nssalsa-type");
    }

    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type != nullptr)
        {
            children["router-lsa-type"] = router_lsa_type;
        }
        else
        {
            router_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType>();
            router_lsa_type->parent = this;
            children["router-lsa-type"] = router_lsa_type;
        }
        return children.at("router-lsa-type");
    }

    if(child_yang_name == "unknown-area-lsa-type")
    {
        if(unknown_area_lsa_type != nullptr)
        {
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
        else
        {
            unknown_area_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType>();
            unknown_area_lsa_type->parent = this;
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
        return children.at("unknown-area-lsa-type");
    }

    if(child_yang_name == "unknown-aslsa-type")
    {
        if(unknown_aslsa_type != nullptr)
        {
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
        else
        {
            unknown_aslsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType>();
            unknown_aslsa_type->parent = this;
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
        return children.at("unknown-aslsa-type");
    }

    if(child_yang_name == "unknown-link-lsa-type")
    {
        if(unknown_link_lsa_type != nullptr)
        {
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
        else
        {
            unknown_link_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType>();
            unknown_link_lsa_type->parent = this;
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
        return children.at("unknown-link-lsa-type");
    }

    if(child_yang_name == "unknown-lsa-type")
    {
        if(unknown_lsa_type != nullptr)
        {
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
        else
        {
            unknown_lsa_type = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType>();
            unknown_lsa_type->parent = this;
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
        return children.at("unknown-lsa-type");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::get_children()
{
    if(children.find("external-lsa-type") == children.end())
    {
        if(external_lsa_type != nullptr)
        {
            children["external-lsa-type"] = external_lsa_type;
        }
    }

    if(children.find("grace-lsa") == children.end())
    {
        if(grace_lsa != nullptr)
        {
            children["grace-lsa"] = grace_lsa;
        }
    }

    if(children.find("inter-area-prefix-lsa-type") == children.end())
    {
        if(inter_area_prefix_lsa_type != nullptr)
        {
            children["inter-area-prefix-lsa-type"] = inter_area_prefix_lsa_type;
        }
    }

    if(children.find("inter-area-router-lsa-type") == children.end())
    {
        if(inter_area_router_lsa_type != nullptr)
        {
            children["inter-area-router-lsa-type"] = inter_area_router_lsa_type;
        }
    }

    if(children.find("intra-area-prefix-lsa-type") == children.end())
    {
        if(intra_area_prefix_lsa_type != nullptr)
        {
            children["intra-area-prefix-lsa-type"] = intra_area_prefix_lsa_type;
        }
    }

    if(children.find("link-lsa-type") == children.end())
    {
        if(link_lsa_type != nullptr)
        {
            children["link-lsa-type"] = link_lsa_type;
        }
    }

    if(children.find("lsa-summary-info") == children.end())
    {
        if(lsa_summary_info != nullptr)
        {
            children["lsa-summary-info"] = lsa_summary_info;
        }
    }

    if(children.find("network-lsa-type") == children.end())
    {
        if(network_lsa_type != nullptr)
        {
            children["network-lsa-type"] = network_lsa_type;
        }
    }

    if(children.find("nssalsa-type") == children.end())
    {
        if(nssalsa_type != nullptr)
        {
            children["nssalsa-type"] = nssalsa_type;
        }
    }

    if(children.find("router-lsa-type") == children.end())
    {
        if(router_lsa_type != nullptr)
        {
            children["router-lsa-type"] = router_lsa_type;
        }
    }

    if(children.find("unknown-area-lsa-type") == children.end())
    {
        if(unknown_area_lsa_type != nullptr)
        {
            children["unknown-area-lsa-type"] = unknown_area_lsa_type;
        }
    }

    if(children.find("unknown-aslsa-type") == children.end())
    {
        if(unknown_aslsa_type != nullptr)
        {
            children["unknown-aslsa-type"] = unknown_aslsa_type;
        }
    }

    if(children.find("unknown-link-lsa-type") == children.end())
    {
        if(unknown_link_lsa_type != nullptr)
        {
            children["unknown-link-lsa-type"] = unknown_link_lsa_type;
        }
    }

    if(children.find("unknown-lsa-type") == children.end())
    {
        if(unknown_lsa_type != nullptr)
        {
            children["unknown-lsa-type"] = unknown_lsa_type;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-info-type")
    {
        lsa_info_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaSummaryInfo()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    links{YType::uint16, "links"},
    lsa_router_id{YType::uint32, "lsa-router-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    reference_lsa_id{YType::uint32, "reference-lsa-id"},
    reference_type{YType::uint16, "reference-type"},
    router_la_bits{YType::uint8, "router-la-bits"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "lsa-summary-info"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::~LsaSummaryInfo()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| links.is_set
	|| lsa_router_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| reference_lsa_id.is_set
	|| reference_type.is_set
	|| router_la_bits.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(links.operation)
	|| is_set(lsa_router_id.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(reference_lsa_id.operation)
	|| is_set(reference_type.operation)
	|| is_set(router_la_bits.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary-info";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaSummaryInfo' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());
    if (lsa_router_id.is_set || is_set(lsa_router_id.operation)) leaf_name_data.push_back(lsa_router_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (reference_lsa_id.is_set || is_set(reference_lsa_id.operation)) leaf_name_data.push_back(reference_lsa_id.get_name_leafdata());
    if (reference_type.is_set || is_set(reference_type.operation)) leaf_name_data.push_back(reference_type.get_name_leafdata());
    if (router_la_bits.is_set || is_set(router_la_bits.operation)) leaf_name_data.push_back(router_la_bits.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "links")
    {
        links = value;
    }
    if(value_path == "lsa-router-id")
    {
        lsa_router_id = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "reference-lsa-id")
    {
        reference_lsa_id = value;
    }
    if(value_path == "reference-type")
    {
        reference_type = value;
    }
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "lsa-summary-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "lsa-summary-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RouterLsaType()
    :
    router_la_bits{YType::uint8, "router-la-bits"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>())
	,rpf_path(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    rpf_path->parent = this;
    children["rpf-path"] = rpf_path;

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::~RouterLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return router_la_bits.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (rpf_path !=  nullptr && rpf_path->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(router_la_bits.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (rpf_path !=  nullptr && rpf_path->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_la_bits.is_set || is_set(router_la_bits.operation)) leaf_name_data.push_back(router_la_bits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(std::move(c));
        children[segment_path] = link.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    if(child_yang_name == "rpf-path")
    {
        if(rpf_path != nullptr)
        {
            children["rpf-path"] = rpf_path;
        }
        else
        {
            rpf_path = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath>();
            rpf_path->parent = this;
            children["rpf-path"] = rpf_path;
        }
        return children.at("rpf-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_children()
{
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    if(children.find("rpf-path") == children.end())
    {
        if(rpf_path != nullptr)
        {
            children["rpf-path"] = rpf_path;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::RpfPath()
    :
    interface_name{YType::str, "interface-name"},
    rpf_multicast_next_hop{YType::uint32, "rpf-multicast-next-hop"}
{
    yang_name = "rpf-path"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::~RpfPath()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_data() const
{
    return interface_name.is_set
	|| rpf_multicast_next_hop.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(rpf_multicast_next_hop.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfPath' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rpf_multicast_next_hop.is_set || is_set(rpf_multicast_next_hop.operation)) leaf_name_data.push_back(rpf_multicast_next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rpf-multicast-next-hop")
    {
        rpf_multicast_next_hop = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::Link()
    :
    link_interface_id{YType::uint32, "link-interface-id"},
    link_metric{YType::uint16, "link-metric"},
    link_neighbor_interface_id{YType::uint32, "link-neighbor-interface-id"},
    link_neighbor_router_id{YType::uint32, "link-neighbor-router-id"},
    link_type{YType::enumeration, "link-type"}
{
    yang_name = "link"; yang_parent_name = "router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::~Link()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::has_data() const
{
    return link_interface_id.is_set
	|| link_metric.is_set
	|| link_neighbor_interface_id.is_set
	|| link_neighbor_router_id.is_set
	|| link_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(link_interface_id.operation)
	|| is_set(link_metric.operation)
	|| is_set(link_neighbor_interface_id.operation)
	|| is_set(link_neighbor_router_id.operation)
	|| is_set(link_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_interface_id.is_set || is_set(link_interface_id.operation)) leaf_name_data.push_back(link_interface_id.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.operation)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_neighbor_interface_id.is_set || is_set(link_neighbor_interface_id.operation)) leaf_name_data.push_back(link_neighbor_interface_id.get_name_leafdata());
    if (link_neighbor_router_id.is_set || is_set(link_neighbor_router_id.operation)) leaf_name_data.push_back(link_neighbor_router_id.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-interface-id")
    {
        link_interface_id = value;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
    }
    if(value_path == "link-neighbor-interface-id")
    {
        link_neighbor_interface_id = value;
    }
    if(value_path == "link-neighbor-router-id")
    {
        link_neighbor_router_id = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::NetworkLsaType()
    :
    neighbor_router{YType::str, "neighbor-router"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::has_data() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::has_operation() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_router.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto neighbor_router_name_datas = neighbor_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), neighbor_router_name_datas.begin(), neighbor_router_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-router")
    {
        neighbor_router.append(value);
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "network-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "network-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::InterAreaPrefixLsaType()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "inter-area-prefix-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::~InterAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaPrefixLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "inter-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "inter-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::InterAreaRouterLsaType()
    :
    lsa_router_id{YType::uint32, "lsa-router-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "inter-area-router-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::~InterAreaRouterLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_data() const
{
    return lsa_router_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_router_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterAreaRouterLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_router_id.is_set || is_set(lsa_router_id.operation)) leaf_name_data.push_back(lsa_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-router-id")
    {
        lsa_router_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "inter-area-router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "inter-area-router-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::ExternalLsaType()
    :
    external_tag{YType::uint32, "external-tag"},
    forwarding_address{YType::str, "forwarding-address"},
    is_forwarding_address_set{YType::boolean, "is-forwarding-address-set"},
    metric_type{YType::enumeration, "metric-type"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"},
    tos_cost{YType::uint32, "tos-cost"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::has_data() const
{
    return external_tag.is_set
	|| forwarding_address.is_set
	|| is_forwarding_address_set.is_set
	|| metric_type.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| tos_cost.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(external_tag.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(is_forwarding_address_set.operation)
	|| is_set(metric_type.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(tos_cost.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_tag.is_set || is_set(external_tag.operation)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (is_forwarding_address_set.is_set || is_set(is_forwarding_address_set.operation)) leaf_name_data.push_back(is_forwarding_address_set.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.operation)) leaf_name_data.push_back(tos_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-tag")
    {
        external_tag = value;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "is-forwarding-address-set")
    {
        is_forwarding_address_set = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "external-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "external-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::NssalsaType()
    :
    external_tag{YType::uint32, "external-tag"},
    forwarding_address{YType::str, "forwarding-address"},
    is_forwarding_address_set{YType::boolean, "is-forwarding-address-set"},
    metric_type{YType::enumeration, "metric-type"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"},
    tos_cost{YType::uint32, "tos-cost"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "nssalsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::~NssalsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::has_data() const
{
    return external_tag.is_set
	|| forwarding_address.is_set
	|| is_forwarding_address_set.is_set
	|| metric_type.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| tos_cost.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(external_tag.operation)
	|| is_set(forwarding_address.operation)
	|| is_set(is_forwarding_address_set.operation)
	|| is_set(metric_type.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(tos_cost.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssalsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssalsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_tag.is_set || is_set(external_tag.operation)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.operation)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (is_forwarding_address_set.is_set || is_set(is_forwarding_address_set.operation)) leaf_name_data.push_back(is_forwarding_address_set.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.operation)) leaf_name_data.push_back(tos_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-tag")
    {
        external_tag = value;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
    }
    if(value_path == "is-forwarding-address-set")
    {
        is_forwarding_address_set = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "nssalsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "nssalsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    lsa_link_local{YType::str, "lsa-link-local"},
    router_priority{YType::uint8, "router-priority"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "link-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::~LinkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| lsa_link_local.is_set
	|| router_priority.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(lsa_link_local.operation)
	|| is_set(router_priority.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (lsa_link_local.is_set || is_set(lsa_link_local.operation)) leaf_name_data.push_back(lsa_link_local.get_name_leafdata());
    if (router_priority.is_set || is_set(router_priority.operation)) leaf_name_data.push_back(router_priority.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "lsa-link-local")
    {
        lsa_link_local = value;
    }
    if(value_path == "router-priority")
    {
        router_priority = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::Prefix()
    :
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    prefix{YType::str, "prefix"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "prefix"; yang_parent_name = "link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_data() const
{
    return ospfv3_prefix_length.is_set
	|| ospfv3_prefix_metric.is_set
	|| ospfv3_prefix_options.is_set
	|| prefix.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfv3_prefix_length.operation)
	|| is_set(ospfv3_prefix_metric.operation)
	|| is_set(ospfv3_prefix_options.operation)
	|| is_set(prefix.operation)
	|| is_set(priority.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfv3_prefix_length.is_set || is_set(ospfv3_prefix_length.operation)) leaf_name_data.push_back(ospfv3_prefix_length.get_name_leafdata());
    if (ospfv3_prefix_metric.is_set || is_set(ospfv3_prefix_metric.operation)) leaf_name_data.push_back(ospfv3_prefix_metric.get_name_leafdata());
    if (ospfv3_prefix_options.is_set || is_set(ospfv3_prefix_options.operation)) leaf_name_data.push_back(ospfv3_prefix_options.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfv3-prefix-length")
    {
        ospfv3_prefix_length = value;
    }
    if(value_path == "ospfv3-prefix-metric")
    {
        ospfv3_prefix_metric = value;
    }
    if(value_path == "ospfv3-prefix-options")
    {
        ospfv3_prefix_options = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::IntraAreaPrefixLsaType()
    :
    reference_advertised_router{YType::str, "reference-advertised-router"},
    reference_lsa_id{YType::uint32, "reference-lsa-id"},
    reference_type{YType::enumeration, "reference-type"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "intra-area-prefix-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::~IntraAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return reference_advertised_router.is_set
	|| reference_lsa_id.is_set
	|| reference_type.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(reference_advertised_router.operation)
	|| is_set(reference_lsa_id.operation)
	|| is_set(reference_type.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IntraAreaPrefixLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reference_advertised_router.is_set || is_set(reference_advertised_router.operation)) leaf_name_data.push_back(reference_advertised_router.get_name_leafdata());
    if (reference_lsa_id.is_set || is_set(reference_lsa_id.operation)) leaf_name_data.push_back(reference_lsa_id.get_name_leafdata());
    if (reference_type.is_set || is_set(reference_type.operation)) leaf_name_data.push_back(reference_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reference-advertised-router")
    {
        reference_advertised_router = value;
    }
    if(value_path == "reference-lsa-id")
    {
        reference_lsa_id = value;
    }
    if(value_path == "reference-type")
    {
        reference_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "intra-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "intra-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::Prefix()
    :
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    prefix{YType::str, "prefix"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "prefix"; yang_parent_name = "intra-area-prefix-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_data() const
{
    return ospfv3_prefix_length.is_set
	|| ospfv3_prefix_metric.is_set
	|| ospfv3_prefix_options.is_set
	|| prefix.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(ospfv3_prefix_length.operation)
	|| is_set(ospfv3_prefix_metric.operation)
	|| is_set(ospfv3_prefix_options.operation)
	|| is_set(prefix.operation)
	|| is_set(priority.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospfv3_prefix_length.is_set || is_set(ospfv3_prefix_length.operation)) leaf_name_data.push_back(ospfv3_prefix_length.get_name_leafdata());
    if (ospfv3_prefix_metric.is_set || is_set(ospfv3_prefix_metric.operation)) leaf_name_data.push_back(ospfv3_prefix_metric.get_name_leafdata());
    if (ospfv3_prefix_options.is_set || is_set(ospfv3_prefix_options.operation)) leaf_name_data.push_back(ospfv3_prefix_options.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfv3-prefix-length")
    {
        ospfv3_prefix_length = value;
    }
    if(value_path == "ospfv3-prefix-metric")
    {
        ospfv3_prefix_metric = value;
    }
    if(value_path == "ospfv3-prefix-options")
    {
        ospfv3_prefix_options = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::GraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "grace-lsa"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::~GraceLsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::has_operation() const
{
    return is_set(operation)
	|| is_set(grace_period.operation)
	|| is_set(grace_reason.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grace-lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GraceLsa' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.operation)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.operation)) leaf_name_data.push_back(grace_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "grace-lsa";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "grace-lsa";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::UnknownLinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-link-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::~UnknownLinkLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-link-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownLinkLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-link-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::UnknownAreaLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-area-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::~UnknownAreaLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-area-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAreaLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-area-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-area-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::UnknownAslsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-aslsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::~UnknownAslsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-aslsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAslsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-aslsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-aslsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::UnknownLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_sham_link{YType::boolean, "is-sham-link"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    virtual_link_id{YType::uint32, "virtual-link-id"}
    	,
    lsa_detail(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>())
	,lsa_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>())
{
    lsa_detail->parent = this;
    children["lsa-detail"] = lsa_detail;

    lsa_header->parent = this;
    children["lsa-header"] = lsa_header;

    yang_name = "unknown-lsa-type"; yang_parent_name = "lsa-info";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::~UnknownLsaType()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::has_data() const
{
    return interface_name.is_set
	|| is_sham_link.is_set
	|| is_virtual_link.is_set
	|| sham_link_id.is_set
	|| virtual_link_id.is_set
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_sham_link.operation)
	|| is_set(is_virtual_link.operation)
	|| is_set(sham_link_id.operation)
	|| is_set(virtual_link_id.operation)
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-lsa-type";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownLsaType' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.operation)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.operation)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.operation)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.operation)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
        else
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>();
            lsa_detail->parent = this;
            children["lsa-detail"] = lsa_detail;
        }
        return children.at("lsa-detail");
    }

    if(child_yang_name == "lsa-header")
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
        else
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>();
            lsa_header->parent = this;
            children["lsa-header"] = lsa_header;
        }
        return children.at("lsa-header");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_children()
{
    if(children.find("lsa-detail") == children.end())
    {
        if(lsa_detail != nullptr)
        {
            children["lsa-detail"] = lsa_detail;
        }
    }

    if(children.find("lsa-header") == children.end())
    {
        if(lsa_header != nullptr)
        {
            children["lsa-header"] = lsa_header;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::LsaHeader()
    :
    advertising_router{YType::str, "advertising-router"},
    checksum{YType::uint16, "checksum"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"},
    ls_id{YType::uint32, "ls-id"},
    lsa_age{YType::uint16, "lsa-age"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_type{YType::uint16, "lsa-type"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsa-header"; yang_parent_name = "unknown-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_data() const
{
    return advertising_router.is_set
	|| checksum.is_set
	|| is_do_not_age_lsa.is_set
	|| is_graceful_restart_active.is_set
	|| ls_id.is_set
	|| lsa_age.is_set
	|| lsa_area_id.is_set
	|| lsa_type.is_set
	|| sequence_number.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_operation() const
{
    return is_set(operation)
	|| is_set(advertising_router.operation)
	|| is_set(checksum.operation)
	|| is_set(is_do_not_age_lsa.operation)
	|| is_set(is_graceful_restart_active.operation)
	|| is_set(ls_id.operation)
	|| is_set(lsa_age.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_type.operation)
	|| is_set(sequence_number.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertising_router.is_set || is_set(advertising_router.operation)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.operation)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.operation)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.operation)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.operation)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.operation)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertising-router")
    {
        advertising_router = value;
    }
    if(value_path == "checksum")
    {
        checksum = value;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::LsaDetail()
    :
    free_time{YType::uint32, "free-time"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_deleted{YType::boolean, "is-deleted"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_routing_table{YType::boolean, "is-routing-table"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"},
    minute_table_index{YType::uint8, "minute-table-index"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    rate_limit{YType::boolean, "rate-limit"},
    second_table_index{YType::uint8, "second-table-index"}
{
    yang_name = "lsa-detail"; yang_parent_name = "unknown-lsa-type";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_data() const
{
    return free_time.is_set
	|| is_acknowledged.is_set
	|| is_advertising_router_reachable.is_set
	|| is_deleted.is_set
	|| is_flood_pending.is_set
	|| is_maximum_aged.is_set
	|| is_neighbor_exchange.is_set
	|| is_no_delete.is_set
	|| is_nsr_ack_pending.is_set
	|| is_partial_spf.is_set
	|| is_routing_bit.is_set
	|| is_routing_table.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set
	|| minute_table_index.is_set
	|| nsr_flood_required.is_set
	|| rate_limit.is_set
	|| second_table_index.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(free_time.operation)
	|| is_set(is_acknowledged.operation)
	|| is_set(is_advertising_router_reachable.operation)
	|| is_set(is_deleted.operation)
	|| is_set(is_flood_pending.operation)
	|| is_set(is_maximum_aged.operation)
	|| is_set(is_neighbor_exchange.operation)
	|| is_set(is_no_delete.operation)
	|| is_set(is_nsr_ack_pending.operation)
	|| is_set(is_partial_spf.operation)
	|| is_set(is_routing_bit.operation)
	|| is_set(is_routing_table.operation)
	|| is_set(lsa_flood_required_post_fail_over.operation)
	|| is_set(lsa_length.operation)
	|| is_set(lsa_sync_state.operation)
	|| is_set(minute_table_index.operation)
	|| is_set(nsr_flood_required.operation)
	|| is_set(rate_limit.operation)
	|| is_set(second_table_index.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaDetail' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.operation)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.operation)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.operation)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.operation)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.operation)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.operation)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.operation)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.operation)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.operation)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.operation)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.operation)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.operation)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.operation)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.operation)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.operation)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.operation)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.operation)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.operation)) leaf_name_data.push_back(second_table_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "free-time")
    {
        free_time = value;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummaryTable()
    :
    database_summary(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary>())
{
    database_summary->parent = this;
    children["database-summary"] = database_summary;

    yang_name = "database-summary-table"; yang_parent_name = "area";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::~DatabaseSummaryTable()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::has_data() const
{
    return (database_summary !=  nullptr && database_summary->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::has_operation() const
{
    return is_set(operation)
	|| (database_summary !=  nullptr && database_summary->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary-table";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseSummaryTable' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "database-summary")
    {
        if(database_summary != nullptr)
        {
            children["database-summary"] = database_summary;
        }
        else
        {
            database_summary = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary>();
            database_summary->parent = this;
            children["database-summary"] = database_summary;
        }
        return children.at("database-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::get_children()
{
    if(children.find("database-summary") == children.end())
    {
        if(database_summary != nullptr)
        {
            children["database-summary"] = database_summary;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseSummary()
    :
    database_router_id{YType::str, "database-router-id"},
    is_opaque_database_capable{YType::boolean, "is-opaque-database-capable"}
    	,
    database_counters(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters>())
{
    database_counters->parent = this;
    children["database-counters"] = database_counters;

    yang_name = "database-summary"; yang_parent_name = "database-summary-table";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::~DatabaseSummary()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::has_data() const
{
    for (std::size_t index=0; index<area_database.size(); index++)
    {
        if(area_database[index]->has_data())
            return true;
    }
    return database_router_id.is_set
	|| is_opaque_database_capable.is_set
	|| (database_counters !=  nullptr && database_counters->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::has_operation() const
{
    for (std::size_t index=0; index<area_database.size(); index++)
    {
        if(area_database[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(database_router_id.operation)
	|| is_set(is_opaque_database_capable.operation)
	|| (database_counters !=  nullptr && database_counters->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseSummary' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (database_router_id.is_set || is_set(database_router_id.operation)) leaf_name_data.push_back(database_router_id.get_name_leafdata());
    if (is_opaque_database_capable.is_set || is_set(is_opaque_database_capable.operation)) leaf_name_data.push_back(is_opaque_database_capable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-database")
    {
        for(auto const & c : area_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase>();
        c->parent = this;
        area_database.push_back(std::move(c));
        children[segment_path] = area_database.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "database-counters")
    {
        if(database_counters != nullptr)
        {
            children["database-counters"] = database_counters;
        }
        else
        {
            database_counters = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters>();
            database_counters->parent = this;
            children["database-counters"] = database_counters;
        }
        return children.at("database-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::get_children()
{
    for (auto const & c : area_database)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("database-counters") == children.end())
    {
        if(database_counters != nullptr)
        {
            children["database-counters"] = database_counters;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "database-router-id")
    {
        database_router_id = value;
    }
    if(value_path == "is-opaque-database-capable")
    {
        is_opaque_database_capable = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::DatabaseCounters()
    :
    deleted_lsa{YType::uint32, "deleted-lsa"},
    lsa{YType::uint32, "lsa"},
    lsa_checksum{YType::uint32, "lsa-checksum"},
    max_age_lsa{YType::uint32, "max-age-lsa"}
{
    yang_name = "database-counters"; yang_parent_name = "database-summary";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::~DatabaseCounters()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::has_data() const
{
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::has_operation() const
{
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(deleted_lsa.operation)
	|| is_set(lsa.operation)
	|| is_set(lsa_checksum.operation)
	|| is_set(max_age_lsa.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-counters";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseCounters' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deleted_lsa_name_datas = deleted_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deleted_lsa_name_datas.begin(), deleted_lsa_name_datas.end());
    auto lsa_name_datas = lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_name_datas.begin(), lsa_name_datas.end());
    auto lsa_checksum_name_datas = lsa_checksum.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_checksum_name_datas.begin(), lsa_checksum_name_datas.end());
    auto max_age_lsa_name_datas = max_age_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_age_lsa_name_datas.begin(), max_age_lsa_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.append(value);
    }
    if(value_path == "lsa")
    {
        lsa.append(value);
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.append(value);
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.append(value);
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabase()
    :
    lsa_area_id{YType::str, "lsa-area-id"}
    	,
    area_database_summary(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary>())
{
    area_database_summary->parent = this;
    children["area-database-summary"] = area_database_summary;

    yang_name = "area-database"; yang_parent_name = "database-summary";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::~AreaDatabase()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::has_data() const
{
    return lsa_area_id.is_set
	|| (area_database_summary !=  nullptr && area_database_summary->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_area_id.operation)
	|| (area_database_summary !=  nullptr && area_database_summary->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-database";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaDatabase' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-database-summary")
    {
        if(area_database_summary != nullptr)
        {
            children["area-database-summary"] = area_database_summary;
        }
        else
        {
            area_database_summary = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary>();
            area_database_summary->parent = this;
            children["area-database-summary"] = area_database_summary;
        }
        return children.at("area-database-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_children()
{
    if(children.find("area-database-summary") == children.end())
    {
        if(area_database_summary != nullptr)
        {
            children["area-database-summary"] = area_database_summary;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::AreaDatabaseSummary()
    :
    deleted_lsa{YType::uint32, "deleted-lsa"},
    lsa{YType::uint32, "lsa"},
    lsa_checksum{YType::uint32, "lsa-checksum"},
    max_age_lsa{YType::uint32, "max-age-lsa"}
{
    yang_name = "area-database-summary"; yang_parent_name = "area-database";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::~AreaDatabaseSummary()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::has_data() const
{
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::has_operation() const
{
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(deleted_lsa.operation)
	|| is_set(lsa.operation)
	|| is_set(lsa_checksum.operation)
	|| is_set(max_age_lsa.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-database-summary";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaDatabaseSummary' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deleted_lsa_name_datas = deleted_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deleted_lsa_name_datas.begin(), deleted_lsa_name_datas.end());
    auto lsa_name_datas = lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_name_datas.begin(), lsa_name_datas.end());
    auto lsa_checksum_name_datas = lsa_checksum.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_checksum_name_datas.begin(), lsa_checksum_name_datas.end());
    auto max_age_lsa_name_datas = max_age_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_age_lsa_name_datas.begin(), max_age_lsa_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.append(value);
    }
    if(value_path == "lsa")
    {
        lsa.append(value);
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.append(value);
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.append(value);
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoutes()
{
    yang_name = "internal-routes"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::~InternalRoutes()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::has_data() const
{
    for (std::size_t index=0; index<internal_route.size(); index++)
    {
        if(internal_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::has_operation() const
{
    for (std::size_t index=0; index<internal_route.size(); index++)
    {
        if(internal_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-routes";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InternalRoutes' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "internal-route")
    {
        for(auto const & c : internal_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute>();
        c->parent = this;
        internal_route.push_back(std::move(c));
        children[segment_path] = internal_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::get_children()
{
    for (auto const & c : internal_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::InternalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_area_id{YType::uint32, "route-area-id"}
    	,
    route_topology(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology>())
{
    route_topology->parent = this;
    children["route-topology"] = route_topology;

    yang_name = "internal-route"; yang_parent_name = "internal-routes";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::~InternalRoute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_source.size(); index++)
    {
        if(route_source[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_area_id.is_set
	|| (route_topology !=  nullptr && route_topology->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_source.size(); index++)
    {
        if(route_source[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_area_id.operation)
	|| (route_topology !=  nullptr && route_topology->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-route";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InternalRoute' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_area_id.is_set || is_set(route_area_id.operation)) leaf_name_data.push_back(route_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "route-source")
    {
        for(auto const & c : route_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource>();
        c->parent = this;
        route_source.push_back(std::move(c));
        children[segment_path] = route_source.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "route-topology")
    {
        if(route_topology != nullptr)
        {
            children["route-topology"] = route_topology;
        }
        else
        {
            route_topology = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology>();
            route_topology->parent = this;
            children["route-topology"] = route_topology;
        }
        return children.at("route-topology");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::get_children()
{
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : route_source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("route-topology") == children.end())
    {
        if(route_topology != nullptr)
        {
            children["route-topology"] = route_topology;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-area-id")
    {
        route_area_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology::RouteTopology()
    :
    route_cost{YType::uint32, "route-cost"},
    route_distance{YType::uint32, "route-distance"},
    route_id{YType::str, "route-id"},
    route_type{YType::uint32, "route-type"}
{
    yang_name = "route-topology"; yang_parent_name = "internal-route";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology::~RouteTopology()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology::has_data() const
{
    return route_cost.is_set
	|| route_distance.is_set
	|| route_id.is_set
	|| route_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology::has_operation() const
{
    return is_set(operation)
	|| is_set(route_cost.operation)
	|| is_set(route_distance.operation)
	|| is_set(route_id.operation)
	|| is_set(route_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-topology";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTopology' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cost.is_set || is_set(route_cost.operation)) leaf_name_data.push_back(route_cost.get_name_leafdata());
    if (route_distance.is_set || is_set(route_distance.operation)) leaf_name_data.push_back(route_distance.get_name_leafdata());
    if (route_id.is_set || is_set(route_id.operation)) leaf_name_data.push_back(route_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteTopology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-cost")
    {
        route_cost = value;
    }
    if(value_path == "route-distance")
    {
        route_distance = value;
    }
    if(value_path == "route-id")
    {
        route_id = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource::RouteSource()
    :
    route_source_adversting_router{YType::str, "route-source-adversting-router"},
    route_source_id{YType::str, "route-source-id"},
    route_source_lsa_type{YType::uint32, "route-source-lsa-type"}
{
    yang_name = "route-source"; yang_parent_name = "internal-route";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource::~RouteSource()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource::has_data() const
{
    return route_source_adversting_router.is_set
	|| route_source_id.is_set
	|| route_source_lsa_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource::has_operation() const
{
    return is_set(operation)
	|| is_set(route_source_adversting_router.operation)
	|| is_set(route_source_id.operation)
	|| is_set(route_source_lsa_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-source";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteSource' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_source_adversting_router.is_set || is_set(route_source_adversting_router.operation)) leaf_name_data.push_back(route_source_adversting_router.get_name_leafdata());
    if (route_source_id.is_set || is_set(route_source_id.operation)) leaf_name_data.push_back(route_source_id.get_name_leafdata());
    if (route_source_lsa_type.is_set || is_set(route_source_lsa_type.operation)) leaf_name_data.push_back(route_source_lsa_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RouteSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-source-adversting-router")
    {
        route_source_adversting_router = value;
    }
    if(value_path == "route-source-id")
    {
        route_source_id = value;
    }
    if(value_path == "route-source-lsa-type")
    {
        route_source_lsa_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RoutePath()
    :
    interface_name{YType::str, "interface-name"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_next_hop{YType::str, "route-path-next-hop"}
    	,
    route_backup_path(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath>())
{
    route_backup_path->parent = this;
    children["route-backup-path"] = route_backup_path;

    yang_name = "route-path"; yang_parent_name = "internal-route";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::~RoutePath()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::has_data() const
{
    return interface_name.is_set
	|| route_path_id.is_set
	|| route_path_next_hop.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(route_path_id.operation)
	|| is_set(route_path_next_hop.operation)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.operation)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_next_hop.is_set || is_set(route_path_next_hop.operation)) leaf_name_data.push_back(route_path_next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
        else
        {
            route_backup_path = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath>();
            route_backup_path->parent = this;
            children["route-backup-path"] = route_backup_path;
        }
        return children.at("route-backup-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::get_children()
{
    if(children.find("route-backup-path") == children.end())
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
    }
    if(value_path == "route-path-next-hop")
    {
        route_path_next_hop = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{
    yang_name = "route-backup-path"; yang_parent_name = "route-path";
}

Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::has_data() const
{
    return backup_metric.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_metric.operation)
	|| is_set(backup_route_interface_name.operation)
	|| is_set(backup_route_next_hop_address.operation)
	|| is_set(backup_route_source.operation)
	|| is_set(downstream.operation)
	|| is_set(line_card_disjoint.operation)
	|| is_set(node_protect.operation)
	|| is_set(primary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteBackupPath' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.operation)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.operation)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.operation)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.operation)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.operation)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.operation)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
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

Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolAreas()
{
    yang_name = "protocol-areas"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::~ProtocolAreas()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::has_data() const
{
    for (std::size_t index=0; index<protocol_area.size(); index++)
    {
        if(protocol_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::has_operation() const
{
    for (std::size_t index=0; index<protocol_area.size(); index++)
    {
        if(protocol_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-areas";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolAreas' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol-area")
    {
        for(auto const & c : protocol_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea>();
        c->parent = this;
        protocol_area.push_back(std::move(c));
        children[segment_path] = protocol_area.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::get_children()
{
    for (auto const & c : protocol_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolArea()
    :
    area_id{YType::str, "area-id"},
    distribute_list_in{YType::str, "distribute-list-in"},
    protocol_area_id{YType::str, "protocol-area-id"}
{
    yang_name = "protocol-area"; yang_parent_name = "protocol-areas";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::~ProtocolArea()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::has_data() const
{
    for (std::size_t index=0; index<protocol_interface.size(); index++)
    {
        if(protocol_interface[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| distribute_list_in.is_set
	|| protocol_area_id.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::has_operation() const
{
    for (std::size_t index=0; index<protocol_interface.size(); index++)
    {
        if(protocol_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(distribute_list_in.operation)
	|| is_set(protocol_area_id.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-area" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolArea' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (distribute_list_in.is_set || is_set(distribute_list_in.operation)) leaf_name_data.push_back(distribute_list_in.get_name_leafdata());
    if (protocol_area_id.is_set || is_set(protocol_area_id.operation)) leaf_name_data.push_back(protocol_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol-interface")
    {
        for(auto const & c : protocol_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface>();
        c->parent = this;
        protocol_interface.push_back(std::move(c));
        children[segment_path] = protocol_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::get_children()
{
    for (auto const & c : protocol_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "distribute-list-in")
    {
        distribute_list_in = value;
    }
    if(value_path == "protocol-area-id")
    {
        protocol_area_id = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface::ProtocolInterface()
    :
    distribute_list_in{YType::str, "distribute-list-in"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "protocol-interface"; yang_parent_name = "protocol-area";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface::~ProtocolInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface::has_data() const
{
    return distribute_list_in.is_set
	|| interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(distribute_list_in.operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-interface";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolInterface' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribute_list_in.is_set || is_set(distribute_list_in.operation)) leaf_name_data.push_back(distribute_list_in.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ProtocolAreas::ProtocolArea::ProtocolInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distribute-list-in")
    {
        distribute_list_in = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoutes()
{
    yang_name = "connected-routes"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::has_data() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::has_operation() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRoutes' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connected-route")
    {
        for(auto const & c : connected_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute>();
        c->parent = this;
        connected_route.push_back(std::move(c));
        children[segment_path] = connected_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::get_children()
{
    for (auto const & c : connected_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::ConnectedRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    route_topology(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology>())
{
    route_topology->parent = this;
    children["route-topology"] = route_topology;

    yang_name = "connected-route"; yang_parent_name = "connected-routes";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::~ConnectedRoute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| (route_topology !=  nullptr && route_topology->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| (route_topology !=  nullptr && route_topology->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedRoute' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-path")
    {
        for(auto const & c : route_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(std::move(c));
        children[segment_path] = route_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "route-topology")
    {
        if(route_topology != nullptr)
        {
            children["route-topology"] = route_topology;
        }
        else
        {
            route_topology = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology>();
            route_topology->parent = this;
            children["route-topology"] = route_topology;
        }
        return children.at("route-topology");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::get_children()
{
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("route-topology") == children.end())
    {
        if(route_topology != nullptr)
        {
            children["route-topology"] = route_topology;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::set_value(const std::string & value_path, std::string value)
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

Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology::RouteTopology()
    :
    route_cost{YType::uint32, "route-cost"},
    route_distance{YType::uint32, "route-distance"},
    route_id{YType::str, "route-id"},
    route_type{YType::uint32, "route-type"}
{
    yang_name = "route-topology"; yang_parent_name = "connected-route";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology::~RouteTopology()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology::has_data() const
{
    return route_cost.is_set
	|| route_distance.is_set
	|| route_id.is_set
	|| route_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology::has_operation() const
{
    return is_set(operation)
	|| is_set(route_cost.operation)
	|| is_set(route_distance.operation)
	|| is_set(route_id.operation)
	|| is_set(route_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-topology";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTopology' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cost.is_set || is_set(route_cost.operation)) leaf_name_data.push_back(route_cost.get_name_leafdata());
    if (route_distance.is_set || is_set(route_distance.operation)) leaf_name_data.push_back(route_distance.get_name_leafdata());
    if (route_id.is_set || is_set(route_id.operation)) leaf_name_data.push_back(route_id.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RouteTopology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-cost")
    {
        route_cost = value;
    }
    if(value_path == "route-distance")
    {
        route_distance = value;
    }
    if(value_path == "route-id")
    {
        route_id = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RoutePath()
    :
    interface_name{YType::str, "interface-name"},
    route_path_id{YType::uint16, "route-path-id"},
    route_path_next_hop{YType::str, "route-path-next-hop"}
    	,
    route_backup_path(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath>())
{
    route_backup_path->parent = this;
    children["route-backup-path"] = route_backup_path;

    yang_name = "route-path"; yang_parent_name = "connected-route";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::~RoutePath()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::has_data() const
{
    return interface_name.is_set
	|| route_path_id.is_set
	|| route_path_next_hop.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(route_path_id.operation)
	|| is_set(route_path_next_hop.operation)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePath' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.operation)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (route_path_next_hop.is_set || is_set(route_path_next_hop.operation)) leaf_name_data.push_back(route_path_next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
        else
        {
            route_backup_path = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath>();
            route_backup_path->parent = this;
            children["route-backup-path"] = route_backup_path;
        }
        return children.at("route-backup-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::get_children()
{
    if(children.find("route-backup-path") == children.end())
    {
        if(route_backup_path != nullptr)
        {
            children["route-backup-path"] = route_backup_path;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
    }
    if(value_path == "route-path-next-hop")
    {
        route_path_next_hop = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_metric{YType::uint32, "backup-metric"},
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    downstream{YType::boolean, "downstream"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    node_protect{YType::boolean, "node-protect"},
    primary_path{YType::boolean, "primary-path"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{
    yang_name = "route-backup-path"; yang_parent_name = "route-path";
}

Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::has_data() const
{
    return backup_metric.is_set
	|| backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| downstream.is_set
	|| line_card_disjoint.is_set
	|| node_protect.is_set
	|| primary_path.is_set
	|| srlg_disjoint.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_metric.operation)
	|| is_set(backup_route_interface_name.operation)
	|| is_set(backup_route_next_hop_address.operation)
	|| is_set(backup_route_source.operation)
	|| is_set(downstream.operation)
	|| is_set(line_card_disjoint.operation)
	|| is_set(node_protect.operation)
	|| is_set(primary_path.operation)
	|| is_set(srlg_disjoint.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteBackupPath' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_metric.is_set || is_set(backup_metric.operation)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.operation)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.operation)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.operation)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.operation)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.operation)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.operation)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.operation)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.operation)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-metric")
    {
        backup_metric = value;
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

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfStatistics()
    :
    prefix_priority_stats(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats>())
	,protocol_stats(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats>())
	,rawio_stats(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats>())
	,spf_stats(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats>())
	,vrf_rib_batch_stats(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats>())
{
    prefix_priority_stats->parent = this;
    children["prefix-priority-stats"] = prefix_priority_stats;

    protocol_stats->parent = this;
    children["protocol-stats"] = protocol_stats;

    rawio_stats->parent = this;
    children["rawio-stats"] = rawio_stats;

    spf_stats->parent = this;
    children["spf-stats"] = spf_stats;

    vrf_rib_batch_stats->parent = this;
    children["vrf-rib-batch-stats"] = vrf_rib_batch_stats;

    yang_name = "vrf-statistics"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::~VrfStatistics()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::has_data() const
{
    return (prefix_priority_stats !=  nullptr && prefix_priority_stats->has_data())
	|| (protocol_stats !=  nullptr && protocol_stats->has_data())
	|| (rawio_stats !=  nullptr && rawio_stats->has_data())
	|| (spf_stats !=  nullptr && spf_stats->has_data())
	|| (vrf_rib_batch_stats !=  nullptr && vrf_rib_batch_stats->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::has_operation() const
{
    return is_set(operation)
	|| (prefix_priority_stats !=  nullptr && prefix_priority_stats->has_operation())
	|| (protocol_stats !=  nullptr && protocol_stats->has_operation())
	|| (rawio_stats !=  nullptr && rawio_stats->has_operation())
	|| (spf_stats !=  nullptr && spf_stats->has_operation())
	|| (vrf_rib_batch_stats !=  nullptr && vrf_rib_batch_stats->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-statistics";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfStatistics' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-priority-stats")
    {
        if(prefix_priority_stats != nullptr)
        {
            children["prefix-priority-stats"] = prefix_priority_stats;
        }
        else
        {
            prefix_priority_stats = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::PrefixPriorityStats>();
            prefix_priority_stats->parent = this;
            children["prefix-priority-stats"] = prefix_priority_stats;
        }
        return children.at("prefix-priority-stats");
    }

    if(child_yang_name == "protocol-stats")
    {
        if(protocol_stats != nullptr)
        {
            children["protocol-stats"] = protocol_stats;
        }
        else
        {
            protocol_stats = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats>();
            protocol_stats->parent = this;
            children["protocol-stats"] = protocol_stats;
        }
        return children.at("protocol-stats");
    }

    if(child_yang_name == "rawio-stats")
    {
        if(rawio_stats != nullptr)
        {
            children["rawio-stats"] = rawio_stats;
        }
        else
        {
            rawio_stats = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::RawioStats>();
            rawio_stats->parent = this;
            children["rawio-stats"] = rawio_stats;
        }
        return children.at("rawio-stats");
    }

    if(child_yang_name == "spf-stats")
    {
        if(spf_stats != nullptr)
        {
            children["spf-stats"] = spf_stats;
        }
        else
        {
            spf_stats = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats>();
            spf_stats->parent = this;
            children["spf-stats"] = spf_stats;
        }
        return children.at("spf-stats");
    }

    if(child_yang_name == "vrf-rib-batch-stats")
    {
        if(vrf_rib_batch_stats != nullptr)
        {
            children["vrf-rib-batch-stats"] = vrf_rib_batch_stats;
        }
        else
        {
            vrf_rib_batch_stats = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::VrfRibBatchStats>();
            vrf_rib_batch_stats->parent = this;
            children["vrf-rib-batch-stats"] = vrf_rib_batch_stats;
        }
        return children.at("vrf-rib-batch-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::get_children()
{
    if(children.find("prefix-priority-stats") == children.end())
    {
        if(prefix_priority_stats != nullptr)
        {
            children["prefix-priority-stats"] = prefix_priority_stats;
        }
    }

    if(children.find("protocol-stats") == children.end())
    {
        if(protocol_stats != nullptr)
        {
            children["protocol-stats"] = protocol_stats;
        }
    }

    if(children.find("rawio-stats") == children.end())
    {
        if(rawio_stats != nullptr)
        {
            children["rawio-stats"] = rawio_stats;
        }
    }

    if(children.find("spf-stats") == children.end())
    {
        if(spf_stats != nullptr)
        {
            children["spf-stats"] = spf_stats;
        }
    }

    if(children.find("vrf-rib-batch-stats") == children.end())
    {
        if(vrf_rib_batch_stats != nullptr)
        {
            children["vrf-rib-batch-stats"] = vrf_rib_batch_stats;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStats()
{
    yang_name = "protocol-stats"; yang_parent_name = "vrf-statistics";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::~ProtocolStats()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::has_data() const
{
    for (std::size_t index=0; index<protocol_stat.size(); index++)
    {
        if(protocol_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::has_operation() const
{
    for (std::size_t index=0; index<protocol_stat.size(); index++)
    {
        if(protocol_stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol-stat")
    {
        for(auto const & c : protocol_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat>();
        c->parent = this;
        protocol_stat.push_back(std::move(c));
        children[segment_path] = protocol_stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::get_children()
{
    for (auto const & c : protocol_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat::ProtocolStat()
    :
    interface_name{YType::str, "interface-name"},
    checksum_err{YType::uint64, "checksum-err"},
    dbdes_in_ls_as{YType::uint64, "dbdes-in-ls-as"},
    dbdes_in_packets{YType::uint64, "dbdes-in-packets"},
    dbdes_out_ls_as{YType::uint64, "dbdes-out-ls-as"},
    dbdes_out_packets{YType::uint64, "dbdes-out-packets"},
    dropped_in_gs{YType::uint64, "dropped-in-gs"},
    hello_in_packets{YType::uint64, "hello-in-packets"},
    hello_out_packets{YType::uint64, "hello-out-packets"},
    ls_ack_in_ls_as{YType::uint64, "ls-ack-in-ls-as"},
    ls_ack_in_packets{YType::uint64, "ls-ack-in-packets"},
    ls_ack_out_ls_as{YType::uint64, "ls-ack-out-ls-as"},
    ls_ack_out_packets{YType::uint64, "ls-ack-out-packets"},
    ls_req_in_ls_as{YType::uint64, "ls-req-in-ls-as"},
    ls_req_in_packets{YType::uint64, "ls-req-in-packets"},
    ls_req_out_ls_as{YType::uint64, "ls-req-out-ls-as"},
    ls_req_out_packets{YType::uint64, "ls-req-out-packets"},
    ls_upd_in_ignored{YType::uint64, "ls-upd-in-ignored"},
    ls_upd_in_ls_as{YType::uint64, "ls-upd-in-ls-as"},
    ls_upd_in_packets{YType::uint64, "ls-upd-in-packets"},
    ls_upd_out_ls_as{YType::uint64, "ls-upd-out-ls-as"},
    ls_upd_out_packets{YType::uint64, "ls-upd-out-packets"},
    total_in_packets{YType::uint64, "total-in-packets"},
    total_out_packets{YType::uint64, "total-out-packets"}
{
    yang_name = "protocol-stat"; yang_parent_name = "protocol-stats";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat::~ProtocolStat()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat::has_data() const
{
    return interface_name.is_set
	|| checksum_err.is_set
	|| dbdes_in_ls_as.is_set
	|| dbdes_in_packets.is_set
	|| dbdes_out_ls_as.is_set
	|| dbdes_out_packets.is_set
	|| dropped_in_gs.is_set
	|| hello_in_packets.is_set
	|| hello_out_packets.is_set
	|| ls_ack_in_ls_as.is_set
	|| ls_ack_in_packets.is_set
	|| ls_ack_out_ls_as.is_set
	|| ls_ack_out_packets.is_set
	|| ls_req_in_ls_as.is_set
	|| ls_req_in_packets.is_set
	|| ls_req_out_ls_as.is_set
	|| ls_req_out_packets.is_set
	|| ls_upd_in_ignored.is_set
	|| ls_upd_in_ls_as.is_set
	|| ls_upd_in_packets.is_set
	|| ls_upd_out_ls_as.is_set
	|| ls_upd_out_packets.is_set
	|| total_in_packets.is_set
	|| total_out_packets.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(checksum_err.operation)
	|| is_set(dbdes_in_ls_as.operation)
	|| is_set(dbdes_in_packets.operation)
	|| is_set(dbdes_out_ls_as.operation)
	|| is_set(dbdes_out_packets.operation)
	|| is_set(dropped_in_gs.operation)
	|| is_set(hello_in_packets.operation)
	|| is_set(hello_out_packets.operation)
	|| is_set(ls_ack_in_ls_as.operation)
	|| is_set(ls_ack_in_packets.operation)
	|| is_set(ls_ack_out_ls_as.operation)
	|| is_set(ls_ack_out_packets.operation)
	|| is_set(ls_req_in_ls_as.operation)
	|| is_set(ls_req_in_packets.operation)
	|| is_set(ls_req_out_ls_as.operation)
	|| is_set(ls_req_out_packets.operation)
	|| is_set(ls_upd_in_ignored.operation)
	|| is_set(ls_upd_in_ls_as.operation)
	|| is_set(ls_upd_in_packets.operation)
	|| is_set(ls_upd_out_ls_as.operation)
	|| is_set(ls_upd_out_packets.operation)
	|| is_set(total_in_packets.operation)
	|| is_set(total_out_packets.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stat" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolStat' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (checksum_err.is_set || is_set(checksum_err.operation)) leaf_name_data.push_back(checksum_err.get_name_leafdata());
    if (dbdes_in_ls_as.is_set || is_set(dbdes_in_ls_as.operation)) leaf_name_data.push_back(dbdes_in_ls_as.get_name_leafdata());
    if (dbdes_in_packets.is_set || is_set(dbdes_in_packets.operation)) leaf_name_data.push_back(dbdes_in_packets.get_name_leafdata());
    if (dbdes_out_ls_as.is_set || is_set(dbdes_out_ls_as.operation)) leaf_name_data.push_back(dbdes_out_ls_as.get_name_leafdata());
    if (dbdes_out_packets.is_set || is_set(dbdes_out_packets.operation)) leaf_name_data.push_back(dbdes_out_packets.get_name_leafdata());
    if (dropped_in_gs.is_set || is_set(dropped_in_gs.operation)) leaf_name_data.push_back(dropped_in_gs.get_name_leafdata());
    if (hello_in_packets.is_set || is_set(hello_in_packets.operation)) leaf_name_data.push_back(hello_in_packets.get_name_leafdata());
    if (hello_out_packets.is_set || is_set(hello_out_packets.operation)) leaf_name_data.push_back(hello_out_packets.get_name_leafdata());
    if (ls_ack_in_ls_as.is_set || is_set(ls_ack_in_ls_as.operation)) leaf_name_data.push_back(ls_ack_in_ls_as.get_name_leafdata());
    if (ls_ack_in_packets.is_set || is_set(ls_ack_in_packets.operation)) leaf_name_data.push_back(ls_ack_in_packets.get_name_leafdata());
    if (ls_ack_out_ls_as.is_set || is_set(ls_ack_out_ls_as.operation)) leaf_name_data.push_back(ls_ack_out_ls_as.get_name_leafdata());
    if (ls_ack_out_packets.is_set || is_set(ls_ack_out_packets.operation)) leaf_name_data.push_back(ls_ack_out_packets.get_name_leafdata());
    if (ls_req_in_ls_as.is_set || is_set(ls_req_in_ls_as.operation)) leaf_name_data.push_back(ls_req_in_ls_as.get_name_leafdata());
    if (ls_req_in_packets.is_set || is_set(ls_req_in_packets.operation)) leaf_name_data.push_back(ls_req_in_packets.get_name_leafdata());
    if (ls_req_out_ls_as.is_set || is_set(ls_req_out_ls_as.operation)) leaf_name_data.push_back(ls_req_out_ls_as.get_name_leafdata());
    if (ls_req_out_packets.is_set || is_set(ls_req_out_packets.operation)) leaf_name_data.push_back(ls_req_out_packets.get_name_leafdata());
    if (ls_upd_in_ignored.is_set || is_set(ls_upd_in_ignored.operation)) leaf_name_data.push_back(ls_upd_in_ignored.get_name_leafdata());
    if (ls_upd_in_ls_as.is_set || is_set(ls_upd_in_ls_as.operation)) leaf_name_data.push_back(ls_upd_in_ls_as.get_name_leafdata());
    if (ls_upd_in_packets.is_set || is_set(ls_upd_in_packets.operation)) leaf_name_data.push_back(ls_upd_in_packets.get_name_leafdata());
    if (ls_upd_out_ls_as.is_set || is_set(ls_upd_out_ls_as.operation)) leaf_name_data.push_back(ls_upd_out_ls_as.get_name_leafdata());
    if (ls_upd_out_packets.is_set || is_set(ls_upd_out_packets.operation)) leaf_name_data.push_back(ls_upd_out_packets.get_name_leafdata());
    if (total_in_packets.is_set || is_set(total_in_packets.operation)) leaf_name_data.push_back(total_in_packets.get_name_leafdata());
    if (total_out_packets.is_set || is_set(total_out_packets.operation)) leaf_name_data.push_back(total_out_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::ProtocolStats::ProtocolStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "checksum-err")
    {
        checksum_err = value;
    }
    if(value_path == "dbdes-in-ls-as")
    {
        dbdes_in_ls_as = value;
    }
    if(value_path == "dbdes-in-packets")
    {
        dbdes_in_packets = value;
    }
    if(value_path == "dbdes-out-ls-as")
    {
        dbdes_out_ls_as = value;
    }
    if(value_path == "dbdes-out-packets")
    {
        dbdes_out_packets = value;
    }
    if(value_path == "dropped-in-gs")
    {
        dropped_in_gs = value;
    }
    if(value_path == "hello-in-packets")
    {
        hello_in_packets = value;
    }
    if(value_path == "hello-out-packets")
    {
        hello_out_packets = value;
    }
    if(value_path == "ls-ack-in-ls-as")
    {
        ls_ack_in_ls_as = value;
    }
    if(value_path == "ls-ack-in-packets")
    {
        ls_ack_in_packets = value;
    }
    if(value_path == "ls-ack-out-ls-as")
    {
        ls_ack_out_ls_as = value;
    }
    if(value_path == "ls-ack-out-packets")
    {
        ls_ack_out_packets = value;
    }
    if(value_path == "ls-req-in-ls-as")
    {
        ls_req_in_ls_as = value;
    }
    if(value_path == "ls-req-in-packets")
    {
        ls_req_in_packets = value;
    }
    if(value_path == "ls-req-out-ls-as")
    {
        ls_req_out_ls_as = value;
    }
    if(value_path == "ls-req-out-packets")
    {
        ls_req_out_packets = value;
    }
    if(value_path == "ls-upd-in-ignored")
    {
        ls_upd_in_ignored = value;
    }
    if(value_path == "ls-upd-in-ls-as")
    {
        ls_upd_in_ls_as = value;
    }
    if(value_path == "ls-upd-in-packets")
    {
        ls_upd_in_packets = value;
    }
    if(value_path == "ls-upd-out-ls-as")
    {
        ls_upd_out_ls_as = value;
    }
    if(value_path == "ls-upd-out-packets")
    {
        ls_upd_out_packets = value;
    }
    if(value_path == "total-in-packets")
    {
        total_in_packets = value;
    }
    if(value_path == "total-out-packets")
    {
        total_out_packets = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfStats()
    :
    spf_header(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader>())
{
    spf_header->parent = this;
    children["spf-header"] = spf_header;

    yang_name = "spf-stats"; yang_parent_name = "vrf-statistics";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::~SpfStats()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::has_data() const
{
    for (std::size_t index=0; index<spf_runtime.size(); index++)
    {
        if(spf_runtime[index]->has_data())
            return true;
    }
    return (spf_header !=  nullptr && spf_header->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::has_operation() const
{
    for (std::size_t index=0; index<spf_runtime.size(); index++)
    {
        if(spf_runtime[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (spf_header !=  nullptr && spf_header->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-stats";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfStats' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-header")
    {
        if(spf_header != nullptr)
        {
            children["spf-header"] = spf_header;
        }
        else
        {
            spf_header = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader>();
            spf_header->parent = this;
            children["spf-header"] = spf_header;
        }
        return children.at("spf-header");
    }

    if(child_yang_name == "spf-runtime")
    {
        for(auto const & c : spf_runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime>();
        c->parent = this;
        spf_runtime.push_back(std::move(c));
        children[segment_path] = spf_runtime.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::get_children()
{
    if(children.find("spf-header") == children.end())
    {
        if(spf_header != nullptr)
        {
            children["spf-header"] = spf_header;
        }
    }

    for (auto const & c : spf_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::SpfHeader()
    :
    header_router_id{YType::str, "header-router-id"},
    header_sp_fs{YType::uint32, "header-sp-fs"}
{
    yang_name = "spf-header"; yang_parent_name = "spf-stats";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::~SpfHeader()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::has_data() const
{
    for (std::size_t index=0; index<area_summary.size(); index++)
    {
        if(area_summary[index]->has_data())
            return true;
    }
    return header_router_id.is_set
	|| header_sp_fs.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::has_operation() const
{
    for (std::size_t index=0; index<area_summary.size(); index++)
    {
        if(area_summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(header_router_id.operation)
	|| is_set(header_sp_fs.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-header";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfHeader' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_router_id.is_set || is_set(header_router_id.operation)) leaf_name_data.push_back(header_router_id.get_name_leafdata());
    if (header_sp_fs.is_set || is_set(header_sp_fs.operation)) leaf_name_data.push_back(header_sp_fs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-summary")
    {
        for(auto const & c : area_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary>();
        c->parent = this;
        area_summary.push_back(std::move(c));
        children[segment_path] = area_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::get_children()
{
    for (auto const & c : area_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "header-router-id")
    {
        header_router_id = value;
    }
    if(value_path == "header-sp-fs")
    {
        header_sp_fs = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::AreaSummary()
    :
    area_id{YType::uint32, "area-id"},
    sp_fs{YType::uint32, "sp-fs"}
{
    yang_name = "area-summary"; yang_parent_name = "spf-header";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::~AreaSummary()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::has_data() const
{
    return area_id.is_set
	|| sp_fs.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(sp_fs.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-summary";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaSummary' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (sp_fs.is_set || is_set(sp_fs.operation)) leaf_name_data.push_back(sp_fs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "sp-fs")
    {
        sp_fs = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::SpfRuntime()
    :
    lsa_changes{YType::int16, "lsa-changes"},
    reason_flags{YType::str, "reason-flags"},
    rib_add_routes{YType::uint32, "rib-add-routes"},
    rib_delete_routes{YType::uint32, "rib-delete-routes"},
    start_time{YType::uint32, "start-time"}
    	,
    global_time(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime>())
{
    global_time->parent = this;
    children["global-time"] = global_time;

    yang_name = "spf-runtime"; yang_parent_name = "spf-stats";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::~SpfRuntime()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::has_data() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return lsa_changes.is_set
	|| reason_flags.is_set
	|| rib_add_routes.is_set
	|| rib_delete_routes.is_set
	|| start_time.is_set
	|| (global_time !=  nullptr && global_time->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::has_operation() const
{
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(lsa_changes.operation)
	|| is_set(reason_flags.operation)
	|| is_set(rib_add_routes.operation)
	|| is_set(rib_delete_routes.operation)
	|| is_set(start_time.operation)
	|| (global_time !=  nullptr && global_time->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-runtime";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfRuntime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_changes.is_set || is_set(lsa_changes.operation)) leaf_name_data.push_back(lsa_changes.get_name_leafdata());
    if (reason_flags.is_set || is_set(reason_flags.operation)) leaf_name_data.push_back(reason_flags.get_name_leafdata());
    if (rib_add_routes.is_set || is_set(rib_add_routes.operation)) leaf_name_data.push_back(rib_add_routes.get_name_leafdata());
    if (rib_delete_routes.is_set || is_set(rib_delete_routes.operation)) leaf_name_data.push_back(rib_delete_routes.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-stat")
    {
        for(auto const & c : area_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat>();
        c->parent = this;
        area_stat.push_back(std::move(c));
        children[segment_path] = area_stat.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "global-time")
    {
        if(global_time != nullptr)
        {
            children["global-time"] = global_time;
        }
        else
        {
            global_time = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime>();
            global_time->parent = this;
            children["global-time"] = global_time;
        }
        return children.at("global-time");
    }

    if(child_yang_name == "lsa")
    {
        for(auto const & c : lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa>();
        c->parent = this;
        lsa.push_back(std::move(c));
        children[segment_path] = lsa.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::get_children()
{
    for (auto const & c : area_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("global-time") == children.end())
    {
        if(global_time != nullptr)
        {
            children["global-time"] = global_time;
        }
    }

    for (auto const & c : lsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-changes")
    {
        lsa_changes = value;
    }
    if(value_path == "reason-flags")
    {
        reason_flags = value;
    }
    if(value_path == "rib-add-routes")
    {
        rib_add_routes = value;
    }
    if(value_path == "rib-delete-routes")
    {
        rib_delete_routes = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::GlobalTime()
    :
    dijkstra{YType::uint32, "dijkstra"},
    external_prefix{YType::uint32, "external-prefix"},
    external_prefix_del{YType::uint32, "external-prefix-del"},
    inter_prefix{YType::uint32, "inter-prefix"},
    inter_prefix_del{YType::uint32, "inter-prefix-del"},
    intra_prefix{YType::uint32, "intra-prefix"},
    intra_prefix_del{YType::uint32, "intra-prefix-del"},
    rib_add{YType::uint32, "rib-add"},
    rib_del{YType::uint32, "rib-del"}
{
    yang_name = "global-time"; yang_parent_name = "spf-runtime";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::~GlobalTime()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::has_data() const
{
    return dijkstra.is_set
	|| external_prefix.is_set
	|| external_prefix_del.is_set
	|| inter_prefix.is_set
	|| inter_prefix_del.is_set
	|| intra_prefix.is_set
	|| intra_prefix_del.is_set
	|| rib_add.is_set
	|| rib_del.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::has_operation() const
{
    return is_set(operation)
	|| is_set(dijkstra.operation)
	|| is_set(external_prefix.operation)
	|| is_set(external_prefix_del.operation)
	|| is_set(inter_prefix.operation)
	|| is_set(inter_prefix_del.operation)
	|| is_set(intra_prefix.operation)
	|| is_set(intra_prefix_del.operation)
	|| is_set(rib_add.operation)
	|| is_set(rib_del.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-time";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalTime' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dijkstra.is_set || is_set(dijkstra.operation)) leaf_name_data.push_back(dijkstra.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.operation)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_del.is_set || is_set(external_prefix_del.operation)) leaf_name_data.push_back(external_prefix_del.get_name_leafdata());
    if (inter_prefix.is_set || is_set(inter_prefix.operation)) leaf_name_data.push_back(inter_prefix.get_name_leafdata());
    if (inter_prefix_del.is_set || is_set(inter_prefix_del.operation)) leaf_name_data.push_back(inter_prefix_del.get_name_leafdata());
    if (intra_prefix.is_set || is_set(intra_prefix.operation)) leaf_name_data.push_back(intra_prefix.get_name_leafdata());
    if (intra_prefix_del.is_set || is_set(intra_prefix_del.operation)) leaf_name_data.push_back(intra_prefix_del.get_name_leafdata());
    if (rib_add.is_set || is_set(rib_add.operation)) leaf_name_data.push_back(rib_add.get_name_leafdata());
    if (rib_del.is_set || is_set(rib_del.operation)) leaf_name_data.push_back(rib_del.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dijkstra")
    {
        dijkstra = value;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
    }
    if(value_path == "external-prefix-del")
    {
        external_prefix_del = value;
    }
    if(value_path == "inter-prefix")
    {
        inter_prefix = value;
    }
    if(value_path == "inter-prefix-del")
    {
        inter_prefix_del = value;
    }
    if(value_path == "intra-prefix")
    {
        intra_prefix = value;
    }
    if(value_path == "intra-prefix-del")
    {
        intra_prefix_del = value;
    }
    if(value_path == "rib-add")
    {
        rib_add = value;
    }
    if(value_path == "rib-del")
    {
        rib_del = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::Lsa()
    :
    lsa_advertising_router{YType::str, "lsa-advertising-router"},
    lsa_area_id{YType::uint32, "lsa-area-id"},
    lsa_flush{YType::boolean, "lsa-flush"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::uint8, "lsa-type"}
{
    yang_name = "lsa"; yang_parent_name = "spf-runtime";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::has_data() const
{
    return lsa_advertising_router.is_set
	|| lsa_area_id.is_set
	|| lsa_flush.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(lsa_advertising_router.operation)
	|| is_set(lsa_area_id.operation)
	|| is_set(lsa_flush.operation)
	|| is_set(lsa_id.operation)
	|| is_set(lsa_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsa' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_advertising_router.is_set || is_set(lsa_advertising_router.operation)) leaf_name_data.push_back(lsa_advertising_router.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.operation)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_flush.is_set || is_set(lsa_flush.operation)) leaf_name_data.push_back(lsa_flush.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.operation)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.operation)) leaf_name_data.push_back(lsa_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsa-advertising-router")
    {
        lsa_advertising_router = value;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
    }
    if(value_path == "lsa-flush")
    {
        lsa_flush = value;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::AreaStat()
    :
    spf_stat_area_id{YType::uint32, "spf-stat-area-id"},
    spf_stat_lsa_type_count{YType::uint32, "spf-stat-lsa-type-count"}
    	,
    spf_stat_time(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime>())
{
    spf_stat_time->parent = this;
    children["spf-stat-time"] = spf_stat_time;

    yang_name = "area-stat"; yang_parent_name = "spf-runtime";
}

Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::~AreaStat()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::has_data() const
{
    for (auto const & leaf : spf_stat_lsa_type_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return spf_stat_area_id.is_set
	|| (spf_stat_time !=  nullptr && spf_stat_time->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::has_operation() const
{
    for (auto const & leaf : spf_stat_lsa_type_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(spf_stat_area_id.operation)
	|| is_set(spf_stat_lsa_type_count.operation)
	|| (spf_stat_time !=  nullptr && spf_stat_time->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-stat";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaStat' in Cisco_IOS_XR_ipv6_ospfv3_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_stat_area_id.is_set || is_set(spf_stat_area_id.operation)) leaf_name_data.push_back(spf_stat_area_id.get_name_leafdata());

    auto spf_stat_lsa_type_count_name_datas = spf_stat_lsa_type_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spf_stat_lsa_type_count_name_datas.begin(), spf_stat_lsa_type_count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-stat-time")
    {
        if(spf_stat_time != nullptr)
        {
            children["spf-stat-time"] = spf_stat_time;
        }
        else
        {
            spf_stat_time = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime>();
            spf_stat_time->parent = this;
            children["spf-stat-time"] = spf_stat_time;
        }
        return children.at("spf-stat-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::get_children()
{
    if(children.find("spf-stat-time") == children.end())
    {
        if(spf_stat_time != nullptr)
        {
            children["spf-stat-time"] = spf_stat_time;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "spf-stat-area-id")
    {
        spf_stat_area_id = value;
    }
    if(value_path == "spf-stat-lsa-type-count")
    {
        spf_stat_lsa_type_count.append(value);
    }
}


}
}

